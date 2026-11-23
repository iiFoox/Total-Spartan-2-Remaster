"""Safely patch all ENGLISH .TXT files inside PAK1 archives with PT-BR translations in-place.
Preserves exact PAK file sizes and 0x800 alignment for all other assets (audio, models, textures).
"""
import glob, json, os, re, struct

BASE = r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\spartan\pn\games\spartan\disc_files\layer0"
ORIG = r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\spartan\orig_txts"
I18N = r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\spartan\i18n"

def load_translations():
    en = json.load(open(os.path.join(I18N, "en_strings.json"), "r", encoding="utf-8"))
    pt = []
    for ci in range(6):
        part = json.load(open(os.path.join(I18N, f"chunk_{ci}_ptbr.json"), "r", encoding="utf-8"))
        pt.extend(part)
    assert len(en) == len(pt), f"Length mismatch: {len(en)} vs {len(pt)}"
    mapping = {}
    for e, p in zip(en, pt):
        # Verify cp1252 encodability and ¦ count
        p_clean = p.replace("\u2014", "-").replace("\u2013", "-").replace("\u2018", "'").replace("\u2019", "'").replace("\u201c", '"').replace("\u201d", '"').replace("\u2026", "...")
        p_clean.encode("cp1252")
        if e.count("\xa6") != p_clean.count("\xa6"):
            print(f"WARNING: control-code mismatch for {e[:50]!r} -> keeping original")
            mapping[e] = e
        else:
            mapping[e] = p_clean
    return mapping

def translate_txt_blob(orig_bytes, mapping, max_bytes):
    text = orig_bytes.decode("cp1252", "replace")
    # Strip // comment lines to free up generous space inside the 0x800 slot
    lines = []
    for line in text.splitlines():
        s = line.lstrip()
        if s.startswith("//"):
            continue
        lines.append(line.rstrip())
    cleaned = "\r\n".join(lines) + "\r\n"

    def repl(m):
        key, val = m.group(1), m.group(2)
        tr = mapping.get(val, val)
        return f"[{key}]\r\n{{{tr}}}"

    out_text = re.sub(r"\[([^\]]+)\]\s*\{([^}]*)\}", repl, cleaned)
    out_bytes = out_text.encode("cp1252", errors="replace")
    if len(out_bytes) > max_bytes:
        # Compact blank lines if needed
        out_text = re.sub(r"(\r\n){2,}", "\r\n", out_text)
        out_bytes = out_text.encode("cp1252", errors="replace")
    assert len(out_bytes) <= max_bytes, f"Translated TXT ({len(out_bytes)}) exceeds slot ({max_bytes})"
    return out_bytes

def main():
    mapping = load_translations()
    print(f"Loaded {len(mapping)} verified PT-BR translations.")
    paks = sorted(glob.glob(os.path.join(BASE, "*.PAK")) + glob.glob(os.path.join(BASE, "DATA", "*.PAK")))
    patched_files = 0
    for pak in paks:
        rel_pak = os.path.relpath(pak, BASE)
        with open(pak, "r+b") as f:
            hdr = f.read(16)
            if hdr[:4] != b"PAK1":
                continue
            magic, name_chars, count, align = struct.unpack("<4sIII", hdr)
            names_raw = f.read(name_chars * 2)
            ends_offset = 16 + name_chars * 2
            ends = list(struct.unpack(f"<{count}I", f.read(count * 4)))
            pos = 0
            names = []
            for _ in range(count):
                end = pos
                while end + 1 < len(names_raw) and not (names_raw[end] == 0 and names_raw[end + 1] == 0):
                    end += 2
                names.append(names_raw[pos:end].decode("utf-16le", "replace"))
                pos = end + 2
            data_start = ((16 + name_chars * 2 + count * 4 + align - 1) // align) * align
            cur = data_start
            changed = False
            for i, (n, e) in enumerate(zip(names, ends)):
                sz = e - cur
                next_cur = ((e + align - 1) // align) * align
                slot_cap = next_cur - cur
                if n.upper().endswith(".TXT") and "\\ENGLISH\\" in n.upper() and "NAMES.TXT" not in n.upper():
                    safe = rel_pak.replace("\\", "_").replace(".PAK", "") + "__" + n.replace("\\", "_").lstrip("_")
                    orig_path = os.path.join(ORIG, safe)
                    orig_blob = open(orig_path, "rb").read()
                    orig_sz = len(orig_blob)
                    new_blob = translate_txt_blob(orig_blob, mapping, orig_sz)
                    if len(new_blob) < orig_sz:
                        new_blob += b" " * (orig_sz - len(new_blob))
                    f.seek(cur)
                    f.write(new_blob)
                    ends[i] = cur + orig_sz
                    changed = True
                    patched_files += 1
                cur = next_cur
            if changed:
                f.seek(ends_offset)
                f.write(struct.pack(f"<{count}I", *ends))
    print(f"Successfully patched {patched_files} .TXT files across all PAK1 archives (exact file sizes preserved).")

if __name__ == "__main__":
    main()

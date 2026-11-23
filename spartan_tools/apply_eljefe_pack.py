import shutil
import sys
from pathlib import Path
from PIL import Image
import numpy as np

root = Path(r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https")
our_dir = root / "outputs" / "Spartan" / "textures"
ej_dir = Path(r"C:\Users\vfbnn\Downloads\Recomps\Spartar Port\spartan total warrior and\SLES-53393\replacements")
backup_dir = root / "work" / "spartan" / "textures_2x_backup"
backup_dir.mkdir(parents=True, exist_ok=True)

MODE = sys.argv[1] if len(sys.argv) > 1 else "2x"

def sig32(path):
    with Image.open(path) as im:
        w, h = im.size
        thumb = im.convert("RGB").resize((32, 32), Image.Resampling.BILINEAR)
        arr = np.asarray(thumb, dtype=np.float32)  # (32, 32, 3)
        flat = arr.reshape(-1)
        mean_rgb = arr.mean(axis=(0, 1))
        centered = flat - flat.mean()
        norm = float(np.linalg.norm(centered)) + 1e-6
        return w, h, flat, mean_rgb, centered / norm

print(f"Indexing El Jefe DDS textures at 32x32 (mode={MODE})...")
ej_files = sorted(ej_dir.rglob("*.dds"))
ej_flats, ej_means, ej_norms, ej_meta = [], [], [], []
for f in ej_files:
    try:
        w, h, flat, mrgb, unit = sig32(f)
        ej_flats.append(flat)
        ej_means.append(mrgb)
        ej_norms.append(unit)
        ej_meta.append((f, w, h))
    except Exception:
        pass
ej_flat_mat = np.stack(ej_flats, axis=0)
ej_mean_mat = np.stack(ej_means, axis=0)
ej_unit_mat = np.stack(ej_norms, axis=0)
print(f"Indexed {len(ej_meta)} El Jefe DDS textures.")

tsv = our_dir / "textures_index.tsv"
lines = tsv.read_text(encoding="utf-8").splitlines()
replaced_4x = 0
replaced_2x = 0
kept_ours = 0

for line in lines[1:]:
    if not line.strip() or line.startswith("#"):
        continue
    parts = line.split("\t")
    key, orig_w, orig_h, fname = parts[0], int(parts[1]), int(parts[2]), parts[5]
    p = our_dir / fname
    bp = backup_dir / fname
    if not bp.exists() and p.exists():
        shutil.copy2(p, bp)
    if not bp.exists():
        continue

    # Always start clean from our verified 2x backup
    shutil.copy2(bp, p)

    _, _, flat, mrgb, unit = sig32(bp)
    corrs = ej_unit_mat @ unit  # Pearson correlation in [-1, 1]
    l1s = np.mean(np.abs(ej_flat_mat - flat[None, :]), axis=1)
    c_diffs = np.max(np.abs(ej_mean_mat - mrgb[None, :]), axis=1)

    best_i = int(np.argmax(corrs))
    corr = float(corrs[best_i])
    l1 = float(l1s[best_i])
    cdiff = float(c_diffs[best_i])
    ef, ew, eh = ej_meta[best_i]

    # Strict zero-false-positive criteria:
    # - Spatial Pearson correlation >= 0.92 (same exact layout/pattern!)
    # - Mean pixel L1 <= 11.0
    # - Max per-channel mean color shift <= 10.0 (prevents blue->red tunic swaps!)
    if not (corr >= 0.92 and l1 <= 11.0 and cdiff <= 10.0):
        kept_ours += 1
        continue

    with Image.open(ef) as im_ej:
        im_ej = im_ej.convert("RGBA")
        r, g, b, _ = im_ej.split()
        alpha = Image.new("L", im_ej.size, 255)
        im_ej = Image.merge("RGBA", (r, g, b, alpha))

        if MODE == "4x" and ew >= orig_w * 4 and eh >= orig_h * 4:
            target = (orig_w * 4, orig_h * 4)
            if im_ej.size != target:
                im_ej = im_ej.resize(target, Image.Resampling.LANCZOS)
            im_ej.save(p, optimize=False)
            replaced_4x += 1
        elif ew >= orig_w * 2 and eh >= orig_h * 2:
            target = (orig_w * 2, orig_h * 2)
            if im_ej.size != target:
                im_ej = im_ej.resize(target, Image.Resampling.LANCZOS)
            im_ej.save(p, optimize=False)
            replaced_2x += 1
        else:
            kept_ours += 1

print(f"Strict match done! El Jefe 4x={replaced_4x}, El Jefe 2x={replaced_2x}, Kept our 2x={kept_ours}, Total={replaced_4x+replaced_2x+kept_ours}")

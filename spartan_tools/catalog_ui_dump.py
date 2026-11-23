import re
from pathlib import Path
from PIL import Image, ImageDraw
import numpy as np

root = Path(r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\total-spartan-2")
dump_dir = root / "ui_dump"
png_dir = root / "ui_dump_png"
png_dir.mkdir(parents=True, exist_ok=True)

pat = re.compile(r"^([0-9a-f]{16}-[0-9a-f]{16}-[0-9a-f]{8})_(\d+)x(\d+)\.rgba$")
items = []
for f in sorted(dump_dir.glob("*.rgba")):
    m = pat.match(f.name)
    if not m:
        continue
    key, w, h = m.group(1), int(m.group(2)), int(m.group(3))
    raw = f.read_bytes()
    if len(raw) != w * h * 4:
        continue
    im = Image.frombytes("RGBA", (w, h), raw)
    arr = np.asarray(im)
    # Skip flat/blank textures
    if float(arr[:, :, :3].std()) < 4.0 and float(arr[:, :, 3].std()) < 4.0:
        continue
    out_p = png_dir / f"{key}.png"
    im.save(out_p)
    items.append((key, w, h, float(arr[:, :, 3].mean()), out_p))

print(f"Converted {len(items)} non-blank unique textures to {png_dir}")
# Check which ones are NOT already in El Jefe (these include UI, menus, loading screens, HUD, logos, fonts!)
ej_dir = Path(r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\outputs\TotalSpartan2\textures\eljefe")
ej_stems = {p.stem.lower() for p in ej_dir.glob("*.dds")}
missing_from_ej = [it for it in items if it[0].lower() not in ej_stems]
print(f"Not covered by El Jefe (UI/HUD/Menus/Loading/Effects): {len(missing_from_ej)}")

# Build contact sheets (8 cols x 6 rows of 140x160 cells) of textures NOT in El Jefe so we can visually inspect & redesign them!
per_sheet = 48
for si in range(0, min(len(missing_from_ej), 144), per_sheet):
    chunk = missing_from_ej[si:si + per_sheet]
    sheet = Image.new("RGB", (8 * 150, 6 * 170), (24, 26, 32))
    draw = ImageDraw.Draw(sheet)
    for idx, (key, w, h, ma, p) in enumerate(chunk):
        r, c = divmod(idx, 8)
        x0, y0 = c * 150 + 5, r * 170 + 5
        im = Image.open(p).convert("RGBA")
        # Checkerboard behind alpha
        bg = Image.new("RGBA", (140, 140), (42, 46, 56, 255))
        im_r = im.resize((140, 140), Image.Resampling.LANCZOS)
        bg.alpha_composite(im_r)
        sheet.paste(bg.convert("RGB"), (x0, y0))
        draw.text((x0, y0 + 142), f"#{si+idx} {w}x{h} {key[:8]}", fill=(235, 200, 110))
    sp = root / f"ui_sheet_{si // per_sheet}.png"
    sheet.save(sp)
    print(f"Saved {sp}")

# Save full catalog TSV for programmatic redesign
lines = ["idx\tkey\tw\th\tmean_alpha\tin_eljefe\tpath"]
for idx, (key, w, h, ma, p) in enumerate(missing_from_ej):
    lines.append(f"{idx}\t{key}\t{w}\t{h}\t{ma:.1f}\t0\t{p}")
(root / "ui_catalog.tsv").write_text("\n".join(lines) + "\n", encoding="utf-8")

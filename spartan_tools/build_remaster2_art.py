from pathlib import Path
from PIL import Image, ImageDraw, ImageFilter
import numpy as np

art_dir = Path(r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\total-spartan-2\art")
host_dir = Path(r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\total-spartan-2\host")
brain = Path(r"C:\Users\vfbnn\.gemini\antigravity\brain\ce80ad2c-6b1a-489e-b561-f9d961a17f3b")
art_dir.mkdir(parents=True, exist_ok=True)

# 1. Process brand-new AAA banner (980x240 24-bit BMP for GDI launcher + archive copy in art/)
banner_src = brain / "banner_raw_1795475182725.jpg"
im_b = Image.open(banner_src).convert("RGB")
im_b.save(art_dir / "banner_remaster2_full.jpg", quality=95)
# Crop wide hero strip centered nicely on warrior & burning Sparta (preserve full width, vertical focus 0.08..0.80)
bw, bh = im_b.size
crop_h = int(bw * (240.0 / 980.0))
top = max(0, int((bh - crop_h) * 0.28))
crop = im_b.crop((0, top, bw, top + crop_h)).resize((980, 240), Image.Resampling.LANCZOS)
# Add smooth dark-obsidian gradient fade on left (for crisp title text) and bottom (seamless blend into launcher bg RGB(13,14,18))
arr = np.asarray(crop, dtype=np.float32)
H, W, _ = arr.shape
x = np.linspace(0.0, 1.0, W)[None, :, None]
y = np.linspace(0.0, 1.0, H)[:, None, None]
left_shade = np.clip((x - 0.02) / 0.52, 0.22, 1.0)
bot_fade = np.clip((1.0 - y) / 0.28, 0.0, 1.0) ** 1.4
bg = np.array([13.0, 14.0, 18.0], dtype=np.float32)[None, None, :]
arr = arr * left_shade
arr = arr * bot_fade + bg * (1.0 - bot_fade)
out_b = Image.fromarray(np.clip(arr, 0, 255).astype(np.uint8), "RGB")
out_b.save(host_dir / "spartan_banner.bmp", format="BMP")
out_b.save(art_dir / "launcher_banner_preview.png")
print("Saved host/spartan_banner.bmp (980x240)")

# 2. Process brand-new AAA icon (circular transparent shield cutout -> multi-res .ico 256,64,48,32,16)
icon_src = brain / "icon_raw_v2_1795475201936.jpg"
im_i = Image.open(icon_src).convert("RGBA")
im_i.save(art_dir / "icon_remaster2_full.png")
iw, ih = im_i.size
# Create soft-feathered circular mask covering the glowing shield rim (radius ~45.5% of image)
yy, xx = np.mgrid[0:ih, 0:iw]
cx, cy = iw / 2.0, ih / 2.0
rr = np.sqrt((xx - cx) ** 2 + (yy - cy) ** 2) / (min(iw, ih) / 2.0)
mask = np.clip((0.915 - rr) / 0.035, 0.0, 1.0)
iarr = np.asarray(im_i, dtype=np.uint8).copy()
iarr[:, :, 3] = (mask * 255).astype(np.uint8)
icon_rgba = Image.fromarray(iarr, "RGBA")
icon_rgba.save(art_dir / "icon_shield_alpha.png")
icon_rgba.save(host_dir / "spartan.ico", format="ICO", sizes=[(256, 256), (64, 64), (48, 48), (32, 32), (16, 16)])
print("Saved host/spartan.ico (multi-res 256..16)")

# 3. Copy title/menu and loading screen art into art/ for Remaster 2.0 texture pack redesign
Image.open(brain / "spartan_main_menu_bg_clean_1795475340842.jpg").convert("RGB").save(art_dir / "menu_bg_remaster2.png")
Image.open(brain / "spartan_loading_screen_1795475322037.jpg").convert("RGB").save(art_dir / "loading_remaster2.png")
print("Saved menu_bg_remaster2.png and loading_remaster2.png")

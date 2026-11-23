"""Generate a crisp multi-resolution Windows .ico (bronze/gold Spartan Lambda shield emblem)
and a widescreen cinematic banner BMP (from our real 4K Spartan render with dark obsidian/gold vignette)
for embedding directly as Win32 resources inside SpartanTotalWarrior.exe.
"""
import math, os, struct, zlib

ROOT = r"C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\spartan"

def clamp(v, lo=0.0, hi=255.0):
    return int(max(lo, min(hi, v + 0.5)))

def render_icon_rgba(size):
    """Render a gleaming metallic bronze/gold Spartan shield with crisp crimson rim & golden Lambda emblem."""
    buf = bytearray(size * size * 4)
    cx = (size - 1) * 0.5
    cy = (size - 1) * 0.5
    R = size * 0.46
    for y in range(size):
        for x in range(size):
            # 2x2 supersampling for crisp edges
            ar = ag = ab = aa = 0.0
            for sy in (-0.25, 0.25):
                for sx in (-0.25, 0.25):
                    nx = (x + sx - cx) / R
                    ny = (y + sy - cy) / R
                    d = math.hypot(nx, ny)
                    if d > 1.02:
                        continue
                    alpha = 1.0 if d <= 0.98 else max(0.0, (1.02 - d) / 0.04)
                    # Directional lighting from top-left
                    light = max(0.25, min(1.35, 0.72 - nx * 0.42 - ny * 0.48 + 0.25 * (1.0 - d * d)))
                    if d > 0.84:
                        # Outer hammered gold/bronze rim
                        rim_t = 1.0 - abs((d - 0.91) / 0.09)
                        r = (212 + 35 * rim_t) * light
                        g = (158 + 30 * rim_t) * light
                        b = (62 + 15 * rim_t) * light
                    elif d > 0.76:
                        # Deep crimson inner ring
                        r, g, b = 150 * light, 26 * light, 22 * light
                    else:
                        # Dark weathered obsidian-bronze shield face
                        r = (48 + 26 * (1.0 - d)) * light
                        g = (38 + 20 * (1.0 - d)) * light
                        b = (32 + 14 * (1.0 - d)) * light
                        # Crisp Spartan Lambda (Λ) emblem in gleaming gold
                        # Left leg: from (0, -0.46) to (-0.36, 0.42)
                        # Right leg: from (0, -0.46) to (0.36, 0.42)
                        def seg_dist(px, py, ax, ay, bx, by):
                            dx, dy = bx - ax, by - ay
                            t = max(0.0, min(1.0, ((px - ax) * dx + (py - ay) * dy) / (dx * dx + dy * dy)))
                            return math.hypot(px - (ax + t * dx), py - (ay + t * dy))
                        dl = min(
                            seg_dist(nx, ny, 0.0, -0.46, -0.35, 0.42),
                            seg_dist(nx, ny, 0.0, -0.46,  0.35, 0.42),
                        )
                        # Serifs at feet
                        dl = min(
                            dl,
                            seg_dist(nx, ny, -0.43, 0.42, -0.25, 0.42),
                            seg_dist(nx, ny,  0.25, 0.42,  0.43, 0.42),
                        )
                        if dl < 0.095:
                            bevel = 1.0 - (dl / 0.095) * 0.35
                            gl = min(1.4, light * 1.15 * bevel)
                            r, g, b = 242 * gl, 192 * gl, 78 * gl
                        elif dl < 0.13:
                            # Dark carved shadow around Lambda
                            r *= 0.45; g *= 0.45; b *= 0.45
                    ar += r * alpha; ag += g * alpha; ab += b * alpha; aa += alpha
            idx = (y * size + x) * 4
            if aa > 0.0:
                buf[idx + 0] = clamp(ar / aa)
                buf[idx + 1] = clamp(ag / aa)
                buf[idx + 2] = clamp(ab / aa)
                buf[idx + 3] = clamp((aa / 4.0) * 255.0)
    return bytes(buf)

def encode_png(w, h, rgba):
    raw = b"".join(b"\x00" + rgba[y*w*4:(y+1)*w*4] for y in range(h))
    def chunk(tag, data):
        return struct.pack(">I", len(data)) + tag + data + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF)
    ihdr = struct.pack(">IIBBBBB", w, h, 8, 6, 0, 0, 0)
    return b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", ihdr) + chunk(b"IDAT", zlib.compress(raw, 6)) + chunk(b"IEND", b"")

def write_ico(path, sizes=(256, 64, 48, 32, 16)):
    images = [encode_png(s, s, render_icon_rgba(s)) for s in sizes]
    out = bytearray(struct.pack("<HHH", 0, 1, len(sizes)))
    offset = 6 + 16 * len(sizes)
    for s, png in zip(sizes, images):
        w_byte = 0 if s >= 256 else s
        out += struct.pack("<BBBBHHII", w_byte, w_byte, 0, 0, 1, 32, len(png), offset)
        offset += len(png)
    for png in images:
        out += png
    with open(path, "wb") as f:
        f.write(out)
    print(f"Wrote {path} ({len(out):,} bytes, sizes={sizes})")

def make_banner_bmp(ppm_path, bmp_path, out_w=760, out_h=240):
    """Crop & downsample our 4K Spartan render into a rich 760x240 cinematic dark-gold launcher banner BMP."""
    with open(ppm_path, "rb") as f:
        assert f.readline().strip() == b"P6"
        line = f.readline()
        while line.startswith(b"#"):
            line = f.readline()
        sw, sh = map(int, line.split())
        int(f.readline())
        data = f.read(sw * sh * 3)
    # Crop cinematic horizontal band focusing on the Spartan, courtyard, and siege towers (y: 12%..68%)
    y0 = int(sh * 0.14)
    y1 = int(sh * 0.72)
    ch = y1 - y0
    stride = ((out_w * 3 + 3) // 4) * 4
    pixels = bytearray(stride * out_h)
    for y in range(out_h):
        sy = y0 + int(y * ch / out_h)
        ny = y / max(1, out_h - 1)
        for x in range(out_w):
            sx = int(x * sw / out_w)
            nx = x / max(1, out_w - 1)
            si = (sy * sw + sx) * 3
            r, g, b = data[si], data[si + 1], data[si + 2]
            # Warm cinematic contrast + dark bottom/left gradient for crisp white/gold title text readability
            vig_left = 0.28 + 0.72 * min(1.0, nx / 0.58)
            vig_bot = 1.0 - 0.88 * (ny ** 2.1)
            vig_top = 0.65 + 0.35 * min(1.0, ny / 0.15)
            m = vig_left * vig_bot * vig_top
            # Blend into launcher dark obsidian background (#121419 = 18, 20, 25) at bottom
            bg_mix = (ny ** 2.6) * 0.92
            rr = r * m * (1.0 - bg_mix) + 18.0 * bg_mix
            gg = g * m * (1.0 - bg_mix) + 20.0 * bg_mix
            bb = b * m * (1.0 - bg_mix) + 25.0 * bg_mix
            # Thin gold accent line at very bottom (y == out_h - 1)
            if y == out_h - 1:
                rr, gg, bb = 198, 152, 68
            # BMP stores bottom-up BGR
            by = out_h - 1 - y
            di = by * stride + x * 3
            pixels[di + 0] = clamp(bb)
            pixels[di + 1] = clamp(gg)
            pixels[di + 2] = clamp(rr)
    bfOffBits = 54
    bfSize = bfOffBits + len(pixels)
    hdr = struct.pack("<2sIHHI", b"BM", bfSize, 0, 0, bfOffBits)
    dib = struct.pack("<IiiHHIIiiII", 40, out_w, out_h, 1, 24, 0, len(pixels), 2835, 2835, 0, 0)
    with open(bmp_path, "wb") as f:
        f.write(hdr + dib + pixels)
    print(f"Wrote {bmp_path} ({bfSize:,} bytes, {out_w}x{out_h})")

write_ico(os.path.join(ROOT, "spartan.ico"))
# Also save a 256x256 PNG preview of the icon
with open(os.path.join(ROOT, "spartan_icon_preview.png"), "wb") as f:
    f.write(encode_png(256, 256, render_icon_rgba(256)))

ppm_4k = os.path.join(ROOT, "pn", "games", "spartan", "res-scale5_4k", "frame_22150.ppm")
make_banner_bmp(ppm_4k, os.path.join(ROOT, "spartan_banner.bmp"))

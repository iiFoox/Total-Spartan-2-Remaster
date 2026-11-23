$ErrorActionPreference = 'Continue'
$root = 'C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https'
$game = Join-Path $root 'outputs\TotalSpartan2\TotalSpartan2.exe'
$pack = Join-Path $root 'outputs\TotalSpartan2\textures\eljefe'
$dumpDir = Join-Path $root 'work\total-spartan-2\ui_dump'
$shotsFull = Join-Path $root 'work\total-spartan-2\verify_shots_full'
$shotsNoBars = Join-Path $root 'work\total-spartan-2\verify_shots_nobars'
New-Item -ItemType Directory -Path $dumpDir, $shotsFull, $shotsNoBars -Force | Out-Null

$env:PS2_SCALE = '3'
$env:PS2_GPU_BACKEND = 'dx12'
$env:PS2_TEX_PACK = $pack
$env:PS2_TEX_PACK_MODE = 'faithful'
$env:PS2_TEX_PACK_DUMP = $dumpDir
$env:PS2_WIDE_HUD = '1'
$env:PS2_COLOR = '4'
$env:PS2_VIGNETTE = '1'
$env:PS2_OVERSCAN_CROP = '1'
$env:PS2_LOOK = '5'
$env:PS2_THREADS = '1'

# Run 1: Clean Cinema Bars (edge-to-edge, no bugs!) + dump menu/loading/cutscene textures
$env:PS2_CUTSCENE_BARS = 'full'
& $game --no-launcher --widescreen `
  --press 1342:cross:8 --press 1407:cross:8 --press 1545:cross:8 --press 1645:cross:8 --press 1822:cross:8 `
  --frames 2800 --frames-dir $shotsFull --frame-at 1250 --frame-at 2550 --frame-at 2750 `
  --memcard (Join-Path $root 'work\spartan\pn\games\spartan\explore.ps2') 2>&1 | Out-File -LiteralPath (Join-Path $root 'work\total-spartan-2\verify_full.log') -Encoding utf8
Write-Output "Run 1 (clean bars + dump) exit=$LASTEXITCODE"

# Run 2: Fullscreen 16:9 Cutscenes (no black bars!) + gameplay HUD dump
$env:PS2_CUTSCENE_BARS = 'off'
& $game --no-launcher --widescreen `
  --press 1342:cross:8 --press 1407:cross:8 --press 1545:cross:8 --press 1645:cross:8 --press 1822:cross:8 `
  --frames 2800 --frames-dir $shotsNoBars --frame-at 2550 --frame-at 2750 `
  --memcard (Join-Path $root 'work\spartan\pn\games\spartan\explore.ps2') 2>&1 | Out-File -LiteralPath (Join-Path $root 'work\total-spartan-2\verify_nobars.log') -Encoding utf8
Write-Output "Run 2 (fullscreen 16:9 cutscenes) exit=$LASTEXITCODE"

# Run 3: Dump gameplay HUD + loading screen textures from new_game.state -> LEVEL01
& $game --no-launcher --widescreen `
  --load-state (Join-Path $root 'work\spartan\pn\games\spartan\new_game.state') `
  --press 20500:start --press 21000:cross `
  --frames 22150 --frames-dir $shotsNoBars --frame-at 21200 --frame-at 22120 `
  --memcard (Join-Path $root 'work\spartan\pn\games\spartan\explore.ps2') 2>&1 | Out-File -LiteralPath (Join-Path $root 'work\total-spartan-2\verify_hud_dump.log') -Encoding utf8
Write-Output "Run 3 (HUD + loading dump) exit=$LASTEXITCODE"

$count = (Get-ChildItem $dumpDir -Filter '*.rgba').Count
Write-Output "Dumped $count unique PCSX2-keyed textures to $dumpDir"

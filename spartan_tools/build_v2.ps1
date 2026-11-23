$ErrorActionPreference = 'Stop'
$root = 'C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https'
$v1Repo = Join-Path $root 'work\spartan\pn'
$v2Repo = Join-Path $root 'work\total-spartan-2'
$v2Out = Join-Path $root 'outputs\TotalSpartan2'

. (Join-Path $v1Repo 'tools\portable\env.ps1') -Quiet
Set-Location $v2Repo

# 1. Configure & build libps2runtime.a + ps2run.exe cleanly inside work\total-spartan-2\build\
cmake -S . -B build/runtime -G Ninja -DCMAKE_BUILD_TYPE=Release `
  -DPS2_WGPU_DIR="$v1Repo/third_party/wgpu-native" `
  -DPS2_WIN_STATIC=ON
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
cmake --build build/runtime --target ps2runtime --parallel 8
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

cmake -S . -B build/native-v2 -G Ninja -DCMAKE_BUILD_TYPE=Release `
  -DCMAKE_PREFIX_PATH="$v1Repo/third_party/sdl2" `
  -DPS2_GENERATED="$v2Repo/generated/spartan" `
  -DPS2_RUNTIME_LIB="$v2Repo/build/runtime/libps2runtime.a" `
  -DPS2_WGPU_DIR="$v1Repo/third_party/wgpu-native" `
  -DPS2_WIN_STATIC=ON
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
cmake --build build/native-v2 --target ps2run --parallel 8
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

# 2. Bundle into outputs\TotalSpartan2\TotalSpartan2.exe (NEVER touches outputs\Spartan!)
$env:PYTHONPATH = $v2Repo
python tools/ps2_disc_toolkit/cli.py bundle `
  --binary build/native-v2/ps2run.exe `
  --disc "$v1Repo/games/spartan/disc_files" `
  --ee-live "$v1Repo/games/spartan/ee-live" `
  --vu1-live "$v1Repo/games/spartan/vu1-live" `
  --out "$v2Out/TotalSpartan2.exe" `
  --game-id spartan
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

python tests/win_imports.py "$v2Out/TotalSpartan2.exe"
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
Write-Output "Built TotalSpartan2.exe cleanly!"

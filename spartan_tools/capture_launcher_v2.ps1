$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing
Add-Type @"
using System;
using System.Runtime.InteropServices;
public struct RECT { public int Left, Top, Right, Bottom; }
public class WinCap {
    [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")] public static extern bool PrintWindow(IntPtr h, IntPtr hdc, uint flags);
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
}
"@
$exe = 'C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\outputs\TotalSpartan2\TotalSpartan2.exe'
$outPng = 'C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\total-spartan-2\launcher_v2_preview.png'
$p = Start-Process -FilePath $exe -PassThru
$hwnd = [IntPtr]::Zero
for ($i = 0; $i -lt 50; $i++) {
    Start-Sleep -Milliseconds 150
    $p.Refresh()
    if ($p.MainWindowHandle -ne [IntPtr]::Zero) { $hwnd = $p.MainWindowHandle; break }
}
Start-Sleep -Milliseconds 400
[WinCap]::SetForegroundWindow($hwnd) | Out-Null
$rc = New-Object RECT
[WinCap]::GetWindowRect($hwnd, [ref]$rc) | Out-Null
$w = $rc.Right - $rc.Left
$h = $rc.Bottom - $rc.Top
$bmp = New-Object System.Drawing.Bitmap($w, $h)
$g = [System.Drawing.Graphics]::FromImage($bmp)
$hdc = $g.GetHdc()
[WinCap]::PrintWindow($hwnd, $hdc, 2) | Out-Null
$g.ReleaseHdc($hdc)
$bmp.Save($outPng, [System.Drawing.Imaging.ImageFormat]::Png)
$g.Dispose(); $bmp.Dispose()
Stop-Process -Id $p.Id -Force -ErrorAction SilentlyContinue
Write-Output "Captured Launcher 2.0 preview ($w x $h) -> $outPng"

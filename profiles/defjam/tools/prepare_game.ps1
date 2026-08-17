<#
.SYNOPSIS
Stages your own Def Jam: Fight for NY - The Takeover (PSP) disc into the
git-ignored profiles/defjam/game directory.

.DESCRIPTION
PSPRecomp ships no decryption code and no game content. This script only copies
files out of media you already own.

For this title no decryption is required at all: the retail UMD carries a plain,
unencrypted executable at PSP_GAME/SYSDIR/BOOT.BIN alongside the encrypted
EBOOT.BIN. BOOT.BIN is a standard ELF32/ET_SCE_PRX image, so the framework's
analyzer and code generator can read it directly. This script copies it
verbatim; it never decrypts anything and never touches EBOOT.BIN.

Supply either an ISO (mounted read-only via Mount-DiskImage, then dismounted) or
an already-extracted UMD directory.

.PARAMETER IsoPath
Path to your own UMD image. Mounted read-only, copied from, then dismounted. The
image is a source only; nothing keeps a reference to it, and the staged tree is
self-sufficient afterwards.

.PARAMETER ExtractedUmdRoot
Path to an already-extracted UMD root, i.e. the directory containing PSP_GAME.

.PARAMETER Destination
Where to stage. Defaults to profiles/defjam/game, which the root .gitignore
excludes via /profiles/*/game/.

.PARAMETER AllowUnverifiedExecutable
Skip the SHA-256 identity check. Development only. The profile supports exactly
one executable identity; anything else is untested.

.EXAMPLE
.\prepare_game.ps1 -IsoPath 'D:\defjam.iso'

.EXAMPLE
.\prepare_game.ps1 -ExtractedUmdRoot 'D:\DEFJAM_EXTRACTED'
#>
param(
    [string]$IsoPath = "",
    [string]$ExtractedUmdRoot = "",
    [string]$Destination = "$PSScriptRoot\..\game",
    [switch]$AllowUnverifiedExecutable
)

$ErrorActionPreference = "Stop"

# ULUS-10100, DISC_VERSION 1.01. This is the SHA-256 of PSP_GAME/SYSDIR/BOOT.BIN
# (3,917,749 bytes) as it appears on the retail US UMD -- the plain ELF the
# profile is generated against, not the encrypted EBOOT.BIN beside it.
$ExpectedSha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
$ExpectedSize   = 3917749

function Test-ElfMagic {
    param([string]$Path)
    $bytes = [System.IO.File]::ReadAllBytes($Path) | Select-Object -First 4
    return ($bytes[0] -eq 0x7F -and $bytes[1] -eq 0x45 -and $bytes[2] -eq 0x4C -and $bytes[3] -eq 0x46)
}

if ([string]::IsNullOrWhiteSpace($IsoPath) -and [string]::IsNullOrWhiteSpace($ExtractedUmdRoot)) {
    throw "Supply either -IsoPath or -ExtractedUmdRoot."
}
if (-not [string]::IsNullOrWhiteSpace($IsoPath) -and -not [string]::IsNullOrWhiteSpace($ExtractedUmdRoot)) {
    throw "Supply only one of -IsoPath or -ExtractedUmdRoot."
}

$mountedImage = $null
try {
    # ---- Resolve the source root -------------------------------------------
    if (-not [string]::IsNullOrWhiteSpace($IsoPath)) {
        $IsoPath = (Resolve-Path -LiteralPath $IsoPath).Path
        Write-Host "Mounting $IsoPath (read-only)..."
        $mountedImage = Mount-DiskImage -ImagePath $IsoPath -PassThru
        $driveLetter = ($mountedImage | Get-Volume).DriveLetter
        if ([string]::IsNullOrWhiteSpace($driveLetter)) {
            throw "The image mounted but Windows assigned no drive letter."
        }
        $sourceRoot = "${driveLetter}:\"
        Write-Host "  mounted at $sourceRoot"
    } else {
        $sourceRoot = (Resolve-Path -LiteralPath $ExtractedUmdRoot).Path
    }

    $pspGame  = Join-Path $sourceRoot "PSP_GAME"
    $paramSfo = Join-Path $pspGame "PARAM.SFO"
    if (-not (Test-Path -LiteralPath $paramSfo)) {
        throw "PARAM.SFO not found at $paramSfo. Provide a PSP UMD image or an extracted UMD root (the directory that contains PSP_GAME)."
    }

    # ---- Locate the executable ---------------------------------------------
    # BOOT.BIN is the plain ELF on this title's retail disc. EBOOT_DECRYPTED.ELF
    # is accepted so a user who prepared one by other means is not blocked.
    $candidates = @(
        (Join-Path $pspGame "SYSDIR\BOOT.BIN"),
        (Join-Path $pspGame "SYSDIR\EBOOT_DECRYPTED.ELF")
    )
    $sourceExecutable = $null
    foreach ($candidate in $candidates) {
        if ((Test-Path -LiteralPath $candidate) -and (Test-ElfMagic $candidate)) {
            $sourceExecutable = $candidate
            break
        }
    }
    if ($null -eq $sourceExecutable) {
        throw @"
No plain ELF executable was found on this disc.

Looked for:
  PSP_GAME\SYSDIR\BOOT.BIN
  PSP_GAME\SYSDIR\EBOOT_DECRYPTED.ELF

On the supported release, BOOT.BIN is already a plain ELF. PSPRecomp contains no
EBOOT decryption code and will not gain any; preparing a legally obtained
executable is done outside this repository.
"@
    }

    # ---- Verify identity BEFORE writing anything ---------------------------
    # Deliberately ordered before the copy: a mismatch must not leave a
    # half-populated game directory behind.
    $actualSize = (Get-Item -LiteralPath $sourceExecutable).Length
    $actualSha  = (Get-FileHash -LiteralPath $sourceExecutable -Algorithm SHA256).Hash.ToLowerInvariant()

    Write-Host "Executable: $sourceExecutable"
    Write-Host "  size:   $actualSize bytes"
    Write-Host "  sha256: $actualSha"

    if (-not $AllowUnverifiedExecutable) {
        if ($actualSize -ne $ExpectedSize -or $actualSha -ne $ExpectedSha256) {
            throw @"
This executable is not the release the defjam profile supports.

  expected sha256 $ExpectedSha256 ($ExpectedSize bytes)
  actual   sha256 $actualSha ($actualSize bytes)

The profile supports exactly one executable identity: Def Jam: Fight for NY -
The Takeover, ULUS-10100, DISC_VERSION 1.01 (US). The checked-in AOT corpus is
generated from that exact image and will not be correct for another build.

Use -AllowUnverifiedExecutable only for development.
"@
        }
        Write-Host "  identity: OK (matches the supported ULUS-10100 release)"
    } else {
        Write-Warning "Identity check skipped (-AllowUnverifiedExecutable). The checked-in AOT corpus may not match this executable."
    }

    # ---- Copy ---------------------------------------------------------------
    $Destination = [System.IO.Path]::GetFullPath($Destination)
    New-Item -ItemType Directory -Force -Path $Destination | Out-Null

    Write-Host "Copying PSP_GAME to $Destination (this is ~1.3 GB and takes a while)..."
    $copyStart = Get-Date
    Copy-Item -LiteralPath $pspGame -Destination $Destination -Recurse -Force

    # Root-level files matter too. The title opens disc0:/UMD_DATA.BIN during
    # boot and retries forever if it is absent, so copying only PSP_GAME leaves
    # a game root that looks complete but hangs.
    Get-ChildItem -LiteralPath $sourceRoot -File -ErrorAction SilentlyContinue | ForEach-Object {
        Copy-Item -LiteralPath $_.FullName -Destination $Destination -Force
        Write-Host "  root file: $($_.Name)"
    }

    $copyElapsed = (Get-Date) - $copyStart
    Write-Host ("  copied in {0:n1} s" -f $copyElapsed.TotalSeconds)

    # Normalize the executable location. It is copied verbatim -- same bytes,
    # same name. Nothing is decrypted or transformed.
    $destSysdir = Join-Path $Destination "PSP_GAME\SYSDIR"
    New-Item -ItemType Directory -Force -Path $destSysdir | Out-Null
    $destExecutable = Join-Path $destSysdir "BOOT.BIN"
    Copy-Item -LiteralPath $sourceExecutable -Destination $destExecutable -Force

    # ---- Verify what actually landed ---------------------------------------
    $landedSha = (Get-FileHash -LiteralPath $destExecutable -Algorithm SHA256).Hash.ToLowerInvariant()
    if ($landedSha -ne $actualSha) {
        throw "Copy verification failed: staged executable hashes $landedSha but the source hashed $actualSha."
    }

    $usrdir = Join-Path $Destination "PSP_GAME\USRDIR"
    $fileCount = (Get-ChildItem -LiteralPath $usrdir -Recurse -File -ErrorAction SilentlyContinue).Count

    Write-Host ""
    Write-Host "Done."
    Write-Host "  game root:  $Destination"
    Write-Host "  executable: $destExecutable"
    Write-Host "  sha256:     $landedSha"
    Write-Host "  USRDIR:     $fileCount files"
    Write-Host ""
    Write-Host "The staged tree is all the profile needs: it generates the disc structure"
    Write-Host "a title reads -- volume descriptor, path table and per-file sectors -- over"
    Write-Host "these files, so no disc image has to be kept around."
    Write-Host ""
    Write-Host "This directory is excluded by the root .gitignore (/profiles/*/game/)."
    Write-Host "No game content belongs in the repository."
}
finally {
    if ($null -ne $mountedImage) {
        Write-Host "Dismounting $IsoPath..."
        Dismount-DiskImage -ImagePath $IsoPath | Out-Null
    }
}

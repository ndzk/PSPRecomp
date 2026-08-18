<#
.SYNOPSIS
Shows what changed between two runs of the profile.

.DESCRIPTION
A run reports a few dozen counters. Deciding whether a change helped meant
reading two of those side by side and hoping to notice, which is how a
regression in the depth buffer went unnoticed until it was pointed out from a
screenshot.

This pairs the counters by their label and prints only the ones that moved,
with the direction. Lines that are not counters - paths, hashes, the report
header - are left alone.

.EXAMPLE
./compare_runs.ps1 -Before before.txt -After after.txt
#>
[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)][string]$Before,
    [Parameter(Mandatory = $true)][string]$After,
    [switch]$IncludeUnchanged
)

$ErrorActionPreference = "Stop"
foreach ($path in @($Before, $After)) {
    if (-not (Test-Path $path)) { Write-Error "No such run output: $path" }
}

# A counter line is "  label:   value ...". The label is the key; everything
# after it is compared as text, and any leading number is compared as a number
# so the direction can be shown.
function Read-Counters([string]$path) {
    $counters = [ordered]@{}
    foreach ($line in Get-Content $path) {
        if ($line -match '^\s{2,}([a-zA-Z][a-zA-Z0-9 /\-]*):\s+(.+?)\s*$') {
            $counters[$Matches[1].Trim()] = $Matches[2]
        }
    }
    return $counters
}

$before = Read-Counters $Before
$after = Read-Counters $After

$labels = @($before.Keys) + @($after.Keys) | Select-Object -Unique
$changed = 0

foreach ($label in $labels) {
    $left = if ($before.Contains($label)) { $before[$label] } else { $null }
    $right = if ($after.Contains($label)) { $after[$label] } else { $null }

    if ($null -eq $left) {
        Write-Host ("+ {0,-22} {1}" -f $label, $right) -ForegroundColor Yellow
        $changed++
        continue
    }
    if ($null -eq $right) {
        Write-Host ("- {0,-22} {1}" -f $label, $left) -ForegroundColor Yellow
        $changed++
        continue
    }
    if ($left -eq $right) {
        if ($IncludeUnchanged) { Write-Host ("  {0,-22} {1}" -f $label, $left) -ForegroundColor DarkGray }
        continue
    }

    $changed++
    $note = ""
    if ($left -match '^(-?\d+)' ) {
        $a = [double]$Matches[1]
        if ($right -match '^(-?\d+)') {
            $b = [double]$Matches[1]
            $delta = $b - $a
            $sign = if ($delta -gt 0) { "+" } else { "" }
            $note = "  ($sign$delta)"
        }
    }
    Write-Host ("~ {0,-22} {1}" -f $label, $left) -ForegroundColor DarkGray
    Write-Host ("  {0,-22} {1}{2}" -f "", $right, $note) -ForegroundColor Cyan
}

Write-Host ""
if ($changed -eq 0) {
    Write-Host "the two runs reported identical counters" -ForegroundColor Green
} else {
    Write-Host "$changed counter(s) differ"
}

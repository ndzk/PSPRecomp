<#
.SYNOPSIS
Runs the profile to named points and checks what it reported.

.DESCRIPTION
The unit tests cover parsing and decoding. Nothing covered whether the title
still boots, still answers its dialogs, still registers the code it loads from
its audio banks - the things that actually broke while this profile was being
built, and that were only ever noticed by reading a run by eye.

Each scenario names a guest-time budget, the input to play, and the lines the
run has to produce. A scenario fails loudly, with the line it wanted and what
it got, so a regression says what it broke rather than just that something is
different.

Requires a staged game and a built DefJamNative; neither ships with the
repository.

.EXAMPLE
./run_scenarios.ps1
./run_scenarios.ps1 -Scenario banks -KeepOutput
#>
[CmdletBinding()]
param(
    [string]$Scenario = "all",
    [string]$Executable = "",
    [switch]$KeepOutput,
    [switch]$Fast
)

$ErrorActionPreference = "Stop"

if ([string]::IsNullOrEmpty($Executable)) {
    $root = Split-Path -Parent (Split-Path -Parent (Split-Path -Parent $PSScriptRoot))
    $Executable = Join-Path $root "out/defjam/bin/Release/DefJamNative.exe"
}
if (-not (Test-Path $Executable)) {
    Write-Error "DefJamNative not found at $Executable. Build the defjam profile first."
}

# Each scenario is a guest-time budget, the buttons to play into it, and the
# expectations. `Forbid` matters as much as `Expect`: a run that reaches the
# right place having also faulted is not a pass.
$scenarios = @(
    @{
        Name    = "boot"
        GuestUs = 20000000
        Input   = ""
        Expect  = @(
            "identity:       OK",
            "framebuffer sets:   [1-9]"
        )
        Forbid  = @("Guest fault", "No recompiled function")
        Why     = "the title boots, verifies against the manifest and draws something"
    },
    @{
        Name    = "dialogs"
        GuestUs = 20000000
        Input   = "17000:0x4000,17200:0,17600:0x4000,17800:0"
        Expect  = @("answered yes")
        Forbid  = @("Guest fault")
        Why     = "the save prompt is answered once instead of being asked forever"
        MaxMessageDialogs = 6
    },
    @{
        Name    = "banks"
        GuestUs = 25000000
        Input   = "17000:0x4000,17200:0,17600:0x4000,17800:0"
        Expect  = @(
            "unit 400 registered",
            "unit 401 registered"
        )
        Forbid  = @("not recompiled", "No recompiled function")
        Why     = "the code the title loads from its audio banks is recognised and registered"
    }
)

$selected = if ($Scenario -eq "all") { $scenarios } else { $scenarios | Where-Object { $_.Name -eq $Scenario } }
if (-not $selected) {
    Write-Error "No scenario named '$Scenario'. Known: $(($scenarios | ForEach-Object { $_.Name }) -join ', ')"
}

$failures = 0
foreach ($case in $selected) {
    Write-Host ""
    Write-Host "== $($case.Name) ==" -ForegroundColor Cyan
    Write-Host "   $($case.Why)"

    $output = Join-Path ([System.IO.Path]::GetTempPath()) "defjam_scenario_$($case.Name).txt"
    $env:PSPRECOMP_DEFJAM_STOP_AT_GUEST_US = $case.GuestUs
    $env:PSPRECOMP_DEFJAM_INPUT = $case.Input
    $env:PSPRECOMP_MAX_DISPATCHES = "900000000"
    # Pixels are not what these check, and skipping them is most of the runtime.
    if ($Fast) { $env:PSPRECOMP_DEFJAM_NO_RASTER = "1" } else { $env:PSPRECOMP_DEFJAM_NO_RASTER = "" }

    $started = Get-Date
    & $Executable *> $output
    $seconds = ((Get-Date) - $started).TotalSeconds
    $text = Get-Content $output -Raw
    if ($null -eq $text) { $text = "" }

    $problems = @()
    foreach ($pattern in $case.Expect) {
        if ($text -notmatch $pattern) { $problems += "expected to see /$pattern/" }
    }
    foreach ($pattern in $case.Forbid) {
        if ($text -match $pattern) { $problems += "should not have seen /$pattern/" }
    }
    if ($case.ContainsKey("MaxMessageDialogs")) {
        if ($text -match "message dialogs:\s+(\d+)") {
            $count = [int]$Matches[1]
            if ($count -gt $case.MaxMessageDialogs) {
                $problems += "raised $count message dialogs, more than the $($case.MaxMessageDialogs) a working run needs"
            }
        }
    }

    if ($problems.Count -eq 0) {
        Write-Host ("   PASS  {0:n0}s" -f $seconds) -ForegroundColor Green
    } else {
        $failures++
        Write-Host ("   FAIL  {0:n0}s" -f $seconds) -ForegroundColor Red
        foreach ($problem in $problems) { Write-Host "         $problem" -ForegroundColor Red }
        Write-Host "         full output: $output"
    }
    if (-not $KeepOutput -and $problems.Count -eq 0) { Remove-Item $output -ErrorAction SilentlyContinue }
}

Write-Host ""
if ($failures -eq 0) {
    Write-Host "all scenarios passed" -ForegroundColor Green
    exit 0
}
Write-Host "$failures scenario(s) failed" -ForegroundColor Red
exit 1

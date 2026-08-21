# Def Jam profile

Builds `DefJamNative` for one specific PSP release of *Def Jam: Fight for NY —
The Takeover*.

**No game content is included in this repository, and none ever will be.** No
executable, no disc image, no assets, no audio, no save data, no captures. You
supply your own legally obtained disc; everything under `profiles/defjam/game`
is git-ignored.

## Current status

**Runs, and draws.** Display lists are rasterised into real frames. The run is
headless by default: on Windows `PSPRECOMP_DEFJAM_WINDOW` opens a Direct3D 12
window, and on any platform `PSPRECOMP_DEFJAM_FRAME_DUMP` writes frames to disk.
`DefJamNative` validates its manifest and the executable's identity, then runs
the checked-in AOT corpus against an HLE layer: threads and synchronisation,
memory partitions and the scratchpad, `IoFileMgrForUser` over a generated UMD
layout, `sceAudio` and `sceSasCore`, `ModuleMgrForUser`, the utility dialogs,
`sceMpeg` with a PSMF demultiplexer feeding an optional FFmpeg decoder, and
`sceAtrac3plus` for streamed audio. Of the 247 imports this executable needs,
208 across 23 modules are implemented; the remaining 39 are the ad-hoc
networking libraries, which are stubbed rather than emulated (see below).

`host/defjam_ge.cpp` walks the guest's display lists, maintains the 256-entry GE
register file and resolves list control flow. `host/defjam_vertex.cpp`,
`host/defjam_texture.cpp` and `host/defjam_raster.cpp` read that state and turn
it into pixels on the CPU, and `host/defjam_present_dx12.cpp` puts the result on
screen over Direct3D 12.

## Supported executable

Exactly one identity is supported:

| | |
|---|---|
| Title | Def Jam: Fight for NY — The Takeover |
| Disc ID | ULUS-10100 (`PARAM.SFO` records `ULUS10100`) |
| Region | NTSC-U |
| Disc version | 1.01 |
| Executable | `PSP_GAME/SYSDIR/BOOT.BIN`, 3,917,749 bytes |
| SHA-256 | `27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a` |
| Module | `Rw37Skel` (RenderWare 3.7) |
| Load base | `0x08804000` |
| Runtime entry | `0x0897F744` |

Startup **fails** with exit code 4 if the executable does not match. The AOT
corpus will be generated from that exact image and is not correct for any other
build, so running against an unverified binary is refused rather than attempted.

### No decryption is required

This disc carries a plain, unencrypted `ELF32`/`ET_SCE_PRX` at
`PSP_GAME/SYSDIR/BOOT.BIN`, alongside the encrypted `EBOOT.BIN`. The framework
analyzer reads `BOOT.BIN` directly.

PSPRecomp contains no EBOOT/PRX decryption code and will not gain any. Nothing
here decrypts anything; `EBOOT.BIN` is never read.

## Prepare your game data

From the repository root, with your own disc image:

```powershell
.\profiles\defjam\tools\prepare_game.ps1 -IsoPath 'D:\your-copy.iso'
```

The ISO is mounted read-only and dismounted afterwards. If you already have an
extracted UMD directory (the one containing `PSP_GAME`), use that instead:

```powershell
.\profiles\defjam\tools\prepare_game.ps1 -ExtractedUmdRoot 'D:\DEFJAM_EXTRACTED'
```

The script verifies the executable's SHA-256 **before** copying anything, so a
wrong disc cannot leave a half-populated game directory behind. The default
destination is `profiles/defjam/game`, which the root `.gitignore` excludes via
`/profiles/*/game/`. Expect roughly 1.25 GB and 7,496 files.

`-AllowUnverifiedExecutable` skips the identity check. Development only.

## Build

```
cmake -S . -B out/defjam -DPSPRECOMP_PROFILE=defjam
cmake --build out/defjam --config Release
ctest --test-dir out/defjam -C Release --output-on-failure
```

Run it:

```
out\defjam\bin\Release\DefJamNative.exe
```

**A window, on Windows and on macOS.** `PSPRECOMP_DEFJAM_WINDOW=1` opens one;
`PSPRECOMP_DEFJAM_WINDOW_SCALE` picks the integer scale, 2 by default, so
960x544. Windows presents over Direct3D 12 with a GDI fallback; macOS presents
over Core Animation through AppKit, which ships with the system and costs no
dependency.

The two differ in one way worth knowing. AppKit owns the main thread - a window
created or pumped anywhere else is unsupported and deadlocks - so on macOS the
roles are reversed: the guest runs on a worker and the main thread pumps the
window. Windows keeps its UI thread and is untouched. Without the variable both
stay headless exactly as before, so the scripted measurement runs behave
identically either way.

The keyboard is the same on both: arrows for the pad, `I` `L` `K` `J` as the
face-button diamond, `Q` and `E` for the triggers, Return for Start, Backspace
for Select, `WASD` for the analog stick, Escape to close. Keys are read only
while the window is in front, and are ORed onto `PSPRECOMP_DEFJAM_INPUT`, so a
scripted run behaves identically whether or not somebody is holding a key.

**Build Release for anything that draws.** The rasteriser is where the time
goes, and an unoptimised build pays for it about a hundred times over: reaching
19 seconds of guest time took 18 minutes of wall clock at `-O0`, and the same
point takes about 15 seconds once optimised. A debug build is still the right
tool for stepping through the HLE layer, but a run that has to reach a menu, a
movie or a fight should be optimised or it will not get there. `PSPRECOMP_DEFJAM_NO_RASTER=1`
skips drawing entirely, which is faster again when the question is how far the
title gets rather than what it shows.

or point it at an executable explicitly:

```
out\defjam\bin\Release\DefJamNative.exe path\to\BOOT.BIN
```

Requires CMake ≥ 3.20 and a C++20 toolchain. Developed against Visual Studio
2026 (MSVC 19.51, toolset 14.51); the reference `vcs` profile targets Visual
Studio 2022, and both should work.

It also builds and runs on macOS with AppleClang, unmodified:

```
cmake -S . -B out/defjam -G Ninja -DPSPRECOMP_PROFILE=defjam \
      -DCMAKE_BUILD_TYPE=Debug -DPSPRECOMP_GENERATED_OPT_LEVEL=0
cmake --build out/defjam -j 8
ctest --test-dir out/defjam --output-on-failure
```

Measured on an Apple silicon machine with 10 cores: 33 s wall for all 216
targets, including the 174 generated units, and a 179 MB unoptimised binary.
Without a staged disc `DefJamNative` reports its manifest, enforces the policy
and exits 3, which is as far as this platform can go - the profile has no macOS
presenter and staging still needs the PowerShell script. That is enough to keep
the host layer honest: a change that compiles but does not link, or that breaks
manifest handling, fails here rather than on the next Windows build.

## Regenerating the AOT corpus

`generated/` holds the checked-in AOT C++ translated from the supported
executable. Per [`../../docs/PROFILE_GUIDE.md`](../../docs/PROFILE_GUIDE.md) §6,
everything needed to reproduce it:

| | |
|---|---|
| Executable | `PSP_GAME/SYSDIR/BOOT.BIN`, SHA-256 `27c28efc…b27a`, 3,917,749 bytes |
| Generator | the framework's `psp_recomp`, **not** a profile fork |
| Load base | `0x08804000` |
| Unit span | `16384` (`0x4000`) |
| Post-generation passes | **none** |

Exact command, from the repository root with the game staged:

```
out\framework\Release\psp_recomp.exe ^
  profiles\defjam\game\PSP_GAME\SYSDIR\BOOT.BIN ^
  --auto profiles\defjam\generated 0x08804000 16384
```

Set `PSPRECOMP_CODEGEN_PROGRESS=1` for per-unit progress on stderr.

Generation is deterministic: regenerating into a different directory produces
byte-identical output, and re-running in place reports `rewritten units: 0`.
There is no post-generation optimization step, so the checked-in files are
exactly what the command above emits.

The run also sweeps stale output from a previous generation, scoped to what this
mode emits: `generated_unit_*.cpp` and `generated_registry.cpp`. The
`generated_relocatable_*.cpp` units come from `psp_recomp --relocatable` and
share this directory, so the sweep leaves them alone. A generator from before
that scoping matched every `generated_*.cpp` and deleted all of them on each
`--auto` run; nothing else refers to those files, so the build stayed green with
the recompiled bank code simply gone. Regenerate with an older `psp_recomp` and
you have to rebuild the bank units afterwards.

Every instruction in this executable is lowered: the corpus contains no
unsupported-instruction traps. The only `rt.unsupported` call in it is the
one-per-unit guard against an invalid internal function entry.

Measured corpus:

| | |
|---|---|
| translation units | 173 (+ `generated_registry.cpp`) |
| on disk | 71 MB |
| emitted code PCs | 557,329 |
| registered block entries | 127,021 |
| import wrappers | 247 |
| generation time | ~5 s |

### Why span 16384

`Runtime`'s compile-time direct-chaining table is capped at
`kGeneratedUnitFastCapacity = 512` units; beyond that, cross-unit calls fall
back to exact-PC dispatch. Measured alternatives on this executable:

| span | units | corpus | avg unit | inside the 512 cap |
|---|---|---|---|---|
| `0x1000` | 689 | 73 MB | 108 KiB | **no** |
| `0x2000` | 345 | 72 MB | 213 KiB | yes |
| **`0x4000`** | **173** | **71 MB** | **420 KiB** | yes |
| `0x8000` | 87 | 70 MB | 823 KiB | yes |
| `0x20000` | 22 | 68 MB | 3165 KiB | yes |

### Build cost

Measured on the reference machine below, `/O2 /Ob0 /bigobj`, no LTO:

| | |
|---|---|
| clean `DefJamNative` build | 87 s |
| peak concurrent `cl.exe`/`link.exe` | 17 |
| peak combined resident set | 3.8 GB |
| **peak single compiler** | **309 MB** |
| linked binary | 68.4 MB |

Reference machine: AMD Ryzen 7 5700X3D (8C/16T), 64 GB RAM, Windows 11
10.0.26100, MSVC 19.51 / toolset 14.51.

The VCS profile caps build parallelism by available memory because its units
exceed 1 GB each at `/Ox /Ob3`. At `/O2 /Ob0` this corpus peaks at 309 MB per
compiler, so **no job capping is needed** and the default `/MP` is fine. That
will need re-measuring if the corpus is ever built at `/Ox /Ob3`.

## Configuration

`config/defjam_ulus10100.toml` is the profile manifest. Unlike the reference
`vcs` profile's manifest, **this one is parsed and enforced** by
`host/defjam_config.cpp`.

| Section | Key | Meaning |
|---|---|---|
| `[game]` | `name`, `disc_id`, `region`, `disc_version`, `psp_system_ver`, `module` | Identity, reported at startup |
| | `ram_mb` | Guest RAM, 32 or 64; the runtime models no other size |
| | `load_base` | Guest load base, hex string |
| | `expected_sha256` | **Enforced.** 64 hex digits; startup fails on mismatch |
| `[input]` | `executable`, `game_root`, `nids_csv` | Paths, relative to the profile directory |
| `[output]` | `report_json`, `generated_dir` | Analyzer and codegen outputs |
| `[policy]` | `missing_function`, `unsupported_instruction` | **Enforced.** Must be `"stop"` |
| | `allow_interpreter_fallback`, `allow_jit_fallback` | **Enforced.** Must be `false` |

A manifest that relaxes any `[policy]` value is rejected at parse time — the
profile refuses to run under a policy it does not implement. Unknown keys and
sections warn rather than abort, so a newer manifest stays loadable.

Environment overrides:

| Variable | Effect |
|---|---|
| `PSPRECOMP_DEFJAM_CONFIG` | Path to the manifest to load |
| `PSPRECOMP_DEFJAM_ALLOW_UNVERIFIED` | Bypass the identity check, with a loud warning. Development only |

Exit codes: `0` ok, `1` error, `2` usage, `3` executable not found, `4` identity
mismatch, `5` the guest was stopped — the policy caught a missing function or an
unsupported instruction, or a watchdog budget ran out.

## Known issues and open work

- **The rasteriser draws.** Display lists are interpreted, their state latched,
  and the geometry turned into pixels on the CPU. Eight seconds of guest time
  into a staged run: 877 lists, 194,455 GE commands, 4,716 draws and 525,384
  vertices, of which 3,848 were transformed and 868 passed through in screen
  space; 2,018 textures decoded with none failing; 179,864 primitives rasterised
  and 301,273,664 pixels written. Frames reach a window over Direct3D 12, and
  `PSPRECOMP_DEFJAM_NO_RASTER` turns the pixel work off while leaving the list
  interpretation in place.
- **Movie playback runs end to end.** The opening movie decodes all 118 of its
  frames and the player's threads exit cleanly, after which the title carries
  on. Two things had to be true for that: video access units are split on H.264
  access unit delimiters rather than on PES timestamps (this container
  timestamps only 8 of its 63 video packets, so a timestamp split hands the
  decoder fifteen frames where the title asked for one), and the vblank
  sub-interrupt actually reaches the guest.
- **Callbacks are registered but never delivered.**
  `sceKernelCreateCallback` records its handler, `sceKernelCheckCallback` always
  reports nothing pending, and the `...CB` wait variants block exactly like
  their plain forms.

  Alarms are no longer among them: `sceKernelSetAlarm` arms one, the handler
  runs when virtual time reaches the deadline, and its return value re-arms it
  or retires it the way hardware reads it. This title arms a periodic tick that
  walks a table of registered work, and it had never run once. A title that arms an alarm or waits on a callback waits forever, which
  reads as a deadlock rather than a missing feature - worth checking early when
  a thread is parked for no visible reason.

  Sub-interrupt handlers are the exception and are delivered.
  `sceKernelRegisterSubIntrHandler` records the handler and argument,
  `sceKernelEnableSubIntr` arms it, and the vblank raises it on whichever thread
  is about to run - the same shape hardware uses, and the same machinery that
  carries a GE callback. The vblank itself is driven by virtual time rather than
  by `sceDisplayWaitVblankStart`: it is a clock, and a title can spend a whole
  movie without asking for one. This was not academic. The movie player waits on
  an event flag that only its vblank handler sets, so with the handler dropped
  the display thread never consumed a frame, the player's ring of four frame
  buffers filled, and playback stopped dead after exactly four frames.
- **The title executes code out of its audio banks, and that code is
  recompiled.** It does not come from `BOOT.BIN`, so the main corpus cannot
  carry it: it lives inside the 158 `.abk` files under `USRDIR`. The banks ship
  unlinked and the title links them as it loads them, but the linking is static,
  so `tools/recompile_bank_code.ps1` reproduces it ahead of time and translates
  the result with `psp_recomp --relocatable`.

  All 158 banks are covered, by 83 translation units — `generated_relocatable_0400`
  through `0482`. There are fewer units than banks because a routine is keyed on
  its own bytes before linking, so banks carrying the same routine share one.
  Re-running the script with `-WhatIfOnly` reports `83 distinct routines, 0
  bank(s) this tool could not read`.

  Registration happens at load: `defjam_banks.cpp` is offered every buffer a
  read just filled, recognises a bank by that fingerprint and registers its unit
  at whatever address the bank was read into. A staged run to 150 seconds of
  guest time reports `1 loaded, 1 routines registered, 0 not recompiled` — the
  path works end to end, though only the first bank has been reached at that
  point, so the other 82 units are covered statically rather than exercised.
  Format and evidence are in `docs/DEFJAM_AUDIO_BANKS.md`.
- **Ad-hoc multiplayer is out of scope** for the first release. The title
  imports 41 NIDs across `sceNet`, `sceNetAdhoc`, `sceNetAdhocctl`,
  `sceNetAdhocMatching` and `sceWlanDrv`, and ships four `pspnet` PRXs. Two of
  the 41 are `sceWlanDrv` and report no wireless adapter. The other 39 are
  registered in `host/defjam_net.cpp` as stubs that report themselves once, with
  the guest return address they were called from, and hand back a failure.

  Reporting success would be the worse lie — the title would walk into a
  wireless session it cannot hold up and fail somewhere far from the cause —
  and stopping the run outright takes down a single-player session over a menu
  it wandered into. What they return is not dressed up as an SCE error code:
  every one of the 39 call sites was read in the AOT corpus and none compares
  the result against a constant, so any non-zero value sends the guest down the
  no-wireless path it already has. Nothing here emulates a network.
- **13 Sony system PRXs are loaded at runtime** from `USRDIR/assets/module/`.
  These must be intercepted and satisfied by HLE rather than recompiled. The
  interception is in place: a load is verified against the staged disc, returns
  a handle and runs no code, leaving the guest's imports to resolve to this
  profile's own HLE.
- **`sceAtrac3plus` decoding is unproven.** The library surface is
  implemented - container parsing, stream ids, frame handing and the
  end-of-stream report are covered by tests - but no ATRAC frame has been
  decoded from a real `.at3` file yet, only from synthetic containers. A build
  without FFmpeg hands out ids and plays silence rather than stopping.
- **CPU skinning is the main performance risk.** The reference renderer blends
  bone matrices per vertex on the CPU with no GPU path, which matters far more
  for a game rendering two to four skinned fighters than for an open world.

## Verifying a change

Three instruments, all in this directory, all built on the measured fact that the
emulation is deterministic (two independent runs matched to the pixel at every
checkpoint):

```text
python golden_run.py            scripted story run to guest 300 s; frame metrics
                                every 30 s compared against golden_metrics.json
python golden_run.py --long     the same through the post-fight movies to 1800 s
python golden_run.py --capture  re-baseline after an INTENDED visual change;
                                this is the human sign-off, never run it to
                                silence a failure you have not understood
python golden_run.py --parity   both backends over one schedule, pixel-exact;
                                contract: every channel agrees within 2 steps
python soak_check.py            an hour of guest time with a leak check and a
                                budget-stop verdict; --minutes overrides
```

Frames are captures of the user's own game content: they live in a temporary
directory and are deleted, and only the derived numbers are committed.

The end-of-run report also prints every GE command the title wrote that this
profile has no opinion about (`unknown_command_report`), so a new venue's
surprises arrive as named report lines rather than visual mysteries.

## Layout

```text
config/    Profile manifest (parsed and enforced)
host/      Manifest parsing, identity checking, entry point
tests/     Profile regression tests, wired into ctest
tools/     prepare_game.ps1 and future generation helpers
game/      Your own staged disc data. Git-ignored, never committed
analysis/  Local analyzer output. Git-ignored
progress/  Local development notes. Git-ignored
```

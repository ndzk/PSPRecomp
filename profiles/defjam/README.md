# Def Jam profile

Builds `DefJamNative` for one specific PSP release of *Def Jam: Fight for NY —
The Takeover*.

**No game content is included in this repository, and none ever will be.** No
executable, no disc image, no assets, no audio, no save data, no captures. You
supply your own legally obtained disc; everything under `profiles/defjam/game`
is git-ignored.

## Current status

**Runs headless; nothing is drawn yet.** `DefJamNative` validates its manifest
and the executable's identity, then runs the checked-in AOT corpus against an
HLE layer: threads and synchronisation, memory partitions and the scratchpad,
`IoFileMgrForUser` over a generated UMD layout, `sceAudio` and `sceSasCore`,
`ModuleMgrForUser`, the utility dialogs, `sceMpeg` with a PSMF demultiplexer
feeding an optional FFmpeg decoder, and `sceAtrac3plus` for streamed audio. 211 imports across 23 modules are implemented of the 247 this
executable needs; the remaining 39 are the networking libraries, deliberately
absent (see below).

There is no rasteriser. `host/defjam_ge.cpp` is the front half of one: it walks
the guest's display lists, maintains the 256-entry GE register file and
resolves list control flow, so draw state is available to a backend. No backend
reads it, so there are still no pixels on a screen.

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
mismatch.

## Known issues and open work

- **No rasteriser.** Display lists are interpreted and their state latched;
  nothing turns that into pixels.
- **Movie playback runs end to end.** The opening movie decodes all 118 of its
  frames and the player's threads exit cleanly, after which the title carries
  on. Two things had to be true for that: video access units are split on H.264
  access unit delimiters rather than on PES timestamps (this container
  timestamps only 8 of its 63 video packets, so a timestamp split hands the
  decoder fifteen frames where the title asked for one), and the vblank
  sub-interrupt actually reaches the guest.
- **Callbacks and alarms are registered but never delivered.**
  `sceKernelCreateCallback` records its handler, `sceKernelCheckCallback` always
  reports nothing pending, and `sceKernelSetAlarm` hands back a uid for an alarm
  that never fires; the `...CB` wait variants block exactly like their plain
  forms. A title that arms an alarm or waits on a callback waits forever, which
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
- **The title executes code out of its audio banks**, which the AOT corpus does
  not cover: it is built from `BOOT.BIN`, and the code lives inside the 158
  `.abk` files under `USRDIR`. This is what the run stops on once it gets past
  the title screen. The banks ship unlinked and the title links them as it
  loads them, but the linking is static and can be reproduced ahead of time, so
  recompiling them faithfully is open rather than blocked. Format, evidence and
  the plan are in `docs/DEFJAM_AUDIO_BANKS.md`.
- **Ad-hoc multiplayer is out of scope** for the first release. The title
  imports 41 NIDs across `sceNet`, `sceNetAdhoc`, `sceNetAdhocctl`,
  `sceNetAdhocMatching` and `sceWlanDrv`, and ships four `pspnet` PRXs. The plan
  is to report no wireless adapter and leave the rest unimplemented, so an
  accidental call aborts loudly rather than silently returning success.
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

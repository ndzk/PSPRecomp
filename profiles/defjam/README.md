# Def Jam profile

Builds `DefJamNative` for one specific PSP release of *Def Jam: Fight for NY —
The Takeover*.

**No game content is included in this repository, and none ever will be.** No
executable, no disc image, no assets, no audio, no save data, no captures. You
supply your own legally obtained disc; everything under `profiles/defjam/game`
is git-ignored.

## Current status

**Skeleton.** `DefJamNative` loads and validates its manifest, locates your
staged executable and verifies its identity, then exits. There is no generated
AOT corpus, no HLE layer and no renderer yet, so it does not run the game.

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

Requires CMake ≥ 3.20 and a C++20 MSVC toolchain. Developed against Visual
Studio 2026 (MSVC 19.51, toolset 14.51); the reference `vcs` profile targets
Visual Studio 2022, and both should work.

## Configuration

`config/defjam_ulus10100.toml` is the profile manifest. Unlike the reference
`vcs` profile's manifest, **this one is parsed and enforced** by
`host/defjam_config.cpp`.

| Section | Key | Meaning |
|---|---|---|
| `[game]` | `name`, `disc_id`, `region`, `disc_version`, `psp_system_ver`, `module` | Identity, reported at startup |
| | `ram_mb` | Guest RAM, 1–64 |
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

- **No corpus, no HLE, no renderer.** Skeleton only.
- **31 VFPU instructions are not lowered.** `vi2uc` ×15, `vi2s` ×13, `vi2c` ×3.
  The framework decoder handles the unpack direction (`vuc2i`/`vc2i`/`vus2i`/
  `vs2i`) but not the matching pack direction, so these currently become runtime
  traps. Needs correct saturation semantics before it can be fixed.
- **Ad-hoc multiplayer is out of scope** for the first release. The title
  imports 41 NIDs across `sceNet`, `sceNetAdhoc`, `sceNetAdhocctl`,
  `sceNetAdhocMatching` and `sceWlanDrv`, and ships four `pspnet` PRXs. The plan
  is to report no wireless adapter and leave the rest unimplemented, so an
  accidental call aborts loudly rather than silently returning success.
- **13 Sony system PRXs are loaded at runtime** from `USRDIR/assets/module/`.
  These must be intercepted and satisfied by HLE rather than recompiled.
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

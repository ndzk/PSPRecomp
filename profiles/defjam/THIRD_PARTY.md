# Third-party components

This profile is MIT, like the framework it plugs into. Nothing listed here is
bundled in the repository; each is an optional dependency the user supplies at
build time, and the profile builds and runs the title without any of them.

## FFmpeg — optional, off by default

Enabled with `-DPSPRECOMP_DEFJAM_FFMPEG=ON`. Without it the profile has no movie
decoder, `sceMpegAvcDecode` and `sceMpegAtracDecode` stop with a message saying
so, and everything else works.

- **Used for:** decoding the H.264 video and ATRAC3+ audio inside the title's
  PSMF movies.
- **License:** LGPL. **The build must not be configured with `--enable-gpl`.** A
  GPL-configured FFmpeg is GPL, which is not compatible with this profile's MIT
  licensing. Neither decoder needed here requires any GPL component, so an LGPL
  build is sufficient. Check with `ffmpeg -version`: the configuration line must
  not contain `--enable-gpl`. Note that many prebuilt "lgpl" packages are
  configured with `--enable-version3`, which makes them LGPL **v3** rather than
  v2.1; that is still fine here, but the notices you ship must match whichever
  version your build actually is.
- **Linkage:** dynamic. The LGPL applies to the library, not to the program that
  loads it, and dynamic linking is what lets a user replace their copy.
- **Not redistributed here.** No FFmpeg source or binary is in this repository.
  Supply your own and point `PSPRECOMP_DEFJAM_FFMPEG_ROOT` at it.
- **Notices:** if you distribute a build with FFmpeg enabled, ship the matching
  LGPL license text and FFmpeg's notices alongside it, and keep the library
  replaceable. That obligation is yours as the distributor, not this project's.

### Configuring it

```
cmake -S . -B build -DPSPRECOMP_PROFILE=defjam \
      -DPSPRECOMP_DEFJAM_FFMPEG=ON \
      -DPSPRECOMP_DEFJAM_FFMPEG_ROOT=<path to an LGPL FFmpeg>
```

The root needs `include/` and `lib/`; the DLLs from its `bin/` are copied beside
the executable at build time, since dynamic linkage is what keeps the library
replaceable. Configuring with the option on and no FFmpeg found is a hard error
rather than a silent fallback to no playback.

### Why a third-party decoder at all

The video is H.264 Main profile with CABAC entropy coding, and the audio is
ATRAC3+. H.264 has a public specification and could be implemented here given
enough time. ATRAC3+ does not: Sony never published one, every working
implementation descends from reverse engineering, and the canonical one is
LGPL — which this project's rules forbid adapting into its own sources. There is
therefore no route to ATRAC3+ playback that consists of writing it here, and
once a decoder is a dependency for audio it serves the video too.

Cisco's openh264 was considered and does not fit: it covers Constrained
Baseline, which by definition excludes the CABAC entropy coding these streams
use.

## Not third-party

Everything else in this profile is written for it: the PSMF demultiplexer, the
ISO 9660 disc layout, the HLE surface, the GE display-list interpreter, and the
YUV to ABGR8888 conversion. Where behaviour was derived from observing hardware
or reading another implementation, the source comment says so; no code was
copied.

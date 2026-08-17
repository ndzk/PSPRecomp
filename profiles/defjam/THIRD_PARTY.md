# Third-party components in the defjam profile

**None.**

At its current stage this profile bundles no third-party source, no binary
dependencies, no shaders and no data files. Everything under
`profiles/defjam/` was written for this repository and is covered by the
project's MIT license.

The profile links only `psprecomp_core` from this repository and the C++20
standard library. On Windows it uses the Win32 API through the platform SDK.

## If that changes

Any intentionally bundled third-party component must:

- keep its original copyright and license notice beside the component;
- be listed in this file with its name, version, upstream source, license and
  the reason it is bundled;
- be license-compatible with the destination file, per
  [`../../docs/SOURCE_PROVENANCE.md`](../../docs/SOURCE_PROVENANCE.md).

Source is not copied or adapted from projects whose license is incompatible
with this tree, including GPL/LGPL PSP emulators. Public hardware
documentation, published specifications and observed program behaviour may be
used as references to understand semantics, with the implementation written
independently and the derivation noted in a comment where it is not obvious.

## Note on game data

No game content is bundled, and none is redistributable. The user's own disc
data lives in `game/`, which the root `.gitignore` excludes. The profile ships
no EBOOT, disc image, asset, texture, audio, save file or capture, and contains
no decryption code.

## Derived-by-specification notes

Implementation details in this profile that were derived from published
specification rather than written from scratch or copied:

- **PSP NID resolution.** A PSP function NID is the first four bytes of the
  SHA-1 of the function name, read little-endian. The names contributed to
  `configs/nids.csv` were each verified by recomputing that hash and requiring
  it to reproduce the NID present in the module's own import table. No name was
  copied from another project's source.

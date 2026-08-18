# Def Jam audio banks carry executable code

The title runs MIPS code out of its own audio bank files. The AOT corpus is
built from `BOOT.BIN`, so that code is not in it, and the run stops the moment
the sound engine calls into a bank.

This is the next substantial piece of work on the profile. It is written down
here because the finding is not visible from the code: nothing in the corpus
points at it, and it only shows up once the title gets past its title screen.

## How it shows up

    PSPRECOMP_DEFJAM_PULSE_BUTTONS=0x4000 DefJamNative
    ...
    Stopped: No recompiled function registered at 0x0966E26C

Deterministic, and reproducible in about a minute. The pulse is needed because
the title screen edge-detects its input; a held button never advances it. See
`PSPRECOMP_DEFJAM_PULSE_BUTTONS` in the profile README.

The jump comes from thread 7 (`SND`), out of a callback list walked at
`0x08A6E258`: each node holds its successor at `+0`, a function at `+8` and an
argument at `+12`. The function pointer is what lands outside the corpus.

## What is actually there

Guest memory at the target holds a textbook MIPS prologue:

    0x27BDFFF8   addiu sp, sp, -8
    0xAFB00000   sw    s0, 0(sp)
    0xAFBF0004   sw    ra, 4(sp)
    0x00808021   move  s0, a0

so it is real code, not mistaken data. A memory watch on the target shows
thread 3 (`file`) writing it, right after a raw sector open of 395392 bytes.
That size identifies the file:

    PSP_GAME/USRDIR/eaj/Fe_Sfx_1.abk        code at offset 0x9C

The bank is loaded at roughly `0x0966E1D0` - the same memory the movie decoder
had been writing frames into, which the allocator had since recycled.

## The container

All 158 `.abk` files begin with the magic `ABKC`. The word at header offset
`0x84` declares where the code block starts: `0x9C` in 91 of them, `0xDC` in
36, other values in the rest. **Every one of the 158 has a MIPS prologue at the
offset its own header declares**, so the field is reliable and every bank
carries code.

The code block's length has not been pinned down yet. Candidate header fields
are `0x88`, `0x8C`, `0x90` and `0x98`. This matters: without it, a scan runs off
the end of the code and decodes sample data as instructions.

## The banks are linked at load time, and the linking is static

The code ships unlinked. Comparing the loaded image against the file - dump the
bank out of guest memory at the stop, then diff - shows **24 words differing in
the whole bank, of which 7 are patched `jal` instructions**. The rest is
execution state written into the header, including `0x84` receiving the
absolute address of the code in place of the file-relative offset it held.

The `jal` fields in the file are not addresses but **indices**:

| index in file | patched target |
|---|---|
| 0  | `0x08A6B79C` |
| 1  | `0x08A6B7A8` |
| 4  | `0x08A6D7B4` |
| 10 | `0x08A6BD28` |
| 15 | `0x08A6C038` |
| 27 | `0x08A6CE4C` |
| 35 | `0x08A6C43C` |

They index a flat table of function addresses inside the module, at **file
offset `0x2DD518`**, which is `0x08AE1518` once relocated against the load base
`0x08804000`. Entries 0-11 are a contiguous run of `0x08A6Bxxx`-`0x08A6Dxxx`
functions: the sound engine's API surface, exposed to the banks. Searching the
module image for the seven observed targets in index order gives exactly one
match, so the table is identified rather than guessed.

Nothing in that depends on runtime state. The module base is fixed, the table
is in the image, the indices are in the file: **the linking can be reproduced
offline, byte for byte.**

## Recompiling them faithfully

1. Resolve the indices offline - read the table out of the module and rewrite
   each `jal <index>` as `jal table[index]`. This is exactly what the title's
   own loader does, only ahead of time.
2. Feed the linked code to the existing codegen as further corpus units. It is
   the same MIPS, the same decoder, the same opcode set; no new machinery.
3. Register the compiled functions at `base + offset` when a bank is loaded.
   The runtime already exposes `register_function` for this.

Step 3 works because the bank code appears to be position independent: its
internal branches are PC relative and only its calls into the module are
absolute, and those resolve to fixed addresses.

An interpreter is **not** the answer here, however tempting it looks on first
contact with `jal 0` in the file. The relocation is resolvable ahead of time,
so interpreting would give up faithful recompilation for nothing. Keep the
interpreter idea for code that genuinely cannot be seen before it runs.

## What is verified and what is not

Verified: the code is executed; it comes from `Fe_Sfx_1.abk` at `0x9C`; the
seven relocations and their targets; the import table's location; that all 158
banks declare a code offset and have a prologue there.

Not yet verified: that the seven relocations are the *whole* relocation set for
every bank, and that no bank makes an absolute call inside itself. Both need
the code length field first - scanning a fixed number of words past the end
decodes data as instructions and reports internal jumps that are not there.
The one bank examined end to end had no internal absolute call.

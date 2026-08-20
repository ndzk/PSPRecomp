# Def Jam audio banks carry executable code

The title runs MIPS code out of its own audio bank files. The AOT corpus is
built from `BOOT.BIN`, so that code is not in it, and the run used to stop the
moment the sound engine called into a bank.

**This is solved, and solved faithfully**: the bank routines are recompiled
ahead of time like any other guest code, not interpreted. All 158 banks on the
disc are covered by 83 distinct routines, every one of which is recompiled. What
follows is what they are, how the title links them, and how the three pieces
that handle them fit together.

## How it was found

Before any of this was handled, the run ended like so:

    PSPRECOMP_DEFJAM_PULSE_BUTTONS=0x4000 DefJamNative
    ...
    Stopped: No recompiled function registered at 0x0966E26C

Deterministic, and reproducible in about a minute. The pulse was needed to get
that far at all, because the title screen edge-detects its input and a held
button never advances it. See `PSPRECOMP_DEFJAM_PULSE_BUTTONS` in the profile
README.

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

All 158 `.abk` files begin with the magic `ABKC`, and a pair of header words
delimits the routine:

    header +132   offset of the first instruction
    header +136   offset one past the last, so the routine is [start, end)

Neither is assumed. Across all 158 banks the word at the start offset is an
`addiu sp, sp, -N` prologue, and the word at `end - 8` is `jr ra` with its delay
slot at `end - 4`. The start offset is not a constant - it takes 31 different
values - so it is read from the header and the *shape* is what gets validated.
That check is what keeps a scan from running off the end and decoding sample
data as instructions.

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
offset `0x2DD518`**, which is **`0x08AE1418`** in the running guest. The
conversion is not a bare addition of the load base: the module's first program
segment begins at file offset `0x100` with a virtual address of zero, so a file
offset maps as `offset - 0x100 + load_base`. Forgetting the `0x100` puts every
address 256 bytes past where it lives, and the corpus then shows no reference to
it at all - which is how this one was caught.

`tools/corpus_xrefs.py` finds the site that builds this address:
`generated_unit_0154.cpp`, where the `lui` sits eight lines above the half that
completes it. Entries 0-11 are a contiguous run of `0x08A6Bxxx`-`0x08A6Dxxx`
functions: the sound engine's API surface, exposed to the banks. Searching the
module image for the seven observed targets in index order gives exactly one
match, so the table is identified rather than guessed.

Nothing in that depends on runtime state. The module base is fixed, the table
is in the image, the indices are in the file: **the linking can be reproduced
offline, byte for byte.**

## How they are handled

Three pieces, each doing one thing.

**`tools/extract_bank_code.cpp`** reads a bank, validates the shape above, and
does offline exactly what the title's loader does at runtime: rewrites every
`jal <index>` as `jal export_table[index]`. It refuses rather than guesses - an
index past the end of the table, or an export that is not a usable address, is
an error and not a silently linked call. The linked routine is written out so it
can go through the analyzer and code generator like any other guest code.

**`tools/recompile_bank_code.ps1`** walks every `.abk` on the disc, runs the
extractor over each, deduplicates the results by fingerprint - the 158 banks
share only 83 distinct routines between them - and emits
`generated/generated_bank_routines.inc`, one `BANK_ROUTINE` line per routine.
Because the script regenerates from the whole disc, coverage is complete by
construction rather than by anybody remembering to add an entry.

**`host/defjam_banks.cpp`** does the runtime half. `note_possible_bank` is
called from the file read path, so a bank is recognised as it arrives and
*before* the title links it; that is why the fingerprint is taken over the raw
bytes and why the offline tool and the runtime cannot disagree about what a
routine is. A buffer that has the prologue and the terminating `jr ra` in the
right places is fingerprinted, and the matching recompiled unit is registered at
the address the bank was loaded to.

A routine that is not in the list does not fail quietly. It is counted, and its
fingerprint and byte count are printed, which is exactly what
`recompile_bank_code.ps1` needs to be pointed at to fix it. `bank_report()`
summarises banks seen, routines registered and routines missing at the end of a
run.

Registering at the load address works because the routines are position
independent: their internal branches are PC relative, and their only absolute
transfers are the calls into the module, which resolve to fixed addresses.

An interpreter is **not** the answer here, however tempting it looks on first
contact with `jal 0` in the file. The relocation is resolvable ahead of time, so
interpreting would have given up faithful recompilation for nothing. Keep that
idea for code that genuinely cannot be seen before it runs.

## Coverage

Every bank on the disc is accounted for: 158 banks, 83 distinct routines, all
83 recompiled and none missing. That was confirmed independently of the
generator by computing the same FNV-1a fingerprint over each bank's declared
code range straight from the files and checking it against the generated list.

The check is worth repeating after any change to the extractor, the header
field offsets or the export table address, since all three are measured rather
than documented by the format.

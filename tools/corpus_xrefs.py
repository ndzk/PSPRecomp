#!/usr/bin/env python3
"""Answer "who references this guest address" over a generated corpus.

The generated units are the whole module in readable form, but grep does not
read them the way the CPU does. An address is rarely written down: it is built
from a `lui` that carries the top half and an `addiu` or `ori` that adds the
bottom, and the two can sit far apart - the `lui` often lands in a branch delay
slot with its other half in the branch target, more than a hundred lines away.
Searching for the value finds nothing, and searching for either half finds
noise. That is the gap this fills.

Two more things make the naive search wrong, and both are handled here:

  * `addiu` sign-extends, so an address whose low half is >= 0x8000 is built
    from a `lui` one higher and a subtraction. 0x80618001 is `lui 0x8062`
    followed by `addiu -32767`.
  * the code generator writes the `lui` operand in decimal, so 0x08AD appears
    as `(2221u << 16u)`.

Usage:
    tools/corpus_xrefs.py profiles/defjam/generated 0x08805A28 0x08ACEE18

What it reports, per address:

  transfer      a call or jump whose target is this address
  registered    the runtime entry point for this address
  materialised  the address built into a register, which is how a function
                pointer or a global's base is produced
  memory        a load or store landing on this address

The register scan is linear within a file: a `lui` is followed forward until
that register is written again. Generated code is full of labels and gotos, so
this is an approximation - it can miss a pairing that only happens along a
branch, and it will not invent one that does not exist. Treat a hit as a place
to read, and the absence of hits as "look again by hand".
"""

import argparse
import pathlib
import re
import sys

LUI = re.compile(r"ctx\.gpr\[(\d+)\] = \((\d+)u << 16u\);")
# Any other write to a register ends the run of the lui held in it.
WRITE = re.compile(r"ctx\.gpr\[(\d+)\] = ")
# gpr[a] = (gpr[b] + K) / (gpr[b] | K), and loads and stores with an offset.
ADD = re.compile(r"ctx\.gpr\[(\d+)\] = \(ctx\.gpr\[(\d+)\] \+ static_cast<std::uint32_t>\((-?\d+)\)\)")
ORR = re.compile(r"ctx\.gpr\[(\d+)\] = \(ctx\.gpr\[(\d+)\] \| (\d+)u\)")
MEM = re.compile(r"aot_(load|store)(8|16|32)\(ctx\.gpr\[(\d+)\] \+ static_cast<std::uint32_t>\((-?\d+)\)")


def scan(path, wanted, hits):
    text = path.read_text(encoding="utf-8", errors="replace")
    name = path.name

    for line_no, line in enumerate(text.splitlines(), 1):
        for address in wanted:
            token = f"0x{address:08X}u"
            if token in line:
                if "register_function" in line:
                    hits[address].append(("registered", name, line_no, line.strip()))
                elif "ctx.pc" in line or "invoke_chained_direct" in line or "jump_target" in line:
                    hits[address].append(("transfer", name, line_no, line.strip()))

    # The register scan needs its own pass: state carries across lines.
    held = {}          # register -> (high half value, line it was set on)
    for line_no, line in enumerate(text.splitlines(), 1):
        lui = LUI.search(line)

        def note(kind, register, offset, at):
            base = held.get(register)
            if base is None:
                return
            effective = (base[0] + (offset & 0xFFFFFFFF)) & 0xFFFFFFFF
            if effective in wanted:
                hits[effective].append(
                    (kind, name, at, f"lui at line {base[1]}, {line.strip()}"))

        for match in MEM.finditer(line):
            note("memory", int(match.group(3)), int(match.group(4)), line_no)
        for match in ADD.finditer(line):
            note("materialised", int(match.group(2)), int(match.group(3)), line_no)
        for match in ORR.finditer(line):
            note("materialised", int(match.group(2)), int(match.group(3)), line_no)

        # A bare lui is itself an address when the low half is zero.
        if lui:
            register, high = int(lui.group(1)), int(lui.group(2)) << 16
            if high in wanted:
                hits[high].append(("materialised", name, line_no, line.strip()))
            held[register] = (high, line_no)
            continue

        for match in WRITE.finditer(line):
            held.pop(int(match.group(1)), None)


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("corpus", type=pathlib.Path, help="directory of generated units")
    parser.add_argument("addresses", nargs="+", help="guest addresses, e.g. 0x08805A28")
    parser.add_argument("--limit", type=int, default=12, help="hits to print per kind")
    args = parser.parse_args()

    try:
        wanted = {int(text, 0) for text in args.addresses}
    except ValueError as error:
        sys.exit(f"not an address: {error}")

    units = sorted(args.corpus.glob("*.cpp"))
    if not units:
        sys.exit(f"no generated units under {args.corpus}")

    hits = {address: [] for address in wanted}
    for unit in units:
        scan(unit, wanted, hits)

    for address in sorted(wanted):
        found = hits[address]
        print(f"\n0x{address:08X}  -  {len(found)} reference(s) across {len(units)} units")
        if not found:
            print("  nothing. The pairing may only happen along a branch; read the "
                  "unit around the address by hand.")
            continue
        for kind in ("registered", "transfer", "materialised", "memory"):
            of_kind = [hit for hit in found if hit[0] == kind]
            if not of_kind:
                continue
            print(f"  {kind} ({len(of_kind)}):")
            for _, name, line_no, text in of_kind[:args.limit]:
                print(f"    {name}:{line_no}  {text[:110]}")
            if len(of_kind) > args.limit:
                print(f"    ... and {len(of_kind) - args.limit} more")


if __name__ == "__main__":
    main()

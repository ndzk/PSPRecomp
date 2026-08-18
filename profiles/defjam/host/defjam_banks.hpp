#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>

namespace defjam {

// The code this title carries inside its EA audio banks.
//
// A bank is an ABKC container, and its header points at a small MIPS routine
// that the sound engine calls once the game has linked it in place. That code
// is not in the module, so it is not in the AOT corpus either: it is recompiled
// separately by psp_recomp --relocatable and registered here, at whatever
// address the bank was read into.
//
// Registration is keyed on the routine's own bytes rather than on the file it
// came from. A bank is read by raw sector, so the name is not available at that
// point, and two banks that carry the same routine should share one unit.

// Offered every buffer a read just filled. Does nothing unless the buffer is a
// bank whose routine has been recompiled.
void note_possible_bank(psprecomp::Runtime &runtime, std::uint32_t address, std::uint32_t length);

struct BankStats {
    std::uint64_t banks_seen{};
    std::uint64_t routines_registered{};
    std::uint64_t routines_unknown{};   // a bank whose code has not been recompiled
};
[[nodiscard]] BankStats bank_stats();
[[nodiscard]] std::string bank_report();

} // namespace defjam

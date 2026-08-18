#include "defjam_banks.hpp"

#include "psprecomp/common.hpp"

#include <cstring>
#include <iostream>
#include <set>
#include <sstream>
#include <vector>

namespace defjam {
namespace {

BankStats g_stats;
// A bank is read once and stays put, but the same routine appears in several
// banks, so being offered one twice at the same address has to be harmless.
std::set<std::uint32_t> g_registered;

constexpr std::uint32_t kHeaderCodeStart = 132u;
constexpr std::uint32_t kHeaderCodeEnd = 136u;
constexpr std::uint32_t kJrRa = 0x03E00008u;
constexpr std::uint32_t kAbkcMagic = 0x434B4241u;   // "ABKC", little endian

// The routine identifies itself by its bytes, before the game links it. FNV-1a
// is here because it is four lines and this is an identity check against a
// known list, not a security boundary. The offline tool computes the same value
// over the same bytes, so the two cannot disagree about what a routine is.
std::uint64_t fingerprint(const std::vector<std::uint8_t> &bytes) {
    std::uint64_t hash = 0xcbf29ce484222325ull;
    for (const std::uint8_t byte : bytes) {
        hash = (hash ^ byte) * 0x100000001b3ull;
    }
    return hash;
}

struct KnownRoutine {
    std::uint64_t fingerprint;
    void (*register_at)(psprecomp::Runtime &, std::uint32_t);
    const char *name;
};

} // namespace
} // namespace defjam

// The generated list is expanded twice - once into the declarations, once into
// the table - so the two cannot drift apart. recompile_bank_code.ps1 writes it.
#if defined(DEFJAM_HAS_GENERATED_CORPUS)
namespace psprecomp {
#define BANK_ROUTINE(fingerprint, symbol, name) \
    void register_##symbol##_at(Runtime &rt, std::uint32_t base);
#include "../generated/generated_bank_routines.inc"
#undef BANK_ROUTINE
} // namespace psprecomp
#endif

namespace defjam {
namespace {

constexpr KnownRoutine kKnownRoutines[] = {
#if defined(DEFJAM_HAS_GENERATED_CORPUS)
#define BANK_ROUTINE(fingerprint, symbol, name) \
    {fingerprint, &psprecomp::register_##symbol##_at, name},
#include "../generated/generated_bank_routines.inc"
#undef BANK_ROUTINE
#endif
    // Keeps the array well formed when no corpus is linked, and is skipped by
    // the null check below.
    {0ull, nullptr, nullptr},
};

} // namespace

void note_possible_bank(psprecomp::Runtime &runtime, std::uint32_t address, std::uint32_t length) {
    if (length < 600u) return;
    if (!runtime.memory().contains(address, 600u)) return;
    if (runtime.memory().load32(address) != kAbkcMagic) return;

    const std::uint32_t code_start = runtime.memory().load32(address + kHeaderCodeStart);
    const std::uint32_t code_end = runtime.memory().load32(address + kHeaderCodeEnd);
    if (code_start == 0u || code_end <= code_start || code_end > length ||
        (code_start & 3u) != 0u || (code_end & 3u) != 0u) {
        return;
    }
    const std::uint32_t code_address = address + code_start;
    const std::uint32_t code_length = code_end - code_start;
    if (!runtime.memory().contains(code_address, code_length)) return;
    // The same invariants the offline tool checks, so a buffer that merely
    // starts with the right four bytes is not mistaken for a bank.
    const std::uint32_t first = runtime.memory().load32(code_address);
    if ((first >> 16u) != 0x27BDu || (first & 0x8000u) == 0u) return;
    if (runtime.memory().load32(code_address + code_length - 8u) != kJrRa) return;

    ++g_stats.banks_seen;
    if (g_registered.contains(code_address)) return;

    std::vector<std::uint8_t> code(code_length);
    runtime.memory().copy_out(code_address, code);
    const std::uint64_t identity = fingerprint(code);

    for (const KnownRoutine &known : kKnownRoutines) {
        if (known.register_at == nullptr || known.fingerprint != identity) continue;
        known.register_at(runtime, code_address);
        g_registered.insert(code_address);
        ++g_stats.routines_registered;
        return;
    }

    // Saying so is the point. A routine nobody recompiled stops the run the
    // moment the sound engine calls it, and the fingerprint printed here is
    // what recompile_bank_code.ps1 has to be pointed at to fix that.
    ++g_stats.routines_unknown;
    g_registered.insert(code_address);
    std::ostringstream note;
    note << "  bank routine:       not recompiled, " << code_length << " bytes at "
         << psprecomp::hex32(code_address) << ", fingerprint 0x" << std::hex << std::uppercase
         << identity << "\n";
    std::cout << note.str() << std::flush;
}

BankStats bank_stats() { return g_stats; }

std::string bank_report() {
    if (g_stats.banks_seen == 0u) return {};
    std::ostringstream out;
    out << "  audio banks:        " << g_stats.banks_seen << " loaded, "
        << g_stats.routines_registered << " routines registered, " << g_stats.routines_unknown
        << " not recompiled\n";
    return out.str();
}

} // namespace defjam

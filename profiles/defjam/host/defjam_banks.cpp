#include "defjam_banks.hpp"

#include "psprecomp/common.hpp"

#include <array>
#include <iostream>
#include <set>
#include <sstream>
#include <vector>

namespace defjam {
namespace {

BankStats g_stats;
// A bank is read once and stays put, but the same routine appears in several
// banks, so registering it twice at the same address has to be harmless.
std::set<std::uint32_t> g_registered;

constexpr std::uint32_t kHeaderCodeStart = 132u;
constexpr std::uint32_t kHeaderCodeEnd = 136u;
constexpr std::uint32_t kJrRa = 0x03E00008u;

// The routine identifies itself by its bytes, before the game links it. FNV-1a
// is here because it is four lines and this is an identity check against a
// short list, not a security boundary.
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

#if defined(DEFJAM_HAS_GENERATED_CORPUS)
namespace psprecomp {
void register_recomp_unit_0400_at(Runtime &rt, std::uint32_t base);
void register_recomp_unit_0401_at(Runtime &rt, std::uint32_t base);
} // namespace psprecomp
#endif

namespace defjam {
namespace {

// Every audio bank routine that has been through psp_recomp --relocatable.
// The fingerprints are measured, not chosen: each is the FNV-1a of the code
// region exactly as it sits in the file the routine was recompiled from.
constexpr std::array<KnownRoutine, 2> kKnownRoutines{{
#if defined(DEFJAM_HAS_GENERATED_CORPUS)
    {0x1A3CAE0C50E1BAE2ull, &psprecomp::register_recomp_unit_0400_at, "unit 400"},
    {0xD716155277D737F3ull, &psprecomp::register_recomp_unit_0401_at, "unit 401"},
#else
    {0ull, nullptr, nullptr},
    {0ull, nullptr, nullptr},
#endif
}};

} // namespace

void note_possible_bank(psprecomp::Runtime &runtime, std::uint32_t address, std::uint32_t length) {
    if (length < 600u) return;
    if (!runtime.memory().contains(address, 600u)) return;
    if (runtime.memory().load32(address) != 0x434B4241u) return;   // "ABKC", little endian

    const std::uint32_t code_start = runtime.memory().load32(address + kHeaderCodeStart);
    const std::uint32_t code_end = runtime.memory().load32(address + kHeaderCodeEnd);
    if (code_start == 0u || code_end <= code_start || code_end > length ||
        (code_start & 3u) != 0u || (code_end & 3u) != 0u) {
        return;
    }
    const std::uint32_t code_address = address + code_start;
    const std::uint32_t code_length = code_end - code_start;
    if (!runtime.memory().contains(code_address, code_length)) return;
    // The same two invariants the offline tool checks, so a buffer that merely
    // starts with the right four bytes is not mistaken for a bank.
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
        std::cout << "  bank routine:       " << known.name << " registered at "
                  << psprecomp::hex32(code_address) << "\n" << std::flush;
        return;
    }

    // Saying so is the point. A routine nobody recompiled will stop the run the
    // moment the sound engine calls it, and the fingerprint printed here is
    // what psp_recomp --relocatable has to be pointed at to fix that.
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

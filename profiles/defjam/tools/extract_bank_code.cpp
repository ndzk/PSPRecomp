// Extracts the executable code this title embeds in its EA audio banks.
//
// Every .abk here is an EA audio bank, and all 158 on the disc carry a small
// MIPS routine that the sound engine calls. The game loads a bank raw
// into the heap and then links it in place: a routine inside the module turns
// the header's offset fields into absolute pointers and rewrites each `jal` in
// the code, whose target field holds an index rather than an address, into a
// call to the engine function that index names. Only then is the code called.
//
// None of that is guessed. The layout below was measured by dumping a bank out
// of guest memory after the game had linked it and diffing that against the
// file it was read from: in a 395,392-byte bank exactly 24 words differ, all in
// the first 500 bytes, and seven of them are the calls.
//
//   header +132   offset of the first instruction
//   header +136   offset one past the last, so the routine is [start, end)
//   code          `jal <index>` sites, rewritten to `jal export_table[index]`
//
// Both markers were checked against all 158 banks on the disc: the word at the
// start offset is an `addiu sp, sp, -N` prologue and the word at end-8 is
// `jr ra`, with its delay slot at end-4, in every single one. The start is not
// a constant - it takes 31 different values - so it is read from the header
// rather than assumed, and the shape is what gets validated.
//
// This tool applies the same linking offline and writes the result out, so the
// routine can go through the analyzer and code generator like any other guest
// function instead of needing a JIT the policy forbids.

#include "psprecomp/common.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/sha256.hpp"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace {

constexpr std::uint32_t kJumpAndLink = 3u;      // MIPS opcode for jal
constexpr std::uint32_t kJrRa = 0x03E00008u;

std::uint32_t read32(const std::vector<std::uint8_t> &bytes, std::size_t offset) {
    std::uint32_t value{};
    std::memcpy(&value, bytes.data() + offset, sizeof(value));
    return value;
}

void write32(std::vector<std::uint8_t> &bytes, std::size_t offset, std::uint32_t value) {
    std::memcpy(bytes.data() + offset, &value, sizeof(value));
}

std::uint32_t parse(const std::string &text) {
    return static_cast<std::uint32_t>(std::strtoul(text.c_str(), nullptr, 0));
}

struct Bank {
    std::uint32_t code_start{};
    std::uint32_t code_end{};
    // Of the routine before linking, which is how it arrives in memory and so
    // the only form the runtime can recognise it by.
    std::uint64_t fingerprint{};
    std::vector<std::uint8_t> code;         // already linked
    std::vector<std::uint32_t> targets;     // one per rewritten call, in order
};

// Reads the bank, checks the two invariants that were measured to hold across
// every bank on the disc, and rewrites the calls. Returns false with a reason
// rather than producing something that only looks right.
bool link_bank(const std::vector<std::uint8_t> &file, const std::vector<std::uint32_t> &exports,
               Bank &bank, std::string &error) {
    if (file.size() < 600u) {
        error = "the file is too small to be an audio bank";
        return false;
    }
    if (std::memcmp(file.data(), "ABKC", 4) != 0) {
        error = "the file does not start with ABKC";
        return false;
    }
    bank.code_start = read32(file, 132u);
    bank.code_end = read32(file, 136u);
    if (bank.code_start == 0u || bank.code_end <= bank.code_start ||
        bank.code_end > file.size() || (bank.code_start & 3u) != 0u ||
        (bank.code_end & 3u) != 0u) {
        error = "the code range " + std::to_string(bank.code_start) + ".." +
                std::to_string(bank.code_end) + " is not usable";
        return false;
    }
    // The routine has to begin by making itself a stack frame. Checking the
    // shape rather than a fixed offset is what keeps this honest: the start is
    // whatever the header says, and 31 different values appear across the disc.
    const std::uint32_t first = read32(file, bank.code_start);
    if ((first >> 16u) != 0x27BDu || (first & 0x8000u) == 0u) {
        error = "there is no stack frame at the declared start";
        return false;
    }
    // The routine must return where the header says it ends. A bank that fails
    // this is not one this tool understands, and guessing past it would produce
    // a plausible-looking image that is wrong.
    if (read32(file, bank.code_end - 8u) != kJrRa) {
        error = "there is no return instruction before the declared end";
        return false;
    }

    bank.code.assign(file.begin() + bank.code_start, file.begin() + bank.code_end);
    bank.fingerprint = 0xcbf29ce484222325ull;
    for (const std::uint8_t byte : bank.code) {
        bank.fingerprint = (bank.fingerprint ^ byte) * 0x100000001b3ull;
    }
    for (std::size_t offset = 0; offset + 4u <= bank.code.size(); offset += 4u) {
        const std::uint32_t word = read32(bank.code, offset);
        if ((word >> 26u) != kJumpAndLink) continue;
        const std::uint32_t index = word & 0x03FFFFFFu;
        if (index >= exports.size()) {
            error = "call at +" + std::to_string(bank.code_start + offset) + " names export " +
                    std::to_string(index) + ", past the end of the table";
            return false;
        }
        const std::uint32_t target = exports[index];
        if ((target & 3u) != 0u || target == 0u) {
            error = "export " + std::to_string(index) + " is not a usable address";
            return false;
        }
        write32(bank.code, offset,
                (kJumpAndLink << 26u) | ((target >> 2u) & 0x03FFFFFFu));
        bank.targets.push_back(target);
    }
    return true;
}

} // namespace

int main(int argc, char **argv) {
    if (argc < 5) {
        std::cerr << "usage: extract_bank_code <BOOT.BIN> <export-table-address> <bank.abk> "
                     "<out.bin> [load-base]\n"
                     "\n"
                     "Links one audio bank the way the game does and writes the routine out.\n"
                     "The export table is the array of engine entry points the bank's calls\n"
                     "index into; its address belongs in the profile manifest, not here.\n";
        return 2;
    }
    try {
        const std::uint32_t load_base = argc > 5 ? parse(argv[5]) : 0x08804000u;
        const std::uint32_t table_address = parse(argv[2]);

        // The table lives in the module's data, so it only holds the right
        // addresses after relocation - the same state the game reads it in.
        auto elf = psprecomp::Elf32Image::from_file(argv[1]);
        psprecomp::GuestMemory memory;
        (void)elf.load_and_relocate(memory, load_base);

        // The table has no count in front of it, so it is read as far as the
        // entries keep looking like addresses inside the module, and the banks
        // are then checked against that length rather than the other way round.
        std::vector<std::uint32_t> exports;
        for (std::uint32_t address = table_address;; address += 4u) {
            if (!memory.contains(address, 4u)) break;
            const std::uint32_t entry = memory.load32(address);
            if (entry < load_base || (entry & 3u) != 0u) break;
            exports.push_back(entry);
            if (exports.size() > 4096u) break;
        }
        if (exports.empty()) {
            std::cerr << "no export table at " << argv[2] << "\n";
            return 1;
        }

        std::ifstream input(argv[3], std::ios::binary);
        if (!input) {
            std::cerr << "could not open " << argv[3] << "\n";
            return 1;
        }
        const std::vector<std::uint8_t> file((std::istreambuf_iterator<char>(input)),
                                             std::istreambuf_iterator<char>());

        Bank bank;
        std::string error;
        if (!link_bank(file, exports, bank, error)) {
            std::cerr << argv[3] << ": " << error << "\n";
            return 1;
        }

        std::ofstream output(argv[4], std::ios::binary);
        if (!output) {
            std::cerr << "could not write " << argv[4] << "\n";
            return 1;
        }
        output.write(reinterpret_cast<const char *>(bank.code.data()),
                     static_cast<std::streamsize>(bank.code.size()));
        output.close();

        std::cout << "  fingerprint:    0x" << std::hex << std::uppercase << bank.fingerprint
                  << std::dec << std::nouppercase << "\n"
                  << "  export table:   " << exports.size() << " entries at " << argv[2] << "\n"
                  << "  code:           +" << bank.code_start << " .. +" << bank.code_end << " ("
                  << bank.code.size() << " bytes)\n"
                  << "  calls linked:   " << bank.targets.size() << "\n";
        for (const std::uint32_t target : bank.targets) {
            std::cout << "                  " << psprecomp::hex32(target) << "\n";
        }
        std::cout << "  sha256:         " << psprecomp::sha256_file(argv[4]) << "\n"
                  << "  written:        " << argv[4] << "\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "extract_bank_code error: " << e.what() << "\n";
        return 1;
    }
}

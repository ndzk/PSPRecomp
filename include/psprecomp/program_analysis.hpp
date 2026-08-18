#pragma once

#include "psprecomp/elf32.hpp"

#include <cstdint>
#include <map>
#include <set>
#include <string>
#include <vector>

namespace psprecomp {

struct ExecutableRange {
    std::uint32_t start{};
    std::uint32_t end{};
};

struct FunctionAnalysis {
    std::uint32_t entry{};
    std::set<std::uint32_t> labels; // all decoded instruction addresses (delay slots excluded)
    std::set<std::uint32_t> entry_labels; // function entry and basic-block/return continuations
    std::set<std::uint32_t> direct_calls;
    std::set<std::uint32_t> indirect_call_sites;
    std::size_t basic_block_count{};
    std::size_t unsupported_instruction_count{};
    bool truncated{};
};

struct ProgramAnalysis {
    std::vector<ExecutableRange> executable_ranges;
    std::map<std::uint32_t, std::string> seeds;
    std::vector<FunctionAnalysis> functions;
    std::set<std::uint32_t> covered_labels;
    std::set<std::uint32_t> covered_entry_labels;
    std::size_t overlapping_label_count{};
};

[[nodiscard]] bool is_executable_address(const std::vector<ExecutableRange> &ranges,
                                         std::uint32_t address) noexcept;

// Walks code that is already in memory, from a set of executable ranges and a
// set of entry points, without needing an executable file behind it.
//
// This is what analyze_program does once it has finished asking the ELF where
// the code is and where to start looking. It is separate because not all guest
// code arrives in an ELF: a title may load a relocatable blob from a data file
// at run time and call into it, and that code has to be analysed from the
// bytes and a base address alone.
[[nodiscard]] ProgramAnalysis analyze_image(std::vector<ExecutableRange> ranges,
                                            std::map<std::uint32_t, std::string> seeds,
                                            const GuestMemory &memory,
                                            std::size_t max_instructions_per_function = 131072u);

[[nodiscard]] ProgramAnalysis analyze_program(const Elf32Image &elf,
                                              const GuestMemory &memory,
                                              std::uint32_t load_base,
                                              std::size_t max_instructions_per_function = 131072u);

} // namespace psprecomp

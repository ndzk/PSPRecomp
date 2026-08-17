#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>

namespace defjam {

// Registers the IoFileMgrForUser surface and resets its handle tables.
// Paths resolve through Runtime::translate_path, which strips the PSP device
// prefix (disc0:, ms0:, host0:) and rejects ".." traversal, so everything lands
// inside the configured game root.
//
// Raw device handles such as umd0:, the disc structure ioctls and raw-sector
// opens are all served from a disc layout generated over the staged tree; no
// disc image is involved.
void install_io_hle(psprecomp::Runtime &runtime);

// The same, with the staged tree named explicitly rather than taken from the
// runtime's game root.
void install_io_hle(psprecomp::Runtime &runtime, const std::string &game_root);

struct IoStats {
    std::uint64_t opens{};
    std::uint64_t failed_opens{};
    std::uint64_t reads{};
    std::uint64_t bytes_read{};
    std::uint64_t seeks{};
    std::uint64_t dir_opens{};
    std::uint64_t device_opens{};
    std::uint64_t device_reads{};
    std::uint64_t device_bytes_read{};
    std::uint64_t umd_ioctls{};      // disc-structure queries answered
    std::uint64_t lbn_opens{};       // opens addressed by raw disc sector
    std::uint32_t open_handles{};
};
[[nodiscard]] IoStats io_stats();

// Most recent path the guest failed to open, for diagnostics.
[[nodiscard]] std::string last_failed_open();

// Guest path behind an open descriptor, or empty. Module loading by file id
// needs it to report which module is being loaded.
[[nodiscard]] std::string io_path_for_fd(std::int32_t fd);

// The PSP addresses raw disc content with the path form
// "sce_lbn<sector>_size<bytes>", each field hexadecimal with an optional "0x".
// Exposed so the parser can be tested without a disc image.
[[nodiscard]] bool parse_disc_sector_path(const std::string &psp_path, std::uint32_t &sector,
                                          std::uint32_t &size);

} // namespace defjam

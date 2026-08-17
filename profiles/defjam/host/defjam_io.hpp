#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>

namespace defjam {

// Registers the IoFileMgrForUser surface and resets its handle tables.
// Paths resolve through Runtime::translate_path, which strips the PSP device
// prefix (disc0:, ms0:, host0:) and rejects ".." traversal, so everything lands
// inside the configured game root.
void install_io_hle(psprecomp::Runtime &runtime);

struct IoStats {
    std::uint64_t opens{};
    std::uint64_t failed_opens{};
    std::uint64_t reads{};
    std::uint64_t bytes_read{};
    std::uint64_t seeks{};
    std::uint64_t dir_opens{};
    std::uint64_t device_opens{};
    std::uint32_t open_handles{};
};
[[nodiscard]] IoStats io_stats();

// Most recent path the guest failed to open, for diagnostics.
[[nodiscard]] std::string last_failed_open();

} // namespace defjam

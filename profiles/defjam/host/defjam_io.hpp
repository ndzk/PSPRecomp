#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>

namespace defjam {

// Registers the IoFileMgrForUser surface and resets its handle tables.
// Paths resolve through Runtime::translate_path, which strips the PSP device
// prefix (disc0:, ms0:, host0:) and rejects ".." traversal, so everything lands
// inside the configured game root.
// `umd_image` optionally backs raw device handles such as umd0: with the
// user's own disc image. Empty leaves device reads reporting end-of-media.
void install_io_hle(psprecomp::Runtime &runtime, const std::string &umd_image = {});

// Resolution order for the disc image: PSPRECOMP_DEFJAM_UMD, then the pointer
// file prepare_game.ps1 writes into the staged game root, then an image sitting
// in the game root itself. Returns empty when none is available.
[[nodiscard]] std::string resolve_umd_image(const std::string &game_root);

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
    std::uint32_t open_handles{};
};
[[nodiscard]] IoStats io_stats();

// Most recent path the guest failed to open, for diagnostics.
[[nodiscard]] std::string last_failed_open();

} // namespace defjam

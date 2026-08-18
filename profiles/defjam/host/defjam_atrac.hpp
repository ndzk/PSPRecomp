#pragma once

#include "defjam_decoder.hpp"
#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <vector>

namespace defjam {

// sceAtrac3plus: the title's streamed audio - music and anything else that is
// not the soundtrack carried inside a movie. A different library from sceMpeg,
// reached through a different PRX, but the same codec underneath.
//
// The title hands over a whole .at3 file at once and then asks for it a frame
// at a time, so nothing here streams: the buffer it passed is the buffer, and
// the library reports that all the data is already in memory.

// The RIFF/WAVE header a .at3 file begins with. ATRAC frames carry no header
// of their own, so the frame size has to come from here - which is why an
// unparsable container is a hard stop for the stream rather than something to
// guess past. Exposed so it can be tested without a decoder or a guest.
struct AtracHeader {
    bool valid{};
    AtracCodec codec{AtracCodec::Atrac3Plus};
    std::uint32_t channels{};
    std::uint32_t sample_rate{};
    std::uint32_t block_align{};
    std::uint32_t data_offset{};        // where the frames start, from the buffer
    std::uint32_t data_bytes{};
    std::uint32_t total_samples{};      // the fact chunk, 0 when it is absent
    std::uint32_t samples_per_frame{};  // fixed per codec
    std::vector<std::uint8_t> extradata;
};

[[nodiscard]] AtracHeader parse_at3_header(const std::uint8_t *data, std::size_t size);

void install_atrac_hle(psprecomp::Runtime &runtime);

struct AtracStats {
    std::uint64_t streams_opened{};
    std::uint64_t streams_released{};
    std::uint64_t containers_rejected{};
    std::uint64_t frames_decoded{};
    std::uint64_t frames_past_end{};    // asked for after the last frame
    std::uint32_t open_streams{};
    bool decoder_missing{};             // the build has none, so this is silence
};
[[nodiscard]] AtracStats atrac_stats();

} // namespace defjam

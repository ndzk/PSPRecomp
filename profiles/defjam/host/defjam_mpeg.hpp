#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <vector>

namespace defjam {

// PSMF container handling and the sceMpeg surface.
//
// A PSMF file is an MPEG program stream with a 2048-byte header describing
// where the stream starts and which elementary streams it carries. The guest
// feeds packets into a ring buffer, and the library hands back access units:
// one compressed video frame, or one compressed audio frame, at a time.
//
// Everything here is container work. Turning an access unit into pixels or
// samples is the decoder's job and lives behind DecoderBackend.

// One demultiplexed access unit.
struct AccessUnit {
    std::vector<std::uint8_t> data;
    std::uint32_t pts_high{};   // the 33rd bit of the timestamp
    std::uint32_t pts{};
    std::uint32_t dts_high{};
    std::uint32_t dts{};
    bool has_timestamp{};
};

// What a PSMF header declares. Offsets are big-endian, as the container is.
struct PsmfHeader {
    bool valid{};
    std::uint32_t version{};        // the four ASCII digits after "PSMF"
    std::uint32_t stream_offset{};  // where the program stream begins
    std::uint32_t stream_size{};
    std::uint16_t stream_count{};
    bool has_video{};
    bool has_audio{};
    std::uint8_t video_stream_id{};
    std::uint8_t audio_stream_id{};
};

// Parses the 2048-byte PSMF header out of a buffer. Never throws; an
// unrecognised buffer comes back with valid == false.
[[nodiscard]] PsmfHeader parse_psmf_header(const std::uint8_t *data, std::size_t size);

// Splits an MPEG program stream into per-stream access units.
//
// Fed packets as they arrive, it accumulates PES payloads and emits an access
// unit each time a new one starts. This is deliberately separate from the HLE
// so it can be tested against a stream without a Runtime.
class ProgramStreamDemuxer {
public:
    void reset();
    void append(const std::uint8_t *data, std::size_t size);
    // Ends the current access units, so trailing data is not lost at EOF.
    void flush();

    [[nodiscard]] bool has_video() const { return !video_.empty(); }
    [[nodiscard]] bool has_audio() const { return !audio_.empty(); }
    AccessUnit take_video();
    AccessUnit take_audio();

    [[nodiscard]] std::uint64_t video_units() const { return video_units_; }
    [[nodiscard]] std::uint64_t audio_units() const { return audio_units_; }
    [[nodiscard]] std::uint64_t bytes_seen() const { return bytes_seen_; }

private:
    void emit_video();
    void emit_audio();

    std::vector<std::uint8_t> pending_;      // bytes not yet forming a whole packet
    std::vector<AccessUnit> video_;
    std::vector<AccessUnit> audio_;
    AccessUnit current_video_;
    AccessUnit current_audio_;
    bool video_open_{};
    bool audio_open_{};
    std::uint64_t video_units_{};
    std::uint64_t audio_units_{};
    std::uint64_t bytes_seen_{};
};

void install_mpeg_hle(psprecomp::Runtime &runtime);

struct MpegStats {
    std::uint64_t streams_opened{};
    std::uint64_t packets_put{};
    std::uint64_t video_units{};
    std::uint64_t audio_units{};
    std::uint64_t ringbuffer_callbacks{};
    std::uint64_t video_units_refused{};   // asked for, none demultiplexed yet
    std::uint64_t audio_units_refused{};
    std::uint64_t video_units_queued{};    // demultiplexed and waiting to be taken
    std::uint64_t audio_units_queued{};
    std::uint64_t frames_decoded{};
    std::uint64_t audio_blocks_decoded{};
};
[[nodiscard]] MpegStats mpeg_stats();

} // namespace defjam

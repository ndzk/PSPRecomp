#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace defjam {

// The decoding half of movie playback, behind an interface so the profile
// builds and runs without one.
//
// A PSP movie carries H.264 video and ATRAC3+ audio. Neither can be written
// from a published specification here: H.264's is public but large, and Sony
// never published one for ATRAC3+ at all, so every implementation of it
// descends from reverse engineering. The profile therefore takes a decoder as
// an optional third-party component rather than growing one.

// One decoded picture, in the planar 4:2:0 layout H.264 produces. Converting to
// what the guest wants is shared code, not the backend's job, so the conversion
// is written and tested once whatever decodes.
struct DecodedFrame {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::uint8_t> y;
    std::vector<std::uint8_t> u;
    std::vector<std::uint8_t> v;
    std::uint32_t y_stride{};
    std::uint32_t uv_stride{};
    std::int64_t timestamp{};   // presentation time, in the stream's own units
};

// Decoded audio, interleaved signed 16-bit stereo, which is what the PSP's
// audio path expects.
struct DecodedAudio {
    std::vector<std::int16_t> samples;
    std::int64_t timestamp{};
};

class DecoderBackend {
public:
    virtual ~DecoderBackend() = default;
    [[nodiscard]] virtual const char *name() const = 0;

    // Feeds one access unit. Returns true when a picture or a block of samples
    // came out; a decoder may legitimately consume a unit and produce nothing
    // yet, which is not an error and is reported as false with `produced` set.
    virtual bool decode_video(const std::uint8_t *data, std::size_t size, DecodedFrame &out,
                              std::string &error) = 0;
    virtual bool decode_audio(const std::uint8_t *data, std::size_t size, DecodedAudio &out,
                              std::string &error) = 0;
};

// The compiled-in backend, or nullptr with `error` explaining why there is
// none. A build without a decoder is a supported configuration, not a fault.
[[nodiscard]] std::unique_ptr<DecoderBackend> make_decoder_backend(std::string &error);

// True when this build has a decoder at all.
[[nodiscard]] bool decoder_available();

// Converts a decoded picture to 32-bit ABGR8888, the PSP display format, into a
// buffer `stride` pixels wide. Written here rather than taken from a scaling
// library so the profile depends on a decoder and nothing else.
//
// Uses the BT.601 limited-range coefficients that standard-definition H.264
// content is encoded against.
void frame_to_abgr8888(const DecodedFrame &frame, std::uint32_t stride,
                       std::vector<std::uint32_t> &out);

} // namespace defjam

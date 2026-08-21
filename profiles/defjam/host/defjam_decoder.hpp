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
    // Whether the planes carry full-range values (0..255, the yuvj420p form
    // this title's later movies decode to) rather than studio range (16..235).
    // The conversion below owes the caller the right coefficients for each.
    bool full_range{};
    // Presentation time, in the stream's own units, and whether the decoder
    // supplied one at all. A backend fed access units carrying no timestamps
    // has nothing to report here, and saying so is not the same as reporting
    // zero: the container already recorded the real time, and overwriting it
    // with a decoder's blank costs the caller its only sync reference.
    std::int64_t timestamp{};
    bool has_timestamp{};
};

// Decoded audio, interleaved signed 16-bit stereo, which is what the PSP's
// audio path expects.
struct DecodedAudio {
    std::vector<std::int16_t> samples;
    std::int64_t timestamp{};
    bool has_timestamp{};   // as above
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

    // Drops everything the movie just played left behind: buffered elementary
    // stream bytes, any framing measured from that stream, and the codecs' own
    // reference frames. A decoder is reused across movies, so without this the
    // second one is decoded against the first one's state.
    virtual void reset() = 0;
};

// The compiled-in backend, or nullptr with `error` explaining why there is
// none. A build without a decoder is a supported configuration, not a fault.
[[nodiscard]] std::unique_ptr<DecoderBackend> make_decoder_backend(std::string &error);

// True when this build has a decoder at all.
[[nodiscard]] bool decoder_available();

// ---------------------------------------------------------------------------
// Standalone ATRAC streams
// ---------------------------------------------------------------------------
// sceAtrac3plus is the library a title uses for streamed audio - music, and
// anything else that is not the soundtrack inside a movie. It is a separate
// surface from sceMpeg's audio, but the same codec underneath, so it is served
// by the same optional backend.

enum class AtracCodec { Atrac3, Atrac3Plus };

// What the RIFF/WAVE container states about the stream. The decoder is told
// these rather than inferring them: ATRAC frames carry no header of their own,
// so the block size in particular has to come from the container.
struct AtracFormat {
    AtracCodec codec{AtracCodec::Atrac3Plus};
    std::uint32_t channels{2};
    std::uint32_t sample_rate{44100};
    std::uint32_t block_align{};
    std::vector<std::uint8_t> extradata;   // the fmt chunk's codec-private tail
};

class AtracDecoder {
public:
    virtual ~AtracDecoder() = default;
    // Decodes one frame, which is exactly block_align bytes. Returns the
    // number of samples per channel, 0 when the decoder consumed the frame
    // without producing one, or -1 with `error` set.
    virtual int decode(const std::uint8_t *data, std::size_t size,
                       std::vector<std::int16_t> &out, std::string &error) = 0;
};

// The compiled-in backend for one stream, or nullptr with `error` explaining
// why there is none. As with the movie decoder, a build without one is a
// supported configuration: it costs the title its music, not its run.
[[nodiscard]] std::unique_ptr<AtracDecoder> make_atrac_decoder(const AtracFormat &format,
                                                               std::string &error);

// Converts a decoded picture to 32-bit ABGR8888, the PSP display format, into a
// buffer `stride` pixels wide. Written here rather than taken from a scaling
// library so the profile depends on a decoder and nothing else.
//
// Uses BT.601 coefficients; `frame.full_range` selects between the studio
// form (luma 16..235) and the full-range form (0..255) that yuvj420p streams
// carry. Feeding a full-range picture through the studio formula crushes
// blacks and clips whites, which is a wrong picture delivered confidently.
//
// Returns false when the picture cannot be laid out as asked - an empty frame,
// or a stride narrower than it. `out` is left as an opaque black field of the
// requested size, which is what a caller that ignores the result would have
// displayed anyway; the difference is that it can now tell that apart from a
// frame that is genuinely black.
[[nodiscard]] bool frame_to_abgr8888(const DecodedFrame &frame, std::uint32_t stride,
                                     std::vector<std::uint32_t> &out);

} // namespace defjam

#include "defjam_decoder.hpp"

#include <algorithm>

namespace defjam {
namespace {

std::uint8_t clamp_to_byte(std::int32_t value) {
    return static_cast<std::uint8_t>(std::clamp(value, 0, 255));
}

} // namespace

void frame_to_abgr8888(const DecodedFrame &frame, std::uint32_t stride,
                       std::vector<std::uint32_t> &out) {
    out.assign(static_cast<std::size_t>(stride) * frame.height, 0xFF000000u);
    if (frame.width == 0u || frame.height == 0u || stride < frame.width) return;

    for (std::uint32_t row = 0; row < frame.height; ++row) {
        const std::uint8_t *luma = frame.y.data() + static_cast<std::size_t>(row) * frame.y_stride;
        // Chroma is at half resolution in both directions.
        const std::size_t chroma_row = static_cast<std::size_t>(row / 2u) * frame.uv_stride;
        const std::uint8_t *cb = frame.u.data() + chroma_row;
        const std::uint8_t *cr = frame.v.data() + chroma_row;
        std::uint32_t *target = out.data() + static_cast<std::size_t>(row) * stride;

        for (std::uint32_t column = 0; column < frame.width; ++column) {
            // BT.601 limited range: luma spans 16..235 and chroma is centred on
            // 128, so both are offset before scaling.
            const std::int32_t c = static_cast<std::int32_t>(luma[column]) - 16;
            const std::int32_t d = static_cast<std::int32_t>(cb[column / 2u]) - 128;
            const std::int32_t e = static_cast<std::int32_t>(cr[column / 2u]) - 128;

            const std::uint8_t r = clamp_to_byte((298 * c + 409 * e + 128) >> 8);
            const std::uint8_t g = clamp_to_byte((298 * c - 100 * d - 208 * e + 128) >> 8);
            const std::uint8_t b = clamp_to_byte((298 * c + 516 * d + 128) >> 8);

            // ABGR8888 is little-endian RGBA in memory: red in the low byte.
            target[column] = 0xFF000000u | (static_cast<std::uint32_t>(b) << 16u) |
                             (static_cast<std::uint32_t>(g) << 8u) | static_cast<std::uint32_t>(r);
        }
    }
}

#if !defined(DEFJAM_HAS_FFMPEG)

bool decoder_available() { return false; }

std::unique_ptr<DecoderBackend> make_decoder_backend(std::string &error) {
    error =
        "this build has no movie decoder; configure with -DPSPRECOMP_DEFJAM_FFMPEG=ON "
        "and an LGPL FFmpeg to enable one";
    return nullptr;
}

#endif  // !DEFJAM_HAS_FFMPEG

} // namespace defjam

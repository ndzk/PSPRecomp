#include "defjam_atrac.hpp"

#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
#include <memory>
#include <span>
#include <string>

namespace defjam {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;

// From pspsdk's pspatrac3.h, which is BSD licensed. Only the ones this surface
// can actually produce are listed; the rest describe states it does not model.
constexpr std::uint32_t kErrorAtracApiFail = 0x80630002u;
constexpr std::uint32_t kErrorAtracBadAtracId = 0x80630005u;
constexpr std::uint32_t kErrorAtracUnknownFormat = 0x80630006u;
constexpr std::uint32_t kErrorAtracAllDataWasDecoded = 0x80630024u;

// The container's format tag, as a .at3 file writes it.
constexpr std::uint16_t kWaveFormatAtrac3 = 0x0270u;
constexpr std::uint16_t kWaveFormatExtensible = 0xFFFEu;

// Frames are a fixed length per codec and the container does not state it.
constexpr std::uint32_t kAtrac3SamplesPerFrame = 1024u;
constexpr std::uint32_t kAtrac3PlusSamplesPerFrame = 2048u;

// The PSP's audio path is stereo 16-bit, so that is what a decoded frame
// occupies whatever the stream's own channel count is.
constexpr std::uint32_t kOutputChannels = 2u;

// "all the data is already in memory", which is what this surface always
// reports: the title handed over the whole file in one call.
constexpr std::uint32_t kAllDataOnMemory = static_cast<std::uint32_t>(-1);

std::uint16_t read_le16(const std::uint8_t *bytes) {
    return static_cast<std::uint16_t>(bytes[0] | (static_cast<std::uint32_t>(bytes[1]) << 8u));
}
std::uint32_t read_le32(const std::uint8_t *bytes) {
    return static_cast<std::uint32_t>(bytes[0]) | (static_cast<std::uint32_t>(bytes[1]) << 8u) |
           (static_cast<std::uint32_t>(bytes[2]) << 16u) |
           (static_cast<std::uint32_t>(bytes[3]) << 24u);
}

void set_return(AllegrexContext &ctx, std::uint32_t value) { ctx.set_gpr(2, value); }

struct AtracStream {
    AtracHeader header;
    std::unique_ptr<AtracDecoder> decoder;
    std::vector<std::uint8_t> data;   // the frames, copied out of guest memory
    std::uint32_t frame_index{};
    std::uint32_t frame_count{};
    std::int32_t loop_num{};
};

std::map<std::int32_t, AtracStream> g_streams;
std::int32_t g_next_atrac_id = 1;
AtracStats g_stats;
std::string g_decoder_error;

AtracStream *stream_at(std::int32_t id) {
    const auto it = g_streams.find(id);
    return it == g_streams.end() ? nullptr : &it->second;
}

} // namespace

// ---------------------------------------------------------------------------
// Container parsing
// ---------------------------------------------------------------------------
AtracHeader parse_at3_header(const std::uint8_t *data, std::size_t size) {
    AtracHeader header;
    // RIFF header, then "WAVE", then chunks. Twelve bytes before the first one.
    if (data == nullptr || size < 12u) return header;
    if (std::memcmp(data, "RIFF", 4) != 0 || std::memcmp(data + 8, "WAVE", 4) != 0) return header;

    bool have_format = false;
    std::size_t cursor = 12u;
    while (cursor + 8u <= size) {
        const std::uint8_t *chunk = data + cursor;
        const std::uint32_t length = read_le32(chunk + 4);
        const std::size_t payload = cursor + 8u;
        if (length > size - payload) break;   // a chunk that runs past the buffer

        if (std::memcmp(chunk, "fmt ", 4) == 0 && length >= 16u) {
            const std::uint8_t *fmt = data + payload;
            const std::uint16_t tag = read_le16(fmt);
            if (tag == kWaveFormatAtrac3) header.codec = AtracCodec::Atrac3;
            else if (tag == kWaveFormatExtensible) header.codec = AtracCodec::Atrac3Plus;
            else return AtracHeader{};        // not a format this can decode
            header.channels = read_le16(fmt + 2);
            header.sample_rate = read_le32(fmt + 4);
            header.block_align = read_le16(fmt + 12);
            // Anything past the fixed 16 bytes, less the cbSize field itself,
            // is the codec's own tail. ATRAC3 needs it; ATRAC3+ does not.
            if (length >= 18u) {
                const std::uint32_t extra = read_le16(fmt + 16);
                const std::uint32_t available = std::min<std::uint32_t>(extra, length - 18u);
                header.extradata.assign(fmt + 18, fmt + 18 + available);
            }
            have_format = true;
        } else if (std::memcmp(chunk, "fact", 4) == 0 && length >= 4u) {
            header.total_samples = read_le32(data + payload);
        } else if (std::memcmp(chunk, "data", 4) == 0) {
            header.data_offset = static_cast<std::uint32_t>(payload);
            header.data_bytes = length;
        }

        // Chunks are padded to an even length.
        cursor = payload + length + (length & 1u);
    }

    if (!have_format || header.block_align == 0u || header.data_bytes == 0u) return AtracHeader{};
    if (header.channels == 0u || header.channels > 2u) return AtracHeader{};
    header.samples_per_frame = header.codec == AtracCodec::Atrac3Plus ? kAtrac3PlusSamplesPerFrame
                                                                     : kAtrac3SamplesPerFrame;
    header.valid = true;
    return header;
}

AtracStats atrac_stats() {
    AtracStats stats = g_stats;
    stats.open_streams = static_cast<std::uint32_t>(g_streams.size());
    return stats;
}

// ---------------------------------------------------------------------------
// sceAtrac3plus
// ---------------------------------------------------------------------------
void install_atrac_hle(Runtime &runtime) {
    g_streams.clear();
    g_next_atrac_id = 1;
    g_stats = AtracStats{};
    g_decoder_error.clear();

    runtime.register_hle("sceAtrac3plus", 0x7A20E7AFu, [](Runtime &rt, AllegrexContext &ctx) {
        // (buffer, size) -> atrac id. The whole file arrives here at once.
        const std::uint32_t buffer = ctx.gpr[4];
        const std::uint32_t size = ctx.gpr[5];
        if (buffer == 0u || size == 0u || !rt.memory().contains(buffer, size)) {
            set_return(ctx, kErrorAtracApiFail);
            return;
        }
        std::vector<std::uint8_t> file(size);
        rt.memory().copy_out(buffer, file);

        AtracStream stream;
        stream.header = parse_at3_header(file.data(), file.size());
        if (!stream.header.valid) {
            ++g_stats.containers_rejected;
            runtime_log_line("sceAtracSetDataAndGetID: " + std::to_string(size) +
                             " bytes at " + psprecomp::hex32(buffer) +
                             " is not an ATRAC container this profile reads");
            set_return(ctx, kErrorAtracUnknownFormat);
            return;
        }

        const std::uint32_t end =
            std::min<std::uint32_t>(stream.header.data_offset + stream.header.data_bytes, size);
        stream.data.assign(file.begin() + stream.header.data_offset, file.begin() + end);
        stream.frame_count = static_cast<std::uint32_t>(stream.data.size()) /
                             stream.header.block_align;

        // A build without a decoder still hands out an id and plays silence:
        // losing the music is better than ending the run, and the title has no
        // way to ask for a different outcome.
        AtracFormat format;
        format.codec = stream.header.codec;
        format.channels = stream.header.channels;
        format.sample_rate = stream.header.sample_rate;
        format.block_align = stream.header.block_align;
        format.extradata = stream.header.extradata;
        std::string error;
        stream.decoder = make_atrac_decoder(format, error);
        if (stream.decoder == nullptr && !g_stats.decoder_missing) {
            g_stats.decoder_missing = true;
            g_decoder_error = error;
            runtime_log_line("ATRAC audio is silent: " + error);
        }

        const std::int32_t id = g_next_atrac_id++;
        ++g_stats.streams_opened;
        runtime_log_line("sceAtracSetDataAndGetID id=" + std::to_string(id) + " " +
                         (stream.header.codec == AtracCodec::Atrac3Plus ? "AT3+" : "AT3") + " " +
                         std::to_string(stream.header.channels) + "ch " +
                         std::to_string(stream.header.sample_rate) + "Hz block " +
                         std::to_string(stream.header.block_align) + " frames " +
                         std::to_string(stream.frame_count));
        g_streams.emplace(id, std::move(stream));
        set_return(ctx, static_cast<std::uint32_t>(id));
    });

    runtime.register_hle("sceAtrac3plus", 0x61EB33F5u, [](Runtime &, AllegrexContext &ctx) {
        const auto id = static_cast<std::int32_t>(ctx.gpr[4]);
        if (g_streams.erase(id) == 0u) {
            set_return(ctx, kErrorAtracBadAtracId);
            return;
        }
        ++g_stats.streams_released;
        set_return(ctx, 0u);
    });

    runtime.register_hle("sceAtrac3plus", 0x6A8C3CD5u, [](Runtime &rt, AllegrexContext &ctx) {
        // (id, outSamples, outN, outEnd, outRemainFrame). The fifth argument is
        // in $t0, as the other five-argument imports in this profile are.
        AtracStream *stream = stream_at(static_cast<std::int32_t>(ctx.gpr[4]));
        if (stream == nullptr) {
            set_return(ctx, kErrorAtracBadAtracId);
            return;
        }
        const std::uint32_t out_samples = ctx.gpr[5];
        const std::uint32_t out_n = ctx.gpr[6];
        const std::uint32_t out_end = ctx.gpr[7];
        const std::uint32_t out_remain = ctx.gpr[8];

        const auto report = [&](std::uint32_t samples, std::uint32_t ended) {
            if (out_n != 0u && rt.memory().contains(out_n, 4u)) rt.memory().store32(out_n, samples);
            if (out_end != 0u && rt.memory().contains(out_end, 4u))
                rt.memory().store32(out_end, ended);
            // Everything the title gave us is in memory already, which is what
            // -1 means here; anything else would have it try to stream more.
            if (out_remain != 0u && rt.memory().contains(out_remain, 4u))
                rt.memory().store32(out_remain, kAllDataOnMemory);
        };

        if (stream->frame_index >= stream->frame_count) {
            ++g_stats.frames_past_end;
            report(0u, 1u);
            set_return(ctx, kErrorAtracAllDataWasDecoded);
            return;
        }

        const std::uint32_t frame = stream->frame_index++;
        const std::uint32_t block = stream->header.block_align;
        std::vector<std::int16_t> pcm;
        int produced = 0;
        if (stream->decoder != nullptr) {
            std::string error;
            produced = stream->decoder->decode(stream->data.data() + frame * block, block, pcm,
                                               error);
            if (produced < 0) {
                runtime_log_line("sceAtracDecodeData: " + error);
                report(0u, 0u);
                set_return(ctx, kErrorAtracApiFail);
                return;
            }
        }

        // A frame the decoder swallowed without output, and a build with no
        // decoder at all, both come back as silence of the expected length so
        // the title's own timing keeps running.
        const std::uint32_t samples =
            produced > 0 ? static_cast<std::uint32_t>(produced) : stream->header.samples_per_frame;
        pcm.resize(static_cast<std::size_t>(samples) * kOutputChannels, 0);

        const auto bytes = static_cast<std::uint32_t>(pcm.size() * sizeof(std::int16_t));
        if (out_samples != 0u && rt.memory().contains(out_samples, bytes)) {
            rt.memory().copy_in(out_samples,
                                std::span<const std::uint8_t>(
                                    reinterpret_cast<const std::uint8_t *>(pcm.data()), bytes));
            ++g_stats.frames_decoded;
        } else if (out_samples != 0u) {
            runtime_log_line("sceAtracDecodeData: refused " + std::to_string(bytes) +
                             " bytes at " + psprecomp::hex32(out_samples));
        }

        report(samples, stream->frame_index >= stream->frame_count ? 1u : 0u);
        set_return(ctx, 0u);
    });

    runtime.register_hle("sceAtrac3plus", 0x5D268707u, [](Runtime &rt, AllegrexContext &ctx) {
        // (id, writePointer, availableBytes, readOffset). Nothing is ever
        // needed: reporting anything available would have the title read more
        // of a file it has already handed over in full.
        AtracStream *stream = stream_at(static_cast<std::int32_t>(ctx.gpr[4]));
        if (stream == nullptr) {
            set_return(ctx, kErrorAtracBadAtracId);
            return;
        }
        if (ctx.gpr[5] != 0u && rt.memory().contains(ctx.gpr[5], 4u))
            rt.memory().store32(ctx.gpr[5], 0u);
        if (ctx.gpr[6] != 0u && rt.memory().contains(ctx.gpr[6], 4u))
            rt.memory().store32(ctx.gpr[6], 0u);
        if (ctx.gpr[7] != 0u && rt.memory().contains(ctx.gpr[7], 4u))
            rt.memory().store32(ctx.gpr[7], stream->header.data_offset + stream->header.data_bytes);
        set_return(ctx, 0u);
    });

    runtime.register_hle("sceAtrac3plus", 0x7DB31251u, [](Runtime &, AllegrexContext &ctx) {
        // (id, bytesToAdd). There is nowhere to add to; the answer above says
        // so, and a title that adds anyway is not refused for it.
        if (stream_at(static_cast<std::int32_t>(ctx.gpr[4])) == nullptr) {
            set_return(ctx, kErrorAtracBadAtracId);
            return;
        }
        set_return(ctx, 0u);
    });

    const auto sample_query = [](bool next) {
        return [next](Runtime &rt, AllegrexContext &ctx) {
            AtracStream *stream = stream_at(static_cast<std::int32_t>(ctx.gpr[4]));
            if (stream == nullptr) {
                set_return(ctx, kErrorAtracBadAtracId);
                return;
            }
            // The next frame yields nothing once the stream is spent; the
            // maximum is a property of the codec and does not change.
            const std::uint32_t samples =
                next && stream->frame_index >= stream->frame_count
                    ? 0u
                    : stream->header.samples_per_frame;
            if (ctx.gpr[5] != 0u && rt.memory().contains(ctx.gpr[5], 4u))
                rt.memory().store32(ctx.gpr[5], samples);
            set_return(ctx, 0u);
        };
    };
    runtime.register_hle("sceAtrac3plus", 0x36FAABFBu, sample_query(true));
    runtime.register_hle("sceAtrac3plus", 0xD6A5F2F7u, sample_query(false));

    runtime.register_hle("sceAtrac3plus", 0x868120B5u, [](Runtime &, AllegrexContext &ctx) {
        AtracStream *stream = stream_at(static_cast<std::int32_t>(ctx.gpr[4]));
        if (stream == nullptr) {
            set_return(ctx, kErrorAtracBadAtracId);
            return;
        }
        // Recorded rather than acted on: looping a stream means replaying it,
        // and nothing here observes the count yet.
        stream->loop_num = static_cast<std::int32_t>(ctx.gpr[5]);
        set_return(ctx, 0u);
    });
}

} // namespace defjam

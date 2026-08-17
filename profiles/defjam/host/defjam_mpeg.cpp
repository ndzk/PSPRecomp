#include "defjam_mpeg.hpp"

#include "defjam_decoder.hpp"
#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
#include <memory>
#include <utility>
#include <string>

namespace defjam {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;

// The container is big-endian throughout, unlike the machine reading it.
std::uint32_t read_be32(const std::uint8_t *bytes) {
    return (static_cast<std::uint32_t>(bytes[0]) << 24u) |
           (static_cast<std::uint32_t>(bytes[1]) << 16u) |
           (static_cast<std::uint32_t>(bytes[2]) << 8u) | static_cast<std::uint32_t>(bytes[3]);
}
std::uint16_t read_be16(const std::uint8_t *bytes) {
    return static_cast<std::uint16_t>((static_cast<std::uint32_t>(bytes[0]) << 8u) | bytes[1]);
}

// PSMF header layout, in bytes from the start of the file.
constexpr std::size_t kPsmfHeaderSize = 2048u;
constexpr std::size_t kPsmfStreamOffsetField = 0x08u;
constexpr std::size_t kPsmfStreamSizeField = 0x0Cu;
constexpr std::size_t kPsmfStreamCountField = 0x80u;
constexpr std::size_t kPsmfStreamTable = 0x82u;
constexpr std::size_t kPsmfStreamEntrySize = 16u;

// MPEG program stream markers.
constexpr std::uint8_t kPackHeader = 0xBAu;
constexpr std::uint8_t kSystemHeader = 0xBBu;
constexpr std::uint8_t kProgramEnd = 0xB9u;
constexpr std::uint8_t kPaddingStream = 0xBEu;
constexpr std::uint8_t kPrivateStream2 = 0xBFu;
constexpr std::uint8_t kPrivateStream1 = 0xBDu;  // carries the audio
constexpr std::uint8_t kVideoStreamBase = 0xE0u;

// A PSMF pack is always one 2048-byte sector.
constexpr std::uint32_t kPacketSize = 2048u;

// Sizes the library reports to the guest, which sizes its own allocations from
// them. Per-packet overhead and the elementary stream sizes are the values the
// hardware library reports; a smaller answer would have the guest allocate too
// little and overrun.
constexpr std::uint32_t kMpegMemorySize = 0x10000u;
constexpr std::uint32_t kRingbufferPacketOverhead = 104u;
constexpr std::uint32_t kAvcEsSize = 2048u;
constexpr std::uint32_t kAtracEsSize = 2112u;
constexpr std::uint32_t kAtracEsOutputSize = 8192u;

// SceMpegRingbuffer, in field order: packets, then four words the library owns,
// the data pointer, the callback and its argument, two more library words and
// the owning handle.
constexpr std::uint32_t kRingbufferPacketsOffset = 0u;
constexpr std::uint32_t kRingbufferReadOffset = 4u;
constexpr std::uint32_t kRingbufferWriteOffset = 8u;
constexpr std::uint32_t kRingbufferAvailableOffset = 12u;
constexpr std::uint32_t kRingbufferDataOffset = 20u;
constexpr std::uint32_t kRingbufferCallbackOffset = 24u;
constexpr std::uint32_t kRingbufferCallbackParamOffset = 28u;
constexpr std::uint32_t kRingbufferMpegOffset = 40u;
constexpr std::uint32_t kRingbufferSize = 44u;

// SceMpegAu: a 33-bit presentation and decode timestamp, then the elementary
// stream buffer and how much of it this access unit fills.
constexpr std::uint32_t kAuPtsHighOffset = 0u;
constexpr std::uint32_t kAuPtsOffset = 4u;
constexpr std::uint32_t kAuDtsHighOffset = 8u;
constexpr std::uint32_t kAuDtsOffset = 12u;
constexpr std::uint32_t kAuEsBufferOffset = 16u;
constexpr std::uint32_t kAuSizeOffset = 20u;

// A timestamp that is not present is reported as this rather than as zero,
// which is a valid time.
constexpr std::uint32_t kNoTimestamp = 0xFFFFFFFFu;

void set_return(AllegrexContext &ctx, std::uint32_t value) { ctx.set_gpr(2, value); }

// One playing movie.
struct MpegContext {
    std::uint32_t handle{};
    std::uint32_t ringbuffer{};
    std::uint32_t frame_width{};
    ProgramStreamDemuxer demuxer;
    bool video_registered{};
    bool audio_registered{};
    // Elementary stream buffers handed to the guest, so a free can be checked.
    std::vector<std::uint32_t> es_buffers;
    // The access units last handed out. On hardware these sit in the library's
    // own memory, which the guest never reads directly, so they are kept here
    // rather than written into a guest buffer that has no address of its own.
    AccessUnit pending_video;
    AccessUnit pending_audio;
    // 32-bit ABGR8888 unless the guest asks for another, which this title does
    // not: it never imports sceMpegAvcDecodeMode.
    std::uint32_t pixel_mode{3u};
};

std::map<std::uint32_t, MpegContext> g_contexts;
std::unique_ptr<DecoderBackend> g_decoder;
std::string g_decoder_error;
MpegStats g_stats;
bool g_initialised = false;
std::uint32_t g_next_es_buffer = 0;

MpegContext *context_for(Runtime &rt, std::uint32_t handle_pointer) {
    // The guest holds a pointer to its own storage whose first word the library
    // fills in; that word is the handle everything else is keyed on.
    if (handle_pointer == 0u || !rt.memory().contains(handle_pointer, 4u)) return nullptr;
    const std::uint32_t handle = rt.memory().load32(handle_pointer);
    const auto it = g_contexts.find(handle);
    return it == g_contexts.end() ? nullptr : &it->second;
}

void write_access_unit(Runtime &rt, std::uint32_t au_pointer, const AccessUnit &unit) {
    const auto size = static_cast<std::uint32_t>(unit.data.size());
    rt.memory().store32(au_pointer + kAuSizeOffset, size);
    rt.memory().store32(au_pointer + kAuPtsHighOffset,
                        unit.has_timestamp ? unit.pts_high : kNoTimestamp);
    rt.memory().store32(au_pointer + kAuPtsOffset, unit.has_timestamp ? unit.pts : kNoTimestamp);
    rt.memory().store32(au_pointer + kAuDtsHighOffset,
                        unit.has_timestamp ? unit.dts_high : kNoTimestamp);
    rt.memory().store32(au_pointer + kAuDtsOffset, unit.has_timestamp ? unit.dts : kNoTimestamp);
}

} // namespace

// ---------------------------------------------------------------------------
// Container parsing
// ---------------------------------------------------------------------------
PsmfHeader parse_psmf_header(const std::uint8_t *data, std::size_t size) {
    PsmfHeader header;
    if (data == nullptr || size < kPsmfStreamTable + kPsmfStreamEntrySize) return header;
    if (std::memcmp(data, "PSMF", 4) != 0) return header;

    // The version is four ASCII digits, so "0014" reads as 14.
    std::uint32_t version = 0u;
    for (std::size_t i = 4; i < 8; ++i) {
        if (data[i] < '0' || data[i] > '9') return header;
        version = version * 10u + static_cast<std::uint32_t>(data[i] - '0');
    }

    header.valid = true;
    header.version = version;
    header.stream_offset = read_be32(data + kPsmfStreamOffsetField);
    header.stream_size = read_be32(data + kPsmfStreamSizeField);
    header.stream_count = read_be16(data + kPsmfStreamCountField);

    for (std::uint16_t i = 0; i < header.stream_count; ++i) {
        const std::size_t entry = kPsmfStreamTable + static_cast<std::size_t>(i) * kPsmfStreamEntrySize;
        if (entry + kPsmfStreamEntrySize > size) break;
        const std::uint8_t id = data[entry];
        if (id >= kVideoStreamBase && id < kVideoStreamBase + 16u) {
            header.has_video = true;
            header.video_stream_id = id;
        } else if (id == kPrivateStream1) {
            header.has_audio = true;
            header.audio_stream_id = id;
        }
    }
    return header;
}

void ProgramStreamDemuxer::reset() {
    pending_.clear();
    video_.clear();
    audio_.clear();
    current_video_ = AccessUnit{};
    current_audio_ = AccessUnit{};
    video_open_ = false;
    audio_open_ = false;
    video_units_ = 0;
    audio_units_ = 0;
    bytes_seen_ = 0;
}

void ProgramStreamDemuxer::emit_video() {
    if (!video_open_) return;
    if (!current_video_.data.empty()) {
        video_.push_back(std::move(current_video_));
        ++video_units_;
    }
    current_video_ = AccessUnit{};
    video_open_ = false;
}

void ProgramStreamDemuxer::emit_audio() {
    if (!audio_open_) return;
    if (!current_audio_.data.empty()) {
        audio_.push_back(std::move(current_audio_));
        ++audio_units_;
    }
    current_audio_ = AccessUnit{};
    audio_open_ = false;
}

void ProgramStreamDemuxer::append(const std::uint8_t *data, std::size_t size) {
    if (data == nullptr || size == 0u) return;
    bytes_seen_ += size;
    pending_.insert(pending_.end(), data, data + size);

    std::size_t cursor = 0u;
    while (cursor + 6u <= pending_.size()) {
        const std::uint8_t *p = pending_.data() + cursor;
        if (!(p[0] == 0u && p[1] == 0u && p[2] == 1u)) {
            ++cursor;  // resynchronise rather than trusting the stream blindly
            continue;
        }
        const std::uint8_t id = p[3];

        if (id == kPackHeader) {
            // A pack header is 14 bytes plus however much stuffing it declares.
            if (cursor + 14u > pending_.size()) break;
            const std::size_t stuffing = pending_[cursor + 13u] & 0x07u;
            if (cursor + 14u + stuffing > pending_.size()) break;
            cursor += 14u + stuffing;
            continue;
        }
        if (id == kProgramEnd) {
            cursor += 4u;
            continue;
        }

        const std::size_t length = read_be16(p + 4);
        if (cursor + 6u + length > pending_.size()) break;  // wait for the rest

        if (id == kSystemHeader || id == kPaddingStream || id == kPrivateStream2) {
            cursor += 6u + length;
            continue;
        }

        // A PES packet: two flag bytes, then the header length, then optional
        // timestamps, then the payload.
        if (length < 3u) {
            cursor += 6u + length;
            continue;
        }
        const std::uint8_t flags = p[7];
        const std::size_t header_length = p[8];
        if (3u + header_length > length) {
            cursor += 6u + length;
            continue;
        }

        AccessUnit *current = nullptr;
        bool *open = nullptr;
        if (id >= kVideoStreamBase && id < kVideoStreamBase + 16u) {
            current = &current_video_;
            open = &video_open_;
        } else if (id == kPrivateStream1) {
            current = &current_audio_;
            open = &audio_open_;
        }

        if (current != nullptr) {
            const bool has_pts = (flags & 0x80u) != 0u;
            const bool has_dts = (flags & 0x40u) != 0u;
            // A packet carrying a timestamp begins a new access unit; the
            // packets after it continue the same one.
            if (has_pts) {
                if (current == &current_video_) emit_video();
                else emit_audio();
            }
            if (!*open) {
                *current = AccessUnit{};
                *open = true;
            }
            if (has_pts && header_length >= 5u) {
                const std::uint8_t *ts = p + 9;
                // 33 bits split across five bytes, with marker bits between.
                const std::uint64_t value =
                    (static_cast<std::uint64_t>(ts[0] & 0x0Eu) << 29u) |
                    (static_cast<std::uint64_t>(ts[1]) << 22u) |
                    (static_cast<std::uint64_t>(ts[2] & 0xFEu) << 14u) |
                    (static_cast<std::uint64_t>(ts[3]) << 7u) |
                    (static_cast<std::uint64_t>(ts[4] & 0xFEu) >> 1u);
                current->has_timestamp = true;
                current->pts_high = static_cast<std::uint32_t>(value >> 32u);
                current->pts = static_cast<std::uint32_t>(value & 0xFFFFFFFFu);
                current->dts_high = current->pts_high;
                current->dts = current->pts;
                if (has_dts && header_length >= 10u) {
                    const std::uint8_t *d = p + 14;
                    const std::uint64_t dts =
                        (static_cast<std::uint64_t>(d[0] & 0x0Eu) << 29u) |
                        (static_cast<std::uint64_t>(d[1]) << 22u) |
                        (static_cast<std::uint64_t>(d[2] & 0xFEu) << 14u) |
                        (static_cast<std::uint64_t>(d[3]) << 7u) |
                        (static_cast<std::uint64_t>(d[4] & 0xFEu) >> 1u);
                    current->dts_high = static_cast<std::uint32_t>(dts >> 32u);
                    current->dts = static_cast<std::uint32_t>(dts & 0xFFFFFFFFu);
                }
            }

            const std::size_t payload_offset = cursor + 9u + header_length;
            const std::size_t payload_size = length - 3u - header_length;
            const std::uint8_t *payload = pending_.data() + payload_offset;
            std::size_t skip = 0u;
            // Private stream 1 prefixes each payload with a small sub-stream
            // header the elementary stream does not include.
            if (id == kPrivateStream1 && payload_size >= 4u) skip = 4u;
            if (payload_size > skip)
                current->data.insert(current->data.end(), payload + skip, payload + payload_size);
        }

        cursor += 6u + length;
    }

    if (cursor != 0u) pending_.erase(pending_.begin(), pending_.begin() + static_cast<long>(cursor));
}

void ProgramStreamDemuxer::flush() {
    emit_video();
    emit_audio();
}

AccessUnit ProgramStreamDemuxer::take_video() {
    AccessUnit unit = std::move(video_.front());
    video_.erase(video_.begin());
    return unit;
}

AccessUnit ProgramStreamDemuxer::take_audio() {
    AccessUnit unit = std::move(audio_.front());
    audio_.erase(audio_.begin());
    return unit;
}

MpegStats mpeg_stats() { return g_stats; }

// ---------------------------------------------------------------------------
// sceMpeg
// ---------------------------------------------------------------------------
void install_mpeg_hle(Runtime &runtime) {
    g_contexts.clear();
    g_decoder = make_decoder_backend(g_decoder_error);
    runtime_log_line(g_decoder != nullptr
                         ? std::string("movie decoder: ") + g_decoder->name()
                         : "movie decoder: none (" + g_decoder_error + ")");
    g_stats = MpegStats{};
    g_initialised = false;
    g_next_es_buffer = 0u;

    runtime.register_hle("sceMpeg", 0x682A619Bu, [](Runtime &, AllegrexContext &ctx) {
        g_initialised = true;
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0x874624D6u, [](Runtime &, AllegrexContext &ctx) {
        g_initialised = false;
        g_contexts.clear();
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0xC132E22Fu, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, kMpegMemorySize);
    });

    runtime.register_hle("sceMpeg", 0xD8C5F121u, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, data, size, ringbuffer, frameWidth, unk, unk). The guest owns
        // the storage; the library writes a handle into its first word.
        const std::uint32_t mpeg = ctx.gpr[4];
        const std::uint32_t size = ctx.gpr[6];
        const std::uint32_t ringbuffer = ctx.gpr[7];
        if (mpeg == 0u || !rt.memory().contains(mpeg, 4u) || size < kMpegMemorySize) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        const std::uint32_t handle = 0x4D504700u + static_cast<std::uint32_t>(g_contexts.size()) + 1u;
        MpegContext context;
        context.handle = handle;
        context.ringbuffer = ringbuffer;
        context.frame_width = ctx.gpr[8];  // fifth argument, in $t0
        g_contexts.emplace(handle, std::move(context));
        rt.memory().store32(mpeg, handle);
        if (ringbuffer != 0u && rt.memory().contains(ringbuffer, kRingbufferSize))
            rt.memory().store32(ringbuffer + kRingbufferMpegOffset, handle);
        ++g_stats.streams_opened;
        runtime_log_line("sceMpegCreate handle=" + psprecomp::hex32(handle) + " frameWidth=" +
                         std::to_string(ctx.gpr[8]));
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0x606A4649u, [](Runtime &rt, AllegrexContext &ctx) {
        if (MpegContext *context = context_for(rt, ctx.gpr[4]); context != nullptr)
            g_contexts.erase(context->handle);
        set_return(ctx, 0u);
    });

    // -----------------------------------------------------------------------
    // Header queries. Both read the guest's copy of the first sector.
    // -----------------------------------------------------------------------
    runtime.register_hle("sceMpeg", 0x21FF80E4u, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, buffer, out)
        const std::uint32_t buffer = ctx.gpr[5];
        const std::uint32_t out = ctx.gpr[6];
        if (buffer == 0u || !rt.memory().contains(buffer, kPsmfHeaderSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        std::vector<std::uint8_t> header(kPsmfHeaderSize);
        rt.memory().copy_out(buffer, header);
        const PsmfHeader psmf = parse_psmf_header(header.data(), header.size());
        if (!psmf.valid) {
            runtime_log_line("sceMpegQueryStreamOffset: buffer is not a PSMF header");
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        runtime_log_line("PSMF version " + std::to_string(psmf.version) + " streamOffset=" +
                         psprecomp::hex32(psmf.stream_offset) + " streamSize=" +
                         psprecomp::hex32(psmf.stream_size) + " streams=" +
                         std::to_string(psmf.stream_count) + (psmf.has_video ? " video" : "") +
                         (psmf.has_audio ? " audio" : ""));
        if (out != 0u) rt.memory().store32(out, psmf.stream_offset);
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0x611E9E11u, [](Runtime &rt, AllegrexContext &ctx) {
        // (buffer, out) - no handle, this one is a pure header read.
        const std::uint32_t buffer = ctx.gpr[4];
        const std::uint32_t out = ctx.gpr[5];
        if (buffer == 0u || !rt.memory().contains(buffer, kPsmfHeaderSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        std::vector<std::uint8_t> header(kPsmfHeaderSize);
        rt.memory().copy_out(buffer, header);
        const PsmfHeader psmf = parse_psmf_header(header.data(), header.size());
        if (!psmf.valid) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        if (out != 0u) rt.memory().store32(out, psmf.stream_size);
        set_return(ctx, 0u);
    });

    // -----------------------------------------------------------------------
    // Ring buffer
    // -----------------------------------------------------------------------
    runtime.register_hle("sceMpeg", 0xD7A29F46u, [](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t packets = ctx.gpr[4];
        set_return(ctx, packets * (kRingbufferPacketOverhead + kPacketSize));
    });
    runtime.register_hle("sceMpeg", 0x37295ED8u, [](Runtime &rt, AllegrexContext &ctx) {
        // (ringbuffer, packets, data, size, callback, callbackParam)
        const std::uint32_t ringbuffer = ctx.gpr[4];
        if (ringbuffer == 0u || !rt.memory().contains(ringbuffer, kRingbufferSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        const std::uint32_t packets = ctx.gpr[5];
        rt.memory().store32(ringbuffer + kRingbufferPacketsOffset, packets);
        rt.memory().store32(ringbuffer + kRingbufferReadOffset, 0u);
        rt.memory().store32(ringbuffer + kRingbufferWriteOffset, 0u);
        rt.memory().store32(ringbuffer + kRingbufferAvailableOffset, packets);
        rt.memory().store32(ringbuffer + kRingbufferDataOffset, ctx.gpr[6]);
        rt.memory().store32(ringbuffer + kRingbufferCallbackOffset, ctx.gpr[8]);
        rt.memory().store32(ringbuffer + kRingbufferCallbackParamOffset, ctx.gpr[9]);
        rt.memory().store32(ringbuffer + kRingbufferMpegOffset, 0u);
        runtime_log_line("sceMpegRingbufferConstruct packets=" + std::to_string(packets) +
                         " data=" + psprecomp::hex32(ctx.gpr[6]) + " callback=" +
                         psprecomp::hex32(ctx.gpr[8]));
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0x13407F13u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0xB5F6DC87u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::uint32_t ringbuffer = ctx.gpr[4];
        if (ringbuffer == 0u || !rt.memory().contains(ringbuffer, kRingbufferSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        set_return(ctx, rt.memory().load32(ringbuffer + kRingbufferAvailableOffset));
    });
    runtime.register_hle("sceMpeg", 0xB240A59Eu, [](Runtime &rt, AllegrexContext &ctx) {
        // (ringbuffer, packets, available). The data does not come from the
        // host: the guest supplies it through the callback it registered, so
        // this hands control back to the guest and finishes when it returns.
        const std::uint32_t ringbuffer = ctx.gpr[4];
        const std::uint32_t requested = ctx.gpr[5];
        if (ringbuffer == 0u || !rt.memory().contains(ringbuffer, kRingbufferSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        const std::uint32_t callback = rt.memory().load32(ringbuffer + kRingbufferCallbackOffset);
        const std::uint32_t data = rt.memory().load32(ringbuffer + kRingbufferDataOffset);
        const std::uint32_t packets = rt.memory().load32(ringbuffer + kRingbufferPacketsOffset);
        const std::uint32_t write = rt.memory().load32(ringbuffer + kRingbufferWriteOffset);
        if (callback == 0u || requested == 0u || packets == 0u) {
            set_return(ctx, 0u);
            return;
        }

        // Fill to the end of the buffer only, so the callback never wraps.
        const std::uint32_t room = std::min(requested, packets - std::min(write, packets));
        if (room == 0u) {
            set_return(ctx, 0u);
            return;
        }
        const std::uint32_t destination = data + write * kPacketSize;
        const std::uint32_t param = rt.memory().load32(ringbuffer + kRingbufferCallbackParamOffset);
        ++g_stats.ringbuffer_callbacks;

        const bool entered = call_guest_function(
            rt, ctx, callback, destination, room, param,
            [ringbuffer, destination, packets](Runtime &runtime, std::uint32_t returned) {
                const auto filled = static_cast<std::int32_t>(returned);
                if (filled <= 0) return returned;
                const auto count = static_cast<std::uint32_t>(filled);
                const std::uint32_t write_index =
                    runtime.memory().load32(ringbuffer + kRingbufferWriteOffset);
                runtime.memory().store32(ringbuffer + kRingbufferWriteOffset,
                                         (write_index + count) % std::max(1u, packets));
                g_stats.packets_put += count;

                // Feed what the guest just wrote to the demuxer. There is one
                // movie at a time, so the sole context owns it.
                if (!g_contexts.empty()) {
                    std::vector<std::uint8_t> staging(static_cast<std::size_t>(count) * kPacketSize);
                    if (runtime.memory().contains(destination,
                                                  static_cast<std::uint32_t>(staging.size()))) {
                        runtime.memory().copy_out(destination, staging);
                        g_contexts.begin()->second.demuxer.append(staging.data(), staging.size());
                    }
                }

                // The demultiplexer took the packets as they arrived, so every
                // slot is free again. Leaving them counted as occupied is what
                // stops a title refilling: it asks how much room there is, is
                // told none, and never puts anything in again.
                runtime.memory().store32(ringbuffer + kRingbufferAvailableOffset, packets);
                return returned;
            });
        if (!entered) set_return(ctx, static_cast<std::uint32_t>(-1));
    });

    // -----------------------------------------------------------------------
    // Streams and access units
    // -----------------------------------------------------------------------
    runtime.register_hle("sceMpeg", 0x42560F23u, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, streamId, unk). The returned pointer is only ever handed back
        // to this library, so a small tagged value identifies which stream.
        MpegContext *context = context_for(rt, ctx.gpr[4]);
        if (context == nullptr) {
            set_return(ctx, 0u);
            return;
        }
        const std::uint32_t stream_type = ctx.gpr[5];
        // 0 selects the AVC stream and 1 the ATRAC stream.
        if (stream_type == 0u) context->video_registered = true;
        else if (stream_type == 1u) context->audio_registered = true;
        else {
            runtime_log_line("sceMpegRegistStream: unsupported stream type " +
                             std::to_string(stream_type));
            set_return(ctx, 0u);
            return;
        }
        set_return(ctx, 0x53545200u | stream_type);
    });
    runtime.register_hle("sceMpeg", 0x591A4AA2u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 0u);
    });

    runtime.register_hle("sceMpeg", 0xA780CF7Eu, [](Runtime &rt, AllegrexContext &ctx) {
        MpegContext *context = context_for(rt, ctx.gpr[4]);
        if (context == nullptr) {
            set_return(ctx, 0u);
            return;
        }
        // The buffer identity is what matters to the guest, not its contents;
        // access units are written wherever the guest points the AU at.
        const std::uint32_t buffer = 0x4553'0000u + (++g_next_es_buffer);
        context->es_buffers.push_back(buffer);
        set_return(ctx, buffer);
    });
    runtime.register_hle("sceMpeg", 0xCEB870B1u, [](Runtime &rt, AllegrexContext &ctx) {
        if (MpegContext *context = context_for(rt, ctx.gpr[4]); context != nullptr) {
            auto &buffers = context->es_buffers;
            buffers.erase(std::remove(buffers.begin(), buffers.end(), ctx.gpr[5]), buffers.end());
        }
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceMpeg", 0xF8DCB679u, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, esSize, outSize)
        if (ctx.gpr[5] != 0u) rt.memory().store32(ctx.gpr[5], kAtracEsSize);
        if (ctx.gpr[6] != 0u) rt.memory().store32(ctx.gpr[6], kAtracEsOutputSize);
        set_return(ctx, 0u);
    });

    runtime.register_hle("sceMpeg", 0x167AFD9Eu, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, esBuffer, au). Points the access unit at its buffer and marks
        // both timestamps absent until one is demultiplexed.
        const std::uint32_t au = ctx.gpr[6];
        if (au == 0u || !rt.memory().contains(au, kAuSizeOffset + 4u)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        rt.memory().store32(au + kAuEsBufferOffset, ctx.gpr[5]);
        rt.memory().store32(au + kAuSizeOffset, 0u);
        rt.memory().store32(au + kAuPtsHighOffset, kNoTimestamp);
        rt.memory().store32(au + kAuPtsOffset, kNoTimestamp);
        rt.memory().store32(au + kAuDtsHighOffset, kNoTimestamp);
        rt.memory().store32(au + kAuDtsOffset, kNoTimestamp);
        set_return(ctx, 0u);
    });

    const auto get_access_unit = [](bool video) {
        return [video](Runtime &rt, AllegrexContext &ctx) {
            MpegContext *context = context_for(rt, ctx.gpr[4]);
            const std::uint32_t au = ctx.gpr[6];
            if (context == nullptr || au == 0u || !rt.memory().contains(au, kAuSizeOffset + 4u)) {
                set_return(ctx, static_cast<std::uint32_t>(-1));
                return;
            }
            const bool ready = video ? context->demuxer.has_video() : context->demuxer.has_audio();
            if (!ready) {
                // Nothing demultiplexed yet: the guest must put more packets in
                // before asking again. Reported as a shortage, not an error.
                set_return(ctx, static_cast<std::uint32_t>(-1));
                return;
            }
            AccessUnit unit =
                video ? context->demuxer.take_video() : context->demuxer.take_audio();
            write_access_unit(rt, au, unit);
            if (video) {
                context->pending_video = std::move(unit);
                ++g_stats.video_units;
            } else {
                context->pending_audio = std::move(unit);
                ++g_stats.audio_units;
            }
            set_return(ctx, 0u);
        };
    };
    runtime.register_hle("sceMpeg", 0xFE246728u, get_access_unit(true));
    runtime.register_hle("sceMpeg", 0xE1CE83A7u, get_access_unit(false));

    // -----------------------------------------------------------------------
    // Decoding
    // -----------------------------------------------------------------------
    runtime.register_hle("sceMpeg", 0x0E3C2E9Du, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, au, frameWidth, bufferPointer, statusPointer). bufferPointer
        // holds the address of the destination, not the destination itself.
        MpegContext *context = context_for(rt, ctx.gpr[4]);
        if (context == nullptr) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        if (g_decoder == nullptr) {
            rt.stop(std::string("sceMpegAvcDecode: ") + g_decoder_error);
            return;
        }

        const std::uint32_t au = ctx.gpr[5];
        const std::uint32_t stride = ctx.gpr[6] != 0u ? ctx.gpr[6] : context->frame_width;
        const std::uint32_t buffer_pointer = ctx.gpr[7];
        const std::uint32_t status_pointer = ctx.gpr[8];  // fifth argument, in $t0

        // An access unit is consumed once. Feeding the same bytes again on a
        // second decode call would duplicate them into the decoder's stream.
        const AccessUnit unit = std::exchange(context->pending_video, AccessUnit{});
        DecodedFrame frame;
        std::string error;
        const bool produced =
            !unit.data.empty() &&
            g_decoder->decode_video(unit.data.data(), unit.data.size(), frame, error);
        if (!error.empty()) {
            rt.stop("sceMpegAvcDecode: " + error);
            return;
        }

        if (produced && buffer_pointer != 0u && rt.memory().contains(buffer_pointer, 4u)) {
            const std::uint32_t destination = rt.memory().load32(buffer_pointer);
            std::vector<std::uint32_t> pixels;
            frame_to_abgr8888(frame, stride, pixels);
            const auto bytes = static_cast<std::uint32_t>(pixels.size() * sizeof(std::uint32_t));
            if (destination != 0u && rt.memory().contains(destination, bytes)) {
                rt.memory().copy_in(
                    destination, std::span<const std::uint8_t>(
                                     reinterpret_cast<const std::uint8_t *>(pixels.data()), bytes));
                ++g_stats.frames_decoded;
            }
            if (g_stats.frames_decoded == 1u) {
                runtime_log_line("first decoded frame " + std::to_string(frame.width) + "x" +
                                 std::to_string(frame.height) + " into " +
                                 psprecomp::hex32(destination) + " stride " + std::to_string(stride));
            }
        }

        // The status word tells the guest whether a picture came out.
        if (status_pointer != 0u && rt.memory().contains(status_pointer, 4u))
            rt.memory().store32(status_pointer, produced ? 1u : 0u);
        if (produced && au != 0u && rt.memory().contains(au, kAuSizeOffset + 4u))
            rt.memory().store32(au + kAuPtsOffset, static_cast<std::uint32_t>(frame.timestamp));
        set_return(ctx, 0u);
    });

    runtime.register_hle("sceMpeg", 0x800C44DFu, [](Runtime &rt, AllegrexContext &ctx) {
        // (mpeg, au, buffer, init). Here the buffer is the destination itself.
        MpegContext *context = context_for(rt, ctx.gpr[4]);
        if (context == nullptr) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        if (g_decoder == nullptr) {
            rt.stop(std::string("sceMpegAtracDecode: ") + g_decoder_error);
            return;
        }

        const std::uint32_t au = ctx.gpr[5];
        const std::uint32_t buffer = ctx.gpr[6];
        if (buffer == 0u || !rt.memory().contains(buffer, kAtracEsOutputSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        // Silence first: a short decode must not leave the tail of the buffer
        // holding whatever the previous frame put there.
        rt.memory().zero(buffer, kAtracEsOutputSize);

        // Consumed once, as above. The decoder keeps its own buffer, so a call
        // with nothing new still drains a frame if one is already assembled.
        const AccessUnit unit = std::exchange(context->pending_audio, AccessUnit{});
        DecodedAudio audio;
        std::string error;
        const bool produced = g_decoder->decode_audio(unit.data.data(), unit.data.size(), audio, error);
        if (!error.empty()) {
            rt.stop("sceMpegAtracDecode: " + error);
            return;
        }
        if (produced && !audio.samples.empty()) {
            const auto bytes = static_cast<std::uint32_t>(
                std::min<std::size_t>(audio.samples.size() * sizeof(std::int16_t),
                                      kAtracEsOutputSize));
            rt.memory().copy_in(buffer,
                                std::span<const std::uint8_t>(
                                    reinterpret_cast<const std::uint8_t *>(audio.samples.data()),
                                    bytes));
            ++g_stats.audio_blocks_decoded;
            if (au != 0u && rt.memory().contains(au, kAuSizeOffset + 4u))
                rt.memory().store32(au + kAuPtsOffset, static_cast<std::uint32_t>(audio.timestamp));
        }
        set_return(ctx, 0u);
    });
}

} // namespace defjam

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

// "Nothing to hand out yet, put more packets in and ask again."
//
// This title compares against this exact value, at both access unit getters.
// Read out of its own corpus: after calling sceMpegGetAvcAu it tests the sign
// of the result, and on the negative side compares it with 0x80618001 built as
// lui 0x8062 followed by addiu -32767. Equal takes the benign path; anything
// else falls through to a store of 4 into the player state at +332. The same
// pair sits after sceMpegGetAtracAu.
//
// So answering a shortage with a generic -1 does not merely lose information:
// it fails the equality test and marks the movie as broken on the first frame
// the demultiplexer is not ready for.
//
// pspsdk does not define it, so the name is not confirmed against an SDK - but
// the value is confirmed against the only thing that has to agree with it.
constexpr std::uint32_t kErrorMpegNoData = 0x80618001u;

void set_return(AllegrexContext &ctx, std::uint32_t value) { ctx.set_gpr(2, value); }

// One playing movie.
struct MpegContext {
    std::uint32_t handle{};
    std::uint32_t ringbuffer{};
    std::uint32_t frame_width{};
    // What the PSMF header said the program stream measures, learned when the
    // guest asks where the stream starts. 0 until then, which simply means the
    // end of the stream cannot be recognised.
    std::uint32_t stream_size{};
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
// Handles are never reused. Deriving one from the number of live contexts
// hands out a duplicate as soon as a context is deleted and another created,
// and the duplicate silently aliases the surviving one.
std::uint32_t g_next_handle = 0;

// The ring buffer records the stream that owns it, so the demultiplexer being
// fed is the one belonging to this buffer rather than whichever context
// happens to sort first.
MpegContext *context_for_ringbuffer(Runtime &rt, std::uint32_t ringbuffer);

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

// Free packets, derived from what the demultiplexer has not parsed yet.
//
// Only unparsed bytes still occupy the ring buffer. An access unit that has
// been demultiplexed out of it lives in an elementary stream buffer and its
// slot is free, so counting queued access units as occupancy deadlocks a title
// that waits for the ring to drain before taking them: it will not take them
// until there is room, and there is no room until it takes them. This title
// does exactly that - it feeds the whole stream, then spins on
// sceMpegRingbufferAvailableSize until it equals the packet count.
//
// Written into the structure as well as returned, because a title may read the
// field directly instead of calling the query.
MpegContext *context_for_ringbuffer(Runtime &rt, std::uint32_t ringbuffer) {
    if (ringbuffer == 0u || !rt.memory().contains(ringbuffer, kRingbufferSize)) return nullptr;
    const auto it = g_contexts.find(rt.memory().load32(ringbuffer + kRingbufferMpegOffset));
    return it == g_contexts.end() ? nullptr : &it->second;
}

std::uint32_t store_ringbuffer_available(Runtime &rt, std::uint32_t ringbuffer,
                                         std::uint32_t packets) {
    MpegContext *context = context_for_ringbuffer(rt, ringbuffer);
    if (packets == 0u || context == nullptr) return packets;
    const std::uint64_t held = context->demuxer.undemuxed_bytes();
    const auto occupied = static_cast<std::uint32_t>(
        std::min<std::uint64_t>((held + kPacketSize - 1u) / kPacketSize, packets));
    const std::uint32_t free_packets = packets - occupied;
    rt.memory().store32(ringbuffer + kRingbufferAvailableOffset, free_packets);
    return free_packets;
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

void ProgramStreamDemuxer::select_streams(std::uint8_t video_id, std::uint8_t audio_id) {
    video_id_ = video_id;
    audio_id_ = audio_id;
}

// H.264 marks the start of every frame with an access unit delimiter, NAL
// type 9. That is the boundary the library hands out, one frame per call.
//
// Splitting on PES timestamps instead looks right and is not: this container
// carries a timestamp only at group boundaries. The opening movie holds 118
// delimiters against 8 timestamped packets, so a timestamp split hands the
// decoder fifteen frames where the title asked for one, and the frame it
// accounts for is the only one that survives.
constexpr std::size_t kNoDelimiter = static_cast<std::size_t>(-1);

// The forbidden zero bit has to be clear as well, which rules out payload
// bytes that merely look like a delimiter.
static std::size_t find_access_unit_delimiter(const std::vector<std::uint8_t> &buffer,
                                              std::size_t from) {
    for (std::size_t i = from; i + 4u <= buffer.size(); ++i) {
        if (buffer[i] == 0u && buffer[i + 1u] == 0u && buffer[i + 2u] == 1u &&
            (buffer[i + 3u] & 0x80u) == 0u && (buffer[i + 3u] & 0x1Fu) == 9u) {
            return i;
        }
    }
    return kNoDelimiter;
}

// Marks the open unit as fresh and gives it the timestamp that was waiting for
// it, if the stream named one.
void ProgramStreamDemuxer::open_video_unit() {
    video_open_ = true;
    video_scan_ = 0u;
    if (!pending_video_ts_.valid) return;
    current_video_.has_timestamp = true;
    current_video_.pts_high = pending_video_ts_.pts_high;
    current_video_.pts = pending_video_ts_.pts;
    current_video_.dts_high = pending_video_ts_.dts_high;
    current_video_.dts = pending_video_ts_.dts;
    pending_video_ts_ = StreamTimestamp{};
}

void ProgramStreamDemuxer::append_video_payload(const std::uint8_t *data, std::size_t size) {
    if (!video_open_) {
        current_video_ = AccessUnit{};
        open_video_unit();
    }

    const std::size_t previous = current_video_.data.size();
    current_video_.data.insert(current_video_.data.end(), data, data + size);

    // A start code can straddle a packet boundary, so the scan resumes three
    // bytes short of the new data rather than at it.
    std::size_t search = video_scan_;
    if (previous >= 3u && search < previous - 3u) search = previous - 3u;

    while (true) {
        std::size_t at = find_access_unit_delimiter(current_video_.data, search);
        if (at == kNoDelimiter) break;
        video_delimited_ = true;
        // A four-byte start code is a three-byte one with a zero in front, and
        // this stream uses the four-byte form. The zeros ahead of a delimiter
        // belong with it rather than with the frame that just ended, so the
        // split backs up over them; without that the first unit of the stream
        // is a single padding byte and the decoder is handed it as a frame.
        while (at > 0u && current_video_.data[at - 1u] == 0u) --at;
        if (at == 0u) {
            // The open unit's own delimiter, not the start of the next one.
            search = 4u;
            continue;
        }

        AccessUnit finished;
        finished.has_timestamp = current_video_.has_timestamp;
        finished.pts_high = current_video_.pts_high;
        finished.pts = current_video_.pts;
        finished.dts_high = current_video_.dts_high;
        finished.dts = current_video_.dts;
        finished.data.assign(current_video_.data.begin(),
                             current_video_.data.begin() + static_cast<std::ptrdiff_t>(at));
        video_.push_back(std::move(finished));
        ++video_units_;

        current_video_.data.erase(current_video_.data.begin(),
                                  current_video_.data.begin() + static_cast<std::ptrdiff_t>(at));
        current_video_.has_timestamp = false;
        current_video_.pts_high = 0u;
        current_video_.pts = 0u;
        current_video_.dts_high = 0u;
        current_video_.dts = 0u;
        open_video_unit();
        search = 4u;
    }

    video_scan_ = current_video_.data.size() >= 3u ? current_video_.data.size() - 3u : 0u;
}

// ATRAC3+ frames open with this sync word, and every frame in a stream is the
// same size, so the elementary stream is a plain array of frames once the
// first one has been found.
constexpr std::uint8_t kAtracSyncHigh = 0x0Fu;
constexpr std::uint8_t kAtracSyncLow = 0xD0u;
// A frame size outside this range is not one this container carries; treating
// a stray match as a size would slice the stream into nonsense.
constexpr std::size_t kMinAtracFrame = 8u;
constexpr std::size_t kMaxAtracFrame = 8192u;

static std::size_t find_atrac_sync(const std::vector<std::uint8_t> &buffer, std::size_t from) {
    for (std::size_t i = from; i + 2u <= buffer.size(); ++i) {
        if (buffer[i] == kAtracSyncHigh && buffer[i + 1u] == kAtracSyncLow) return i;
    }
    return kNoDelimiter;
}

void ProgramStreamDemuxer::open_audio_unit() {
    audio_open_ = true;
    if (!pending_audio_ts_.valid) return;
    current_audio_.has_timestamp = true;
    current_audio_.pts_high = pending_audio_ts_.pts_high;
    current_audio_.pts = pending_audio_ts_.pts;
    current_audio_.dts_high = pending_audio_ts_.dts_high;
    current_audio_.dts = pending_audio_ts_.dts;
    pending_audio_ts_ = StreamTimestamp{};
}

// The title asks for one ATRAC3+ frame per call, and this container puts about
// three and a half of them in every packet, straddling the boundaries. Handing
// out whole packets loses every frame after the first: 88 frames arrive as 25
// units and 21 of them survive as sound.
void ProgramStreamDemuxer::append_audio_payload(const std::uint8_t *data, std::size_t size) {
    if (audio_split_ == AudioSplit::Unknown) {
        audio_split_ = (size >= 2u && data[0] == kAtracSyncHigh && data[1] == kAtracSyncLow)
                           ? AudioSplit::Framed
                           : AudioSplit::Timestamped;
    }
    if (!audio_open_) {
        current_audio_ = AccessUnit{};
        open_audio_unit();
    }
    current_audio_.data.insert(current_audio_.data.end(), data, data + size);
    if (audio_split_ != AudioSplit::Framed) return;

    if (audio_frame_size_ == 0u) {
        // Learn the frame size. A sync word also turns up inside frame data now
        // and then - this title's opening movie carries exactly one, in frame
        // 50 - so a candidate is only believed once a third frame begins at
        // exactly twice the stride. A stray match fails that and the next
        // candidate is tried, rather than the stream being sliced on it.
        for (std::size_t candidate = find_atrac_sync(current_audio_.data, 1u);
             candidate != kNoDelimiter;
             candidate = find_atrac_sync(current_audio_.data, candidate + 1u)) {
            if (candidate < kMinAtracFrame || candidate > kMaxAtracFrame) continue;
            const std::size_t third = find_atrac_sync(current_audio_.data, candidate + 1u);
            if (third == kNoDelimiter) return;   // not enough data to judge yet
            if (third == candidate * 2u) {
                audio_frame_size_ = candidate;
                break;
            }
        }
        if (audio_frame_size_ == 0u) return;
    }

    while (current_audio_.data.size() >= audio_frame_size_) {
        AccessUnit finished;
        finished.has_timestamp = current_audio_.has_timestamp;
        finished.pts_high = current_audio_.pts_high;
        finished.pts = current_audio_.pts;
        finished.dts_high = current_audio_.dts_high;
        finished.dts = current_audio_.dts;
        finished.data.assign(
            current_audio_.data.begin(),
            current_audio_.data.begin() + static_cast<std::ptrdiff_t>(audio_frame_size_));
        audio_.push_back(std::move(finished));
        ++audio_units_;

        current_audio_.data.erase(
            current_audio_.data.begin(),
            current_audio_.data.begin() + static_cast<std::ptrdiff_t>(audio_frame_size_));
        current_audio_.has_timestamp = false;
        current_audio_.pts_high = 0u;
        current_audio_.pts = 0u;
        current_audio_.dts_high = 0u;
        current_audio_.dts = 0u;
        open_audio_unit();
    }
}

void ProgramStreamDemuxer::emit_video() {
    if (!video_open_) return;
    if (!current_video_.data.empty()) {
        video_.push_back(std::move(current_video_));
        ++video_units_;
    }
    current_video_ = AccessUnit{};
    video_open_ = false;
    video_scan_ = 0u;
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

        // A program may carry several streams of a kind. Only the one the
        // container declared is ours; appending the others to the same access
        // unit hands the decoder two interleaved bitstreams as though they
        // were one.
        bool is_video = false;
        bool is_audio = false;
        if (id >= kVideoStreamBase && id < kVideoStreamBase + 16u) {
            is_video = video_id_ == 0u || id == video_id_;
        } else if (id == kPrivateStream1) {
            is_audio = audio_id_ == 0u || id == audio_id_;
        }

        if (is_video || is_audio) {
            const bool has_pts = (flags & 0x80u) != 0u;
            const bool has_dts = (flags & 0x40u) != 0u;

            StreamTimestamp stamp;
            if (has_pts && header_length >= 5u) {
                const std::uint8_t *ts = p + 9;
                // 33 bits split across five bytes, with marker bits between.
                const std::uint64_t value =
                    (static_cast<std::uint64_t>(ts[0] & 0x0Eu) << 29u) |
                    (static_cast<std::uint64_t>(ts[1]) << 22u) |
                    (static_cast<std::uint64_t>(ts[2] & 0xFEu) << 14u) |
                    (static_cast<std::uint64_t>(ts[3]) << 7u) |
                    (static_cast<std::uint64_t>(ts[4] & 0xFEu) >> 1u);
                stamp.valid = true;
                stamp.pts_high = static_cast<std::uint32_t>(value >> 32u);
                stamp.pts = static_cast<std::uint32_t>(value & 0xFFFFFFFFu);
                stamp.dts_high = stamp.pts_high;
                stamp.dts = stamp.pts;
                if (has_dts && header_length >= 10u) {
                    const std::uint8_t *d = p + 14;
                    const std::uint64_t dts =
                        (static_cast<std::uint64_t>(d[0] & 0x0Eu) << 29u) |
                        (static_cast<std::uint64_t>(d[1]) << 22u) |
                        (static_cast<std::uint64_t>(d[2] & 0xFEu) << 14u) |
                        (static_cast<std::uint64_t>(d[3]) << 7u) |
                        (static_cast<std::uint64_t>(d[4] & 0xFEu) >> 1u);
                    stamp.dts_high = static_cast<std::uint32_t>(dts >> 32u);
                    stamp.dts = static_cast<std::uint32_t>(dts & 0xFFFFFFFFu);
                }
            }

            const std::size_t payload_offset = cursor + 9u + header_length;
            const std::size_t payload_size = length - 3u - header_length;
            const std::uint8_t *payload = pending_.data() + payload_offset;
            std::size_t skip = 0u;
            // Private stream 1 prefixes each payload with a small sub-stream
            // header the elementary stream does not include. A payload too
            // short to hold that header is all header and no data, so it
            // contributes nothing rather than contributing its own prefix.
            if (id == kPrivateStream1) skip = std::min<std::size_t>(payload_size, 4u);

            if (is_video) {
                // The timestamp names the unit that begins in this packet,
                // which is seldom the one being filled right now, so it waits
                // for the delimiter that opens the unit it belongs to.
                if (stamp.valid) {
                    // Before any delimiter has been seen the timestamp is the
                    // only boundary there is, so it still ends the unit. Once
                    // one appears, delimiters take over.
                    if (!video_delimited_) emit_video();
                    pending_video_ts_ = stamp;
                }
                if (payload_size > skip)
                    append_video_payload(payload + skip, payload_size - skip);
            } else {
                if (stamp.valid) {
                    // A stream that is not a run of frames has nothing else
                    // to come apart on, so there the timestamp still ends the
                    // unit. A framed one must not be cut here: the packets do
                    // not line up with the frames.
                    if (audio_split_ == AudioSplit::Timestamped) emit_audio();
                    pending_audio_ts_ = stamp;
                }
                if (payload_size > skip)
                    append_audio_payload(payload + skip, payload_size - skip);
            }
        }

        cursor += 6u + length;
    }

    if (cursor != 0u) pending_.erase(pending_.begin(), pending_.begin() + static_cast<long>(cursor));
}

void ProgramStreamDemuxer::flush() {
    emit_video();
    emit_audio();
}

std::uint64_t ProgramStreamDemuxer::undemuxed_bytes() const {
    return pending_.size();
}

std::uint64_t ProgramStreamDemuxer::queued_bytes() const {
    std::uint64_t total = pending_.size() + current_video_.data.size() + current_audio_.data.size();
    for (const AccessUnit &unit : video_) total += unit.data.size();
    for (const AccessUnit &unit : audio_) total += unit.data.size();
    return total;
}

AccessUnit ProgramStreamDemuxer::take_video() {
    if (video_.empty()) return AccessUnit{};
    AccessUnit unit = std::move(video_.front());
    video_.erase(video_.begin());
    return unit;
}

AccessUnit ProgramStreamDemuxer::take_audio() {
    if (audio_.empty()) return AccessUnit{};
    AccessUnit unit = std::move(audio_.front());
    audio_.erase(audio_.begin());
    return unit;
}

MpegStats mpeg_stats() {
    MpegStats stats = g_stats;
    // How much the demultiplexer is still holding says whether a stall is the
    // guest not asking or this side having nothing to give.
    if (!g_contexts.empty()) {
        const ProgramStreamDemuxer &demuxer = g_contexts.begin()->second.demuxer;
        stats.video_units_queued = demuxer.video_units() - stats.video_units;
        stats.audio_units_queued = demuxer.audio_units() - stats.audio_units;
    }
    return stats;
}

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
    g_next_handle = 0u;

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
        const std::uint32_t handle = 0x4D504700u + ++g_next_handle;
        MpegContext context;
        context.handle = handle;
        context.ringbuffer = ringbuffer;
        context.frame_width = ctx.gpr[8];  // fifth argument, in $t0
        g_contexts.emplace(handle, std::move(context));

        // The decoder outlives any one movie, so it arrives here still holding
        // the last one's buffered bytes, measured audio framing and reference
        // frames. This is the point at which a new movie begins.
        if (g_decoder != nullptr) g_decoder->reset();
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
        // The header is where the container states which streams it carries
        // and how long the program stream is. Nothing else tells us either, so
        // both are recorded here against the context that asked.
        if (MpegContext *context = context_for(rt, ctx.gpr[4]); context != nullptr) {
            context->stream_size = psmf.stream_size;
            context->demuxer.select_streams(psmf.has_video ? psmf.video_stream_id : 0u,
                                            psmf.has_audio ? psmf.audio_stream_id : 0u);
        }
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
        // The guest sizes its data block from sceMpegRingbufferQueryMemSize, so
        // a packet count that does not fit the block it passed is a
        // disagreement about the same number rather than something to take on
        // trust: everything downstream indexes that block by this count.
        const std::uint32_t packets = ctx.gpr[5];
        const std::uint64_t required =
            static_cast<std::uint64_t>(packets) * (kRingbufferPacketOverhead + kPacketSize);
        if (packets == 0u || required > ctx.gpr[7]) {
            runtime_log_line("sceMpegRingbufferConstruct: " + std::to_string(packets) +
                             " packets need " + std::to_string(required) + " bytes but got " +
                             std::to_string(ctx.gpr[7]));
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
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
        // Free space for writing, which is what the guest feeds from and what
        // its decoder reads to decide whether anything is waiting. Both sides
        // watch this one number, so a fixed answer stalls one of them: report
        // it full and the feeder stops, report it empty and the decoder stops.
        // Deriving it from what is actually still held satisfies both.
        const std::uint32_t ringbuffer = ctx.gpr[4];
        if (ringbuffer == 0u || !rt.memory().contains(ringbuffer, kRingbufferSize)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        const std::uint32_t packets = rt.memory().load32(ringbuffer + kRingbufferPacketsOffset);
        set_return(ctx, store_ringbuffer_available(rt, ringbuffer, packets));
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
            [ringbuffer, destination, packets, room](Runtime &runtime, std::uint32_t returned) {
                const auto filled = static_cast<std::int32_t>(returned);
                if (filled <= 0) return returned;
                // The callback was handed `room` and cannot have written into
                // more than that. A larger answer is the guest reporting
                // something other than what it put here, and believing it
                // would size a staging buffer and advance the write index from
                // a number this side never offered.
                const std::uint32_t count = std::min(static_cast<std::uint32_t>(filled), room);
                const std::uint32_t write_index =
                    runtime.memory().load32(ringbuffer + kRingbufferWriteOffset);
                runtime.memory().store32(ringbuffer + kRingbufferWriteOffset,
                                         (write_index + count) % std::max(1u, packets));
                g_stats.packets_put += count;

                // Feed what the guest just wrote to the demuxer. There is one
                // movie at a time, so the sole context owns it. The range is
                // checked before the buffer for it is allocated, so a packet
                // count the guest picked cannot ask for an allocation the
                // guest's own memory could never hold.
                MpegContext *owner = context_for_ringbuffer(runtime, ringbuffer);
                if (owner != nullptr) {
                    const std::uint64_t bytes = static_cast<std::uint64_t>(count) * kPacketSize;
                    if (bytes <= 0xFFFFFFFFull &&
                        runtime.memory().contains(destination,
                                                  static_cast<std::uint32_t>(bytes))) {
                        std::vector<std::uint8_t> staging(static_cast<std::size_t>(bytes));
                        runtime.memory().copy_out(destination, staging);
                        MpegContext &context = *owner;
                        context.demuxer.append(staging.data(), staging.size());

                        // Once the whole program stream has been fed there is
                        // no more data to close the final access unit, so it
                        // would sit open forever and the movie would lose its
                        // last frame. This is the only end-of-stream this
                        // library gets: the title imports no flush entry point.
                        if (context.stream_size != 0u &&
                            context.demuxer.bytes_seen() >= context.stream_size) {
                            context.demuxer.flush();
                        }
                    }
                }

                // Not "every slot is free again": what the demultiplexer is
                // still holding is exactly what the guest has not consumed, and
                // sceMpegRingbufferAvailableSize answers from that same queue.
                // Writing a flat `packets` here would leave the field and the
                // query disagreeing.
                (void)store_ringbuffer_available(runtime, ringbuffer, packets);
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
                // before asking again. This is the library's shortage code, not
                // a generic failure - the difference decides whether the title
                // loops back to refill or gives up on the movie.
                if (video) ++g_stats.video_units_refused;
                else ++g_stats.audio_units_refused;
                set_return(ctx, kErrorMpegNoData);
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

        // Decoding a picture and delivering it are separate outcomes. A frame
        // that never reached guest memory must not be announced as one that
        // did, or the title waits for a buffer it was told to expect while the
        // statistics report nothing decoded at all.
        bool delivered = false;
        if (produced && buffer_pointer != 0u && rt.memory().contains(buffer_pointer, 4u)) {
            const std::uint32_t destination = rt.memory().load32(buffer_pointer);
            std::vector<std::uint32_t> pixels;
            if (!frame_to_abgr8888(frame, stride, pixels)) {
                runtime_log_line("sceMpegAvcDecode: cannot lay out a " +
                                 std::to_string(frame.width) + "x" +
                                 std::to_string(frame.height) + " frame at stride " +
                                 std::to_string(stride));
            } else {
                const auto bytes =
                    static_cast<std::uint32_t>(pixels.size() * sizeof(std::uint32_t));
                if (destination != 0u && rt.memory().contains(destination, bytes)) {
                    rt.memory().copy_in(
                        destination,
                        std::span<const std::uint8_t>(
                            reinterpret_cast<const std::uint8_t *>(pixels.data()), bytes));
                    ++g_stats.frames_decoded;
                    delivered = true;
                } else {
                    runtime_log_line("sceMpegAvcDecode: refused a " + std::to_string(bytes) +
                                     "-byte frame at " + psprecomp::hex32(destination));
                }
            }
            if (g_stats.frames_decoded == 1u && delivered) {
                runtime_log_line("first decoded frame " + std::to_string(frame.width) + "x" +
                                 std::to_string(frame.height) + " into " +
                                 psprecomp::hex32(destination) + " stride " + std::to_string(stride));
            }
        }

        // The status word tells the guest whether a picture arrived.
        if (status_pointer != 0u && rt.memory().contains(status_pointer, 4u))
            rt.memory().store32(status_pointer, delivered ? 1u : 0u);
        // Only a decoder that actually carried a timestamp may replace the one
        // the demultiplexer read out of the container. A backend fed packets
        // without timestamps reports none, and writing its blank here would
        // leave the access unit claiming a presentation time of zero.
        if (delivered && frame.has_timestamp && au != 0u &&
            rt.memory().contains(au, kAuSizeOffset + 4u)) {
            // The field is 33 bits wide, in two words. Writing only the low
            // one leaves the high bit holding what the demultiplexer put there.
            rt.memory().store32(au + kAuPtsOffset, static_cast<std::uint32_t>(frame.timestamp));
            rt.memory().store32(au + kAuPtsHighOffset,
                                static_cast<std::uint32_t>(frame.timestamp >> 32));
        }
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
            if (audio.has_timestamp && au != 0u && rt.memory().contains(au, kAuSizeOffset + 4u)) {
                rt.memory().store32(au + kAuPtsOffset, static_cast<std::uint32_t>(audio.timestamp));
                rt.memory().store32(au + kAuPtsHighOffset,
                                    static_cast<std::uint32_t>(audio.timestamp >> 32));
            }
        }
        set_return(ctx, 0u);
    });
}

} // namespace defjam

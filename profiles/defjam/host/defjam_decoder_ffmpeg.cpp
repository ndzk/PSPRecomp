// FFmpeg-backed movie decoder. Built only when PSPRECOMP_DEFJAM_FFMPEG is on;
// see THIRD_PARTY.md for why the decoder is a dependency rather than in-tree,
// and for the requirement that the FFmpeg build be LGPL.

#include "defjam_decoder.hpp"

#include "defjam_profile.hpp"

#if defined(DEFJAM_HAS_FFMPEG)

#include <algorithm>
#include <cstring>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/mem.h>
#include <libavutil/opt.h>
}

namespace defjam {
namespace {

// A PSMF audio frame is an eight-byte header followed by the ATRAC3+ payload
// the decoder actually wants. The header begins with this sync, and frames are
// a fixed size the stream does not otherwise state, so the size is found by
// looking for a spacing at which every frame starts with the sync rather than
// assumed: this title's own movies use more than one.
//
// Both the header length and the payload length were measured, by feeding the
// decoder every combination and keeping the one it accepted: skipping eight
// bytes and declaring a block of (frame - 8) decodes every frame, while
// passing the frame whole decodes none.
constexpr std::uint8_t kAtracSync0 = 0x0Fu;
constexpr std::uint8_t kAtracSync1 = 0xD0u;
constexpr std::size_t kAtracHeaderBytes = 8u;

// Enough of the stream to make a false match implausible. At the smallest
// plausible frame size this confirms the spacing twenty times over.
constexpr std::size_t kAtracProbeBytes = 8192u;

// PSMF movie audio is stereo at 44.1 kHz.
constexpr int kAtracChannels = 2;
constexpr int kAtracSampleRate = 44100;

// ATRAC decodes to planar float; the PSP wants interleaved 16-bit. Shared by
// the movie's audio and by sceAtrac3plus, which are the same codec reached
// through two different libraries.
bool frame_to_stereo_s16(const AVFrame *frame, std::vector<std::int16_t> &out,
                         std::string &error) {
    const int channels = frame->ch_layout.nb_channels;
    const int samples = frame->nb_samples;
    if (channels <= 0 || samples <= 0) {
        error = "the ATRAC decoder produced an empty frame";
        return false;
    }
    out.assign(static_cast<std::size_t>(samples) * kAtracChannels, 0);
    if (frame->format == AV_SAMPLE_FMT_FLTP) {
        for (int channel = 0; channel < kAtracChannels; ++channel) {
            const auto *source =
                reinterpret_cast<const float *>(frame->data[std::min(channel, channels - 1)]);
            for (int i = 0; i < samples; ++i) {
                const float value = std::clamp(source[i], -1.0f, 1.0f);
                out[static_cast<std::size_t>(i) * kAtracChannels + channel] =
                    static_cast<std::int16_t>(value * 32767.0f);
            }
        }
        return true;
    }
    if (frame->format == AV_SAMPLE_FMT_S16) {
        // Interleaved: a mono frame holds one sample per position, not two.
        const auto *source = reinterpret_cast<const std::int16_t *>(frame->data[0]);
        for (int i = 0; i < samples; ++i) {
            for (int channel = 0; channel < kAtracChannels; ++channel) {
                out[static_cast<std::size_t>(i) * kAtracChannels + channel] =
                    source[static_cast<std::size_t>(i) * channels +
                           std::min(channel, channels - 1)];
            }
        }
        return true;
    }
    error = "the ATRAC stream decoded to an unexpected sample format";
    return false;
}

std::string averror_text(int code) {
    char buffer[AV_ERROR_MAX_STRING_SIZE] = {};
    av_strerror(code, buffer, sizeof(buffer));
    return buffer;
}

class FfmpegDecoder final : public DecoderBackend {
public:
    ~FfmpegDecoder() override {
        avcodec_free_context(&video_);
        avcodec_free_context(&audio_);
        av_frame_free(&frame_);
        av_packet_free(&packet_);
    }

    bool open(std::string &error) {
        packet_ = av_packet_alloc();
        frame_ = av_frame_alloc();
        if (packet_ == nullptr || frame_ == nullptr) {
            error = "could not allocate FFmpeg packet or frame";
            return false;
        }

        const AVCodec *h264 = avcodec_find_decoder(AV_CODEC_ID_H264);
        if (h264 == nullptr) {
            error = "this FFmpeg has no H.264 decoder";
            return false;
        }
        video_ = avcodec_alloc_context3(h264);
        if (video_ == nullptr) {
            error = "could not allocate the H.264 decoder";
            return false;
        }
        if (const int rc = avcodec_open2(video_, h264, nullptr); rc < 0) {
            error = "could not open the H.264 decoder: " + averror_text(rc);
            return false;
        }
        return true;
    }

    [[nodiscard]] const char *name() const override {
        return "FFmpeg (H.264 + ATRAC3+)";
    }

    void reset() override {
        // Both codecs hold state belonging to the movie that just ended:
        // reference frames, and for audio a block size that was measured from
        // that stream rather than stated by the container - this title's movies
        // do not all share one. The audio context is therefore freed rather
        // than flushed, so the next movie measures its own.
        if (video_ != nullptr) avcodec_flush_buffers(video_);
        avcodec_free_context(&audio_);
        pending_.clear();
        frame_bytes_ = 0u;
        audio_disabled_ = false;
    }

    bool decode_video(const std::uint8_t *data, std::size_t size, DecodedFrame &out,
                      std::string &error) override {
        if (data == nullptr || size == 0u) return false;

        // The decoder may read past the end while parsing, so the packet is a
        // padded copy rather than a view onto the caller's bytes.
        if (av_new_packet(packet_, static_cast<int>(size)) < 0) {
            error = "could not allocate a video packet";
            return false;
        }
        std::memcpy(packet_->data, data, size);

        // EAGAIN here does not mean the packet was taken and nothing came of
        // it: it means the packet was NOT taken, because the decoder is
        // holding output and accepts no input until that is collected.
        // Releasing the packet at this point drops a compressed frame, and
        // H.264 carries the damage forward through every prediction that
        // refers to it until the next IDR. So collect, then offer it again.
        bool collected = false;
        int sent = avcodec_send_packet(video_, packet_);
        if (sent == AVERROR(EAGAIN)) {
            collected = avcodec_receive_frame(video_, frame_) >= 0;
            sent = avcodec_send_packet(video_, packet_);
        }
        av_packet_unref(packet_);
        if (sent < 0 && sent != AVERROR(EAGAIN)) {
            error = "H.264 decode failed: " + averror_text(sent);
            return false;
        }
        if (collected) return take_video(out, error);

        const int got = avcodec_receive_frame(video_, frame_);
        if (got == AVERROR(EAGAIN) || got == AVERROR_EOF) return false;  // needs more input
        if (got < 0) {
            error = "H.264 decode failed: " + averror_text(got);
            return false;
        }
        return take_video(out, error);
    }

    bool decode_audio(const std::uint8_t *data, std::size_t size, DecodedAudio &out,
                      std::string &error) override {
        if (audio_disabled_) return false;

        // Access unit boundaries do not fall on frame boundaries, so the stream
        // is reassembled here and consumed a frame at a time.
        if (data != nullptr && size != 0u) pending_.insert(pending_.end(), data, data + size);

        // The demultiplexer hands out one ATRAC3+ frame per access unit once it
        // has measured the framing, and it validates that measurement against a
        // third frame before trusting it. An access unit that arrives first and
        // begins with a sync word is therefore already a frame, and its length
        // is the frame size.
        //
        // Measuring it again here costs an 8 KB probe before the first frame
        // reaches the decoder - fourteen frames of this title's movie. They are
        // not lost, they are held: the sound runs about two thirds of a second
        // behind the picture and the tail of the movie never plays at all.
        if (frame_bytes_ == 0u && pending_.size() == size && size > kAtracHeaderBytes + 8u &&
            size <= kAtracProbeBytes && data[0] == kAtracSync0 && data[1] == kAtracSync1) {
            frame_bytes_ = size;
            runtime_log_line("ATRAC3+ frame size taken from the access unit: " +
                             std::to_string(size) + " bytes");
        }

        if (frame_bytes_ == 0u) {
            std::string why;
            if (!detect_frame_size(why)) {
                // This framing is measured from the stream, not declared by it.
                // A measurement that does not hold should cost the movie its
                // sound and say so, not end the run: the picture is still worth
                // having, and the guess is this side's, not the title's.
                audio_disabled_ = true;
                pending_.clear();
                runtime_log_line("movie audio disabled: " + why);
                return false;
            }
        }
        if (frame_bytes_ == 0u || pending_.size() < frame_bytes_) return false;
        if (audio_ == nullptr && !open_audio(error)) return false;

        const std::size_t payload = frame_bytes_ - kAtracHeaderBytes;
        if (av_new_packet(packet_, static_cast<int>(payload)) < 0) {
            error = "could not allocate an audio packet";
            return false;
        }
        std::memcpy(packet_->data, pending_.data() + kAtracHeaderBytes, payload);
        pending_.erase(pending_.begin(), pending_.begin() + static_cast<long>(frame_bytes_));

        // As with video: EAGAIN leaves the packet unconsumed.
        bool collected = false;
        int sent = avcodec_send_packet(audio_, packet_);
        if (sent == AVERROR(EAGAIN)) {
            collected = avcodec_receive_frame(audio_, frame_) >= 0;
            sent = avcodec_send_packet(audio_, packet_);
        }
        av_packet_unref(packet_);
        if (sent < 0 && sent != AVERROR(EAGAIN)) {
            error = "ATRAC3+ decode failed: " + averror_text(sent);
            return false;
        }
        if (collected) return take_audio(out, error);

        const int got = avcodec_receive_frame(audio_, frame_);
        if (got == AVERROR(EAGAIN) || got == AVERROR_EOF) return false;
        if (got < 0) {
            error = "ATRAC3+ decode failed: " + averror_text(got);
            return false;
        }
        return take_audio(out, error);
    }

private:
    // Moves the picture the decoder just produced into `out`, releasing the
    // frame either way.
    bool take_video(DecodedFrame &out, std::string &error) {
        if (frame_->format != AV_PIX_FMT_YUV420P) {
            error = "the H.264 stream decoded to an unexpected pixel format";
            av_frame_unref(frame_);
            return false;
        }
        out.width = static_cast<std::uint32_t>(frame_->width);
        out.height = static_cast<std::uint32_t>(frame_->height);
        out.y_stride = static_cast<std::uint32_t>(frame_->linesize[0]);
        out.uv_stride = static_cast<std::uint32_t>(frame_->linesize[1]);
        const std::size_t luma = static_cast<std::size_t>(out.y_stride) * out.height;
        const std::size_t chroma = static_cast<std::size_t>(out.uv_stride) * ((out.height + 1u) / 2u);
        out.y.assign(frame_->data[0], frame_->data[0] + luma);
        out.u.assign(frame_->data[1], frame_->data[1] + chroma);
        out.v.assign(frame_->data[2], frame_->data[2] + chroma);
        // Nothing sets a timestamp on the packets fed in, so the decoder has
        // none to give back. Saying so leaves the container's own timestamp
        // standing instead of replacing it with this blank.
        out.has_timestamp = frame_->best_effort_timestamp != AV_NOPTS_VALUE;
        out.timestamp = out.has_timestamp ? frame_->best_effort_timestamp : 0;
        av_frame_unref(frame_);
        return true;
    }

    bool take_audio(DecodedAudio &out, std::string &error) {
        if (!frame_to_stereo_s16(frame_, out.samples, error)) {
            av_frame_unref(frame_);
            return false;
        }
        out.has_timestamp = frame_->best_effort_timestamp != AV_NOPTS_VALUE;
        out.timestamp = out.has_timestamp ? frame_->best_effort_timestamp : 0;
        av_frame_unref(frame_);
        return true;
    }

    // Finds the spacing at which every frame begins with the sync word.
    bool detect_frame_size(std::string &error) {
        if (pending_.size() < kAtracProbeBytes) return true;  // not enough yet
        if (pending_[0] != kAtracSync0 || pending_[1] != kAtracSync1) {
            error = "the audio stream does not begin with an ATRAC3+ frame";
            return false;
        }
        for (std::size_t candidate = kAtracHeaderBytes + 8u; candidate + 1u < pending_.size();
             candidate += 2u) {
            bool all = true;
            for (std::size_t at = 0; at + 1u < pending_.size(); at += candidate) {
                if (pending_[at] != kAtracSync0 || pending_[at + 1u] != kAtracSync1) {
                    all = false;
                    break;
                }
            }
            if (all) {
                frame_bytes_ = candidate;
                runtime_log_line("ATRAC3+ frame size measured at " + std::to_string(candidate) +
                                 " bytes");
                return true;
            }
        }
        error = "could not find the ATRAC3+ frame size in this stream";
        return false;
    }

    bool open_audio(std::string &error) {
        const AVCodec *codec = avcodec_find_decoder(AV_CODEC_ID_ATRAC3P);
        if (codec == nullptr) {
            error = "this FFmpeg has no ATRAC3+ decoder";
            return false;
        }
        audio_ = avcodec_alloc_context3(codec);
        if (audio_ == nullptr) {
            error = "could not allocate the ATRAC3+ decoder";
            return false;
        }
        // The decoder cannot infer the frame size, so it is told the one that
        // was measured from the stream itself.
        audio_->block_align = static_cast<int>(frame_bytes_ - kAtracHeaderBytes);
        audio_->sample_rate = kAtracSampleRate;
        av_channel_layout_default(&audio_->ch_layout, kAtracChannels);
        if (const int rc = avcodec_open2(audio_, codec, nullptr); rc < 0) {
            error = "could not open the ATRAC3+ decoder: " + averror_text(rc);
            return false;
        }
        return true;
    }

    AVCodecContext *video_{};
    AVCodecContext *audio_{};
    AVFrame *frame_{};
    AVPacket *packet_{};
    std::vector<std::uint8_t> pending_;
    std::size_t frame_bytes_{};
    bool audio_disabled_{};   // the framing could not be measured; video goes on
};

// One standalone ATRAC stream. sceAtrac3plus hands over a whole file at once
// and then asks for it a frame at a time, so this holds a codec context and
// nothing else: the framing comes from the container, not from the bitstream.
class FfmpegAtracDecoder final : public AtracDecoder {
public:
    ~FfmpegAtracDecoder() override {
        avcodec_free_context(&context_);
        av_frame_free(&frame_);
        av_packet_free(&packet_);
    }

    bool open(const AtracFormat &format, std::string &error) {
        packet_ = av_packet_alloc();
        frame_ = av_frame_alloc();
        if (packet_ == nullptr || frame_ == nullptr) {
            error = "could not allocate an ATRAC packet or frame";
            return false;
        }
        const AVCodecID id =
            format.codec == AtracCodec::Atrac3Plus ? AV_CODEC_ID_ATRAC3P : AV_CODEC_ID_ATRAC3;
        const AVCodec *codec = avcodec_find_decoder(id);
        if (codec == nullptr) {
            error = format.codec == AtracCodec::Atrac3Plus ? "this FFmpeg has no ATRAC3+ decoder"
                                                           : "this FFmpeg has no ATRAC3 decoder";
            return false;
        }
        context_ = avcodec_alloc_context3(codec);
        if (context_ == nullptr) {
            error = "could not allocate the ATRAC decoder";
            return false;
        }
        context_->block_align = static_cast<int>(format.block_align);
        context_->sample_rate = static_cast<int>(format.sample_rate);
        av_channel_layout_default(&context_->ch_layout, static_cast<int>(format.channels));
        // ATRAC3 needs the fmt chunk's codec-private tail; ATRAC3+ does not,
        // but passing it along is harmless when the container supplied one.
        if (!format.extradata.empty()) {
            context_->extradata = static_cast<std::uint8_t *>(
                av_mallocz(format.extradata.size() + AV_INPUT_BUFFER_PADDING_SIZE));
            if (context_->extradata == nullptr) {
                error = "could not allocate ATRAC extradata";
                return false;
            }
            std::memcpy(context_->extradata, format.extradata.data(), format.extradata.size());
            context_->extradata_size = static_cast<int>(format.extradata.size());
        }
        if (const int rc = avcodec_open2(context_, codec, nullptr); rc < 0) {
            error = "could not open the ATRAC decoder: " + averror_text(rc);
            return false;
        }
        return true;
    }

    int decode(const std::uint8_t *data, std::size_t size, std::vector<std::int16_t> &out,
               std::string &error) override {
        if (data == nullptr || size == 0u) return 0;
        if (av_new_packet(packet_, static_cast<int>(size)) < 0) {
            error = "could not allocate an ATRAC packet";
            return -1;
        }
        std::memcpy(packet_->data, data, size);

        // EAGAIN leaves the packet unconsumed, exactly as on the movie path.
        bool collected = false;
        int sent = avcodec_send_packet(context_, packet_);
        if (sent == AVERROR(EAGAIN)) {
            collected = avcodec_receive_frame(context_, frame_) >= 0;
            sent = avcodec_send_packet(context_, packet_);
        }
        av_packet_unref(packet_);
        if (sent < 0 && sent != AVERROR(EAGAIN)) {
            error = "ATRAC decode failed: " + averror_text(sent);
            return -1;
        }
        if (!collected) {
            const int got = avcodec_receive_frame(context_, frame_);
            if (got == AVERROR(EAGAIN) || got == AVERROR_EOF) return 0;
            if (got < 0) {
                error = "ATRAC decode failed: " + averror_text(got);
                return -1;
            }
        }
        const int samples = frame_->nb_samples;
        const bool ok = frame_to_stereo_s16(frame_, out, error);
        av_frame_unref(frame_);
        return ok ? samples : -1;
    }

private:
    AVCodecContext *context_{};
    AVFrame *frame_{};
    AVPacket *packet_{};
};

} // namespace

std::unique_ptr<AtracDecoder> make_atrac_decoder(const AtracFormat &format, std::string &error) {
    auto decoder = std::make_unique<FfmpegAtracDecoder>();
    if (!decoder->open(format, error)) return nullptr;
    return decoder;
}

bool decoder_available() { return true; }

std::unique_ptr<DecoderBackend> make_decoder_backend(std::string &error) {
    auto decoder = std::make_unique<FfmpegDecoder>();
    if (!decoder->open(error)) return nullptr;
    return decoder;
}

} // namespace defjam

#endif  // DEFJAM_HAS_FFMPEG

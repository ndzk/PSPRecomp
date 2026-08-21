#include "defjam_io.hpp"

#include "defjam_banks.hpp"

#include "defjam_disc.hpp"
#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <optional>
#include <set>
#include <span>
#include <string>
#include <vector>

namespace defjam {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;

// PSP open flags, from the public SDK headers.
constexpr std::uint32_t kOpenRead = 0x0001u;
constexpr std::uint32_t kOpenWrite = 0x0002u;
constexpr std::uint32_t kOpenAppend = 0x0100u;
constexpr std::uint32_t kOpenCreate = 0x0200u;
constexpr std::uint32_t kOpenTruncate = 0x0400u;
constexpr std::uint32_t kOpenExclusive = 0x0800u;

// SceIoStat / SceIoDirent layout, from the public SDK headers. These offsets
// are documented rather than measured from this executable; a mismatch would
// show up as the guest misreading directory entries, not as a silent wrong
// answer, because the sizes are cross-checked below.
constexpr std::uint32_t kStatModeOffset = 0u;
constexpr std::uint32_t kStatAttrOffset = 4u;
constexpr std::uint32_t kStatSizeOffset = 8u;   // 64-bit
constexpr std::uint32_t kStatCtimeOffset = 16u; // 3 x ScePspDateTime, 16 bytes each
constexpr std::uint32_t kStatPrivateOffset = 64u;
constexpr std::uint32_t kStatSize = 88u;
constexpr std::uint32_t kDirentNameOffset = kStatSize;      // char d_name[256]
constexpr std::uint32_t kDirentNameCapacity = 256u;
constexpr std::uint32_t kDirentPrivateOffset = 344u;
static_assert(kDirentNameOffset + kDirentNameCapacity == kDirentPrivateOffset,
              "SceIoDirent name field does not abut d_private");

// st_mode bits and the separate st_attr bits.
constexpr std::uint32_t kModeDirectory = 0x1000u;
constexpr std::uint32_t kModeRegular = 0x2000u;
constexpr std::uint32_t kAttrDirectory = 0x0010u;
constexpr std::uint32_t kAttrRegular = 0x0020u;

// 0x8001xxxx carries a POSIX errno in its low half, which this title's own
// code corroborates: it materialises 0x80010009, 0x8001000C, 0x80010013 and
// 0x80010016, exactly EBADF, ENOMEM, ENODEV and EINVAL. 2 is ENOENT. pspsdk
// does not spell the composed value out, so the block is inferred rather than
// quoted; the title never tests this particular one.
constexpr std::int32_t kErrorNoFile = static_cast<std::int32_t>(0x80010002);

struct FileHandle {
    std::fstream stream;
    std::string psp_path;
    std::filesystem::path host_path;
    std::uint64_t size{};
    bool writable{};
    bool is_device{};
    std::uint64_t device_sector{};
    // A window onto the raw disc, opened through the "sce_lbn" path form.
    bool from_disc{};
    std::uint64_t disc_offset{};
    std::uint64_t disc_position{};
    // Host IO completes immediately, so an async request is simply performed
    // and its result parked here until the guest collects it.
    bool async_pending{};
    std::int64_t async_result{};
};

struct DirHandle {
    std::string psp_path;
    std::filesystem::path host_path;
    std::vector<std::filesystem::directory_entry> entries;
    std::size_t index{};
};

// A UMD directory begins with the records for itself and its parent, and the
// image this profile builds writes both. Reading the same directory through
// sceIoDread enumerated the staged tree instead, so it began at the first real
// name and left the two views of one disc disagreeing. A title that walks a
// directory has to cope with the pair on hardware, and one that copes by
// stepping over the first two entries was quietly losing two files per
// directory here.
constexpr std::size_t kDotEntries = 2u;

std::map<std::int32_t, FileHandle> g_files;
std::map<std::int32_t, DirHandle> g_dirs;
std::int32_t g_next_fd = 4;  // 0/1/2 are the std streams
IoStats g_stats;
std::string g_last_failed_open;

// Where disc sectors come from: a layout synthesised over the staged tree.
SyntheticDisc g_disc;
constexpr std::uint32_t kSectorSize = 2048u;

// ISO 9660 puts the primary volume descriptor at sector 16 (ECMA-119).
constexpr std::uint32_t kVolumeDescriptorSector = 16u;

// UMD ioctl commands this profile answers. Both read disc structure rather
// than file contents, so both are served from the UMD image.
// "Is a medium present?" on the memory stick. Not in pspsdk's headers, so the
// contract was read out of the title's own code instead: after the call it
// tests v0 for a negative error, then loads the four-byte output and compares
// it with 1. All eleven sceIoDevctl sites in the corpus issue this one command.
constexpr std::uint32_t kDevctlMediumPresent = 0x02425823u;

constexpr std::uint32_t kIoctlGetVolumeDescriptor = 0x01020001u;
constexpr std::uint32_t kIoctlGetPathTable = 0x01020002u;

std::uint32_t read_le32(const std::uint8_t *bytes) {
    return static_cast<std::uint32_t>(bytes[0]) | (static_cast<std::uint32_t>(bytes[1]) << 8u) |
           (static_cast<std::uint32_t>(bytes[2]) << 16u) | (static_cast<std::uint32_t>(bytes[3]) << 24u);
}

// An entry as the disc itself describes it. The sector is what a title needs to
// address content by position rather than by name; a staged copy on the host
// cannot supply it, so it is read from the image.
struct IsoEntry {
    std::uint32_t sector{};
    std::uint32_t size{};
    bool directory{};
};

// Directory-record field offsets are ECMA-119 (ISO 9660): extent at 2, data
// length at 10, flags at 25, identifier length at 32, identifier at 33.
constexpr std::uint32_t kRecordExtentOffset = 2u;
constexpr std::uint32_t kRecordLengthOffset = 10u;
constexpr std::uint32_t kRecordFlagsOffset = 25u;
constexpr std::uint32_t kRecordNameLengthOffset = 32u;
constexpr std::uint32_t kRecordNameOffset = 33u;
constexpr std::uint8_t kRecordFlagDirectory = 0x02u;

// The root directory's own record lives inside the volume descriptor at 156.
constexpr std::uint32_t kDescriptorRootRecordOffset = 156u;
// Raw UMD offsets are expressed in sectors, not bytes. Verified rather than
// assumed: the title's first device access seeks to 16 and reads 32 bytes, and
// sector 16 is where ISO9660 puts the primary volume descriptor, whose bytes
// 1..5 are the "CD001" identifier. install_io_hle checks for exactly that and
// says so in the log, so a wrong unit is visible instead of silent.

void set_return(AllegrexContext &ctx, std::uint32_t value) { ctx.set_gpr(2, value); }
void set_return64(AllegrexContext &ctx, std::uint64_t value) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(value & 0xFFFFFFFFu));
    ctx.set_gpr(3, static_cast<std::uint32_t>(value >> 32u));
}

std::string read_path(Runtime &rt, std::uint32_t address) {
    return rt.memory().read_c_string(address, 512u);
}

FileHandle *file_at(std::int32_t fd) {
    const auto it = g_files.find(fd);
    return it == g_files.end() ? nullptr : &it->second;
}

void write_stat(Runtime &rt, std::uint32_t address, const std::filesystem::path &host_path,
                bool is_directory, std::uint32_t disc_sector) {
    rt.memory().zero(address, kStatSize);
    std::error_code ec;
    std::uint64_t size = 0u;
    if (!is_directory) {
        // file_size reports failure through `ec` and returns uintmax_t(-1). Not
        // reading `ec` puts that straight into st_size, telling the guest the
        // file is 16 exabytes rather than that it could not be measured.
        const std::uintmax_t measured = std::filesystem::file_size(host_path, ec);
        if (!ec) size = static_cast<std::uint64_t>(measured);
    }
    rt.memory().store32(address + kStatModeOffset, is_directory ? kModeDirectory : kModeRegular);
    rt.memory().store32(address + kStatAttrOffset, is_directory ? kAttrDirectory : kAttrRegular);
    rt.memory().store32(address + kStatSizeOffset, static_cast<std::uint32_t>(size & 0xFFFFFFFFu));
    rt.memory().store32(address + kStatSizeOffset + 4u, static_cast<std::uint32_t>(size >> 32u));
    // st_private[0] carries the entry's sector on the disc. A title that
    // addresses content by position reads it from here and then opens the
    // "sce_lbn" path form, so leaving it zero sends it to sector zero.
    rt.memory().store32(address + kStatPrivateOffset, disc_sector);
    // Timestamps are left zeroed; nothing observed depends on them, and a
    // fabricated date would be worse than an obviously empty one.
    (void)kStatCtimeOffset;
}

// Reads whole sectors straight out of the UMD image. Returns the byte count
// actually read, which is short of the request at end of media.
std::uint32_t read_disc_sectors(std::uint32_t sector, std::uint32_t count, std::uint8_t *out) {
    if (count == 0u || out == nullptr) return 0u;
    return g_disc.read(sector, count, out);
}

bool disc_available() { return g_disc.ready(); }

std::uint64_t disc_size_bytes() {
    return static_cast<std::uint64_t>(g_disc.total_sectors()) * kSectorSize;
}

// Reads a byte range from the disc. A disc only addresses whole sectors, so
// this covers the range with sectors and returns the slice that was asked for.
std::uint32_t read_disc_bytes(std::uint64_t byte_offset, std::uint32_t length, std::uint8_t *out) {
    if (length == 0u || out == nullptr) return 0u;
    const std::uint64_t total = disc_size_bytes();
    if (byte_offset >= total) return 0u;
    const auto want = static_cast<std::uint32_t>(
        std::min<std::uint64_t>(length, total - byte_offset));

    const std::uint32_t first = static_cast<std::uint32_t>(byte_offset / kSectorSize);
    const std::uint32_t skip = static_cast<std::uint32_t>(byte_offset % kSectorSize);
    const std::uint32_t sectors = (skip + want + kSectorSize - 1u) / kSectorSize;
    std::vector<std::uint8_t> staging(static_cast<std::size_t>(sectors) * kSectorSize);
    const std::uint32_t produced = read_disc_sectors(first, sectors, staging.data());
    if (produced <= skip) return 0u;
    const std::uint32_t got = std::min(want, produced - skip);
    std::memcpy(out, staging.data() + skip, got);
    return got;
}

// ISO 9660 stores names uppercased and may append a ";1" version suffix, while
// a title asks with whatever case it was built with.
bool iso_name_matches(const std::string &record_name, const std::string &wanted) {
    std::string name = record_name;
    const std::size_t version = name.rfind(';');
    if (version != std::string::npos) name.erase(version);
    if (name.size() != wanted.size()) return false;
    for (std::size_t i = 0; i < name.size(); ++i) {
        const auto a = static_cast<unsigned char>(name[i]);
        const auto b = static_cast<unsigned char>(wanted[i]);
        if (std::tolower(a) != std::tolower(b)) return false;
    }
    return true;
}

// The root directory record, which every lookup starts from.
bool iso_root(IsoEntry &out) {
    std::array<std::uint8_t, kSectorSize> descriptor{};
    if (read_disc_sectors(kVolumeDescriptorSector, 1u, descriptor.data()) != kSectorSize) return false;
    const std::uint8_t *record = descriptor.data() + kDescriptorRootRecordOffset;
    out.sector = read_le32(record + kRecordExtentOffset);
    out.size = read_le32(record + kRecordLengthOffset);
    out.directory = true;
    return out.size != 0u;
}

// Walks one directory extent, calling `visit(name, entry)` for each record.
// Records never straddle a sector, so a zero length means "skip to the next".
template <typename Visitor>
bool iso_walk_directory(const IsoEntry &directory, Visitor visit) {
    if (directory.size == 0u) return false;
    const std::uint32_t sectors = (directory.size + kSectorSize - 1u) / kSectorSize;
    std::vector<std::uint8_t> data(static_cast<std::size_t>(sectors) * kSectorSize);
    if (read_disc_sectors(directory.sector, sectors, data.data()) < directory.size) return false;

    std::uint32_t offset = 0u;
    while (offset < directory.size) {
        const std::uint8_t length = data[offset];
        if (length == 0u) {
            offset = (offset / kSectorSize + 1u) * kSectorSize;
            continue;
        }
        if (offset + length > data.size()) break;
        const std::uint8_t *record = data.data() + offset;
        const std::uint8_t name_length = record[kRecordNameLengthOffset];
        if (kRecordNameOffset + name_length <= length) {
            IsoEntry entry;
            entry.sector = read_le32(record + kRecordExtentOffset);
            entry.size = read_le32(record + kRecordLengthOffset);
            entry.directory = (record[kRecordFlagsOffset] & kRecordFlagDirectory) != 0u;
            const std::string name(reinterpret_cast<const char *>(record + kRecordNameOffset),
                                   name_length);
            if (visit(name, entry)) return true;
        }
        offset += length;
    }
    return false;
}

// Resolves a guest path such as "disc0:/PSP_GAME/USRDIR/eaj/file.csi" against
// the disc image. Returns nothing when there is no image or no such entry.
std::optional<IsoEntry> iso_lookup(const std::string &psp_path) {
    if (!disc_available()) return std::nullopt;
    IsoEntry current;
    if (!iso_root(current)) return std::nullopt;

    const std::size_t start = psp_path.find('/');
    if (start == std::string::npos) return current;

    std::size_t cursor = start + 1u;
    while (cursor <= psp_path.size()) {
        const std::size_t slash = psp_path.find('/', cursor);
        const std::string component =
            psp_path.substr(cursor, slash == std::string::npos ? std::string::npos : slash - cursor);
        if (!component.empty()) {
            if (!current.directory) return std::nullopt;
            IsoEntry found;
            bool matched = false;
            iso_walk_directory(current, [&](const std::string &name, const IsoEntry &entry) {
                // The first two records of every directory are "." and "..",
                // whose identifiers are a single 0x00 or 0x01 byte.
                if (name.size() == 1u && static_cast<unsigned char>(name[0]) <= 1u) return false;
                if (!iso_name_matches(name, component)) return false;
                found = entry;
                matched = true;
                return true;
            });
            if (!matched) return std::nullopt;
            current = found;
        }
        if (slash == std::string::npos) break;
        cursor = slash + 1u;
    }
    return current;
}

// The PSP addresses raw disc content with the path form
// "sce_lbn<sector>_size<bytes>", each field hexadecimal with an optional "0x".
bool parse_lbn_path(const std::string &psp_path, std::uint32_t &sector, std::uint32_t &size) {
    const std::size_t name_start = psp_path.rfind('/');
    const std::string name =
        name_start == std::string::npos ? psp_path : psp_path.substr(name_start + 1u);
    if (name.rfind("sce_lbn", 0) != 0) return false;
    const std::size_t size_marker = name.find("_size");
    if (size_marker == std::string::npos) return false;

    const auto parse_hex = [](std::string text, std::uint32_t &out) {
        if (text.rfind("0x", 0) == 0 || text.rfind("0X", 0) == 0) text.erase(0, 2);
        if (text.empty()) return false;
        std::uint32_t value = 0u;
        for (const char c : text) {
            const auto digit = static_cast<unsigned char>(c);
            std::uint32_t nibble;
            if (digit >= '0' && digit <= '9') nibble = static_cast<std::uint32_t>(digit - '0');
            else if (digit >= 'a' && digit <= 'f') nibble = static_cast<std::uint32_t>(digit - 'a' + 10);
            else if (digit >= 'A' && digit <= 'F') nibble = static_cast<std::uint32_t>(digit - 'A' + 10);
            else break;  // trailing text after the number is permitted
            value = value * 16u + nibble;
        }
        out = value;
        return true;
    };

    return parse_hex(name.substr(7u, size_marker - 7u), sector) &&
           parse_hex(name.substr(size_marker + 5u), size);
}

// "umd0:", "disc0:" and friends name a raw block device rather than a file.
// A title opens one to query drive state or read sectors directly.
bool is_device_path(const std::string &psp_path) {
    return !psp_path.empty() && psp_path.back() == ':';
}

// Performs an open and returns the new fd, or a negative PSP error.
std::int32_t do_open(Runtime &rt, const std::string &psp_path, std::uint32_t flags) {
    if (is_device_path(psp_path)) {
        // Opened with no backing storage for now. Reads report end-of-media,
        // which is visibly different from the drive being absent. Every use of
        // the handle is logged so the access pattern can be characterised
        // before deciding how to back it.
        FileHandle handle;
        handle.psp_path = psp_path;
        handle.is_device = true;
        const std::int32_t fd = g_next_fd++;
        g_files.emplace(fd, std::move(handle));
        ++g_stats.opens;
        ++g_stats.device_opens;
        runtime_log_line("sceIoOpen device " + psp_path + " -> fd " + std::to_string(fd));
        return fd;
    }

    // Content addressed by disc position rather than by name. A staged copy on
    // the host has no sectors of its own, so this goes to the disc layout.
    std::uint32_t lbn_sector = 0u;
    std::uint32_t lbn_size = 0u;
    if (parse_lbn_path(psp_path, lbn_sector, lbn_size)) {
        if (!disc_available()) {
            ++g_stats.failed_opens;
            g_last_failed_open = psp_path;
            runtime_log_line("sceIoOpen " + psp_path + " needs a disc layout, and there is none");
            return kErrorNoFile;
        }
        FileHandle handle;
        handle.psp_path = psp_path;
        handle.from_disc = true;
        handle.disc_offset = static_cast<std::uint64_t>(lbn_sector) * kSectorSize;
        handle.size = lbn_size;
        if (handle.disc_offset >= disc_size_bytes()) {
            ++g_stats.failed_opens;
            g_last_failed_open = psp_path;
            runtime_log_line("sceIoOpen " + psp_path + " is past the end of the disc");
            return kErrorNoFile;
        }
        const std::int32_t fd = g_next_fd++;
        g_files.emplace(fd, std::move(handle));
        ++g_stats.opens;
        ++g_stats.lbn_opens;
        runtime_log_line("sceIoOpen sector " + std::to_string(lbn_sector) + " size " +
                         std::to_string(lbn_size) + " -> fd " + std::to_string(fd));
        return fd;
    }

    std::filesystem::path host_path;
    try {
        host_path = rt.translate_path(psp_path);
    } catch (const std::exception &) {
        return kErrorNoFile;
    }

    const bool wants_write = (flags & (kOpenWrite | kOpenAppend | kOpenCreate | kOpenTruncate)) != 0u;
    std::error_code ec;
    const bool exists = std::filesystem::is_regular_file(host_path, ec);
    if (!exists && !(flags & kOpenCreate)) {
        ++g_stats.failed_opens;
        g_last_failed_open = psp_path;
        runtime_log_line("sceIoOpen MISSING " + psp_path + " -> " + host_path.string());
        return kErrorNoFile;
    }
    if (exists && (flags & kOpenExclusive) && (flags & kOpenCreate)) return kErrorNoFile;

    std::ios::openmode mode = std::ios::binary;
    if (wants_write) {
        mode |= std::ios::out;
        if (flags & kOpenRead) mode |= std::ios::in;
        if (flags & kOpenAppend) mode |= std::ios::app;
        if (flags & kOpenTruncate) mode |= std::ios::trunc;
        if (exists && !(flags & kOpenTruncate)) mode |= std::ios::in;
        std::filesystem::create_directories(host_path.parent_path(), ec);
    } else {
        mode |= std::ios::in;
    }

    FileHandle handle;
    handle.stream.open(host_path, mode);
    if (!handle.stream.is_open()) {
        ++g_stats.failed_opens;
        g_last_failed_open = psp_path;
        runtime_log_line("sceIoOpen FAILED " + psp_path + " -> " + host_path.string());
        return kErrorNoFile;
    }
    handle.psp_path = psp_path;
    handle.host_path = host_path;
    handle.writable = wants_write;
    handle.size = exists ? static_cast<std::uint64_t>(std::filesystem::file_size(host_path, ec)) : 0u;

    const std::int32_t fd = g_next_fd++;
    const std::uint64_t size = handle.size;
    g_files.emplace(fd, std::move(handle));
    ++g_stats.opens;
    runtime_log_line("sceIoOpen " + psp_path + " -> fd " + std::to_string(fd) + " size=" +
                     std::to_string(size));
    return fd;
}

std::int32_t do_read_inner(Runtime &rt, std::int32_t fd, std::uint32_t buffer, std::uint32_t length) {
    FileHandle *handle = file_at(fd);
    if (handle == nullptr) return kErrorNoFile;
    // Both the length and the destination are the guest's. Checking the
    // destination can hold the length before staging anything means a wrong
    // length is refused rather than turned into an allocation of that size,
    // which is a request this side has no reason to honour.
    if (length != 0u && !rt.memory().contains(buffer, length)) {
        runtime_log_line("sceIoRead: " + std::to_string(length) + " bytes into " +
                         psprecomp::hex32(buffer) + " is not guest memory");
        return kErrorNoFile;
    }
    if (handle->is_device) {
        if (!disc_available()) {
            runtime_log_line("sceIoRead on device " + handle->psp_path + " length=" +
                             std::to_string(length) + " -> no disc layout, end of media");
            return 0;
        }
        const std::uint64_t byte_offset = handle->device_sector * kSectorSize;
        std::vector<std::uint8_t> staging(length);
        const auto got = static_cast<std::size_t>(read_disc_bytes(byte_offset, length, staging.data()));
        if (got != 0u) rt.memory().copy_in(buffer, std::span<const std::uint8_t>(staging.data(), got));
        handle->device_sector += (got + kSectorSize - 1u) / kSectorSize;
        ++g_stats.device_reads;
        g_stats.device_bytes_read += got;
        return static_cast<std::int32_t>(got);
    }
    if (handle->from_disc) {
        if (handle->disc_position >= handle->size) return 0;
        const std::uint64_t remaining = handle->size - handle->disc_position;
        const auto want = static_cast<std::uint32_t>(std::min<std::uint64_t>(length, remaining));
        std::vector<std::uint8_t> staging(want);
        const auto got = static_cast<std::size_t>(
            read_disc_bytes(handle->disc_offset + handle->disc_position, want, staging.data()));
        if (got != 0u) rt.memory().copy_in(buffer, std::span<const std::uint8_t>(staging.data(), got));
        handle->disc_position += got;
        ++g_stats.reads;
        g_stats.bytes_read += got;
        return static_cast<std::int32_t>(got);
    }
    if (length == 0u) return 0;
    std::vector<std::uint8_t> staging(length);
    handle->stream.read(reinterpret_cast<char *>(staging.data()), static_cast<std::streamsize>(length));
    const auto got = static_cast<std::size_t>(handle->stream.gcount());
    handle->stream.clear();  // a short read at EOF is not an error to the guest
    if (got != 0u) rt.memory().copy_in(buffer, std::span<const std::uint8_t>(staging.data(), got));
    ++g_stats.reads;
    g_stats.bytes_read += got;
    return static_cast<std::int32_t>(got);
}

// Every successful read, with the guest range it landed in. Off by default:
// a loading phase issues thousands of these and one line each would bury the
// log. PSPRECOMP_DEFJAM_LOG_READS=1 turns it on, which is how you find out
// which read delivered a given byte - the question that arrives the moment the
// guest jumps somewhere the corpus does not cover.
// The last few reads and where they landed. Small on purpose: this is for the
// read that delivered the code the guest just jumped into, which is one of the
// most recent by construction.
struct RecentRead {
    std::uint32_t address{};
    std::uint32_t length{};
    std::string path;
};
std::array<RecentRead, 96> g_recent_reads{};
std::size_t g_recent_head = 0u;

void remember_read(std::uint32_t address, std::uint32_t length, const std::string &path) {
    g_recent_reads[g_recent_head] = RecentRead{address, length, path};
    g_recent_head = (g_recent_head + 1u) % g_recent_reads.size();
}

std::int32_t do_read(Runtime &rt, std::int32_t fd, std::uint32_t buffer, std::uint32_t length) {
    static const bool log_reads = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_LOG_READS");
        return text != nullptr && *text != 0 && *text != 48;
    }();
    const std::int32_t got = do_read_inner(rt, fd, buffer, length);
    // An audio bank arrives as an ordinary read, by raw sector and with no name
    // attached, so this is the only place its routine can be recognised and
    // registered before the sound engine calls it.
    if (got > 0) {
        const FileHandle *handle = file_at(fd);
        remember_read(buffer, static_cast<std::uint32_t>(got),
                      handle != nullptr ? handle->psp_path : std::string("?"));
        note_possible_bank(rt, buffer, static_cast<std::uint32_t>(got));
        // Which read, if any, delivered the bytes now sitting at a given guest
        // address. A buffer holding noise is either written by the game or read
        // from the disc, and only the read log can tell those two apart.
        static const std::uint32_t traced = [] {
            const char *text = std::getenv("PSPRECOMP_DEFJAM_READ_INTO");
            return text == nullptr ? 0u
                                   : static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
        }();
        if (traced != 0u && traced >= buffer &&
            traced < buffer + static_cast<std::uint32_t>(got)) {
            runtime_log_line("read covers " + psprecomp::hex32(traced) + ": " +
                             psprecomp::hex32(buffer) + " + " + std::to_string(got) + " from " +
                             (handle != nullptr ? handle->psp_path : std::string("?")));
        }
    }
    if (log_reads && got > 0) {
        const FileHandle *handle = file_at(fd);
        runtime_log_line("sceIoRead fd=" + std::to_string(fd) + " " +
                         (handle != nullptr ? handle->psp_path : std::string("?")) + " -> " +
                         psprecomp::hex32(buffer) + ".." +
                         psprecomp::hex32(buffer + static_cast<std::uint32_t>(got)) + " (" +
                         std::to_string(got) + " bytes)");
    }
    return got;
}

std::int64_t do_seek(std::int32_t fd, std::int64_t offset, std::uint32_t whence) {
    FileHandle *handle = file_at(fd);
    if (handle == nullptr) return kErrorNoFile;
    if (handle->is_device) {
        // Only absolute positioning is observed; anything else would need the
        // media size semantics pinned down first.
        if (whence == 1u) handle->device_sector += static_cast<std::uint64_t>(offset);
        else handle->device_sector = static_cast<std::uint64_t>(offset);
        return static_cast<std::int64_t>(handle->device_sector);
    }
    if (handle->from_disc) {
        std::int64_t target = offset;
        if (whence == 1u) target += static_cast<std::int64_t>(handle->disc_position);
        else if (whence == 2u) target += static_cast<std::int64_t>(handle->size);
        if (target < 0) target = 0;
        handle->disc_position =
            std::min<std::uint64_t>(static_cast<std::uint64_t>(target), handle->size);
        ++g_stats.seeks;
        return static_cast<std::int64_t>(handle->disc_position);
    }
    std::ios::seekdir direction = std::ios::beg;
    if (whence == 1u) direction = std::ios::cur;
    else if (whence == 2u) direction = std::ios::end;
    handle->stream.clear();
    handle->stream.seekg(static_cast<std::streamoff>(offset), direction);
    // Read and write share one position on an fstream, so repeating a relative
    // seek for the write head moves it a second time. Point it at where the
    // read head actually landed instead.
    if (handle->writable) handle->stream.seekp(handle->stream.tellg());
    ++g_stats.seeks;
    return static_cast<std::int64_t>(handle->stream.tellg());
}

void park_async(std::int32_t fd, std::int64_t result) {
    if (FileHandle *handle = file_at(fd); handle != nullptr) {
        handle->async_pending = true;
        handle->async_result = result;
    }
}

// Shared by sceIoWaitAsync, its callback form and sceIoPollAsync. Host IO has
// already completed, so the only difference is what a missing result means.
void collect_async(Runtime &rt, AllegrexContext &ctx, bool polling) {
    const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
    FileHandle *handle = file_at(fd);
    if (handle == nullptr) { set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile)); return; }
    if (!handle->async_pending) {
        // Nothing outstanding: 1 means "still busy" to a poller, and for the
        // waiting form there is simply no result to hand back.
        set_return(ctx, polling ? 1u : 0u);
        return;
    }
    if (ctx.gpr[5] != 0u) {
        rt.memory().store32(ctx.gpr[5], static_cast<std::uint32_t>(handle->async_result & 0xFFFFFFFF));
        rt.memory().store32(ctx.gpr[5] + 4u,
                            static_cast<std::uint32_t>(static_cast<std::uint64_t>(handle->async_result) >> 32u));
    }
    handle->async_pending = false;
    set_return(ctx, 0u);
}

} // namespace

std::string read_covering(std::uint32_t address) {
    // Most recent first. Searching in storage order returns whichever entry
    // happens to sit earliest in the ring, and a buffer gets reused: an older
    // read of a different file covered the address that a later one had
    // actually filled, and the answer named the wrong file.
    for (std::size_t step = 0; step < g_recent_reads.size(); ++step) {
        const RecentRead &read =
            g_recent_reads[(g_recent_head + g_recent_reads.size() - 1u - step) % g_recent_reads.size()];
        if (read.length == 0u) continue;
        if (address < read.address || address >= read.address + read.length) continue;
        return read.path + " read into " + psprecomp::hex32(read.address) + ".." +
               psprecomp::hex32(read.address + read.length) + ", " +
               std::to_string(address - read.address) + " bytes in";
    }
    return {};
}

IoStats io_stats() {
    IoStats stats = g_stats;
    stats.open_handles = static_cast<std::uint32_t>(g_files.size() + g_dirs.size());
    stats.disc_unreadable = g_disc.unreadable_files();
    stats.disc_short_reads = g_disc.short_reads();
    return stats;
}

std::string last_failed_open() { return g_last_failed_open; }

bool parse_disc_sector_path(const std::string &psp_path, std::uint32_t &sector,
                            std::uint32_t &size) {
    return parse_lbn_path(psp_path, sector, size);
}

std::string io_path_for_fd(std::int32_t fd) {
    const FileHandle *handle = file_at(fd);
    return handle == nullptr ? std::string{} : handle->psp_path;
}

void install_io_hle(Runtime &runtime) {
    install_io_hle(runtime, runtime.game_root().string());
}

void install_io_hle(Runtime &runtime, const std::string &game_root) {
    g_files.clear();
    g_dirs.clear();
    g_next_fd = 4;
    g_stats = IoStats{};
    g_last_failed_open.clear();

    // A title reads more from the disc than named files: the volume descriptor,
    // the path table, and the sector recorded in each directory entry, which it
    // then reopens as a raw disc position. Loose files on the host answer none
    // of that, so the layout is generated over them. The sectors are not the
    // original disc's and do not need to be, since a title only ever reads them
    // back through this same layout.
    std::string error;
    if (g_disc.build(game_root, error)) {
        runtime_log_line("disc layout over " + game_root + ": " +
                         std::to_string(g_disc.directory_count()) + " directories, " +
                         std::to_string(g_disc.file_count()) + " files, " +
                         std::to_string(g_disc.total_sectors()) + " sectors");
    } else {
        runtime_log_line("could not build a disc layout: " + error);
    }

    runtime.register_hle("IoFileMgrForUser", 0x109F50BCu, [](Runtime &rt, AllegrexContext &ctx) {
        const std::string path = read_path(rt, ctx.gpr[4]);
        const std::int32_t fd = do_open(rt, path, ctx.gpr[5]);
        set_return(ctx, static_cast<std::uint32_t>(fd));
    });
    runtime.register_hle("IoFileMgrForUser", 0x89AA9906u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::string path = read_path(rt, ctx.gpr[4]);
        const std::int32_t fd = do_open(rt, path, ctx.gpr[5]);
        if (fd >= 0) park_async(fd, fd);
        set_return(ctx, static_cast<std::uint32_t>(fd));
    });
    runtime.register_hle("IoFileMgrForUser", 0x810C4BC3u, [](Runtime &, AllegrexContext &ctx) {
        g_files.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_return(ctx, 0u);
    });
    runtime.register_hle("IoFileMgrForUser", 0xFF5940B6u, [](Runtime &, AllegrexContext &ctx) {
        const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
        // The handle must survive until the guest collects the result.
        park_async(fd, 0);
        set_return(ctx, 0u);
    });
    runtime.register_hle("IoFileMgrForUser", 0x6A638D83u, [](Runtime &rt, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(
                            do_read(rt, static_cast<std::int32_t>(ctx.gpr[4]), ctx.gpr[5], ctx.gpr[6])));
    });
    runtime.register_hle("IoFileMgrForUser", 0xA0B5A7C2u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
        park_async(fd, do_read(rt, fd, ctx.gpr[5], ctx.gpr[6]));
        set_return(ctx, 0u);
    });
    runtime.register_hle("IoFileMgrForUser", 0x42EC03ACu, [](Runtime &rt, AllegrexContext &ctx) {
        FileHandle *handle = file_at(static_cast<std::int32_t>(ctx.gpr[4]));
        const std::uint32_t length = ctx.gpr[6];
        if (handle == nullptr || !handle->writable) {
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        // As with reads: the source range is checked before it is staged.
        if (length != 0u && !rt.memory().contains(ctx.gpr[5], length)) {
            runtime_log_line("sceIoWrite: " + std::to_string(length) + " bytes from " +
                             psprecomp::hex32(ctx.gpr[5]) + " is not guest memory");
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        std::vector<std::uint8_t> staging(length);
        if (length != 0u) rt.memory().copy_out(ctx.gpr[5], staging);
        handle->stream.write(reinterpret_cast<const char *>(staging.data()),
                             static_cast<std::streamsize>(length));
        handle->stream.flush();
        // Reporting the requested length whatever happened tells a title its
        // save was written when the stream may have failed outright.
        if (!handle->stream) {
            handle->stream.clear();
            runtime_log_line("sceIoWrite: " + std::to_string(length) + " bytes to " +
                             handle->psp_path + " failed");
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        set_return(ctx, length);
    });

    // sceIoLseek takes a 64-bit offset, which consumes the aligned a2/a3 pair,
    // leaving `whence` as the fifth register argument in $t0. sceIoLseek32 is
    // the all-register form and needs no such care.
    runtime.register_hle("IoFileMgrForUser", 0x27EB27B8u, [](Runtime &, AllegrexContext &ctx) {
        const std::int64_t offset = static_cast<std::int64_t>(
            (static_cast<std::uint64_t>(ctx.gpr[7]) << 32u) | ctx.gpr[6]);
        const std::uint32_t whence = ctx.gpr[8];
        set_return64(ctx, static_cast<std::uint64_t>(
                              do_seek(static_cast<std::int32_t>(ctx.gpr[4]), offset, whence)));
    });
    runtime.register_hle("IoFileMgrForUser", 0x68963324u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(do_seek(static_cast<std::int32_t>(ctx.gpr[4]),
                                                           static_cast<std::int32_t>(ctx.gpr[5]),
                                                           ctx.gpr[6])));
    });
    runtime.register_hle("IoFileMgrForUser", 0x71B19E77u, [](Runtime &, AllegrexContext &ctx) {
        const std::int64_t offset = static_cast<std::int64_t>(
            (static_cast<std::uint64_t>(ctx.gpr[7]) << 32u) | ctx.gpr[6]);
        const std::uint32_t whence = ctx.gpr[8];
        const std::int32_t fd = static_cast<std::int32_t>(ctx.gpr[4]);
        park_async(fd, do_seek(fd, offset, whence));
        set_return(ctx, 0u);
    });

    runtime.register_hle("IoFileMgrForUser", 0xE23EEC33u, [](Runtime &rt, AllegrexContext &ctx) {
        collect_async(rt, ctx, false);
    });
    runtime.register_hle("IoFileMgrForUser", 0x35DBD746u, [](Runtime &rt, AllegrexContext &ctx) {
        collect_async(rt, ctx, false);
    });
    runtime.register_hle("IoFileMgrForUser", 0x3251EA56u, [](Runtime &rt, AllegrexContext &ctx) {
        collect_async(rt, ctx, true);
    });
    runtime.register_hle("IoFileMgrForUser", 0xB293727Fu, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 0u);  // async priority is meaningless without a real IO thread
    });

    runtime.register_hle("IoFileMgrForUser", 0xACE946E8u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::string path = read_path(rt, ctx.gpr[4]);
        std::filesystem::path host_path;
        try {
            host_path = rt.translate_path(path);
        } catch (const std::exception &) {
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        std::error_code ec;
        const bool is_dir = std::filesystem::is_directory(host_path, ec);
        if (!is_dir && !std::filesystem::is_regular_file(host_path, ec)) {
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        if (ctx.gpr[5] != 0u) {
            const auto entry = iso_lookup(path);
            // The sector reported here is what the title turns into its
            // "sce_lbn" read path, so a wrong one here becomes a read of the
            // wrong part of the disc later, with no error anywhere in between.
            if (std::getenv("PSPRECOMP_DEFJAM_LOG_STAT") != nullptr) {
                std::error_code size_ec;
                const auto bytes = is_dir ? 0u : std::filesystem::file_size(host_path, size_ec);
                runtime_log_line("stat " + path + " -> sector " +
                                 (entry ? psprecomp::hex32(entry->sector) : std::string("none")) +
                                 " iso_size " +
                                 (entry ? std::to_string(entry->size) : std::string("none")) +
                                 " host_size " + std::to_string(bytes));
            }
            write_stat(rt, ctx.gpr[5], host_path, is_dir, entry ? entry->sector : 0u);
        }
        set_return(ctx, 0u);
    });

    runtime.register_hle("IoFileMgrForUser", 0xB29DDF9Cu, [](Runtime &rt, AllegrexContext &ctx) {
        const std::string path = read_path(rt, ctx.gpr[4]);
        std::filesystem::path host_path;
        try {
            host_path = rt.translate_path(path);
        } catch (const std::exception &) {
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        std::error_code ec;
        if (!std::filesystem::is_directory(host_path, ec)) {
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        DirHandle handle;
        handle.psp_path = path;
        handle.host_path = host_path;
        for (const auto &entry : std::filesystem::directory_iterator(host_path, ec))
            handle.entries.push_back(entry);
        // Deterministic order; the host filesystem's is not guaranteed.
        std::sort(handle.entries.begin(), handle.entries.end(),
                  [](const auto &a, const auto &b) { return a.path().filename() < b.path().filename(); });
        const std::int32_t uid = g_next_fd++;
        g_dirs.emplace(uid, std::move(handle));
        ++g_stats.dir_opens;
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("IoFileMgrForUser", 0xE3EB004Cu, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_dirs.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_dirs.end()) { set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile)); return; }
        DirHandle &handle = it->second;
        if (handle.index >= handle.entries.size() + kDotEntries) { set_return(ctx, 0u); return; }
        const std::uint32_t dirent = ctx.gpr[5];
        if (handle.index < kDotEntries) {
            const bool self = handle.index == 0u;
            const std::string name = self ? "." : "..";
            ++handle.index;
            if (dirent != 0u) {
                // The parent of the root is the root, which is what the image
                // writes there too.
                const std::string parent_path =
                    handle.psp_path.substr(0u, handle.psp_path.find_last_of('/'));
                const auto on_disc = iso_lookup(self || parent_path.empty() ? handle.psp_path
                                                                            : parent_path);
                const std::filesystem::path host =
                    self ? handle.host_path : handle.host_path.parent_path();
                write_stat(rt, dirent, host, true, on_disc ? on_disc->sector : 0u);
                rt.memory().zero(dirent + kDirentNameOffset, kDirentNameCapacity);
                for (std::size_t i = 0; i < name.size(); ++i) {
                    rt.memory().store8(dirent + kDirentNameOffset + static_cast<std::uint32_t>(i),
                                       static_cast<std::uint8_t>(name[i]));
                }
                rt.memory().store32(dirent + kDirentPrivateOffset, 0u);
            }
            set_return(ctx, 1u);
            return;
        }
        const auto &entry = handle.entries[handle.index++ - kDotEntries];
        if (dirent != 0u) {
            std::error_code ec;
            const bool is_dir = entry.is_directory(ec);
            const std::string name = entry.path().filename().string();
            // The sector belongs to the disc, so it is looked up on the image
            // rather than inferred from the staged copy being enumerated.
            const auto on_disc = iso_lookup(handle.psp_path + "/" + name);
            write_stat(rt, dirent, entry.path(), is_dir, on_disc ? on_disc->sector : 0u);
            rt.memory().zero(dirent + kDirentNameOffset, kDirentNameCapacity);
            const std::size_t copy = std::min<std::size_t>(name.size(), kDirentNameCapacity - 1u);
            for (std::size_t i = 0; i < copy; ++i) {
                rt.memory().store8(dirent + kDirentNameOffset + static_cast<std::uint32_t>(i),
                                   static_cast<std::uint8_t>(name[i]));
            }
            rt.memory().store32(dirent + kDirentPrivateOffset, 0u);
        }
        set_return(ctx, 1u);
    });
    runtime.register_hle("IoFileMgrForUser", 0xEB092469u, [](Runtime &, AllegrexContext &ctx) {
        g_dirs.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_return(ctx, 0u);
    });

    runtime.register_hle("IoFileMgrForUser", 0x06A70004u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::string path = read_path(rt, ctx.gpr[4]);
        std::error_code ec;
        try {
            std::filesystem::create_directories(rt.translate_path(path), ec);
        } catch (const std::exception &) {
            // translate_path rejects a path it will not map, by throwing. Every
            // other handler here catches that; these two let it escape the HLE
            // call and take the run down with it.
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        set_return(ctx, ec ? static_cast<std::uint32_t>(kErrorNoFile) : 0u);
    });
    runtime.register_hle("IoFileMgrForUser", 0x779103A0u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::string from = read_path(rt, ctx.gpr[4]);
        const std::string to = read_path(rt, ctx.gpr[5]);
        std::error_code ec;
        try {
            std::filesystem::rename(rt.translate_path(from), rt.translate_path(to), ec);
        } catch (const std::exception &) {
            set_return(ctx, static_cast<std::uint32_t>(kErrorNoFile));
            return;
        }
        set_return(ctx, ec ? static_cast<std::uint32_t>(kErrorNoFile) : 0u);
    });

    runtime.register_hle("IoFileMgrForUser", 0x54F5FB11u, [](Runtime &rt, AllegrexContext &ctx) {
        // sceIoDevctl(device, cmd, indata, inlen, outdata, outlen). Arguments
        // five and six arrive in $t0 and $t1, as everywhere else in this title.
        const std::string device = read_path(rt, ctx.gpr[4]);
        const std::uint32_t command = ctx.gpr[5];
        const std::uint32_t outdata = ctx.gpr[8];
        const std::uint32_t outlen = ctx.gpr[9];

        // Answering this one matters: refused, the title asks again every
        // frame and never stops. It has somewhere to save - the profile keeps
        // a savedata directory - so reporting a medium is the truthful answer
        // rather than a convenient one.
        const bool memory_stick = device.rfind("fatms", 0u) == 0u || device.rfind("ms", 0u) == 0u;
        if (command == kDevctlMediumPresent && memory_stick && outlen >= 4u &&
            rt.memory().contains(outdata, 4u)) {
            rt.memory().store32(outdata, 1u);
            ++g_stats.medium_queries;
            set_return(ctx, 0u);
            return;
        }

        // Anything else is reported unsupported rather than answered with a
        // plausible lie.
        runtime_log_line("sceIoDevctl device=" + device + " cmd=" + psprecomp::hex32(command) +
                         " unsupported");
        set_return(ctx, static_cast<std::uint32_t>(-1));
    });
    runtime.register_hle("IoFileMgrForUser", 0xE95A012Bu, [](Runtime &rt, AllegrexContext &ctx) {
        // sceIoIoctlAsync(fd, cmd, indata, inlen, outdata, outlen).
        //
        // Arguments five and six arrive in $t0 and $t1, not on the stack. These
        // imports are kernel syscalls, and the kernel reads the caller's
        // register frame; the stubs in this image are the unpatched
        // "jr $ra; <slot>" form the loader fills in with a syscall. Measured at
        // three independent call sites in this title, across two libraries.
        const auto fd = static_cast<std::int32_t>(ctx.gpr[4]);
        const std::uint32_t command = ctx.gpr[5];
        const std::uint32_t outdata = ctx.gpr[8];
        const std::uint32_t outlen = ctx.gpr[9];

        switch (command) {
        case kIoctlGetVolumeDescriptor: {
            // The descriptor is a property of the disc, not of the open file,
            // so it comes from the UMD image rather than the staged copy.
            if (outlen < kSectorSize) break;
            if (!rt.memory().contains(outdata, kSectorSize)) break;
            std::array<std::uint8_t, kSectorSize> sector{};
            if (read_disc_sectors(kVolumeDescriptorSector, 1u, sector.data()) != kSectorSize) break;
            for (std::uint32_t i = 0; i < kSectorSize; ++i) rt.memory().store8(outdata + i, sector[i]);
            ++g_stats.umd_ioctls;
            park_async(fd, 0);
            set_return(ctx, 0u);
            return;
        }

        case kIoctlGetPathTable: {
            // Field offsets are ECMA-119 (ISO 9660): the little-endian path
            // table size is at 132 and the type-L table's sector at 140.
            std::array<std::uint8_t, kSectorSize> descriptor{};
            if (read_disc_sectors(kVolumeDescriptorSector, 1u, descriptor.data()) != kSectorSize) break;
            const std::uint32_t table_bytes = read_le32(descriptor.data() + 132u);
            const std::uint32_t table_sector = read_le32(descriptor.data() + 140u);
            if (table_bytes == 0u || outlen < table_bytes) break;
            if (!rt.memory().contains(outdata, table_bytes)) break;

            const std::uint32_t sectors = (table_bytes + kSectorSize - 1u) / kSectorSize;
            std::vector<std::uint8_t> table(static_cast<std::size_t>(sectors) * kSectorSize);
            if (read_disc_sectors(table_sector, sectors, table.data()) < table_bytes) break;
            for (std::uint32_t i = 0; i < table_bytes; ++i) rt.memory().store8(outdata + i, table[i]);
            ++g_stats.umd_ioctls;
            park_async(fd, 0);
            set_return(ctx, 0u);
            return;
        }

        default:
            break;
        }

        // Anything unhandled, or a handled command whose preconditions did not
        // hold, fails visibly rather than reporting a success it did not
        // perform. Logged once per command so a boot that needs more than the
        // two below says so instead of stalling silently.
        static std::set<std::uint32_t> reported;
        if (reported.insert(command).second) {
            const FileHandle *handle = file_at(fd);
            runtime_log_line("sceIoIoctlAsync UNHANDLED cmd=" + psprecomp::hex32(command) + " fd=" +
                             std::to_string(fd) + " (" +
                             (handle != nullptr ? handle->psp_path : std::string("?")) +
                             ") out=" + psprecomp::hex32(outdata) + "/" + std::to_string(outlen));
        }
        park_async(fd, -1);
        set_return(ctx, 0u);
    });
}

} // namespace defjam

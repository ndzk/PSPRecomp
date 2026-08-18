#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace defjam {

// A synthetic ISO 9660 layout over a staged directory tree.
//
// A title does not only open files by name. It reads the disc's own structure —
// the volume descriptor, the path table — and it addresses content by sector,
// taking the sector out of a directory entry and reopening it as a raw disc
// position. A directory of loose files on the host has none of that.
//
// This builds it: every staged file is given a sector range, every directory an
// extent holding real ISO 9660 records, and the volume descriptor and path
// table are generated to match. The sectors are not the ones on the original
// disc and do not need to be. A title uses them as opaque handles it reads back
// through the same layout, so they only have to be self-consistent.
//
// Field offsets and record layouts are ECMA-119.
class SyntheticDisc {
public:
    // Builds the layout by walking `root`. Returns false and fills `error` if
    // the tree cannot be laid out; a partially built disc is never left behind.
    bool build(const std::filesystem::path &root, std::string &error);

    [[nodiscard]] bool ready() const { return ready_; }
    [[nodiscard]] std::uint32_t total_sectors() const { return total_sectors_; }
    [[nodiscard]] std::uint32_t file_count() const { return file_count_; }
    [[nodiscard]] std::uint32_t directory_count() const { return directory_count_; }

    // Times a sector belonged to a staged file that could not be opened. Those
    // sectors read as zeroes, which is indistinguishable from a file that is
    // genuinely zeroed, so a non-zero count here is the only sign that the
    // staged tree lost something after it was laid out.
    [[nodiscard]] std::uint32_t unreadable_files() const { return unreadable_files_; }

    // Reads whole sectors. Returns how many bytes were produced, which is short
    // of the request past the end of the disc. Sectors that belong to no file
    // and no structure read as zeroes, exactly as the gaps on a real disc do.
    std::uint32_t read(std::uint32_t sector, std::uint32_t count, std::uint8_t *out) const;

private:
    struct FileExtent {
        std::uint32_t first_sector{};
        std::uint32_t sectors{};
        std::uint64_t size{};
        std::filesystem::path host_path;
    };

    bool ready_{};
    // read() is const, so this is the one thing it may still record.
    mutable std::uint32_t unreadable_files_{};
    std::uint32_t total_sectors_{};
    std::uint32_t file_count_{};
    std::uint32_t directory_count_{};

    // The generated metadata, laid out contiguously from `structure_sector_`.
    std::uint32_t structure_sector_{};
    std::vector<std::uint8_t> structure_;

    // Sorted by first_sector so a sector resolves by binary search.
    std::vector<FileExtent> files_;
};

} // namespace defjam

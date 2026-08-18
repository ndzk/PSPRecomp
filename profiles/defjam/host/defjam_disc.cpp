#include "defjam_disc.hpp"

#include <algorithm>
#include <cstring>
#include <fstream>
#include <system_error>

namespace defjam {
namespace {

constexpr std::uint32_t kSectorSize = 2048u;

// ECMA-119 fixes where the volume descriptors begin; everything after them is
// this layout's own choice.
constexpr std::uint32_t kVolumeDescriptorSector = 16u;
constexpr std::uint32_t kTerminatorSector = 17u;
constexpr std::uint32_t kFirstPathTableSector = 18u;

// Directory record: extent at 2, data length at 10, flags at 25, identifier
// length at 32, identifier at 33. A record is padded to an even length.
constexpr std::size_t kRecordFixedSize = 33u;
constexpr std::uint8_t kFlagDirectory = 0x02u;

// The two records every directory begins with. Their identifiers are a single
// byte, 0x00 for itself and 0x01 for its parent.
constexpr std::uint8_t kSelfIdentifier = 0x00u;
constexpr std::uint8_t kParentIdentifier = 0x01u;

void put_le16(std::uint8_t *out, std::uint16_t value) {
    out[0] = static_cast<std::uint8_t>(value);
    out[1] = static_cast<std::uint8_t>(value >> 8u);
}
void put_be16(std::uint8_t *out, std::uint16_t value) {
    out[0] = static_cast<std::uint8_t>(value >> 8u);
    out[1] = static_cast<std::uint8_t>(value);
}
void put_le32(std::uint8_t *out, std::uint32_t value) {
    for (int i = 0; i < 4; ++i) out[i] = static_cast<std::uint8_t>(value >> (8 * i));
}
void put_be32(std::uint8_t *out, std::uint32_t value) {
    for (int i = 0; i < 4; ++i) out[i] = static_cast<std::uint8_t>(value >> (8 * (3 - i)));
}
// Several fields are stored twice, little-endian then big-endian.
void put_both16(std::uint8_t *out, std::uint16_t value) {
    put_le16(out, value);
    put_be16(out + 2, value);
}
void put_both32(std::uint8_t *out, std::uint32_t value) {
    put_le32(out, value);
    put_be32(out + 4, value);
}

std::uint32_t sectors_for(std::uint64_t bytes) {
    return static_cast<std::uint32_t>((bytes + kSectorSize - 1u) / kSectorSize);
}

std::size_t record_size(std::size_t name_length) {
    const std::size_t size = kRecordFixedSize + name_length;
    return size + (size & 1u);  // records are padded to an even length
}

// Writes one directory record and returns how many bytes it took.
std::size_t write_record(std::uint8_t *out, std::uint32_t extent, std::uint64_t length,
                         bool directory, const std::string &name) {
    const std::size_t total = record_size(name.size());
    std::memset(out, 0, total);
    out[0] = static_cast<std::uint8_t>(total);
    out[1] = 0u;  // no extended attribute record
    put_both32(out + 2, extent);
    put_both32(out + 10, static_cast<std::uint32_t>(length));
    // Bytes 18..24 are the recording timestamp. Left zeroed rather than
    // invented; nothing observed reads it, and a made-up date would be worse
    // than an obviously absent one.
    out[25] = directory ? kFlagDirectory : 0u;
    out[26] = 0u;  // file unit size, not interleaved
    out[27] = 0u;  // interleave gap
    put_both16(out + 28, 1u);  // volume sequence number
    out[32] = static_cast<std::uint8_t>(name.size());
    std::memcpy(out + kRecordFixedSize, name.data(), name.size());
    return total;
}

// A directory being laid out. Numbering follows the path table: the root is 1
// and the rest follow in the order they are emitted.
struct DirectoryNode {
    std::string name;                     // empty for the root
    std::filesystem::path host_path;
    std::uint16_t number{};
    std::uint16_t parent_number{};
    std::vector<std::size_t> children;    // indices into the node list
    struct Entry {
        std::string name;
        bool directory{};
        std::uint64_t size{};
        std::size_t node{};               // for directories
        std::filesystem::path host_path;  // for files
        std::uint32_t first_sector{};     // filled in when sectors are assigned
    };
    std::vector<Entry> entries;
    std::uint32_t extent_sector{};
    std::uint32_t extent_size{};
};

} // namespace

std::uint32_t SyntheticDisc::read(std::uint32_t sector, std::uint32_t count,
                                  std::uint8_t *out) const {
    if (!ready_ || out == nullptr || count == 0u) return 0u;
    if (sector >= total_sectors_) return 0u;
    const std::uint32_t clamped = std::min(count, total_sectors_ - sector);
    std::memset(out, 0, static_cast<std::size_t>(clamped) * kSectorSize);

    const std::uint32_t structure_sectors = sectors_for(structure_.size());
    std::uint32_t i = 0u;
    while (i < clamped) {
        const std::uint32_t current = sector + i;
        std::uint8_t *target = out + static_cast<std::size_t>(i) * kSectorSize;

        // Generated metadata.
        if (current >= structure_sector_ && current < structure_sector_ + structure_sectors) {
            const std::uint32_t run =
                std::min(clamped - i, structure_sector_ + structure_sectors - current);
            const std::size_t offset =
                static_cast<std::size_t>(current - structure_sector_) * kSectorSize;
            const std::size_t available =
                offset < structure_.size()
                    ? std::min<std::size_t>(static_cast<std::size_t>(run) * kSectorSize,
                                            structure_.size() - offset)
                    : 0u;
            if (available != 0u) std::memcpy(target, structure_.data() + offset, available);
            i += run;
            continue;
        }

        // Otherwise it may belong to a file. Extents are disjoint and sorted,
        // so the last one starting at or before this sector is the candidate.
        const auto it = std::upper_bound(files_.begin(), files_.end(), current,
                                         [](std::uint32_t value, const FileExtent &extent) {
                                             return value < extent.first_sector;
                                         });
        if (it == files_.begin()) {
            ++i;  // a gap, already zeroed
            continue;
        }
        const FileExtent &extent = *(it - 1);
        if (current >= extent.first_sector + extent.sectors) {
            ++i;
            continue;
        }

        // Read the whole run that falls inside this file at once, rather than
        // reopening it for every sector.
        const std::uint32_t run =
            std::min(clamped - i, extent.first_sector + extent.sectors - current);
        const std::uint64_t offset =
            static_cast<std::uint64_t>(current - extent.first_sector) * kSectorSize;
        if (offset < extent.size) {
            const auto want = static_cast<std::streamsize>(
                std::min<std::uint64_t>(static_cast<std::uint64_t>(run) * kSectorSize,
                                        extent.size - offset));
            std::ifstream input(extent.host_path, std::ios::binary);
            if (input.is_open()) {
                input.seekg(static_cast<std::streamoff>(offset));
                input.read(reinterpret_cast<char *>(target), want);
            } else {
                // The sector still reads as zeroes, which is indistinguishable
                // from a file that is genuinely zeroed. Counted so a staged
                // tree that has lost a file says so instead of quietly
                // serving nothing.
                ++unreadable_files_;
            }
        }
        i += run;
    }
    return clamped * kSectorSize;
}

bool SyntheticDisc::build(const std::filesystem::path &root, std::string &error) {
    ready_ = false;
    unreadable_files_ = 0u;
    structure_.clear();
    files_.clear();
    total_sectors_ = 0u;
    file_count_ = 0u;
    directory_count_ = 0u;

    std::error_code ec;
    if (!std::filesystem::is_directory(root, ec)) {
        error = "staged game root is not a directory: " + root.string();
        return false;
    }

    // ---------------------------------------------------------------------
    // Walk the tree. Directories are numbered breadth-first, which is the
    // order ECMA-119 requires of the path table.
    // ---------------------------------------------------------------------
    std::vector<DirectoryNode> nodes;
    nodes.push_back(DirectoryNode{"", root, 1u, 1u, {}, {}, 0u, 0u});

    for (std::size_t index = 0; index < nodes.size(); ++index) {
        std::vector<DirectoryNode::Entry> directories;
        std::vector<DirectoryNode::Entry> regular;
        for (const auto &entry : std::filesystem::directory_iterator(nodes[index].host_path, ec)) {
            const std::string name = entry.path().filename().string();
            if (name.empty()) continue;
            if (entry.is_directory(ec)) {
                directories.push_back(DirectoryNode::Entry{name, true, 0u, 0u, entry.path(), 0u});
            } else if (entry.is_regular_file(ec)) {
                const auto size = static_cast<std::uint64_t>(std::filesystem::file_size(entry.path(), ec));
                if (ec) continue;
                regular.push_back(DirectoryNode::Entry{name, false, size, 0u, entry.path(), 0u});
            }
        }
        // ISO 9660 orders records by identifier. Sorting also makes the layout
        // reproducible, which matters: the same tree must give the same disc.
        const auto by_name = [](const DirectoryNode::Entry &a, const DirectoryNode::Entry &b) {
            return a.name < b.name;
        };
        std::sort(directories.begin(), directories.end(), by_name);
        std::sort(regular.begin(), regular.end(), by_name);

        for (auto &child : directories) {
            const std::size_t node_index = nodes.size();
            nodes.push_back(DirectoryNode{child.name, child.host_path,
                                          static_cast<std::uint16_t>(nodes.size() + 1u),
                                          nodes[index].number, {}, {}, 0u, 0u});
            child.node = node_index;
            nodes[index].children.push_back(node_index);
            nodes[index].entries.push_back(child);
        }
        for (auto &file : regular) nodes[index].entries.push_back(file);
    }

    if (nodes.size() > 0xFFFFu) {
        error = "staged tree has more directories than a path table can number";
        return false;
    }

    // ---------------------------------------------------------------------
    // Size every directory extent. A record may not straddle a sector, so a
    // record that will not fit is pushed to the next one.
    // ---------------------------------------------------------------------
    for (auto &node : nodes) {
        std::size_t used = record_size(1u) * 2u;  // "." and ".."
        for (const auto &entry : node.entries) {
            // The identifier length is one byte in the record, so a longer
            // name would be written whole but described as a fraction of
            // itself, and every record after it in the extent misparsed.
            if (entry.name.size() > 0xFFu) {
                error = "directory entry name does not fit an ISO 9660 identifier: " + entry.name;
                return false;
            }
            const std::size_t size = record_size(entry.name.size());
            if (size > kSectorSize) {
                error = "directory entry name is too long for a sector: " + entry.name;
                return false;
            }
            const std::size_t remaining = kSectorSize - (used % kSectorSize);
            if (size > remaining) used += remaining;
            used += size;
        }
        node.extent_size = static_cast<std::uint32_t>(sectors_for(used) * kSectorSize);
    }

    // Path table records: identifier length, attribute length, extent, parent,
    // identifier, padded to even. The root's identifier is one zero byte.
    std::size_t path_table_size = 0u;
    for (const auto &node : nodes) {
        const std::size_t name_length = node.number == 1u ? 1u : node.name.size();
        path_table_size += 8u + name_length + (name_length & 1u);
    }

    // ---------------------------------------------------------------------
    // Assign sectors: descriptors, both path tables, directories, then files.
    // ---------------------------------------------------------------------
    const std::uint32_t path_table_sectors = sectors_for(path_table_size);
    const std::uint32_t l_path_table = kFirstPathTableSector;
    const std::uint32_t m_path_table = l_path_table + path_table_sectors;
    std::uint32_t next = m_path_table + path_table_sectors;

    for (auto &node : nodes) {
        node.extent_sector = next;
        next += node.extent_size / kSectorSize;
    }
    const std::uint32_t structure_end = next;

    for (auto &node : nodes) {
        for (auto &entry : node.entries) {
            if (entry.directory) continue;  // directories were placed above
            FileExtent extent;
            extent.first_sector = next;
            extent.sectors = std::max(1u, sectors_for(entry.size));
            extent.size = entry.size;
            extent.host_path = entry.host_path;
            entry.first_sector = extent.first_sector;
            next += extent.sectors;
            files_.push_back(std::move(extent));
        }
    }
    total_sectors_ = next;

    // The lookup in read() binary-searches this, so the order is part of the
    // contract rather than a happy accident of how they were appended.
    std::sort(files_.begin(), files_.end(),
              [](const FileExtent &a, const FileExtent &b) { return a.first_sector < b.first_sector; });

    // ---------------------------------------------------------------------
    // Emit the metadata region, from the volume descriptor to the last
    // directory extent.
    // ---------------------------------------------------------------------
    structure_sector_ = kVolumeDescriptorSector;
    structure_.assign(static_cast<std::size_t>(structure_end - structure_sector_) * kSectorSize, 0u);
    const auto at = [this](std::uint32_t sector) {
        return structure_.data() + static_cast<std::size_t>(sector - structure_sector_) * kSectorSize;
    };

    // Primary volume descriptor.
    std::uint8_t *pvd = at(kVolumeDescriptorSector);
    pvd[0] = 1u;
    std::memcpy(pvd + 1, "CD001", 5);
    pvd[6] = 1u;
    std::memset(pvd + 8, ' ', 32);    // system identifier
    std::memset(pvd + 40, ' ', 32);   // volume identifier
    put_both32(pvd + 80, total_sectors_);
    put_both16(pvd + 120, 1u);        // volume set size
    put_both16(pvd + 124, 1u);        // volume sequence number
    put_both16(pvd + 128, static_cast<std::uint16_t>(kSectorSize));
    put_both32(pvd + 132, static_cast<std::uint32_t>(path_table_size));
    put_le32(pvd + 140, l_path_table);
    put_le32(pvd + 144, 0u);
    put_be32(pvd + 148, m_path_table);
    put_be32(pvd + 152, 0u);
    write_record(pvd + 156, nodes[0].extent_sector, nodes[0].extent_size, true,
                 std::string(1, static_cast<char>(kSelfIdentifier)));
    std::memset(pvd + 190, ' ', 128 * 4 + 37 * 3);  // identifiers, all unset
    // The four 17-byte date fields. All-zero digits with a zero offset is how
    // ECMA-119 spells "not specified", which is honest here: a staged tree
    // carries no volume creation date.
    for (int field = 0; field < 4; ++field) {
        std::memset(pvd + 813 + field * 17, '0', 16);
        pvd[813 + field * 17 + 16] = 0u;
    }
    pvd[881] = 1u;  // file structure version

    // Volume descriptor set terminator.
    std::uint8_t *terminator = at(kTerminatorSector);
    terminator[0] = 0xFFu;
    std::memcpy(terminator + 1, "CD001", 5);
    terminator[6] = 1u;

    // Path tables. The type-M table holds the same records big-endian.
    std::uint8_t *l_table = at(l_path_table);
    std::uint8_t *m_table = at(m_path_table);
    std::size_t cursor = 0u;
    for (const auto &node : nodes) {
        const bool is_root = node.number == 1u;
        const std::string name =
            is_root ? std::string(1, static_cast<char>(kSelfIdentifier)) : node.name;
        l_table[cursor] = static_cast<std::uint8_t>(name.size());
        m_table[cursor] = static_cast<std::uint8_t>(name.size());
        l_table[cursor + 1] = 0u;
        m_table[cursor + 1] = 0u;
        put_le32(l_table + cursor + 2, node.extent_sector);
        put_be32(m_table + cursor + 2, node.extent_sector);
        put_le16(l_table + cursor + 6, node.parent_number);
        put_be16(m_table + cursor + 6, node.parent_number);
        std::memcpy(l_table + cursor + 8, name.data(), name.size());
        std::memcpy(m_table + cursor + 8, name.data(), name.size());
        cursor += 8u + name.size() + (name.size() & 1u);
    }

    // Directory extents.
    for (const auto &node : nodes) {
        std::uint8_t *extent = at(node.extent_sector);
        std::size_t used = 0u;
        used += write_record(extent + used, node.extent_sector, node.extent_size, true,
                             std::string(1, static_cast<char>(kSelfIdentifier)));
        const DirectoryNode &parent = nodes[node.number == 1u ? 0u : node.parent_number - 1u];
        used += write_record(extent + used, parent.extent_sector, parent.extent_size, true,
                             std::string(1, static_cast<char>(kParentIdentifier)));

        for (const auto &entry : node.entries) {
            const std::size_t size = record_size(entry.name.size());
            const std::size_t remaining = kSectorSize - (used % kSectorSize);
            if (size > remaining) used += remaining;  // zeroes; a walker skips on
            if (entry.directory) {
                const DirectoryNode &child = nodes[entry.node];
                used += write_record(extent + used, child.extent_sector, child.extent_size, true,
                                     entry.name);
            } else {
                used += write_record(extent + used, entry.first_sector, entry.size, false,
                                     entry.name);
                ++file_count_;
            }
        }
    }

    directory_count_ = static_cast<std::uint32_t>(nodes.size());
    ready_ = true;
    return true;
}

} // namespace defjam

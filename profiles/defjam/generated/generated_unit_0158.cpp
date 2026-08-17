#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0158[3963] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12,
    0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 20, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 63, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0,
    0, 73, 0, 74, 0, 75, 0, 76, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 83, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113,
    0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 147,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0,
    0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 176, 0,
    177, 0, 0, 178, 0, 179, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0,
    0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0,
    199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 208, 209, 0, 210, 0, 211, 0, 212, 213, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 220, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 231, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 240, 0, 0, 241,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 255, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 277, 0, 278, 279, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0,
    0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 300, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318,
    0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 0, 328,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 369,
    0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0,
    0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 409, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0,
    0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 456, 0,
    0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 470, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 476, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 488, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493,
    0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0,
    0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 514, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0,
    0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    526, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0,
    532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 548, 0,
    549, 0, 0, 0, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 0, 553, 554, 0, 0, 0, 0, 555, 556, 0, 557, 0, 0, 0, 0, 0, 558, 0,
    0, 559, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0,
    565, 0, 0, 0, 566, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 571, 0, 572, 0, 0, 0, 573, 0, 574, 575, 0, 0, 576, 0, 577, 578,
    0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 586, 0, 0, 0, 0, 587, 588,
    0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0,
    0, 595, 0, 0, 596, 0, 0, 0, 597, 598, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603,
    0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0,
    613, 0, 0, 0, 614, 0, 615, 0, 616, 0, 617, 618, 0, 619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 0, 624,
};
void recomp_unit_0158_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A7C210u;
        entry_id = (entry_delta < 15852u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0158[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7C210;
    case 2u: goto L_08A7C240;
    case 3u: goto L_08A7C250;
    case 4u: goto L_08A7C258;
    case 5u: goto L_08A7C260;
    case 6u: goto L_08A7C278;
    case 7u: goto L_08A7C2AC;
    case 8u: goto L_08A7C3AC;
    case 9u: goto L_08A7C3E0;
    case 10u: goto L_08A7C3E4;
    case 11u: goto L_08A7C3F8;
    case 12u: goto L_08A7C40C;
    case 13u: goto L_08A7C414;
    case 14u: goto L_08A7C42C;
    case 15u: goto L_08A7C45C;
    case 16u: goto L_08A7C490;
    case 17u: goto L_08A7C498;
    case 18u: goto L_08A7C4A0;
    case 19u: goto L_08A7C524;
    case 20u: goto L_08A7C52C;
    case 21u: goto L_08A7C530;
    case 22u: goto L_08A7C540;
    case 23u: goto L_08A7C54C;
    case 24u: goto L_08A7C55C;
    case 25u: goto L_08A7C564;
    case 26u: goto L_08A7C5B0;
    case 27u: goto L_08A7C5C4;
    case 28u: goto L_08A7C5E0;
    case 29u: goto L_08A7C5E8;
    case 30u: goto L_08A7C5F0;
    case 31u: goto L_08A7C614;
    case 32u: goto L_08A7C62C;
    case 33u: goto L_08A7C654;
    case 34u: goto L_08A7C65C;
    case 35u: goto L_08A7C68C;
    case 36u: goto L_08A7C698;
    case 37u: goto L_08A7C6B8;
    case 38u: goto L_08A7C6D0;
    case 39u: goto L_08A7C6D8;
    case 40u: goto L_08A7C6EC;
    case 41u: goto L_08A7C6F0;
    case 42u: goto L_08A7C700;
    case 43u: goto L_08A7CBAC;
    case 44u: goto L_08A7CBC0;
    case 45u: goto L_08A7CBD4;
    case 46u: goto L_08A7CBF0;
    case 47u: goto L_08A7CBFC;
    case 48u: goto L_08A7CC0C;
    case 49u: goto L_08A7CC18;
    case 50u: goto L_08A7CC34;
    case 51u: goto L_08A7CC3C;
    case 52u: goto L_08A7CC4C;
    case 53u: goto L_08A7CC6C;
    case 54u: goto L_08A7CC9C;
    case 55u: goto L_08A7CCA4;
    case 56u: goto L_08A7CCB0;
    case 57u: goto L_08A7CCBC;
    case 58u: goto L_08A7CCC0;
    case 59u: goto L_08A7CCD8;
    case 60u: goto L_08A7CCE8;
    case 61u: goto L_08A7CCFC;
    case 62u: goto L_08A7CD04;
    case 63u: goto L_08A7CD08;
    case 64u: goto L_08A7CD20;
    case 65u: goto L_08A7CD3C;
    case 66u: goto L_08A7CD44;
    case 67u: goto L_08A7CD5C;
    case 68u: goto L_08A7CD64;
    case 69u: goto L_08A7CD70;
    case 70u: goto L_08A7CD78;
    case 71u: goto L_08A7CD80;
    case 72u: goto L_08A7CD88;
    case 73u: goto L_08A7CD94;
    case 74u: goto L_08A7CD9C;
    case 75u: goto L_08A7CDA4;
    case 76u: goto L_08A7CDAC;
    case 77u: goto L_08A7CDB0;
    case 78u: goto L_08A7CDC0;
    case 79u: goto L_08A7CDC8;
    case 80u: goto L_08A7CDE4;
    case 81u: goto L_08A7CDEC;
    case 82u: goto L_08A7CDF4;
    case 83u: goto L_08A7CDF8;
    case 84u: goto L_08A7CE00;
    case 85u: goto L_08A7CE24;
    case 86u: goto L_08A7CE30;
    case 87u: goto L_08A7CE3C;
    case 88u: goto L_08A7CE4C;
    case 89u: goto L_08A7CE7C;
    case 90u: goto L_08A7CE94;
    case 91u: goto L_08A7CE9C;
    case 92u: goto L_08A7CEAC;
    case 93u: goto L_08A7CEB4;
    case 94u: goto L_08A7CED0;
    case 95u: goto L_08A7CEF4;
    case 96u: goto L_08A7CF14;
    case 97u: goto L_08A7CF48;
    case 98u: goto L_08A7CF68;
    case 99u: goto L_08A7CF98;
    case 100u: goto L_08A7CFB0;
    case 101u: goto L_08A7CFBC;
    case 102u: goto L_08A7CFC0;
    case 103u: goto L_08A7CFD0;
    case 104u: goto L_08A7CFF0;
    case 105u: goto L_08A7D010;
    case 106u: goto L_08A7D018;
    case 107u: goto L_08A7D04C;
    case 108u: goto L_08A7D05C;
    case 109u: goto L_08A7D0B0;
    case 110u: goto L_08A7D0BC;
    case 111u: goto L_08A7D0EC;
    case 112u: goto L_08A7D104;
    case 113u: goto L_08A7D10C;
    case 114u: goto L_08A7D118;
    case 115u: goto L_08A7D120;
    case 116u: goto L_08A7D13C;
    case 117u: goto L_08A7D144;
    case 118u: goto L_08A7D158;
    case 119u: goto L_08A7D164;
    case 120u: goto L_08A7D170;
    case 121u: goto L_08A7D194;
    case 122u: goto L_08A7D294;
    case 123u: goto L_08A7D298;
    case 124u: goto L_08A7D2B0;
    case 125u: goto L_08A7D2D0;
    case 126u: goto L_08A7D2EC;
    case 127u: goto L_08A7D2F4;
    case 128u: goto L_08A7D2FC;
    case 129u: goto L_08A7D30C;
    case 130u: goto L_08A7D348;
    case 131u: goto L_08A7D384;
    case 132u: goto L_08A7D3B4;
    case 133u: goto L_08A7D3C4;
    case 134u: goto L_08A7D3E0;
    case 135u: goto L_08A7D400;
    case 136u: goto L_08A7D42C;
    case 137u: goto L_08A7D444;
    case 138u: goto L_08A7D44C;
    case 139u: goto L_08A7D488;
    case 140u: goto L_08A7D4EC;
    case 141u: goto L_08A7D508;
    case 142u: goto L_08A7D520;
    case 143u: goto L_08A7D534;
    case 144u: goto L_08A7D564;
    case 145u: goto L_08A7D57C;
    case 146u: goto L_08A7D588;
    case 147u: goto L_08A7D58C;
    case 148u: goto L_08A7D59C;
    case 149u: goto L_08A7D5BC;
    case 150u: goto L_08A7D5DC;
    case 151u: goto L_08A7D5E4;
    case 152u: goto L_08A7D618;
    case 153u: goto L_08A7D628;
    case 154u: goto L_08A7D664;
    case 155u: goto L_08A7D670;
    case 156u: goto L_08A7D67C;
    case 157u: goto L_08A7D684;
    case 158u: goto L_08A7D694;
    case 159u: goto L_08A7D6A0;
    case 160u: goto L_08A7D6A8;
    case 161u: goto L_08A7D6B0;
    case 162u: goto L_08A7D6B8;
    case 163u: goto L_08A7D6C4;
    case 164u: goto L_08A7D6D0;
    case 165u: goto L_08A7D6D8;
    case 166u: goto L_08A7D6E0;
    case 167u: goto L_08A7D6E8;
    case 168u: goto L_08A7D6F4;
    case 169u: goto L_08A7D6FC;
    case 170u: goto L_08A7D708;
    case 171u: goto L_08A7D718;
    case 172u: goto L_08A7D754;
    case 173u: goto L_08A7D770;
    case 174u: goto L_08A7D77C;
    case 175u: goto L_08A7D784;
    case 176u: goto L_08A7D788;
    case 177u: goto L_08A7D790;
    case 178u: goto L_08A7D79C;
    case 179u: goto L_08A7D7A4;
    case 180u: goto L_08A7D7A8;
    case 181u: goto L_08A7D7B0;
    case 182u: goto L_08A7D7B8;
    case 183u: goto L_08A7D7D0;
    case 184u: goto L_08A7D7DC;
    case 185u: goto L_08A7D7E4;
    case 186u: goto L_08A7D7F0;
    case 187u: goto L_08A7D7F8;
    case 188u: goto L_08A7D800;
    case 189u: goto L_08A7D814;
    case 190u: goto L_08A7D81C;
    case 191u: goto L_08A7D828;
    case 192u: goto L_08A7D840;
    case 193u: goto L_08A7D848;
    case 194u: goto L_08A7D850;
    case 195u: goto L_08A7D85C;
    case 196u: goto L_08A7D874;
    case 197u: goto L_08A7D87C;
    case 198u: goto L_08A7D884;
    case 199u: goto L_08A7D890;
    case 200u: goto L_08A7D8A8;
    case 201u: goto L_08A7D9A0;
    case 202u: goto L_08A7DA04;
    case 203u: goto L_08A7DA0C;
    case 204u: goto L_08A7DA2C;
    case 205u: goto L_08A7DA34;
    case 206u: goto L_08A7DA40;
    case 207u: goto L_08A7DA4C;
    case 208u: goto L_08A7DA54;
    case 209u: goto L_08A7DA58;
    case 210u: goto L_08A7DA60;
    case 211u: goto L_08A7DA68;
    case 212u: goto L_08A7DA70;
    case 213u: goto L_08A7DA74;
    case 214u: goto L_08A7DA90;
    case 215u: goto L_08A7DAA8;
    case 216u: goto L_08A7DAC0;
    case 217u: goto L_08A7DAC8;
    case 218u: goto L_08A7DAE8;
    case 219u: goto L_08A7DB00;
    case 220u: goto L_08A7DB18;
    case 221u: goto L_08A7DB20;
    case 222u: goto L_08A7DB24;
    case 223u: goto L_08A7DB50;
    case 224u: goto L_08A7DB74;
    case 225u: goto L_08A7DB90;
    case 226u: goto L_08A7DBB0;
    case 227u: goto L_08A7DBB4;
    case 228u: goto L_08A7DBE4;
    case 229u: goto L_08A7DBEC;
    case 230u: goto L_08A7DBF4;
    case 231u: goto L_08A7DBF8;
    case 232u: goto L_08A7DC0C;
    case 233u: goto L_08A7DC28;
    case 234u: goto L_08A7DC30;
    case 235u: goto L_08A7DC48;
    case 236u: goto L_08A7DC64;
    case 237u: goto L_08A7DC6C;
    case 238u: goto L_08A7DC74;
    case 239u: goto L_08A7DC7C;
    case 240u: goto L_08A7DC80;
    case 241u: goto L_08A7DC8C;
    case 242u: goto L_08A7DC94;
    case 243u: goto L_08A7DCB4;
    case 244u: goto L_08A7DCBC;
    case 245u: goto L_08A7DCCC;
    case 246u: goto L_08A7DCE0;
    case 247u: goto L_08A7DCE4;
    case 248u: goto L_08A7DD00;
    case 249u: goto L_08A7DD44;
    case 250u: goto L_08A7DD6C;
    case 251u: goto L_08A7DD80;
    case 252u: goto L_08A7DE44;
    case 253u: goto L_08A7DE4C;
    case 254u: goto L_08A7DE7C;
    case 255u: goto L_08A7DE94;
    case 256u: goto L_08A7DE9C;
    case 257u: goto L_08A7DEAC;
    case 258u: goto L_08A7DEB4;
    case 259u: goto L_08A7DED0;
    case 260u: goto L_08A7DF08;
    case 261u: goto L_08A7DF28;
    case 262u: goto L_08A7DF5C;
    case 263u: goto L_08A7DFD4;
    case 264u: goto L_08A7E004;
    case 265u: goto L_08A7E01C;
    case 266u: goto L_08A7E024;
    case 267u: goto L_08A7E038;
    case 268u: goto L_08A7E058;
    case 269u: goto L_08A7E074;
    case 270u: goto L_08A7E0A8;
    case 271u: goto L_08A7E0B8;
    case 272u: goto L_08A7E100;
    case 273u: goto L_08A7E10C;
    case 274u: goto L_08A7E140;
    case 275u: goto L_08A7E14C;
    case 276u: goto L_08A7E154;
    case 277u: goto L_08A7E158;
    case 278u: goto L_08A7E160;
    case 279u: goto L_08A7E164;
    case 280u: goto L_08A7E180;
    case 281u: goto L_08A7E188;
    case 282u: goto L_08A7E1A4;
    case 283u: goto L_08A7E1AC;
    case 284u: goto L_08A7E1B8;
    case 285u: goto L_08A7E1C0;
    case 286u: goto L_08A7E1DC;
    case 287u: goto L_08A7E1F8;
    case 288u: goto L_08A7E224;
    case 289u: goto L_08A7E244;
    case 290u: goto L_08A7E258;
    case 291u: goto L_08A7E260;
    case 292u: goto L_08A7E26C;
    case 293u: goto L_08A7E2A8;
    case 294u: goto L_08A7E2EC;
    case 295u: goto L_08A7E304;
    case 296u: goto L_08A7E31C;
    case 297u: goto L_08A7E32C;
    case 298u: goto L_08A7E334;
    case 299u: goto L_08A7E398;
    case 300u: goto L_08A7E3A0;
    case 301u: goto L_08A7E3A4;
    case 302u: goto L_08A7E3B0;
    case 303u: goto L_08A7E3CC;
    case 304u: goto L_08A7E3D4;
    case 305u: goto L_08A7E404;
    case 306u: goto L_08A7E41C;
    case 307u: goto L_08A7E428;
    case 308u: goto L_08A7E42C;
    case 309u: goto L_08A7E43C;
    case 310u: goto L_08A7E45C;
    case 311u: goto L_08A7E47C;
    case 312u: goto L_08A7E484;
    case 313u: goto L_08A7E4C0;
    case 314u: goto L_08A7E570;
    case 315u: goto L_08A7E59C;
    case 316u: goto L_08A7E5C8;
    case 317u: goto L_08A7E604;
    case 318u: goto L_08A7E60C;
    case 319u: goto L_08A7E61C;
    case 320u: goto L_08A7E628;
    case 321u: goto L_08A7E630;
    case 322u: goto L_08A7E638;
    case 323u: goto L_08A7E640;
    case 324u: goto L_08A7E64C;
    case 325u: goto L_08A7E668;
    case 326u: goto L_08A7E670;
    case 327u: goto L_08A7E67C;
    case 328u: goto L_08A7E68C;
    case 329u: goto L_08A7E694;
    case 330u: goto L_08A7E6B8;
    case 331u: goto L_08A7E6C4;
    case 332u: goto L_08A7E6C8;
    case 333u: goto L_08A7E6F0;
    case 334u: goto L_08A7E704;
    case 335u: goto L_08A7E70C;
    case 336u: goto L_08A7E718;
    case 337u: goto L_08A7E760;
    case 338u: goto L_08A7E788;
    case 339u: goto L_08A7E7B0;
    case 340u: goto L_08A7E7C8;
    case 341u: goto L_08A7E7E8;
    case 342u: goto L_08A7E830;
    case 343u: goto L_08A7E86C;
    case 344u: goto L_08A7E8CC;
    case 345u: goto L_08A7E914;
    case 346u: goto L_08A7E920;
    case 347u: goto L_08A7E958;
    case 348u: goto L_08A7E9AC;
    case 349u: goto L_08A7E9B4;
    case 350u: goto L_08A7E9BC;
    case 351u: goto L_08A7EA20;
    case 352u: goto L_08A7EA8C;
    case 353u: goto L_08A7EA94;
    case 354u: goto L_08A7EA9C;
    case 355u: goto L_08A7EB28;
    case 356u: goto L_08A7EC10;
    case 357u: goto L_08A7EC18;
    case 358u: goto L_08A7EC34;
    case 359u: goto L_08A7EC84;
    case 360u: goto L_08A7EC8C;
    case 361u: goto L_08A7ECD4;
    case 362u: goto L_08A7ECEC;
    case 363u: goto L_08A7ED14;
    case 364u: goto L_08A7ED30;
    case 365u: goto L_08A7ED64;
    case 366u: goto L_08A7ED6C;
    case 367u: goto L_08A7ED78;
    case 368u: goto L_08A7ED84;
    case 369u: goto L_08A7ED8C;
    case 370u: goto L_08A7ED94;
    case 371u: goto L_08A7EDA4;
    case 372u: goto L_08A7EDAC;
    case 373u: goto L_08A7EDBC;
    case 374u: goto L_08A7EDF0;
    case 375u: goto L_08A7EDF8;
    case 376u: goto L_08A7EE04;
    case 377u: goto L_08A7EE14;
    case 378u: goto L_08A7EE50;
    case 379u: goto L_08A7EE58;
    case 380u: goto L_08A7EE64;
    case 381u: goto L_08A7EE88;
    case 382u: goto L_08A7EE94;
    case 383u: goto L_08A7EE9C;
    case 384u: goto L_08A7EEC0;
    case 385u: goto L_08A7EEC8;
    case 386u: goto L_08A7EED0;
    case 387u: goto L_08A7EED8;
    case 388u: goto L_08A7EEE0;
    case 389u: goto L_08A7EEE4;
    case 390u: goto L_08A7EEF4;
    case 391u: goto L_08A7EF34;
    case 392u: goto L_08A7EF3C;
    case 393u: goto L_08A7EF48;
    case 394u: goto L_08A7EF6C;
    case 395u: goto L_08A7EF78;
    case 396u: goto L_08A7EF80;
    case 397u: goto L_08A7EFC0;
    case 398u: goto L_08A7EFC8;
    case 399u: goto L_08A7EFD0;
    case 400u: goto L_08A7EFD8;
    case 401u: goto L_08A7EFE0;
    case 402u: goto L_08A7EFE4;
    case 403u: goto L_08A7EFF4;
    case 404u: goto L_08A7F040;
    case 405u: goto L_08A7F048;
    case 406u: goto L_08A7F058;
    case 407u: goto L_08A7F078;
    case 408u: goto L_08A7F0A4;
    case 409u: goto L_08A7F0B0;
    case 410u: goto L_08A7F0B4;
    case 411u: goto L_08A7F0BC;
    case 412u: goto L_08A7F0D0;
    case 413u: goto L_08A7F108;
    case 414u: goto L_08A7F118;
    case 415u: goto L_08A7F124;
    case 416u: goto L_08A7F12C;
    case 417u: goto L_08A7F148;
    case 418u: goto L_08A7F170;
    case 419u: goto L_08A7F178;
    case 420u: goto L_08A7F184;
    case 421u: goto L_08A7F1BC;
    case 422u: goto L_08A7F1C4;
    case 423u: goto L_08A7F1E0;
    case 424u: goto L_08A7F208;
    case 425u: goto L_08A7F210;
    case 426u: goto L_08A7F21C;
    case 427u: goto L_08A7F254;
    case 428u: goto L_08A7F25C;
    case 429u: goto L_08A7F264;
    case 430u: goto L_08A7F288;
    case 431u: goto L_08A7F298;
    case 432u: goto L_08A7F2AC;
    case 433u: goto L_08A7F2C8;
    case 434u: goto L_08A7F2D0;
    case 435u: goto L_08A7F300;
    case 436u: goto L_08A7F310;
    case 437u: goto L_08A7F328;
    case 438u: goto L_08A7F388;
    case 439u: goto L_08A7F39C;
    case 440u: goto L_08A7F3B0;
    case 441u: goto L_08A7F3D8;
    case 442u: goto L_08A7F41C;
    case 443u: goto L_08A7F440;
    case 444u: goto L_08A7F454;
    case 445u: goto L_08A7F468;
    case 446u: goto L_08A7F47C;
    case 447u: goto L_08A7F488;
    case 448u: goto L_08A7F49C;
    case 449u: goto L_08A7F4A8;
    case 450u: goto L_08A7F4B0;
    case 451u: goto L_08A7F4C8;
    case 452u: goto L_08A7F4D4;
    case 453u: goto L_08A7F4E0;
    case 454u: goto L_08A7F4EC;
    case 455u: goto L_08A7F504;
    case 456u: goto L_08A7F508;
    case 457u: goto L_08A7F514;
    case 458u: goto L_08A7F520;
    case 459u: goto L_08A7F55C;
    case 460u: goto L_08A7F568;
    case 461u: goto L_08A7F598;
    case 462u: goto L_08A7F5A8;
    case 463u: goto L_08A7F5B4;
    case 464u: goto L_08A7F5C4;
    case 465u: goto L_08A7F5CC;
    case 466u: goto L_08A7F5F0;
    case 467u: goto L_08A7F5F8;
    case 468u: goto L_08A7F620;
    case 469u: goto L_08A7F648;
    case 470u: goto L_08A7F64C;
    case 471u: goto L_08A7F654;
    case 472u: goto L_08A7F660;
    case 473u: goto L_08A7F674;
    case 474u: goto L_08A7F680;
    case 475u: goto L_08A7F698;
    case 476u: goto L_08A7F6A4;
    case 477u: goto L_08A7F6A8;
    case 478u: goto L_08A7F6BC;
    case 479u: goto L_08A7F6C4;
    case 480u: goto L_08A7F6E8;
    case 481u: goto L_08A7F6F0;
    case 482u: goto L_08A7F730;
    case 483u: goto L_08A7F738;
    case 484u: goto L_08A7F740;
    case 485u: goto L_08A7F748;
    case 486u: goto L_08A7F750;
    case 487u: goto L_08A7F758;
    case 488u: goto L_08A7F75C;
    case 489u: goto L_08A7F764;
    case 490u: goto L_08A7F76C;
    case 491u: goto L_08A7F778;
    case 492u: goto L_08A7F780;
    case 493u: goto L_08A7F78C;
    case 494u: goto L_08A7F794;
    case 495u: goto L_08A7F79C;
    case 496u: goto L_08A7F7A4;
    case 497u: goto L_08A7F7AC;
    case 498u: goto L_08A7F7B4;
    case 499u: goto L_08A7F7BC;
    case 500u: goto L_08A7F7EC;
    case 501u: goto L_08A7F834;
    case 502u: goto L_08A7F840;
    case 503u: goto L_08A7F860;
    case 504u: goto L_08A7F86C;
    case 505u: goto L_08A7F878;
    case 506u: goto L_08A7F880;
    case 507u: goto L_08A7F888;
    case 508u: goto L_08A7F8AC;
    case 509u: goto L_08A7F8C0;
    case 510u: goto L_08A7F8D0;
    case 511u: goto L_08A7F8E4;
    case 512u: goto L_08A7F93C;
    case 513u: goto L_08A7F944;
    case 514u: goto L_08A7F948;
    case 515u: goto L_08A7F94C;
    case 516u: goto L_08A7F954;
    case 517u: goto L_08A7F970;
    case 518u: goto L_08A7F980;
    case 519u: goto L_08A7F988;
    case 520u: goto L_08A7F99C;
    case 521u: goto L_08A7F9B0;
    case 522u: goto L_08A7F9BC;
    case 523u: goto L_08A7F9D8;
    case 524u: goto L_08A7F9E4;
    case 525u: goto L_08A7FA00;
    case 526u: goto L_08A7FA10;
    case 527u: goto L_08A7FA14;
    case 528u: goto L_08A7FA20;
    case 529u: goto L_08A7FA74;
    case 530u: goto L_08A7FA78;
    case 531u: goto L_08A7FA80;
    case 532u: goto L_08A7FA90;
    case 533u: goto L_08A7FAB4;
    case 534u: goto L_08A7FABC;
    case 535u: goto L_08A7FAE0;
    case 536u: goto L_08A7FAF0;
    case 537u: goto L_08A7FB04;
    case 538u: goto L_08A7FB20;
    case 539u: goto L_08A7FB28;
    case 540u: goto L_08A7FB58;
    case 541u: goto L_08A7FB68;
    case 542u: goto L_08A7FB80;
    case 543u: goto L_08A7FBC0;
    case 544u: goto L_08A7FBCC;
    case 545u: goto L_08A7FBEC;
    case 546u: goto L_08A7FBF4;
    case 547u: goto L_08A7FC04;
    case 548u: goto L_08A7FC08;
    case 549u: goto L_08A7FC10;
    case 550u: goto L_08A7FC24;
    case 551u: goto L_08A7FC2C;
    case 552u: goto L_08A7FC38;
    case 553u: goto L_08A7FC4C;
    case 554u: goto L_08A7FC50;
    case 555u: goto L_08A7FC64;
    case 556u: goto L_08A7FC68;
    case 557u: goto L_08A7FC70;
    case 558u: goto L_08A7FC88;
    case 559u: goto L_08A7FC94;
    case 560u: goto L_08A7FCA8;
    case 561u: goto L_08A7FCB4;
    case 562u: goto L_08A7FCD0;
    case 563u: goto L_08A7FCF4;
    case 564u: goto L_08A7FD04;
    case 565u: goto L_08A7FD10;
    case 566u: goto L_08A7FD20;
    case 567u: goto L_08A7FD24;
    case 568u: goto L_08A7FD30;
    case 569u: goto L_08A7FD40;
    case 570u: goto L_08A7FD4C;
    case 571u: goto L_08A7FD50;
    case 572u: goto L_08A7FD58;
    case 573u: goto L_08A7FD68;
    case 574u: goto L_08A7FD70;
    case 575u: goto L_08A7FD74;
    case 576u: goto L_08A7FD80;
    case 577u: goto L_08A7FD88;
    case 578u: goto L_08A7FD8C;
    case 579u: goto L_08A7FD9C;
    case 580u: goto L_08A7FDA8;
    case 581u: goto L_08A7FDB4;
    case 582u: goto L_08A7FDC8;
    case 583u: goto L_08A7FDD0;
    case 584u: goto L_08A7FDDC;
    case 585u: goto L_08A7FDF0;
    case 586u: goto L_08A7FDF4;
    case 587u: goto L_08A7FE08;
    case 588u: goto L_08A7FE0C;
    case 589u: goto L_08A7FE14;
    case 590u: goto L_08A7FE20;
    case 591u: goto L_08A7FE34;
    case 592u: goto L_08A7FE44;
    case 593u: goto L_08A7FE78;
    case 594u: goto L_08A7FE84;
    case 595u: goto L_08A7FE94;
    case 596u: goto L_08A7FEA0;
    case 597u: goto L_08A7FEB0;
    case 598u: goto L_08A7FEB4;
    case 599u: goto L_08A7FEB8;
    case 600u: goto L_08A7FECC;
    case 601u: goto L_08A7FED8;
    case 602u: goto L_08A7FEE0;
    case 603u: goto L_08A7FF0C;
    case 604u: goto L_08A7FF14;
    case 605u: goto L_08A7FF1C;
    case 606u: goto L_08A7FF24;
    case 607u: goto L_08A7FF2C;
    case 608u: goto L_08A7FF34;
    case 609u: goto L_08A7FF3C;
    case 610u: goto L_08A7FF40;
    case 611u: goto L_08A7FF6C;
    case 612u: goto L_08A7FF88;
    case 613u: goto L_08A7FF90;
    case 614u: goto L_08A7FFA0;
    case 615u: goto L_08A7FFA8;
    case 616u: goto L_08A7FFB0;
    case 617u: goto L_08A7FFB8;
    case 618u: goto L_08A7FFBC;
    case 619u: goto L_08A7FFC4;
    case 620u: goto L_08A7FFD0;
    case 621u: goto L_08A7FFD8;
    case 622u: goto L_08A7FFE4;
    case 623u: goto L_08A7FFEC;
    case 624u: goto L_08A7FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7C210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25296));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(103)));
    ctx.gpr[4] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7C250;
      }
      goto L_08A7C240;
    }
L_08A7C240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(103)));
    ctx.gpr[5] = (0u | 26u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08A7C278;
    }
    goto L_08A7C250;
L_08A7C250:
    ctx.gpr[31] = (0x08A7C258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7C258u) goto L_08A7C258;
    return;
L_08A7C258:
    ctx.gpr[31] = (0x08A7C260u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 248u, 0x08A79728u>(ctx, &aot_mem) && ctx.pc == 0x08A7C260u) goto L_08A7C260;
    return;
L_08A7C260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C2AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-15));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C3AC:
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[3] = (ctx.gpr[12] + static_cast<std::uint32_t>(25296));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(772)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(102)));
    ctx.gpr[13] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[13] | 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A7C40C;
      }
      goto L_08A7C3E0;
    }
L_08A7C3E0:
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    goto L_08A7C3E4;
L_08A7C3E4:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[14] = (ctx.gpr[14] < ctx.gpr[15] ? 1u : 0u);
    if (ctx.gpr[14] == 0u) {
    ctx.gpr[13] = (0u | 0u);
        goto L_08A7C3F8;
    }
    goto L_08A7C3F8;
L_08A7C3F8:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(102)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7C3E4;
      }
      goto L_08A7C40C;
    }
L_08A7C40C:
    if (ctx.gpr[13] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(52))))));
        goto L_08A7C498;
    }
    goto L_08A7C414;
L_08A7C414:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[11] = (ctx.gpr[11] << 5u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08A7C45C;
      }
      goto L_08A7C42C;
    }
L_08A7C42C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(25296)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(25296)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25296), ctx.gpr[4]);
    goto L_08A7C45C;
L_08A7C45C:
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(68));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(52))))));
        goto L_08A7C498;
    }
    goto L_08A7C490;
L_08A7C490:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(52))))));
    goto L_08A7C498;
L_08A7C498:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7C524;
      }
      goto L_08A7C4A0;
    }
L_08A7C4A0:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (32768u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(40));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7C52C;
      }
      goto L_08A7C524;
    }
L_08A7C524:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C52C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_08A7C530;
L_08A7C530:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[12] = (ctx.gpr[12] < ctx.gpr[13] ? 1u : 0u);
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[10] = (0u | 0u);
        goto L_08A7C540;
    }
    goto L_08A7C540;
L_08A7C540:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7C55C;
      }
      goto L_08A7C54C;
    }
L_08A7C54C:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(102)));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    if (ctx.gpr[12] != 0u) {
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
        goto L_08A7C530;
    }
    goto L_08A7C55C;
L_08A7C55C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A7C5B0;
      }
      goto L_08A7C564;
    }
L_08A7C564:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(76));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[11] ^ ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(80));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[11] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A7C5B0;
L_08A7C5B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
        goto L_08A7C5C4;
    }
    goto L_08A7C5C4;
L_08A7C5C4:
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7C5E8;
      }
      goto L_08A7C5E0;
    }
L_08A7C5E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C5E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C5F0:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(25296));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(772)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(66))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7C654;
      }
      goto L_08A7C614;
    }
L_08A7C614:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7C654;
      }
      goto L_08A7C62C;
    }
L_08A7C62C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(25296)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(25296)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(25296), ctx.gpr[4]);
    goto L_08A7C654;
L_08A7C654:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7C65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(25296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(25296));
      if (branch_taken) {
          goto L_08A7C700;
      }
      goto L_08A7C68C;
    }
L_08A7C68C:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08A7C698;
L_08A7C698:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A7C6D8;
      }
      goto L_08A7C6B8;
    }
L_08A7C6B8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7C6D0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7C6D0u) goto L_08A7C6D0;
    return;
L_08A7C6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(25296)));
      if (branch_taken) {
          goto L_08A7C6F0;
      }
      goto L_08A7C6D8;
    }
L_08A7C6D8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A7C6ECu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7C6ECu) goto L_08A7C6EC;
    return;
L_08A7C6EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(25296)));
    goto L_08A7C6F0;
L_08A7C6F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A7C698;
      }
      goto L_08A7C700;
    }
L_08A7C700:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(25296), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CBAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7CBC0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 175u, 0x08A78E60u>(ctx, &aot_mem) && ctx.pc == 0x08A7CBC0u) goto L_08A7CBC0;
    return;
L_08A7CBC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7CC0C;
      }
      goto L_08A7CBD4;
    }
L_08A7CBD4:
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A7CBF0;
L_08A7CBF0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(109))))));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08A7CBFC;
    }
    goto L_08A7CBFC;
L_08A7CBFC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A7CBF0;
      }
      goto L_08A7CC0C;
    }
L_08A7CC0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CC18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7CC34u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CC34u) goto L_08A7CC34;
    return;
L_08A7CC34:
    ctx.gpr[31] = (0x08A7CC3Cu);
    ctx.gpr[4] = (0u | 4u);
    goto L_08A7CBAC;
L_08A7CC3C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A7CC4Cu);
    ctx.gpr[4] = (0u | 512u);
    goto L_08A7CBAC;
L_08A7CC4C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CD08;
      }
      goto L_08A7CC9C;
    }
L_08A7CC9C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A7CCB0;
      }
      goto L_08A7CCA4;
    }
L_08A7CCA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A7CCC0;
      }
      goto L_08A7CCB0;
    }
L_08A7CCB0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[17]);
        goto L_08A7CCB0;
    }
    goto L_08A7CCBC;
L_08A7CCBC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08A7CCC0;
L_08A7CCC0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08A7CCD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7CCD8u) goto L_08A7CCD8;
    return;
L_08A7CCD8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A7CD04;
      }
      goto L_08A7CCE8;
    }
L_08A7CCE8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A7CCFCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7CCFCu) goto L_08A7CCFC;
    return;
L_08A7CCFC:
    ctx.gpr[31] = (0x08A7CD04u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7CD04u) goto L_08A7CD04;
    return;
L_08A7CD04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08A7CD08;
L_08A7CD08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CD20:
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7CDC0;
      }
      goto L_08A7CD3C;
    }
L_08A7CD3C:
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_08A7CD44;
L_08A7CD44:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(70)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[8] & 1804u);
    ctx.gpr[11] = (ctx.gpr[7] & 1804u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7CD64;
      }
      goto L_08A7CD5C;
    }
L_08A7CD5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[7] & 96u);
      if (branch_taken) {
          goto L_08A7CD78;
      }
      goto L_08A7CD64;
    }
L_08A7CD64:
    ctx.gpr[2] = (ctx.gpr[7] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[7] & 96u);
      if (branch_taken) {
          goto L_08A7CD78;
      }
      goto L_08A7CD70;
    }
L_08A7CD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7CDAC;
      }
      goto L_08A7CD78;
    }
L_08A7CD78:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 96u);
      if (branch_taken) {
          goto L_08A7CD88;
      }
      goto L_08A7CD80;
    }
L_08A7CD80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7CD9C;
      }
      goto L_08A7CD88;
    }
L_08A7CD88:
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A7CD9C;
      }
      goto L_08A7CD94;
    }
L_08A7CD94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7CDAC;
      }
      goto L_08A7CD9C;
    }
L_08A7CD9C:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
        goto L_08A7CDB0;
    }
    goto L_08A7CDA4;
L_08A7CDA4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CDAC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A7CDB0;
L_08A7CDB0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7CD44;
      }
      goto L_08A7CDC0;
    }
L_08A7CDC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CDC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7CDEC;
      }
      goto L_08A7CDE4;
    }
L_08A7CDE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (1u << 16u);
      if (branch_taken) {
          goto L_08A7CDF8;
      }
      goto L_08A7CDEC;
    }
L_08A7CDEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A7CDF8;
      }
      goto L_08A7CDF4;
    }
L_08A7CDF4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A7CDF8;
L_08A7CDF8:
    ctx.gpr[31] = (0x08A7CE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 326u, 0x08A71AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7CE00u) goto L_08A7CE00;
    return;
L_08A7CE00:
    ctx.gpr[4] = (ctx.gpr[2] & 32767u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16384));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 14u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CE24:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26196), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CE30:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26200), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CE3C:
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8480), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CE4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7CE9C;
      }
      goto L_08A7CE7C;
    }
L_08A7CE7C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7CE94u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7CE94u) goto L_08A7CE94;
    return;
L_08A7CE94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7CEB4;
      }
      goto L_08A7CE9C;
    }
L_08A7CE9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CED0;
      }
      goto L_08A7CEAC;
    }
L_08A7CEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7CEF4;
      }
      goto L_08A7CEB4;
    }
L_08A7CEB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CED0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7CED0;
      }
      goto L_08A7CEF4;
    }
L_08A7CEF4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CF14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12724));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CF48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CF68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7D010;
      }
      goto L_08A7CF98;
    }
L_08A7CF98:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7CFB0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7CFB0u) goto L_08A7CFB0;
    return;
L_08A7CFB0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7CFF0;
      }
      goto L_08A7CFBC;
    }
L_08A7CFBC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08A7CFC0;
L_08A7CFC0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7CFD0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08A7DD6C;
L_08A7CFD0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7CFF0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A7CFC0;
      }
      goto L_08A7D018;
    }
L_08A7D018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12440));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7D04Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08A7DD44;
L_08A7D04C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D05C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 7u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 7u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A7D0B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08A7D9A0;
L_08A7D0B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D0BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7D10C;
      }
      goto L_08A7D0EC;
    }
L_08A7D0EC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7D104u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7D104u) goto L_08A7D104;
    return;
L_08A7D104:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7D120;
      }
      goto L_08A7D10C;
    }
L_08A7D10C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (7740u << 16u);
      if (branch_taken) {
          goto L_08A7D13C;
      }
      goto L_08A7D118;
    }
L_08A7D118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D2B0;
      }
      goto L_08A7D120;
    }
L_08A7D120:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D13C:
    ctx.gpr[5] = (ctx.gpr[5] | 58632u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A7D144;
L_08A7D144:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
        goto L_08A7D164;
    }
    goto L_08A7D158;
L_08A7D158:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_08A7D164;
L_08A7D164:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A7D170;
    }
    goto L_08A7D170;
L_08A7D170:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    ctx.gpr[2] = (ctx.gpr[6] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7D298;
      }
      goto L_08A7D194;
    }
L_08A7D194:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A7D194;
      }
      goto L_08A7D294;
    }
L_08A7D294:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    goto L_08A7D298;
L_08A7D298:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A7D144;
      }
      goto L_08A7D2B0;
    }
L_08A7D2B0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D2FC;
      }
      goto L_08A7D2EC;
    }
L_08A7D2EC:
    ctx.gpr[31] = (0x08A7D2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D2F4u) goto L_08A7D2F4;
    return;
L_08A7D2F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    goto L_08A7D2FC;
L_08A7D2FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D30C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12100));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7D384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A7D2D0;
L_08A7D384:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15361u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 516u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7D3B4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 356u, 0x08A82154u>(ctx, &aot_mem) && ctx.pc == 0x08A7D3B4u) goto L_08A7D3B4;
    return;
L_08A7D3B4:
    ctx.gpr[17] = (ctx.gpr[2] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A7D3C4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7D3C4u) goto L_08A7D3C4;
    return;
L_08A7D3C4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A7D3E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7D3E0u) goto L_08A7D3E0;
    return;
L_08A7D3E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7D44C;
      }
      goto L_08A7D42C;
    }
L_08A7D42C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7D444u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7D444u) goto L_08A7D444;
    return;
L_08A7D444:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7D508;
      }
      goto L_08A7D44C;
    }
L_08A7D44C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 4u, 5u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7D45Cu, 0x00852020u); return; } }
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.set_vfpu_scalar_bits_ct<8u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<9u>(ctx.gpr[9]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<40u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<9u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<41u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<9u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 4u>(vfpu_d); }
    goto L_08A7D488;
L_08A7D488:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(0u, 0u, 8u, 4u, false);
    ctx.execute_vfpu_vminmax(1u, 1u, 8u, 4u, false);
    ctx.execute_vfpu_vminmax(2u, 2u, 8u, 4u, false);
    ctx.execute_vfpu_vminmax(3u, 3u, 8u, 4u, false);
    ctx.execute_vfpu_vminmax(0u, 0u, 9u, 4u, true);
    ctx.execute_vfpu_vminmax(1u, 1u, 9u, 4u, true);
    ctx.execute_vfpu_vminmax(2u, 2u, 9u, 4u, true);
    ctx.execute_vfpu_vminmax(3u, 3u, 9u, 4u, true);
    { const bool signed_ok = ctx.execute_signed_add_immediate(5u, 5u, 64);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7D4B8u, 0x20A50040u); return; } }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(0u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(1u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(2u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(3u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(12u, 0u, 4u, 3u);
    ctx.execute_vfpu_vi2x(76u, 1u, 4u, 3u);
    ctx.execute_vfpu_vi2x(13u, 2u, 4u, 3u);
    ctx.execute_vfpu_vi2x(77u, 3u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    { const bool signed_ok = ctx.execute_signed_add_immediate(6u, 6u, 32);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7D4E8u, 0x20C60020u); return; } }
      if (branch_taken) {
          goto L_08A7D488;
      }
      goto L_08A7D4EC;
    }
L_08A7D4EC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D520:
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11264));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7D5DC;
      }
      goto L_08A7D564;
    }
L_08A7D564:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7D57Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7D57Cu) goto L_08A7D57C;
    return;
L_08A7D57C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7D5BC;
      }
      goto L_08A7D588;
    }
L_08A7D588:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08A7D58C;
L_08A7D58C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7D59Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08A7DD6C;
L_08A7D59C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D5BC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A7D58C;
      }
      goto L_08A7D5E4;
    }
L_08A7D5E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10956));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7D618u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08A7DD44;
L_08A7D618:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 7u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7D664u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08A7D9A0;
L_08A7D664:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D670:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    goto L_08A7D67C;
L_08A7D67C:
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
        goto L_08A7D6A0;
    }
    goto L_08A7D684;
L_08A7D684:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
        goto L_08A7D6A0;
    }
    goto L_08A7D694;
L_08A7D694:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A7D67C;
      }
      goto L_08A7D6A0;
    }
L_08A7D6A0:
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
        goto L_08A7D6A8;
    }
    goto L_08A7D6A8;
L_08A7D6A8:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
        goto L_08A7D6B8;
    }
    goto L_08A7D6B0;
L_08A7D6B0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D6B8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D6C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A7D6D8;
      }
      goto L_08A7D6D0;
    }
L_08A7D6D0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D6D8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D718;
      }
      goto L_08A7D6E0;
    }
L_08A7D6E0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7D6F4;
      }
      goto L_08A7D6E8;
    }
L_08A7D6E8:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A7D6D8;
      }
      goto L_08A7D6F4;
    }
L_08A7D6F4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7D718;
      }
      goto L_08A7D6FC;
    }
L_08A7D6FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
        goto L_08A7D718;
    }
    goto L_08A7D708;
L_08A7D708:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08A7D718;
L_08A7D718:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A7D788;
    }
    goto L_08A7D770;
L_08A7D770:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A7D788;
    }
    goto L_08A7D77C;
L_08A7D77C:
    ctx.gpr[31] = (0x08A7D784u);
    // nop
    goto L_08A7D754;
L_08A7D784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A7D788;
L_08A7D788:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A7D7A8;
    }
    goto L_08A7D790;
L_08A7D790:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A7D7A8;
    }
    goto L_08A7D79C;
L_08A7D79C:
    ctx.gpr[31] = (0x08A7D7A4u);
    // nop
    goto L_08A7D754;
L_08A7D7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A7D7A8;
L_08A7D7A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7D7B8;
      }
      goto L_08A7D7B0;
    }
L_08A7D7B0:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A7D7B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7D7B8u) goto L_08A7D7B8;
    return;
L_08A7D7B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D7D0:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A7D7F0;
      }
      goto L_08A7D7DC;
    }
L_08A7D7DC:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A7D7F0;
      }
      goto L_08A7D7E4;
    }
L_08A7D7E4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
        goto L_08A7D800;
    }
    goto L_08A7D7F0;
L_08A7D7F0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[9];
    ctx.gpr[8] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7D814;
      }
      goto L_08A7D7F8;
    }
L_08A7D7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D840;
      }
      goto L_08A7D800;
    }
L_08A7D800:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D814:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A7D840;
      }
      goto L_08A7D81C;
    }
L_08A7D81C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D840;
      }
      goto L_08A7D828;
    }
L_08A7D828:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D840:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A7D874;
      }
      goto L_08A7D848;
    }
L_08A7D848:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A7D874;
      }
      goto L_08A7D850;
    }
L_08A7D850:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D874;
      }
      goto L_08A7D85C;
    }
L_08A7D85C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D874:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A7D8A8;
      }
      goto L_08A7D87C;
    }
L_08A7D87C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A7D8A8;
      }
      goto L_08A7D884;
    }
L_08A7D884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7D8A8;
      }
      goto L_08A7D890;
    }
L_08A7D890:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D8A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7D9A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 4u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[20] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7DA0C;
      }
      goto L_08A7DA04;
    }
L_08A7DA04:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7DA34;
      }
      goto L_08A7DA0C;
    }
L_08A7DA0C:
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7DA34;
      }
      goto L_08A7DA2C;
    }
L_08A7DA2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7DA34;
L_08A7DA34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7DA58;
      }
      goto L_08A7DA40;
    }
L_08A7DA40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16201u << 16u);
      if (branch_taken) {
          goto L_08A7DBB4;
      }
      goto L_08A7DA4C;
    }
L_08A7DA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A7DA74;
      }
      goto L_08A7DA54;
    }
L_08A7DA54:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    goto L_08A7DA58;
L_08A7DA58:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7DAC8;
      }
      goto L_08A7DA60;
    }
L_08A7DA60:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08A7DB24;
    }
    goto L_08A7DA68;
L_08A7DA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16201u << 16u);
      if (branch_taken) {
          goto L_08A7DBB4;
      }
      goto L_08A7DA70;
    }
L_08A7DA70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08A7DA74;
L_08A7DA74:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A7DA90;
L_08A7DA90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[31] = (0x08A7DAA8u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 658u, 0x08A7BBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7DAA8u) goto L_08A7DAA8;
    return;
L_08A7DAA8:
    ctx.fpr[14] = ctx.fpr[0] / ctx.fpr[26];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A7DA90;
      }
      goto L_08A7DAC0;
    }
L_08A7DAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16201u << 16u);
      if (branch_taken) {
          goto L_08A7DBB4;
      }
      goto L_08A7DAC8;
    }
L_08A7DAC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A7DAE8;
L_08A7DAE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[31] = (0x08A7DB00u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 658u, 0x08A7BBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB00u) goto L_08A7DB00;
    return;
L_08A7DB00:
    ctx.fpr[14] = ctx.fpr[0] / ctx.fpr[26];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A7DAE8;
      }
      goto L_08A7DB18;
    }
L_08A7DB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16201u << 16u);
      if (branch_taken) {
          goto L_08A7DBB4;
      }
      goto L_08A7DB20;
    }
L_08A7DB20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08A7DB24;
L_08A7DB24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A7DB50;
L_08A7DB50:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A7DB74u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 653u, 0x08A7BB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DB74u) goto L_08A7DB74;
    return;
L_08A7DB74:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A7DB90u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 658u, 0x08A7BBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7DB90u) goto L_08A7DB90;
    return;
L_08A7DB90:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[12] / ctx.fpr[28];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A7DB50;
      }
      goto L_08A7DBB0;
    }
L_08A7DBB0:
    ctx.gpr[4] = (16201u << 16u);
    goto L_08A7DBB4;
L_08A7DBB4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (16107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[4] = (16138u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15729u);
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A7DBE4;
L_08A7DBE4:
    if (ctx.gpr[17] == ctx.gpr[21]) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
        goto L_08A7DBF8;
    }
    goto L_08A7DBEC;
L_08A7DBEC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A7DC28;
      }
      goto L_08A7DBF4;
    }
L_08A7DBF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    goto L_08A7DBF8;
L_08A7DBF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A7DC0Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 653u, 0x08A7BB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DC0Cu) goto L_08A7DC0C;
    return;
L_08A7DC0C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A7DC7C;
      }
      goto L_08A7DC28;
    }
L_08A7DC28:
    if (ctx.gpr[17] != ctx.gpr[19]) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08A7DC80;
    }
    goto L_08A7DC30;
L_08A7DC30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A7DC48u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 653u, 0x08A7BB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7DC48u) goto L_08A7DC48;
    return;
L_08A7DC48:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] & 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A7DC6C;
      }
      goto L_08A7DC64;
    }
L_08A7DC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7DC6C;
      }
      goto L_08A7DC6C;
    }
L_08A7DC6C:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[30] = ctx.fpr[30] - ctx.fpr[12];
        goto L_08A7DC7C;
    }
    goto L_08A7DC74;
L_08A7DC74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A7DC7C;
      }
      goto L_08A7DC7C;
    }
L_08A7DC7C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A7DC80;
L_08A7DC80:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7DBE4;
      }
      goto L_08A7DC8C;
    }
L_08A7DC8C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7DCB4;
      }
      goto L_08A7DC94;
    }
L_08A7DC94:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7DCB4;
L_08A7DCB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A7DCCC;
      }
      goto L_08A7DCBC;
    }
L_08A7DCBC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08A7DCCC;
      }
      goto L_08A7DCCC;
    }
L_08A7DCCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08A7DCE0;
    }
    goto L_08A7DCE0;
L_08A7DCE0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7DCE4;
L_08A7DCE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7DCE4;
      }
      goto L_08A7DD00;
    }
L_08A7DD00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DD44:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DD6C:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DE44;
      }
      goto L_08A7DD80;
    }
L_08A7DD80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[0];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7DD80;
      }
      goto L_08A7DE44;
    }
L_08A7DE44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DE4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7DE9C;
      }
      goto L_08A7DE7C;
    }
L_08A7DE7C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7DE94u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7DE94u) goto L_08A7DE94;
    return;
L_08A7DE94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7DEB4;
      }
      goto L_08A7DE9C;
    }
L_08A7DE9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A7DED0;
      }
      goto L_08A7DEAC;
    }
L_08A7DEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7DF08;
      }
      goto L_08A7DEB4;
    }
L_08A7DEB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DED0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7DED0;
      }
      goto L_08A7DF08;
    }
L_08A7DF08:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DF28:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8628));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DF5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[7] = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7DFD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7E024;
      }
      goto L_08A7E004;
    }
L_08A7E004:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7E01Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7E01Cu) goto L_08A7E01C;
    return;
L_08A7E01C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7E058;
      }
      goto L_08A7E024;
    }
L_08A7E024:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7E038u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08A7DD6C;
L_08A7E038:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E058:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8236));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7E0A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08A7DD44;
L_08A7E0A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E0B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7E100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08A7D9A0;
L_08A7E100:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E10C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7E164;
      }
      goto L_08A7E140;
    }
L_08A7E140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
        goto L_08A7E158;
    }
    goto L_08A7E14C;
L_08A7E14C:
    ctx.gpr[31] = (0x08A7E154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E154u) goto L_08A7E154;
    return;
L_08A7E154:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    goto L_08A7E158;
L_08A7E158:
    ctx.gpr[31] = (0x08A7E160u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7E160u) goto L_08A7E160;
    return;
L_08A7E160:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_08A7E164;
L_08A7E164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7E180u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7E180u) goto L_08A7E180;
    return;
L_08A7E180:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7E1DC;
      }
      goto L_08A7E188;
    }
L_08A7E188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7E1A4u);
    ctx.gpr[8] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7E1A4u) goto L_08A7E1A4;
    return;
L_08A7E1A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7E1C0;
      }
      goto L_08A7E1AC;
    }
L_08A7E1AC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7E1F8;
      }
      goto L_08A7E1B8;
    }
L_08A7E1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E224;
      }
      goto L_08A7E1C0;
    }
L_08A7E1C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E1DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E1F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7E1F8;
      }
      goto L_08A7E224;
    }
L_08A7E224:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E260;
      }
      goto L_08A7E258;
    }
L_08A7E258:
    ctx.gpr[31] = (0x08A7E260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E260u) goto L_08A7E260;
    return;
L_08A7E260:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E26C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7612));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7924));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E2A8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (16457u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[10] = (ctx.gpr[10] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A7E3A0;
      }
      goto L_08A7E2EC;
    }
L_08A7E2EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
      if (branch_taken) {
          goto L_08A7E3A0;
      }
      goto L_08A7E304;
    }
L_08A7E304:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7E3A4;
      }
      goto L_08A7E31C;
    }
L_08A7E31C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (7740u << 16u);
      if (branch_taken) {
          goto L_08A7E3CC;
      }
      goto L_08A7E32C;
    }
L_08A7E32C:
    ctx.gpr[9] = (ctx.gpr[9] | 58632u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    goto L_08A7E334;
L_08A7E334:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08A7E334;
      }
      goto L_08A7E398;
    }
L_08A7E398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E3CC;
      }
      goto L_08A7E3A0;
    }
L_08A7E3A0:
    ctx.gpr[8] = (0u | 0u);
    goto L_08A7E3A4;
L_08A7E3A4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E3CC;
      }
      goto L_08A7E3B0;
    }
L_08A7E3B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7E3B0;
      }
      goto L_08A7E3CC;
    }
L_08A7E3CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E3D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7E47C;
      }
      goto L_08A7E404;
    }
L_08A7E404:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7E41Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7E41Cu) goto L_08A7E41C;
    return;
L_08A7E41C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7E45C;
      }
      goto L_08A7E428;
    }
L_08A7E428:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A7E42C;
L_08A7E42C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7E43Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08A7E2A8;
L_08A7E43C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E45C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E47C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A7E42C;
      }
      goto L_08A7E484;
    }
L_08A7E484:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7212));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (16457u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[8] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[8] = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16585u << 16u);
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A7E570u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 653u, 0x08A7BB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E570u) goto L_08A7E570;
    return;
L_08A7E570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7E59Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 358u, 0x08A82180u>(ctx, &aot_mem) && ctx.pc == 0x08A7E59Cu) goto L_08A7E59C;
    return;
L_08A7E59C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E5C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7E60C;
      }
      goto L_08A7E604;
    }
L_08A7E604:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[21]));
    goto L_08A7E60C;
L_08A7E60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_08A7E640;
      }
      goto L_08A7E61C;
    }
L_08A7E61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E630;
      }
      goto L_08A7E628;
    }
L_08A7E628:
    ctx.gpr[31] = (0x08A7E630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E630u) goto L_08A7E630;
    return;
L_08A7E630:
    ctx.gpr[31] = (0x08A7E638u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7E638u) goto L_08A7E638;
    return;
L_08A7E638:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    goto L_08A7E640;
L_08A7E640:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(38))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
        goto L_08A7E6B8;
    }
    goto L_08A7E64C;
L_08A7E64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A7E668u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7E668u) goto L_08A7E668;
    return;
L_08A7E668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A7E694;
      }
      goto L_08A7E670;
    }
L_08A7E670:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7E67Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7E67Cu) goto L_08A7E67C;
    return;
L_08A7E67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A7E68Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7E68Cu) goto L_08A7E68C;
    return;
L_08A7E68C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A7E6C8;
      }
      goto L_08A7E694;
    }
L_08A7E694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E6B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7E6C4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7E6C4u) goto L_08A7E6C4;
    return;
L_08A7E6C4:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[21]));
    goto L_08A7E6C8;
L_08A7E6C8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7E70C;
      }
      goto L_08A7E704;
    }
L_08A7E704:
    ctx.gpr[31] = (0x08A7E70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7E70Cu) goto L_08A7E70C;
    return;
L_08A7E70C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E718:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6416));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6712));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7E788u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7E788u) goto L_08A7E788;
    return;
L_08A7E788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E7B0:
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6304));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E7C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E7E8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1692));
    ctx.gpr[4] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1948));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[4] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4248));
    ctx.gpr[6] = (0u | 52u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E830:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3288));
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (2216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(844));
    ctx.gpr[6] = (0u | 56u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E86C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[7] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3728));
    ctx.gpr[8] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[9] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2812));
    ctx.gpr[10] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), ctx.gpr[10]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E8CC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4600));
    ctx.gpr[4] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 84u);
    ctx.gpr[4] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4824));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6108));
    ctx.gpr[6] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E914:
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_08A7E9B4;
      }
      goto L_08A7E920;
    }
L_08A7E920:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[9] | 0u);
    goto L_08A7E958;
L_08A7E958:
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(10u, 10u, -8);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7E960u, 0x214AFFF8u); return; } }
    ctx.execute_vfpu_vx2i(2u, 0u, 2u, 3u);
    ctx.execute_vfpu_vx2i(3u, 1u, 2u, 3u);
    ctx.execute_vfpu_vx2i(6u, 64u, 2u, 3u);
    ctx.execute_vfpu_vx2i(7u, 65u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<98u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<102u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vi2x(32u, 33u, 4u, 3u);
    ctx.execute_vfpu_vi2x(96u, 35u, 4u, 3u);
    ctx.execute_vfpu_vi2x(36u, 37u, 4u, 3u);
    ctx.execute_vfpu_vi2x(100u, 39u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<32u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, 16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7E998u, 0x21080010u); return; } }
    { const bool signed_ok = ctx.execute_signed_add_immediate(9u, 9u, 16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7E99Cu, 0x21290010u); return; } }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<36u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    { const bool signed_ok = ctx.execute_signed_add_immediate(11u, 11u, 32);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7E9A8u, 0x216B0020u); return; } }
      if (branch_taken) {
          goto L_08A7E958;
      }
      goto L_08A7E9AC;
    }
L_08A7E9AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7E9B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 6u);
      if (branch_taken) {
          goto L_08A7EA94;
      }
      goto L_08A7E9BC;
    }
L_08A7E9BC:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7EC10;
      }
      goto L_08A7EA20;
    }
L_08A7EA20:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[3]);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[3]);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[3]);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[3]);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7EA20;
      }
      goto L_08A7EA8C;
    }
L_08A7EA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC10;
      }
      goto L_08A7EA94;
    }
L_08A7EA94:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7EC10;
      }
      goto L_08A7EA9C;
    }
L_08A7EA9C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EC10;
      }
      goto L_08A7EB28;
    }
L_08A7EB28:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A7EB28;
      }
      goto L_08A7EC10;
    }
L_08A7EC10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EC18:
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 4u, 6u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7EC28u, 0x00862020u); return; } }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<8u>(ctx.gpr[5]);
    goto L_08A7EC34;
L_08A7EC34:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<13u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vmscl(32u, 44u, 8u, 4u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(6u, 6u, 64);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7EC58u, 0x20C60040u); return; } }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<6u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<7u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { const bool signed_ok = ctx.execute_signed_add_immediate(7u, 7u, 64);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7EC80u, 0x20E70040u); return; } }
      if (branch_taken) {
          goto L_08A7EC34;
      }
      goto L_08A7EC84;
    }
L_08A7EC84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7ECD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7ECD4u) goto L_08A7ECD4;
    return;
L_08A7ECD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A7ECECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7ECECu) goto L_08A7ECEC;
    return;
L_08A7ECEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A7ED14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A7D670;
L_08A7ED14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7ED30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08A7ED64;
L_08A7ED64:
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A7EDA4;
    }
    goto L_08A7ED6C;
L_08A7ED6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A7ED78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A7D6C4;
L_08A7ED78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7ED8C;
      }
      goto L_08A7ED84;
    }
L_08A7ED84:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A7ED8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7ED8Cu) goto L_08A7ED8C;
    return;
L_08A7ED8C:
    ctx.gpr[31] = (0x08A7ED94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ED94u) goto L_08A7ED94;
    return;
L_08A7ED94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EDA4:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08A7ED64;
    }
    goto L_08A7EDAC;
L_08A7EDAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EDBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7EE04;
      }
      goto L_08A7EDF0;
    }
L_08A7EDF0:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A7EDF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7EDF8u) goto L_08A7EDF8;
    return;
L_08A7EDF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EE04:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A7EEC8;
      }
      goto L_08A7EE50;
    }
L_08A7EE50:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7EE9C;
      }
      goto L_08A7EE58;
    }
L_08A7EE58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A7EE64u);
    ctx.gpr[4] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7EE64u) goto L_08A7EE64;
    return;
L_08A7EE64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u | 80u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7EE88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08A7D5E4;
L_08A7EE88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A7EE94u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08A7D670;
L_08A7EE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A7EE9C;
L_08A7EE9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A7EEC0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A7D628;
L_08A7EEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EEE4;
      }
      goto L_08A7EEC8;
    }
L_08A7EEC8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EEE4;
      }
      goto L_08A7EED0;
    }
L_08A7EED0:
    ctx.gpr[31] = (0x08A7EED8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08A7D6C4;
L_08A7EED8:
    ctx.gpr[31] = (0x08A7EEE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EEE0u) goto L_08A7EEE0;
    return;
L_08A7EEE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    goto L_08A7EEE4;
L_08A7EEE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A7EFC8;
      }
      goto L_08A7EF34;
    }
L_08A7EF34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7EF80;
      }
      goto L_08A7EF3C;
    }
L_08A7EF3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7EF48u);
    ctx.gpr[4] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7EF48u) goto L_08A7EF48;
    return;
L_08A7EF48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7EF6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08A7DF28;
L_08A7EF6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A7EF78u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08A7D670;
L_08A7EF78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A7EF80;
L_08A7EF80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A7EFC0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A7DF5C;
L_08A7EFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7EFE4;
      }
      goto L_08A7EFC8;
    }
L_08A7EFC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7EFE4;
      }
      goto L_08A7EFD0;
    }
L_08A7EFD0:
    ctx.gpr[31] = (0x08A7EFD8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08A7D6C4;
L_08A7EFD8:
    ctx.gpr[31] = (0x08A7EFE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7EFE0u) goto L_08A7EFE0;
    return;
L_08A7EFE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    goto L_08A7EFE4;
L_08A7EFE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7EFF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[16] = (4u << 16u);
        goto L_08A7F040;
    }
    goto L_08A7F040;
L_08A7F040:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F0B4;
      }
      goto L_08A7F048;
    }
L_08A7F048:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A7F058u);
    ctx.gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7F058u) goto L_08A7F058;
    return;
L_08A7F058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08A7F078;
    }
    goto L_08A7F078;
L_08A7F078:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 160u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[31] = (0x08A7F0A4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(367)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 579u, 0x08A83728u>(ctx, &aot_mem) && ctx.pc == 0x08A7F0A4u) goto L_08A7F0A4;
    return;
L_08A7F0A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A7F0B0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    goto L_08A7D670;
L_08A7F0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08A7F0B4;
L_08A7F0B4:
    ctx.gpr[31] = (0x08A7F0BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 575u, 0x08A8364Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F0BCu) goto L_08A7F0BC;
    return;
L_08A7F0BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F0D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7F118;
      }
      goto L_08A7F108;
    }
L_08A7F108:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A7F118u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 43u, 0x08A782A4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F118u) goto L_08A7F118;
    return;
L_08A7F118:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F124:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F1C4;
      }
      goto L_08A7F12C;
    }
L_08A7F12C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[12] = (ctx.gpr[9] & 15u);
    { const bool branch_taken = 0u == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08A7F178;
      }
      goto L_08A7F148;
    }
L_08A7F148:
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool signed_ok = ctx.execute_signed_add_immediate(11u, 11u, -4);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F14Cu, 0x216BFFFCu); return; } }
    ctx.execute_vfpu_vx2i(96u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<96u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 2u>(vfpu_d); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, 4);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F158u, 0x21080004u); return; } }
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<7u>());
    { const bool signed_ok = ctx.execute_signed_add_immediate(9u, 9u, 4);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F160u, 0x21290004u); return; } }
    ctx.gpr[12] = (ctx.gpr[9] & 15u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7F1BC;
      }
      goto L_08A7F170;
    }
L_08A7F170:
    { const bool branch_taken = 0u != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08A7F148;
      }
      goto L_08A7F178;
    }
L_08A7F178:
    { const bool signed_ok = ctx.execute_signed_add_immediate(12u, 11u, -16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F178u, 0x216CFFF0u); return; } }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7F148;
      }
      goto L_08A7F184;
    }
L_08A7F184:
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<64u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<96u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.execute_vfpu_vx2i(96u, 0u, 1u, 3u);
    ctx.execute_vfpu_vx2i(97u, 32u, 1u, 3u);
    ctx.execute_vfpu_vx2i(98u, 64u, 1u, 3u);
    ctx.execute_vfpu_vx2i(99u, 96u, 1u, 3u);
    { const bool signed_ok = ctx.execute_signed_add_immediate(11u, 11u, -16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F1A4u, 0x216BFFF0u); return; } }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 4u>(vfpu_d); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, 16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F1ACu, 0x21080010u); return; } }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    { const bool signed_ok = ctx.execute_signed_add_immediate(9u, 9u, 16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F1B8u, 0x21290010u); return; } }
      if (branch_taken) {
          goto L_08A7F178;
      }
      goto L_08A7F1BC;
    }
L_08A7F1BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F1C4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[12] = (ctx.gpr[9] & 15u);
    { const bool branch_taken = 0u == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08A7F210;
      }
      goto L_08A7F1E0;
    }
L_08A7F1E0:
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool signed_ok = ctx.execute_signed_add_immediate(11u, 11u, -4);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F1E4u, 0x216BFFFCu); return; } }
    ctx.execute_vfpu_vx2i(96u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<96u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 2u>(vfpu_d); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, 4);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F1F0u, 0x21080004u); return; } }
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<6u>());
    { const bool signed_ok = ctx.execute_signed_add_immediate(9u, 9u, 4);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F1F8u, 0x21290004u); return; } }
    ctx.gpr[12] = (ctx.gpr[9] & 15u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7F254;
      }
      goto L_08A7F208;
    }
L_08A7F208:
    { const bool branch_taken = 0u != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08A7F1E0;
      }
      goto L_08A7F210;
    }
L_08A7F210:
    { const bool signed_ok = ctx.execute_signed_add_immediate(12u, 11u, -16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F210u, 0x216CFFF0u); return; } }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7F1E0;
      }
      goto L_08A7F21C;
    }
L_08A7F21C:
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<64u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<96u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.execute_vfpu_vx2i(96u, 0u, 1u, 3u);
    ctx.execute_vfpu_vx2i(97u, 32u, 1u, 3u);
    ctx.execute_vfpu_vx2i(98u, 64u, 1u, 3u);
    ctx.execute_vfpu_vx2i(99u, 96u, 1u, 3u);
    { const bool signed_ok = ctx.execute_signed_add_immediate(11u, 11u, -16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F23Cu, 0x216BFFF0u); return; } }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 4u>(vfpu_d); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, 16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F244u, 0x21080010u); return; } }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    { const bool signed_ok = ctx.execute_signed_add_immediate(9u, 9u, 16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7F250u, 0x21290010u); return; } }
      if (branch_taken) {
          goto L_08A7F210;
      }
      goto L_08A7F254;
    }
L_08A7F254:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F25C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8488));
    goto L_08A7F288;
L_08A7F288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A7F300;
      }
      goto L_08A7F298;
    }
L_08A7F298:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8504));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_08A7F2C8;
    }
    goto L_08A7F2AC;
L_08A7F2AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F2C8:
    ctx.gpr[31] = (0x08A7F2D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 318u, 0x08A71980u>(ctx, &aot_mem) && ctx.pc == 0x08A7F2D0u) goto L_08A7F2D0;
    return;
L_08A7F2D0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F300:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7F288;
      }
      goto L_08A7F310;
    }
L_08A7F310:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2068));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3484));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (2216u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3492));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8488));
      if (branch_taken) {
          goto L_08A7F4B0;
      }
      goto L_08A7F388;
    }
L_08A7F388:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A7F39Cu);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7F39Cu) goto L_08A7F39C;
    return;
L_08A7F39C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7F3B0u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A7F3B0u) goto L_08A7F3B0;
    return;
L_08A7F3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A7F3D8u);
    ctx.gpr[4] = (0u | 24639u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7F3D8u) goto L_08A7F3D8;
    return;
L_08A7F3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8192));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8192));
    ctx.gpr[31] = (0x08A7F41Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 320u, 0x08A71A28u>(ctx, &aot_mem) && ctx.pc == 0x08A7F41Cu) goto L_08A7F41C;
    return;
L_08A7F41C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12536));
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2784));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A7F440u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08AB45E4u;
    return;
L_08A7F440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A7F454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 316u, 0x08A71964u>(ctx, &aot_mem) && ctx.pc == 0x08A7F454u) goto L_08A7F454;
    return;
L_08A7F454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A7F468u);
    ctx.gpr[5] = (0u | 64u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A7F468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A7F47C;
L_08A7F47C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F49C;
      }
      goto L_08A7F488;
    }
L_08A7F488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F49C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7F47C;
      }
      goto L_08A7F4A8;
    }
L_08A7F4A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F514;
      }
      goto L_08A7F4B0;
    }
L_08A7F4B0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8504));
    goto L_08A7F4C8;
L_08A7F4C8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08A7F508;
    }
    goto L_08A7F4D4;
L_08A7F4D4:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7F504;
      }
      goto L_08A7F4E0;
    }
L_08A7F4E0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7F508;
      }
      goto L_08A7F4EC;
    }
L_08A7F4EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[10]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F504:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A7F508;
L_08A7F508:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7F4C8;
      }
      goto L_08A7F514;
    }
L_08A7F514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x08A7F55Cu);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F55Cu) goto L_08A7F55C;
    return;
L_08A7F55C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 8192u);
      if (branch_taken) {
          goto L_08A7F794;
      }
      goto L_08A7F568;
    }
L_08A7F568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(8192) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[16] = (0u | 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08A7F598;
    }
    goto L_08A7F598;
L_08A7F598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A7F5A8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7F5A8u) goto L_08A7F5A8;
    return;
L_08A7F5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A7F5B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB41ACu;
    return;
L_08A7F5B4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7F5C4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08AB41BCu;
    return;
L_08A7F5C4:
    ctx.gpr[31] = (0x08A7F5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F5CCu) goto L_08A7F5CC;
    return;
L_08A7F5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A7F5F0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB41A4u;
    return;
L_08A7F5F0:
    ctx.gpr[31] = (0x08A7F5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F5F8u) goto L_08A7F5F8;
    return;
L_08A7F5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08A7F620;
    }
    goto L_08A7F620;
L_08A7F620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_08A7F648;
L_08A7F648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08A7F64C;
L_08A7F64C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_08A7F75C;
    }
    goto L_08A7F654;
L_08A7F654:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_08A7F75C;
    }
    goto L_08A7F660;
L_08A7F660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7F674u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB4194u;
    return;
L_08A7F674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_08A7F6A8;
    }
    goto L_08A7F680;
L_08A7F680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A7F698u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7F698u) goto L_08A7F698;
    return;
L_08A7F698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A7F6A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x08AB41B4u;
    return;
L_08A7F6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_08A7F6A8;
L_08A7F6A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F738;
      }
      goto L_08A7F6BC;
    }
L_08A7F6BC:
    ctx.gpr[31] = (0x08A7F6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F6C4u) goto L_08A7F6C4;
    return;
L_08A7F6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A7F6E8u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB41A4u;
    return;
L_08A7F6E8:
    ctx.gpr[31] = (0x08A7F6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F6F0u) goto L_08A7F6F0;
    return;
L_08A7F6F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_08A7F64C;
    }
    goto L_08A7F730;
L_08A7F730:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A7F648;
      }
      goto L_08A7F738;
    }
L_08A7F738:
    ctx.gpr[31] = (0x08A7F740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F740u) goto L_08A7F740;
    return;
L_08A7F740:
    ctx.gpr[31] = (0x08A7F748u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7F748:
    ctx.gpr[31] = (0x08A7F750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F750u) goto L_08A7F750;
    return;
L_08A7F750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A7F64C;
      }
      goto L_08A7F758;
    }
L_08A7F758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08A7F75C;
L_08A7F75C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F794;
      }
      goto L_08A7F764;
    }
L_08A7F764:
    ctx.gpr[31] = (0x08A7F76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F76Cu) goto L_08A7F76C;
    return;
L_08A7F76C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F78C;
      }
      goto L_08A7F778;
    }
L_08A7F778:
    ctx.gpr[31] = (0x08A7F780u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7F780:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F778;
      }
      goto L_08A7F78C;
    }
L_08A7F78C:
    ctx.gpr[31] = (0x08A7F794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7F794u) goto L_08A7F794;
    return;
L_08A7F794:
    ctx.gpr[31] = (0x08A7F79Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.pc = 0x08AB419Cu;
    return;
L_08A7F79C:
    ctx.gpr[31] = (0x08A7F7A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F7A4u) goto L_08A7F7A4;
    return;
L_08A7F7A4:
    ctx.gpr[31] = (0x08A7F7ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7F7ACu) goto L_08A7F7AC;
    return;
L_08A7F7AC:
    ctx.gpr[31] = (0x08A7F7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7F7B4u) goto L_08A7F7B4;
    return;
L_08A7F7B4:
    ctx.gpr[31] = (0x08A7F7BCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4634u;
    return;
L_08A7F7BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F7EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A7F878;
      }
      goto L_08A7F834;
    }
L_08A7F834:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    if (static_cast<std::int32_t>(ctx.gpr[8]) <= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
        goto L_08A7F860;
    }
    goto L_08A7F840;
L_08A7F840:
    ctx.gpr[4] = (ctx.gpr[6] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08A7F860;
L_08A7F860:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A7F878;
      }
      goto L_08A7F86C;
    }
L_08A7F86C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F888;
      }
      goto L_08A7F878;
    }
L_08A7F878:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A7F8AC;
      }
      goto L_08A7F880;
    }
L_08A7F880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7FA78;
      }
      goto L_08A7F888;
    }
L_08A7F888:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7F8AC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08A7F8C0;
    }
    goto L_08A7F8C0;
L_08A7F8C0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A7F8D0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A7F124;
L_08A7F8D0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A7F948;
      }
      goto L_08A7F8E4;
    }
L_08A7F8E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
        goto L_08A7F94C;
    }
    goto L_08A7F93C;
L_08A7F93C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
      if (branch_taken) {
          goto L_08A7F948;
      }
      goto L_08A7F944;
    }
L_08A7F944:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08A7F948;
L_08A7F948:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    goto L_08A7F94C;
L_08A7F94C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F980;
      }
      goto L_08A7F954;
    }
L_08A7F954:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7F980;
      }
      goto L_08A7F970;
    }
L_08A7F970:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    goto L_08A7F980;
L_08A7F980:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7FA74;
      }
      goto L_08A7F988;
    }
L_08A7F988:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[8] = (ctx.gpr[8] ^ 1u);
      if (branch_taken) {
          goto L_08A7FA74;
      }
      goto L_08A7F99C;
    }
L_08A7F99C:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7FA74;
      }
      goto L_08A7F9B0;
    }
L_08A7F9B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
        goto L_08A7F9BC;
    }
    goto L_08A7F9BC;
L_08A7F9BC:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A7F9D8u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08A7F124;
L_08A7F9D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A7FA10;
      }
      goto L_08A7F9E4;
    }
L_08A7F9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
        goto L_08A7FA14;
    }
    goto L_08A7FA00;
L_08A7FA00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A7FA10;
L_08A7FA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    goto L_08A7FA14;
L_08A7FA14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7FA78;
      }
      goto L_08A7FA20;
    }
L_08A7FA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08A7FA74;
L_08A7FA74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A7FA78;
L_08A7FA78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A7FA90;
      }
      goto L_08A7FA80;
    }
L_08A7FA80:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[31] = (0x08A7FA90u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7FA90u) goto L_08A7FA90;
    return;
L_08A7FA90:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7FAB4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7FABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08A7FAE0;
L_08A7FAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A7FB58;
      }
      goto L_08A7FAF0;
    }
L_08A7FAF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8528));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_08A7FB20;
    }
    goto L_08A7FB04;
L_08A7FB04:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7FB20:
    ctx.gpr[31] = (0x08A7FB28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 318u, 0x08A71980u>(ctx, &aot_mem) && ctx.pc == 0x08A7FB28u) goto L_08A7FB28;
    return;
L_08A7FB28:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7FB58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7FAE0;
      }
      goto L_08A7FB68;
    }
L_08A7FB68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7FB80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x08A7FBC0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FBC0u) goto L_08A7FBC0;
    return;
L_08A7FBC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (32867u << 16u);
      if (branch_taken) {
          goto L_08A7FFC4;
      }
      goto L_08A7FBCC;
    }
L_08A7FBCC:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[18] = (0u | 6144u);
    ctx.gpr[21] = (0u | 6144u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(35));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    goto L_08A7FBEC;
L_08A7FBEC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
        goto L_08A7FD8C;
    }
    goto L_08A7FBF4;
L_08A7FBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(6144) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FEB8;
    }
    goto L_08A7FC04;
L_08A7FC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08A7FC08;
L_08A7FC08:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
        goto L_08A7FC68;
    }
    goto L_08A7FC10;
L_08A7FC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A7FC24u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08A7C3AC;
L_08A7FC24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7FC64;
      }
      goto L_08A7FC2C;
    }
L_08A7FC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
        goto L_08A7FC50;
    }
    goto L_08A7FC38;
L_08A7FC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7FC4Cu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    goto L_08A7C3AC;
L_08A7FC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    goto L_08A7FC50;
L_08A7FC50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A7FC64;
L_08A7FC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    goto L_08A7FC68;
L_08A7FC68:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FEB8;
    }
    goto L_08A7FC70;
L_08A7FC70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A7FC94;
    }
    goto L_08A7FC88;
L_08A7FC88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (ctx.gpr[18] - ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A7FC94;
L_08A7FC94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A7FCA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7FCA8u) goto L_08A7FCA8;
    return;
L_08A7FCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A7FCD0;
    }
    goto L_08A7FCB4;
L_08A7FCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08A7FCD0;
L_08A7FCD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7FD24;
      }
      goto L_08A7FCF4;
    }
L_08A7FCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A7FD04u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08A7C5F0;
L_08A7FD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
        goto L_08A7FD24;
    }
    goto L_08A7FD10;
L_08A7FD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08A7FD20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08A7C5F0;
L_08A7FD20:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
    goto L_08A7FD24;
L_08A7FD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A7FD50;
    }
    goto L_08A7FD30;
L_08A7FD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A7FD74;
    }
    goto L_08A7FD40;
L_08A7FD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A7FD74;
    }
    goto L_08A7FD4C;
L_08A7FD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A7FD50;
L_08A7FD50:
    ctx.gpr[31] = (0x08A7FD58u);
    ctx.gpr[5] = (0u | 6144u);
    ctx.pc = 0x08AB41ACu;
    return;
L_08A7FD58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7FD68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08AB41BCu;
    return;
L_08A7FD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A7FEB8;
      }
      goto L_08A7FD70;
    }
L_08A7FD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08A7FD74;
L_08A7FD74:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(6144) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08A7FC08;
    }
    goto L_08A7FD80;
L_08A7FD80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A7FEB8;
      }
      goto L_08A7FD88;
    }
L_08A7FD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    goto L_08A7FD8C;
L_08A7FD8C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A7FD9Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.pc = 0x08AB4194u;
    return;
L_08A7FD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FEB8;
    }
    goto L_08A7FDA8;
L_08A7FDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08A7FE0C;
    }
    goto L_08A7FDB4;
L_08A7FDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A7FDC8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08A7C3AC;
L_08A7FDC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7FE08;
      }
      goto L_08A7FDD0;
    }
L_08A7FDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
        goto L_08A7FDF4;
    }
    goto L_08A7FDDC;
L_08A7FDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A7FDF0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_08A7C3AC;
L_08A7FDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    goto L_08A7FDF4;
L_08A7FDF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A7FE08;
L_08A7FE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08A7FE0C;
L_08A7FE0C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FEB8;
    }
    goto L_08A7FE14;
L_08A7FE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FEB8;
    }
    goto L_08A7FE20;
L_08A7FE20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08A7FE34;
    }
    goto L_08A7FE34;
L_08A7FE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A7FE44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7FE44u) goto L_08A7FE44;
    return;
L_08A7FE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A7FE78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB41B4u;
    return;
L_08A7FE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FEB8;
    }
    goto L_08A7FE84;
L_08A7FE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A7FE94u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08A7C5F0;
L_08A7FE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
        goto L_08A7FEB4;
    }
    goto L_08A7FEA0;
L_08A7FEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08A7FEB0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08A7C5F0;
L_08A7FEB0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
    goto L_08A7FEB4;
L_08A7FEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A7FEB8;
L_08A7FEB8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FFA0;
      }
      goto L_08A7FECC;
    }
L_08A7FECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7FFA0;
      }
      goto L_08A7FED8;
    }
L_08A7FED8:
    ctx.gpr[31] = (0x08A7FEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7FEE0u) goto L_08A7FEE0;
    return;
L_08A7FEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A7FF0Cu);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = 0x08AB41A4u;
    return;
L_08A7FF0C:
    ctx.gpr[31] = (0x08A7FF14u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF14u) goto L_08A7FF14;
    return;
L_08A7FF14:
    if (ctx.gpr[16] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08A7FF40;
    }
    goto L_08A7FF1C;
L_08A7FF1C:
    ctx.gpr[31] = (0x08A7FF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF24u) goto L_08A7FF24;
    return;
L_08A7FF24:
    ctx.gpr[31] = (0x08A7FF2Cu);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7FF2C:
    ctx.gpr[31] = (0x08A7FF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FF34u) goto L_08A7FF34;
    return;
L_08A7FF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A7FFBC;
      }
      goto L_08A7FF3C;
    }
L_08A7FF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A7FF40;
L_08A7FF40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
        goto L_08A7FF6C;
    }
    goto L_08A7FF6C;
L_08A7FF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08A7FFBC;
    }
    goto L_08A7FF88;
L_08A7FF88:
    ctx.gpr[31] = (0x08A7FF90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x08AB419Cu;
    return;
L_08A7FF90:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          goto L_08A7FFB8;
      }
      goto L_08A7FFA0;
    }
L_08A7FFA0:
    ctx.gpr[31] = (0x08A7FFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7FFA8u) goto L_08A7FFA8;
    return;
L_08A7FFA8:
    ctx.gpr[31] = (0x08A7FFB0u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7FFB0:
    ctx.gpr[31] = (0x08A7FFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7FFB8u) goto L_08A7FFB8;
    return;
L_08A7FFB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08A7FFBC;
L_08A7FFBC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
        goto L_08A7FBEC;
    }
    goto L_08A7FFC4;
L_08A7FFC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 1u, 0x08A80000u>(ctx, &aot_mem); return;
      }
      goto L_08A7FFD0;
    }
L_08A7FFD0:
    ctx.gpr[31] = (0x08A7FFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7FFD8u) goto L_08A7FFD8;
    return;
L_08A7FFD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FFF8;
      }
      goto L_08A7FFE4;
    }
L_08A7FFE4:
    ctx.gpr[31] = (0x08A7FFECu);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7FFEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7FFE4;
      }
      goto L_08A7FFF8;
    }
L_08A7FFF8:
    ctx.gpr[31] = (0x08A80000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0158(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0158_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_158(Runtime &runtime) {
    runtime.register_generated_unit(158u, 0x08A7C000u, 16384u, &recomp_unit_0158, &recomp_unit_0158_entry);
    runtime.register_function(0x08A7C210u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C240u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C250u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C258u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C260u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C278u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C2ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C3F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C40Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C414u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C42Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C45Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C490u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C498u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C4A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C524u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C52Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C530u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C540u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C54Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C55Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C564u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C5F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C614u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C62Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C654u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C65Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C68Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C698u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C6F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7C700u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CBFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CC9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CCFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CD9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CDF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CE9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CED0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CEF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CF98u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7CFF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D010u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D018u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D04Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D05Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D0ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D104u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D10Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D118u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D120u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D13Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D144u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D164u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D170u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D194u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D294u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D298u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D2FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D30Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D348u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D384u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D3E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D400u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D42Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D444u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D44Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D4ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D508u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D520u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D534u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D564u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D57Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D588u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D58Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D59Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D5E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D618u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D628u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D664u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D670u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D67Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D684u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D694u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D6FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D708u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D718u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D754u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D770u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D77Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D784u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D790u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D79Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D7F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D800u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D814u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D81Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D828u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D840u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D848u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D850u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D85Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D874u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D87Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D884u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D890u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D8A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7D9A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DA90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DAE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DB90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DBF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DC94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DCE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DD80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DE9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DEB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DED0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DF5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7DFD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E004u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E01Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E024u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E038u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E058u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E074u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E0B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E100u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E10Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E140u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E14Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E154u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E160u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E164u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E180u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E188u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E1F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E224u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E244u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E258u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E260u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E26Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E2ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E304u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E31Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E32Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E334u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E398u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E3D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E404u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E41Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E428u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E42Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E43Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E45Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E47Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E484u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E4C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E570u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E59Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E5C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E604u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E60Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E61Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E628u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E630u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E638u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E640u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E64Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E668u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E670u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E67Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E68Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E694u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E6F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E704u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E70Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E718u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E760u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E7E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E830u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E86Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E8CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E914u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E920u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E958u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7E9BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EA9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC18u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EC8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ECECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7ED94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EDF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EE9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EED0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EED8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EEF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EF80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7EFF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F040u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F048u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F058u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F078u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F0D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F108u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F118u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F124u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F12Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F148u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F170u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F178u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F184u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F1E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F208u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F210u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F21Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F254u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F25Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F264u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F288u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F298u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F2D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F300u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F310u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F328u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F388u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F39Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F3D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F41Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F440u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F454u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F468u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F47Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F488u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F49Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4D4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F4ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F504u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F508u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F514u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F520u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F55Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F568u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F598u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F5F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F620u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F648u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F64Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F654u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F660u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F674u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F680u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F698u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F6F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F730u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F738u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F740u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F748u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F750u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F758u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F75Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F764u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F76Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F778u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F780u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F78Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F794u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F79Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F7ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F834u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F840u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F860u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F86Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F878u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F880u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F888u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F8E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F93Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F944u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F948u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F94Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F954u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F970u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F980u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F988u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F99Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9B0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7F9E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FA90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FABCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FAF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FB80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBCCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FBF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FC94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FCF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD4Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FD9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FDF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE78u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FE94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FECCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FED8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FEE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF0Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF34u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FF90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFA8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFB0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x08A7FFF8u, &recomp_unit_0158, "recomp_unit_0158");
}
} // namespace psprecomp

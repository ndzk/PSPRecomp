#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0121[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 0, 16, 0, 0, 17, 18, 0, 0, 0, 19, 0, 20, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0,
    0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 55, 0, 0, 0, 56, 0, 57,
    58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    66, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 91, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112, 113, 0, 114,
    0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0,
    120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0,
    196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0,
    209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0,
    0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0,
    293, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0,
    0, 0, 370, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0,
    391, 392, 0, 393, 0, 394, 395, 0, 396, 0, 397, 398, 0, 399, 0, 400, 0, 401, 402, 0, 0, 403, 0, 404, 405, 0, 0, 0, 406, 0, 407, 408,
    0, 409, 0, 410, 411, 0, 412, 0, 413, 414, 0, 415, 0, 416, 417, 0, 0, 418, 0, 419, 420, 0, 0, 421, 0, 422, 423, 0, 0, 424, 0, 425,
    426, 0, 0, 427, 0, 428, 429, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 434, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0,
    0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 447, 448,
    449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 454, 0, 455, 0, 456, 0, 457, 0, 458, 459,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 478,
    0, 479, 0, 480, 481, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 490, 491, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 497, 0, 498, 0, 499, 0, 500, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0,
    507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515,
    0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 520, 521, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536,
    0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0,
    0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 551, 0, 552, 0, 0, 553, 0, 554, 0,
    0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 570,
    0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 575, 0, 0, 576, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0,
    580, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 584, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 591, 0,
    0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 598, 0, 599, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605,
};
void recomp_unit_0121_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0121[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E8000;
    case 2u: goto L_089E8020;
    case 3u: goto L_089E8028;
    case 4u: goto L_089E8074;
    case 5u: goto L_089E8084;
    case 6u: goto L_089E8094;
    case 7u: goto L_089E809C;
    case 8u: goto L_089E80A8;
    case 9u: goto L_089E80B4;
    case 10u: goto L_089E80C4;
    case 11u: goto L_089E80CC;
    case 12u: goto L_089E80D4;
    case 13u: goto L_089E80DC;
    case 14u: goto L_089E8100;
    case 15u: goto L_089E8108;
    case 16u: goto L_089E8114;
    case 17u: goto L_089E8120;
    case 18u: goto L_089E8124;
    case 19u: goto L_089E8134;
    case 20u: goto L_089E813C;
    case 21u: goto L_089E8140;
    case 22u: goto L_089E8150;
    case 23u: goto L_089E8160;
    case 24u: goto L_089E8168;
    case 25u: goto L_089E8170;
    case 26u: goto L_089E8194;
    case 27u: goto L_089E81A0;
    case 28u: goto L_089E81BC;
    case 29u: goto L_089E81C0;
    case 30u: goto L_089E81CC;
    case 31u: goto L_089E81D4;
    case 32u: goto L_089E81DC;
    case 33u: goto L_089E8200;
    case 34u: goto L_089E8208;
    case 35u: goto L_089E822C;
    case 36u: goto L_089E825C;
    case 37u: goto L_089E8264;
    case 38u: goto L_089E827C;
    case 39u: goto L_089E828C;
    case 40u: goto L_089E8298;
    case 41u: goto L_089E82A4;
    case 42u: goto L_089E82B0;
    case 43u: goto L_089E82BC;
    case 44u: goto L_089E82D8;
    case 45u: goto L_089E82EC;
    case 46u: goto L_089E82F8;
    case 47u: goto L_089E8308;
    case 48u: goto L_089E8310;
    case 49u: goto L_089E8318;
    case 50u: goto L_089E8320;
    case 51u: goto L_089E8340;
    case 52u: goto L_089E8348;
    case 53u: goto L_089E8354;
    case 54u: goto L_089E8360;
    case 55u: goto L_089E8364;
    case 56u: goto L_089E8374;
    case 57u: goto L_089E837C;
    case 58u: goto L_089E8380;
    case 59u: goto L_089E8390;
    case 60u: goto L_089E83A0;
    case 61u: goto L_089E83A8;
    case 62u: goto L_089E83B0;
    case 63u: goto L_089E83B8;
    case 64u: goto L_089E83D8;
    case 65u: goto L_089E83E4;
    case 66u: goto L_089E8400;
    case 67u: goto L_089E8404;
    case 68u: goto L_089E8410;
    case 69u: goto L_089E8418;
    case 70u: goto L_089E842C;
    case 71u: goto L_089E8434;
    case 72u: goto L_089E8440;
    case 73u: goto L_089E84B8;
    case 74u: goto L_089E84C4;
    case 75u: goto L_089E84E0;
    case 76u: goto L_089E84E8;
    case 77u: goto L_089E8508;
    case 78u: goto L_089E8510;
    case 79u: goto L_089E8518;
    case 80u: goto L_089E8538;
    case 81u: goto L_089E8564;
    case 82u: goto L_089E8700;
    case 83u: goto L_089E870C;
    case 84u: goto L_089E8744;
    case 85u: goto L_089E8788;
    case 86u: goto L_089E8790;
    case 87u: goto L_089E87A4;
    case 88u: goto L_089E87AC;
    case 89u: goto L_089E87DC;
    case 90u: goto L_089E87FC;
    case 91u: goto L_089E8810;
    case 92u: goto L_089E8814;
    case 93u: goto L_089E8820;
    case 94u: goto L_089E884C;
    case 95u: goto L_089E8854;
    case 96u: goto L_089E8888;
    case 97u: goto L_089E88B0;
    case 98u: goto L_089E88B8;
    case 99u: goto L_089E88E0;
    case 100u: goto L_089E8910;
    case 101u: goto L_089E8940;
    case 102u: goto L_089E8970;
    case 103u: goto L_089E8990;
    case 104u: goto L_089E89A0;
    case 105u: goto L_089E89A8;
    case 106u: goto L_089E89B4;
    case 107u: goto L_089E89C4;
    case 108u: goto L_089E89CC;
    case 109u: goto L_089E89D4;
    case 110u: goto L_089E89DC;
    case 111u: goto L_089E89E8;
    case 112u: goto L_089E89F0;
    case 113u: goto L_089E89F4;
    case 114u: goto L_089E89FC;
    case 115u: goto L_089E8A0C;
    case 116u: goto L_089E8A14;
    case 117u: goto L_089E8A1C;
    case 118u: goto L_089E8A64;
    case 119u: goto L_089E8A74;
    case 120u: goto L_089E8A80;
    case 121u: goto L_089E8A88;
    case 122u: goto L_089E8A94;
    case 123u: goto L_089E8AA0;
    case 124u: goto L_089E8AA8;
    case 125u: goto L_089E8AB4;
    case 126u: goto L_089E8ABC;
    case 127u: goto L_089E8AE0;
    case 128u: goto L_089E8B34;
    case 129u: goto L_089E8B6C;
    case 130u: goto L_089E8B98;
    case 131u: goto L_089E8B9C;
    case 132u: goto L_089E8BAC;
    case 133u: goto L_089E8BE4;
    case 134u: goto L_089E8BF0;
    case 135u: goto L_089E8C24;
    case 136u: goto L_089E8C50;
    case 137u: goto L_089E8C70;
    case 138u: goto L_089E8C88;
    case 139u: goto L_089E8C94;
    case 140u: goto L_089E8CA4;
    case 141u: goto L_089E8CB0;
    case 142u: goto L_089E8CBC;
    case 143u: goto L_089E8CCC;
    case 144u: goto L_089E8CE4;
    case 145u: goto L_089E8CF0;
    case 146u: goto L_089E8CFC;
    case 147u: goto L_089E8D98;
    case 148u: goto L_089E8DAC;
    case 149u: goto L_089E8DC0;
    case 150u: goto L_089E8DF0;
    case 151u: goto L_089E8E18;
    case 152u: goto L_089E8E40;
    case 153u: goto L_089E8E70;
    case 154u: goto L_089E8E98;
    case 155u: goto L_089E8F2C;
    case 156u: goto L_089E8F68;
    case 157u: goto L_089E8FB0;
    case 158u: goto L_089E8FB8;
    case 159u: goto L_089E8FF0;
    case 160u: goto L_089E9018;
    case 161u: goto L_089E9040;
    case 162u: goto L_089E905C;
    case 163u: goto L_089E9094;
    case 164u: goto L_089E90BC;
    case 165u: goto L_089E90E0;
    case 166u: goto L_089E9108;
    case 167u: goto L_089E9130;
    case 168u: goto L_089E9158;
    case 169u: goto L_089E9180;
    case 170u: goto L_089E91A8;
    case 171u: goto L_089E91D0;
    case 172u: goto L_089E91F8;
    case 173u: goto L_089E9220;
    case 174u: goto L_089E9248;
    case 175u: goto L_089E9270;
    case 176u: goto L_089E9298;
    case 177u: goto L_089E92C0;
    case 178u: goto L_089E92E8;
    case 179u: goto L_089E9310;
    case 180u: goto L_089E9338;
    case 181u: goto L_089E9360;
    case 182u: goto L_089E9388;
    case 183u: goto L_089E93B0;
    case 184u: goto L_089E93F0;
    case 185u: goto L_089E9404;
    case 186u: goto L_089E941C;
    case 187u: goto L_089E9424;
    case 188u: goto L_089E9430;
    case 189u: goto L_089E9438;
    case 190u: goto L_089E9444;
    case 191u: goto L_089E944C;
    case 192u: goto L_089E9458;
    case 193u: goto L_089E9460;
    case 194u: goto L_089E946C;
    case 195u: goto L_089E9474;
    case 196u: goto L_089E9480;
    case 197u: goto L_089E9488;
    case 198u: goto L_089E9494;
    case 199u: goto L_089E949C;
    case 200u: goto L_089E94A8;
    case 201u: goto L_089E94B0;
    case 202u: goto L_089E94BC;
    case 203u: goto L_089E94C4;
    case 204u: goto L_089E94D0;
    case 205u: goto L_089E94D8;
    case 206u: goto L_089E94E4;
    case 207u: goto L_089E94EC;
    case 208u: goto L_089E94F8;
    case 209u: goto L_089E9500;
    case 210u: goto L_089E950C;
    case 211u: goto L_089E9514;
    case 212u: goto L_089E9520;
    case 213u: goto L_089E9528;
    case 214u: goto L_089E9534;
    case 215u: goto L_089E953C;
    case 216u: goto L_089E9548;
    case 217u: goto L_089E9550;
    case 218u: goto L_089E955C;
    case 219u: goto L_089E9564;
    case 220u: goto L_089E9570;
    case 221u: goto L_089E9578;
    case 222u: goto L_089E9584;
    case 223u: goto L_089E958C;
    case 224u: goto L_089E9598;
    case 225u: goto L_089E95A0;
    case 226u: goto L_089E95AC;
    case 227u: goto L_089E95B4;
    case 228u: goto L_089E95C0;
    case 229u: goto L_089E95C8;
    case 230u: goto L_089E95D4;
    case 231u: goto L_089E95E4;
    case 232u: goto L_089E95F0;
    case 233u: goto L_089E9600;
    case 234u: goto L_089E960C;
    case 235u: goto L_089E9634;
    case 236u: goto L_089E965C;
    case 237u: goto L_089E9684;
    case 238u: goto L_089E96AC;
    case 239u: goto L_089E96D4;
    case 240u: goto L_089E9704;
    case 241u: goto L_089E9758;
    case 242u: goto L_089E9778;
    case 243u: goto L_089E978C;
    case 244u: goto L_089E9790;
    case 245u: goto L_089E9808;
    case 246u: goto L_089E9818;
    case 247u: goto L_089E9828;
    case 248u: goto L_089E9924;
    case 249u: goto L_089E99A0;
    case 250u: goto L_089E99E0;
    case 251u: goto L_089E9A08;
    case 252u: goto L_089E9A3C;
    case 253u: goto L_089E9AA4;
    case 254u: goto L_089E9B0C;
    case 255u: goto L_089E9B18;
    case 256u: goto L_089E9B2C;
    case 257u: goto L_089E9B30;
    case 258u: goto L_089E9BB0;
    case 259u: goto L_089E9C48;
    case 260u: goto L_089E9CA8;
    case 261u: goto L_089E9CD0;
    case 262u: goto L_089E9CFC;
    case 263u: goto L_089E9D30;
    case 264u: goto L_089E9D5C;
    case 265u: goto L_089E9D8C;
    case 266u: goto L_089E9E28;
    case 267u: goto L_089E9E98;
    case 268u: goto L_089E9ED0;
    case 269u: goto L_089E9F18;
    case 270u: goto L_089E9F98;
    case 271u: goto L_089E9FA4;
    case 272u: goto L_089E9FB0;
    case 273u: goto L_089EA068;
    case 274u: goto L_089EA084;
    case 275u: goto L_089EA08C;
    case 276u: goto L_089EA094;
    case 277u: goto L_089EA0A0;
    case 278u: goto L_089EA0AC;
    case 279u: goto L_089EA0B4;
    case 280u: goto L_089EA0CC;
    case 281u: goto L_089EA0D8;
    case 282u: goto L_089EA0F0;
    case 283u: goto L_089EA0FC;
    case 284u: goto L_089EA108;
    case 285u: goto L_089EA134;
    case 286u: goto L_089EA150;
    case 287u: goto L_089EA164;
    case 288u: goto L_089EA198;
    case 289u: goto L_089EA1A4;
    case 290u: goto L_089EA1C0;
    case 291u: goto L_089EA1E0;
    case 292u: goto L_089EA1E8;
    case 293u: goto L_089EA200;
    case 294u: goto L_089EA204;
    case 295u: goto L_089EA220;
    case 296u: goto L_089EA228;
    case 297u: goto L_089EA234;
    case 298u: goto L_089EA254;
    case 299u: goto L_089EA25C;
    case 300u: goto L_089EA264;
    case 301u: goto L_089EA280;
    case 302u: goto L_089EA28C;
    case 303u: goto L_089EA294;
    case 304u: goto L_089EA2A0;
    case 305u: goto L_089EA2B0;
    case 306u: goto L_089EA2BC;
    case 307u: goto L_089EA2C0;
    case 308u: goto L_089EA2CC;
    case 309u: goto L_089EA2D8;
    case 310u: goto L_089EA35C;
    case 311u: goto L_089EA37C;
    case 312u: goto L_089EA39C;
    case 313u: goto L_089EA3AC;
    case 314u: goto L_089EA3B4;
    case 315u: goto L_089EA3BC;
    case 316u: goto L_089EA3C4;
    case 317u: goto L_089EA3CC;
    case 318u: goto L_089EA3D4;
    case 319u: goto L_089EA3E8;
    case 320u: goto L_089EA410;
    case 321u: goto L_089EA41C;
    case 322u: goto L_089EA428;
    case 323u: goto L_089EA430;
    case 324u: goto L_089EA438;
    case 325u: goto L_089EA440;
    case 326u: goto L_089EA45C;
    case 327u: goto L_089EA46C;
    case 328u: goto L_089EA48C;
    case 329u: goto L_089EA4A8;
    case 330u: goto L_089EA4BC;
    case 331u: goto L_089EA5F0;
    case 332u: goto L_089EA640;
    case 333u: goto L_089EA674;
    case 334u: goto L_089EA6A4;
    case 335u: goto L_089EA744;
    case 336u: goto L_089EA7CC;
    case 337u: goto L_089EA7F0;
    case 338u: goto L_089EA810;
    case 339u: goto L_089EA81C;
    case 340u: goto L_089EA838;
    case 341u: goto L_089EA840;
    case 342u: goto L_089EA858;
    case 343u: goto L_089EA898;
    case 344u: goto L_089EA8AC;
    case 345u: goto L_089EA8B8;
    case 346u: goto L_089EA8D4;
    case 347u: goto L_089EA8EC;
    case 348u: goto L_089EA918;
    case 349u: goto L_089EA940;
    case 350u: goto L_089EA9A4;
    case 351u: goto L_089EA9C0;
    case 352u: goto L_089EA9D0;
    case 353u: goto L_089EA9E4;
    case 354u: goto L_089EAA1C;
    case 355u: goto L_089EAA54;
    case 356u: goto L_089EAAA4;
    case 357u: goto L_089EAAC8;
    case 358u: goto L_089EAAD4;
    case 359u: goto L_089EAADC;
    case 360u: goto L_089EAB44;
    case 361u: goto L_089EAB68;
    case 362u: goto L_089EAB74;
    case 363u: goto L_089EAB7C;
    case 364u: goto L_089EABE4;
    case 365u: goto L_089EACC8;
    case 366u: goto L_089EB0B0;
    case 367u: goto L_089EB0D0;
    case 368u: goto L_089EB0E4;
    case 369u: goto L_089EB0EC;
    case 370u: goto L_089EB108;
    case 371u: goto L_089EB10C;
    case 372u: goto L_089EB128;
    case 373u: goto L_089EB140;
    case 374u: goto L_089EB148;
    case 375u: goto L_089EB158;
    case 376u: goto L_089EB164;
    case 377u: goto L_089EB16C;
    case 378u: goto L_089EB184;
    case 379u: goto L_089EB1B8;
    case 380u: goto L_089EB1D4;
    case 381u: goto L_089EB1E4;
    case 382u: goto L_089EB1EC;
    case 383u: goto L_089EB200;
    case 384u: goto L_089EB218;
    case 385u: goto L_089EB228;
    case 386u: goto L_089EB234;
    case 387u: goto L_089EB244;
    case 388u: goto L_089EB250;
    case 389u: goto L_089EB270;
    case 390u: goto L_089EB278;
    case 391u: goto L_089EB280;
    case 392u: goto L_089EB284;
    case 393u: goto L_089EB28C;
    case 394u: goto L_089EB294;
    case 395u: goto L_089EB298;
    case 396u: goto L_089EB2A0;
    case 397u: goto L_089EB2A8;
    case 398u: goto L_089EB2AC;
    case 399u: goto L_089EB2B4;
    case 400u: goto L_089EB2BC;
    case 401u: goto L_089EB2C4;
    case 402u: goto L_089EB2C8;
    case 403u: goto L_089EB2D4;
    case 404u: goto L_089EB2DC;
    case 405u: goto L_089EB2E0;
    case 406u: goto L_089EB2F0;
    case 407u: goto L_089EB2F8;
    case 408u: goto L_089EB2FC;
    case 409u: goto L_089EB304;
    case 410u: goto L_089EB30C;
    case 411u: goto L_089EB310;
    case 412u: goto L_089EB318;
    case 413u: goto L_089EB320;
    case 414u: goto L_089EB324;
    case 415u: goto L_089EB32C;
    case 416u: goto L_089EB334;
    case 417u: goto L_089EB338;
    case 418u: goto L_089EB344;
    case 419u: goto L_089EB34C;
    case 420u: goto L_089EB350;
    case 421u: goto L_089EB35C;
    case 422u: goto L_089EB364;
    case 423u: goto L_089EB368;
    case 424u: goto L_089EB374;
    case 425u: goto L_089EB37C;
    case 426u: goto L_089EB380;
    case 427u: goto L_089EB38C;
    case 428u: goto L_089EB394;
    case 429u: goto L_089EB398;
    case 430u: goto L_089EB3A4;
    case 431u: goto L_089EB3BC;
    case 432u: goto L_089EB3C4;
    case 433u: goto L_089EB3CC;
    case 434u: goto L_089EB3D0;
    case 435u: goto L_089EB3D8;
    case 436u: goto L_089EB3EC;
    case 437u: goto L_089EB3F4;
    case 438u: goto L_089EB404;
    case 439u: goto L_089EB418;
    case 440u: goto L_089EB474;
    case 441u: goto L_089EB4A8;
    case 442u: goto L_089EB4CC;
    case 443u: goto L_089EB4D4;
    case 444u: goto L_089EB4DC;
    case 445u: goto L_089EB4E8;
    case 446u: goto L_089EB4F0;
    case 447u: goto L_089EB4F8;
    case 448u: goto L_089EB4FC;
    case 449u: goto L_089EB500;
    case 450u: goto L_089EB520;
    case 451u: goto L_089EB544;
    case 452u: goto L_089EB54C;
    case 453u: goto L_089EB554;
    case 454u: goto L_089EB558;
    case 455u: goto L_089EB560;
    case 456u: goto L_089EB568;
    case 457u: goto L_089EB570;
    case 458u: goto L_089EB578;
    case 459u: goto L_089EB57C;
    case 460u: goto L_089EB598;
    case 461u: goto L_089EB5BC;
    case 462u: goto L_089EB5C4;
    case 463u: goto L_089EB5E4;
    case 464u: goto L_089EB614;
    case 465u: goto L_089EB61C;
    case 466u: goto L_089EB630;
    case 467u: goto L_089EB664;
    case 468u: goto L_089EB688;
    case 469u: goto L_089EB6C0;
    case 470u: goto L_089EB6D0;
    case 471u: goto L_089EB708;
    case 472u: goto L_089EB70C;
    case 473u: goto L_089EB718;
    case 474u: goto L_089EB73C;
    case 475u: goto L_089EB760;
    case 476u: goto L_089EB768;
    case 477u: goto L_089EB770;
    case 478u: goto L_089EB77C;
    case 479u: goto L_089EB784;
    case 480u: goto L_089EB78C;
    case 481u: goto L_089EB790;
    case 482u: goto L_089EB794;
    case 483u: goto L_089EB7B4;
    case 484u: goto L_089EB7D8;
    case 485u: goto L_089EB818;
    case 486u: goto L_089EB824;
    case 487u: goto L_089EB82C;
    case 488u: goto L_089EB838;
    case 489u: goto L_089EB840;
    case 490u: goto L_089EB848;
    case 491u: goto L_089EB84C;
    case 492u: goto L_089EB850;
    case 493u: goto L_089EB874;
    case 494u: goto L_089EB89C;
    case 495u: goto L_089EB8A4;
    case 496u: goto L_089EB8AC;
    case 497u: goto L_089EB8B0;
    case 498u: goto L_089EB8B8;
    case 499u: goto L_089EB8C0;
    case 500u: goto L_089EB8C8;
    case 501u: goto L_089EB8CC;
    case 502u: goto L_089EB8D4;
    case 503u: goto L_089EB8DC;
    case 504u: goto L_089EB8E4;
    case 505u: goto L_089EB8EC;
    case 506u: goto L_089EB8F8;
    case 507u: goto L_089EB900;
    case 508u: goto L_089EB90C;
    case 509u: goto L_089EB914;
    case 510u: goto L_089EB920;
    case 511u: goto L_089EB928;
    case 512u: goto L_089EB930;
    case 513u: goto L_089EB934;
    case 514u: goto L_089EB958;
    case 515u: goto L_089EB97C;
    case 516u: goto L_089EB984;
    case 517u: goto L_089EB98C;
    case 518u: goto L_089EB998;
    case 519u: goto L_089EB9A0;
    case 520u: goto L_089EB9A8;
    case 521u: goto L_089EB9AC;
    case 522u: goto L_089EB9B0;
    case 523u: goto L_089EB9D4;
    case 524u: goto L_089EB9F8;
    case 525u: goto L_089EBA14;
    case 526u: goto L_089EBA24;
    case 527u: goto L_089EBA34;
    case 528u: goto L_089EBA40;
    case 529u: goto L_089EBA50;
    case 530u: goto L_089EBA5C;
    case 531u: goto L_089EBA80;
    case 532u: goto L_089EBAA4;
    case 533u: goto L_089EBAC0;
    case 534u: goto L_089EBAD0;
    case 535u: goto L_089EBAF0;
    case 536u: goto L_089EBAFC;
    case 537u: goto L_089EBB1C;
    case 538u: goto L_089EBB28;
    case 539u: goto L_089EBB4C;
    case 540u: goto L_089EBB8C;
    case 541u: goto L_089EBBB0;
    case 542u: goto L_089EBBD0;
    case 543u: goto L_089EBBF0;
    case 544u: goto L_089EBC08;
    case 545u: goto L_089EBC44;
    case 546u: goto L_089EBC4C;
    case 547u: goto L_089EBC6C;
    case 548u: goto L_089EBCC4;
    case 549u: goto L_089EBCD0;
    case 550u: goto L_089EBCD8;
    case 551u: goto L_089EBCDC;
    case 552u: goto L_089EBCE4;
    case 553u: goto L_089EBCF0;
    case 554u: goto L_089EBCF8;
    case 555u: goto L_089EBD04;
    case 556u: goto L_089EBD10;
    case 557u: goto L_089EBD1C;
    case 558u: goto L_089EBD28;
    case 559u: goto L_089EBD2C;
    case 560u: goto L_089EBD48;
    case 561u: goto L_089EBD50;
    case 562u: goto L_089EBD6C;
    case 563u: goto L_089EBD94;
    case 564u: goto L_089EBDBC;
    case 565u: goto L_089EBDC4;
    case 566u: goto L_089EBDCC;
    case 567u: goto L_089EBDD4;
    case 568u: goto L_089EBDE4;
    case 569u: goto L_089EBDF4;
    case 570u: goto L_089EBDFC;
    case 571u: goto L_089EBE04;
    case 572u: goto L_089EBE14;
    case 573u: goto L_089EBE20;
    case 574u: goto L_089EBE34;
    case 575u: goto L_089EBE38;
    case 576u: goto L_089EBE44;
    case 577u: goto L_089EBE54;
    case 578u: goto L_089EBE5C;
    case 579u: goto L_089EBE70;
    case 580u: goto L_089EBE80;
    case 581u: goto L_089EBE88;
    case 582u: goto L_089EBE94;
    case 583u: goto L_089EBEB0;
    case 584u: goto L_089EBEB8;
    case 585u: goto L_089EBEBC;
    case 586u: goto L_089EBEC4;
    case 587u: goto L_089EBECC;
    case 588u: goto L_089EBED4;
    case 589u: goto L_089EBEDC;
    case 590u: goto L_089EBEE4;
    case 591u: goto L_089EBEF8;
    case 592u: goto L_089EBF08;
    case 593u: goto L_089EBF10;
    case 594u: goto L_089EBF18;
    case 595u: goto L_089EBF20;
    case 596u: goto L_089EBF30;
    case 597u: goto L_089EBF5C;
    case 598u: goto L_089EBF60;
    case 599u: goto L_089EBF68;
    case 600u: goto L_089EBF78;
    case 601u: goto L_089EBF90;
    case 602u: goto L_089EBF98;
    case 603u: goto L_089EBFDC;
    case 604u: goto L_089EBFE4;
    case 605u: goto L_089EBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E8000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E8020u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x089E8020u) goto L_089E8020;
    return;
L_089E8020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089E80DC;
      }
      goto L_089E8028;
    }
L_089E8028:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] & 3840u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 3840u);
    ctx.gpr[4] = (ctx.gpr[4] << 12u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E8074u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089E8074u) goto L_089E8074;
    return;
L_089E8074:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089E8084u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089E8084u) goto L_089E8084;
    return;
L_089E8084:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E8094u);
    ctx.gpr[6] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x089E8094u) goto L_089E8094;
    return;
L_089E8094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089E80DC;
      }
      goto L_089E809C;
    }
L_089E809C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E80A8u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 35u, 0x089DC7FCu>(ctx, &aot_mem) && ctx.pc == 0x089E80A8u) goto L_089E80A8;
    return;
L_089E80A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E80CC;
      }
      goto L_089E80B4;
    }
L_089E80B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] & 24576u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16384u);
      if (branch_taken) {
          goto L_089E8100;
      }
      goto L_089E80C4;
    }
L_089E80C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_089E8140;
      }
      goto L_089E80CC;
    }
L_089E80CC:
    ctx.gpr[31] = (0x089E80D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E80D4u) goto L_089E80D4;
    return;
L_089E80D4:
    ctx.gpr[31] = (0x089E80DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x089E80DCu) goto L_089E80DC;
    return;
L_089E80DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8100:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_089E8114;
      }
      goto L_089E8108;
    }
L_089E8108:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E8124;
      }
      goto L_089E8114;
    }
L_089E8114:
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E8124;
      }
      goto L_089E8120;
    }
L_089E8120:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089E8124;
L_089E8124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089E8134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x089E8134u) goto L_089E8134;
    return;
L_089E8134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8168;
      }
      goto L_089E813C;
    }
L_089E813C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    goto L_089E8140;
L_089E8140:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E8150u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 476u, 0x089E3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8150u) goto L_089E8150;
    return;
L_089E8150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E8194;
      }
      goto L_089E8160;
    }
L_089E8160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089E81C0;
      }
      goto L_089E8168;
    }
L_089E8168:
    ctx.gpr[31] = (0x089E8170u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E8170u) goto L_089E8170;
    return;
L_089E8170:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8194:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (0x089E81A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E81A0u) goto L_089E81A0;
    return;
L_089E81A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E8194;
      }
      goto L_089E81BC;
    }
L_089E81BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089E81C0;
L_089E81C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E81CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 387u, 0x089D2778u>(ctx, &aot_mem) && ctx.pc == 0x089E81CCu) goto L_089E81CC;
    return;
L_089E81CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E8200;
      }
      goto L_089E81D4;
    }
L_089E81D4:
    ctx.gpr[31] = (0x089E81DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E81DCu) goto L_089E81DC;
    return;
L_089E81DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8200:
    ctx.gpr[31] = (0x089E8208u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E8208u) goto L_089E8208;
    return;
L_089E8208:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E822C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E825Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x089E825Cu) goto L_089E825C;
    return;
L_089E825C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8320;
      }
      goto L_089E8264;
    }
L_089E8264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20480));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (3u << 16u);
      if (branch_taken) {
          goto L_089E8320;
      }
      goto L_089E827C;
    }
L_089E827C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28674));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E8320;
      }
      goto L_089E828C;
    }
L_089E828C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E8298u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089E8298u) goto L_089E8298;
    return;
L_089E8298:
    ctx.gpr[4] = (0u | 100u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
      if (branch_taken) {
          goto L_089E8320;
      }
      goto L_089E82A4;
    }
L_089E82A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E82B0u);
    ctx.gpr[6] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089E82B0u) goto L_089E82B0;
    return;
L_089E82B0:
    ctx.gpr[4] = (0u | 72u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E8320;
      }
      goto L_089E82BC;
    }
L_089E82BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E82D8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 26u, 0x089DC6A0u>(ctx, &aot_mem) && ctx.pc == 0x089E82D8u) goto L_089E82D8;
    return;
L_089E82D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E82ECu);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 35u, 0x089DC7FCu>(ctx, &aot_mem) && ctx.pc == 0x089E82ECu) goto L_089E82EC;
    return;
L_089E82EC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8310;
      }
      goto L_089E82F8;
    }
L_089E82F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] & 24576u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16384u);
      if (branch_taken) {
          goto L_089E8340;
      }
      goto L_089E8308;
    }
L_089E8308:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
      if (branch_taken) {
          goto L_089E8380;
      }
      goto L_089E8310;
    }
L_089E8310:
    ctx.gpr[31] = (0x089E8318u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E8318u) goto L_089E8318;
    return;
L_089E8318:
    ctx.gpr[31] = (0x089E8320u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x089E8320u) goto L_089E8320;
    return;
L_089E8320:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8340:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
      if (branch_taken) {
          goto L_089E8354;
      }
      goto L_089E8348;
    }
L_089E8348:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E8364;
      }
      goto L_089E8354;
    }
L_089E8354:
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E8364;
      }
      goto L_089E8360;
    }
L_089E8360:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    goto L_089E8364;
L_089E8364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x089E8374u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089E8374u) goto L_089E8374;
    return;
L_089E8374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E83A8;
      }
      goto L_089E837C;
    }
L_089E837C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    goto L_089E8380;
L_089E8380:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E8390u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 476u, 0x089E3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8390u) goto L_089E8390;
    return;
L_089E8390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E83D8;
      }
      goto L_089E83A0;
    }
L_089E83A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_089E8404;
      }
      goto L_089E83A8;
    }
L_089E83A8:
    ctx.gpr[31] = (0x089E83B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E83B0u) goto L_089E83B0;
    return;
L_089E83B0:
    ctx.gpr[31] = (0x089E83B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x089E83B8u) goto L_089E83B8;
    return;
L_089E83B8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E83D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x089E83E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E83E4u) goto L_089E83E4;
    return;
L_089E83E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E83D8;
      }
      goto L_089E8400;
    }
L_089E8400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    goto L_089E8404;
L_089E8404:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E8410u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089E8410u) goto L_089E8410;
    return;
L_089E8410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8508;
      }
      goto L_089E8418;
    }
L_089E8418:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    ctx.gpr[31] = (0x089E842Cu);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E842Cu) goto L_089E842C;
    return;
L_089E842C:
    ctx.gpr[31] = (0x089E8434u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 361u, 0x089DE6BCu>(ctx, &aot_mem) && ctx.pc == 0x089E8434u) goto L_089E8434;
    return;
L_089E8434:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E84E0;
      }
      goto L_089E8440;
    }
L_089E8440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3841));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 3840u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 12u));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4095));
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 61440u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[31] = (0x089E84B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 368u, 0x089DE79Cu>(ctx, &aot_mem) && ctx.pc == 0x089E84B8u) goto L_089E84B8;
    return;
L_089E84B8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x089E84C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 375u, 0x089DE838u>(ctx, &aot_mem) && ctx.pc == 0x089E84C4u) goto L_089E84C4;
    return;
L_089E84C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E8538;
      }
      goto L_089E84E0;
    }
L_089E84E0:
    ctx.gpr[31] = (0x089E84E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x089E84E8u) goto L_089E84E8;
    return;
L_089E84E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8508:
    ctx.gpr[31] = (0x089E8510u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E8510u) goto L_089E8510;
    return;
L_089E8510:
    ctx.gpr[31] = (0x089E8518u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x089E8518u) goto L_089E8518;
    return;
L_089E8518:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8538:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E8538;
      }
      goto L_089E8564;
    }
L_089E8564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8700:
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-23460), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E870C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_089E8910;
      }
      goto L_089E8744;
    }
L_089E8744:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23468)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14352));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14352), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14360));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E8788u);
    ctx.gpr[5] = (0u | 1041u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8788u) goto L_089E8788;
    return;
L_089E8788:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E8910;
      }
      goto L_089E8790;
    }
L_089E8790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23468)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_089E88B0;
      }
      goto L_089E87A4;
    }
L_089E87A4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (2222u << 16u);
    goto L_089E87AC;
L_089E87AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23464)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E87DCu);
    ctx.gpr[5] = (0u | 1041u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E87DCu) goto L_089E87DC;
    return;
L_089E87DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(63));
        goto L_089E8888;
    }
    goto L_089E87FC;
L_089E87FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E884C;
      }
      goto L_089E8810;
    }
L_089E8810:
    ctx.gpr[20] = (ctx.gpr[17] << 4u);
    goto L_089E8814;
L_089E8814:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E8820u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8820u) goto L_089E8820;
    return;
L_089E8820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E8814;
      }
      goto L_089E884C;
    }
L_089E884C:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E8854u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8854u) goto L_089E8854;
    return;
L_089E8854:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8888:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23468)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E87AC;
      }
      goto L_089E88B0;
    }
L_089E88B0:
    ctx.gpr[31] = (0x089E88B8u);
    // nop
    ctx.pc = 0x08AB4514u;
    return;
L_089E88B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23472), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E88E0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089EA164;
L_089E88E0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8910:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_089E8AE0;
      }
      goto L_089E8970;
    }
L_089E8970:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14352));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-15104));
      if (branch_taken) {
          goto L_089E89A0;
      }
      goto L_089E8990;
    }
L_089E8990:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E89A0;
      }
      goto L_089E89A0;
    }
L_089E89A0:
    ctx.gpr[31] = (0x089E89A8u);
    // nop
    goto L_089EA37C;
L_089E89A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089E89B4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089EA068;
L_089E89B4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23460)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E89CC;
      }
      goto L_089E89C4;
    }
L_089E89C4:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x089E89CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E89CCu) goto L_089E89CC;
    return;
L_089E89CC:
    ctx.gpr[31] = (0x089E89D4u);
    // nop
    ctx.pc = 0x08AB44ACu;
    return;
L_089E89D4:
    ctx.gpr[31] = (0x089E89DCu);
    // nop
    goto L_089EA108;
L_089E89DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089E89F4;
    }
    goto L_089E89E8;
L_089E89E8:
    ctx.gpr[31] = (0x089E89F0u);
    // nop
    ctx.pc = 0x08AB4514u;
    return;
L_089E89F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089E89F4;
L_089E89F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_089E8A1C;
      }
      goto L_089E89FC;
    }
L_089E89FC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1024u);
    ctx.gpr[31] = (0x089E8A0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22528));
    goto L_089EA164;
L_089E8A0C:
    ctx.gpr[31] = (0x089E8A14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089E9CFC;
L_089E8A14:
    ctx.gpr[31] = (0x089E8A1Cu);
    // nop
    goto L_089EA37C;
L_089E8A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E8A64u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089EA164;
L_089E8A64:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14368)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E8A80;
      }
      goto L_089E8A74;
    }
L_089E8A74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (5u << 16u);
      if (branch_taken) {
          goto L_089E8AA0;
      }
      goto L_089E8A80;
    }
L_089E8A80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (9u << 16u);
      if (branch_taken) {
          goto L_089E8A94;
      }
      goto L_089E8A88;
    }
L_089E8A88:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(296), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E8ABC;
      }
      goto L_089E8A94;
    }
L_089E8A94:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(300), 0u);
      if (branch_taken) {
          goto L_089E8ABC;
      }
      goto L_089E8AA0;
    }
L_089E8AA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
      if (branch_taken) {
          goto L_089E8AB4;
      }
      goto L_089E8AA8;
    }
L_089E8AA8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(296), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E8ABC;
      }
      goto L_089E8AB4;
    }
L_089E8AB4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(300), 0u);
    goto L_089E8ABC;
L_089E8ABC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089E8AE0:
    ctx.gpr[2] = (0u | 0u);
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
L_089E8B34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089E8C24;
      }
      goto L_089E8B6C;
    }
L_089E8B6C:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23468)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14360));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14352));
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E8BE4;
      }
      goto L_089E8B98;
    }
L_089E8B98:
    ctx.gpr[17] = (ctx.gpr[19] << 4u);
    goto L_089E8B9C;
L_089E8B9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E8BACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8BACu) goto L_089E8BAC;
    return;
L_089E8BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E8B9C;
      }
      goto L_089E8BE4;
    }
L_089E8BE4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E8BF0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8BF0u) goto L_089E8BF0;
    return;
L_089E8BF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-23472), 0u);
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8C24:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8C50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E8C88;
      }
      goto L_089E8C70;
    }
L_089E8C70:
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E8C94;
      }
      goto L_089E8C88;
    }
L_089E8C88:
    ctx.gpr[7] = (ctx.gpr[5] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    goto L_089E8C94;
L_089E8C94:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E8CB0;
      }
      goto L_089E8CA4;
    }
L_089E8CA4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E8CB0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8CB0u) goto L_089E8CB0;
    return;
L_089E8CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x089E8CBCu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB4694u;
    return;
L_089E8CBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089E8CF0;
      }
      goto L_089E8CE4;
    }
L_089E8CE4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E8CF0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8CF0u) goto L_089E8CF0;
    return;
L_089E8CF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8CFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (0u | 480u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[7] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[5] = (0u | 65535u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E8D98;
L_089E8D98:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E8D98;
      }
      goto L_089E8DAC;
    }
L_089E8DAC:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21504));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21504), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8DC0:
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00000700u) | ((ctx.gpr[4] & 0x00000007u) << 8u));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x000000F0u) | ((ctx.gpr[6] & 0x0000000Fu) << 4u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x0000000Fu) | ((ctx.gpr[5] & 0x0000000Fu) << 0u));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8DF0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8E18:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (57600u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8E40:
    ctx.gpr[7] = (56064u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00FF0000u) | ((ctx.gpr[6] & 0x000000FFu) << 16u));
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x0000FF00u) | ((ctx.gpr[5] & 0x000000FFu) << 8u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00000007u) | ((ctx.gpr[4] & 0x00000007u) << 0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8E70:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (56832u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8E98:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u - ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (16896u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[6] = (17152u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[6] = (17664u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] >> 8u);
    ctx.gpr[6] = (17920u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8F2C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E8FB0;
      }
      goto L_089E8F68;
    }
L_089E8F68:
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 10u);
    ctx.gpr[9] = (54272u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    ctx.gpr[8] = (54528u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (5376u << 16u);
    ctx.gpr[8] = (5632u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089E8FB0;
L_089E8FB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8FB8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8FF0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (8704u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9018:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9040:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    ctx.gpr[5] = (54528u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (5632u << 16u);
      if (branch_taken) {
          goto L_089E9094;
      }
      goto L_089E905C;
    }
L_089E905C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[7] << 10u);
    ctx.gpr[11] = (54272u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    ctx.gpr[9] = (ctx.gpr[9] << 10u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] | ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[10]);
      if (branch_taken) {
          goto L_089E90BC;
      }
      goto L_089E9094;
    }
L_089E9094:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] << 10u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[7] = (54272u << 16u);
    goto L_089E90BC;
L_089E90BC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (5376u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E90E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (9216u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9108:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (9984u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9130:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (10240u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9158:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (8448u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9180:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E91A8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E91D0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (7936u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E91F8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (7168u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9220:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (7680u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9248:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (5888u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9270:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (6144u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9298:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (6400u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E92C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (6656u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E92E8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (6912u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9310:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (9472u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9338:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (9728u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9360:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (20736u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9388:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (14336u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E93B0:
    ctx.gpr[5] = ((ctx.gpr[4] >> 0u) & 0x00000001u);
    ctx.gpr[6] = (51456u << 16u);
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00010000u) | ((ctx.gpr[5] & 0x00000001u) << 16u));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000100u) | ((ctx.gpr[7] & 0x00000001u) << 8u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000007u) | ((ctx.gpr[8] & 0x00000007u) << 0u));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E93F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E95C8;
      }
      goto L_089E9404;
    }
L_089E9404:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30344)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E941C:
    ctx.gpr[31] = (0x089E9424u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E8FF0;
L_089E9424:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9430:
    ctx.gpr[31] = (0x089E9438u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9018;
L_089E9438:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9444:
    ctx.gpr[31] = (0x089E944Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9040;
L_089E944C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9458:
    ctx.gpr[31] = (0x089E9460u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E90E0;
L_089E9460:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E946C:
    ctx.gpr[31] = (0x089E9474u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9108;
L_089E9474:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9480:
    ctx.gpr[31] = (0x089E9488u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9130;
L_089E9488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9494:
    ctx.gpr[31] = (0x089E949Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9158;
L_089E949C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E94A8:
    ctx.gpr[31] = (0x089E94B0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9180;
L_089E94B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E94BC:
    ctx.gpr[31] = (0x089E94C4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E91A8;
L_089E94C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E94D0:
    ctx.gpr[31] = (0x089E94D8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E91D0;
L_089E94D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E94E4:
    ctx.gpr[31] = (0x089E94ECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E91F8;
L_089E94EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E94F8:
    ctx.gpr[31] = (0x089E9500u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9220;
L_089E9500:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E950C:
    ctx.gpr[31] = (0x089E9514u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9248;
L_089E9514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9520:
    ctx.gpr[31] = (0x089E9528u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9270;
L_089E9528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9534:
    ctx.gpr[31] = (0x089E953Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9298;
L_089E953C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9548:
    ctx.gpr[31] = (0x089E9550u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E92C0;
L_089E9550:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E955C:
    ctx.gpr[31] = (0x089E9564u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E92E8;
L_089E9564:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9570:
    ctx.gpr[31] = (0x089E9578u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9310;
L_089E9578:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9584:
    ctx.gpr[31] = (0x089E958Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9338;
L_089E958C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9598:
    ctx.gpr[31] = (0x089E95A0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9360;
L_089E95A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95AC:
    ctx.gpr[31] = (0x089E95B4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E9388;
L_089E95B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95C0:
    ctx.gpr[31] = (0x089E95C8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089E93B0;
L_089E95C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E95E4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089E93F0;
L_089E95E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E9600u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E93F0;
L_089E9600:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E960C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (21248u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000007u) | ((ctx.gpr[4] & 0x00000007u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9634:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (21760u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E965C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (22016u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9684:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (21504u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E96AC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (22272u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E96D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (23296u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9704:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x000000FFu) | ((ctx.gpr[4] & 0x000000FFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_089E978C;
      }
      goto L_089E9778;
    }
L_089E9778:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (256u << 16u);
      if (branch_taken) {
          goto L_089E9790;
      }
      goto L_089E978C;
    }
L_089E978C:
    ctx.gpr[5] = (256u << 16u);
    goto L_089E9790;
L_089E9790:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (52992u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (52480u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (52736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9808:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9818:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9828:
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (65280u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (10752u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (11008u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9924:
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(148)));
    ctx.gpr[10] = (49152u << 16u);
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00000300u) | ((ctx.gpr[8] & 0x00000003u) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (49408u << 16u);
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00000003u) | ((ctx.gpr[4] & 0x00000003u) << 0u));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000300u) | ((ctx.gpr[6] & 0x00000003u) << 8u));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000003u) | ((ctx.gpr[5] & 0x00000003u) << 0u));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E99A0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(136)));
    ctx.gpr[8] = (51456u << 16u);
    ctx.gpr[7] = ((ctx.gpr[7] >> 0u) & 0x00000001u);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00010000u) | ((ctx.gpr[7] & 0x00000001u) << 16u));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000100u) | ((ctx.gpr[5] & 0x00000001u) << 8u));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000007u) | ((ctx.gpr[4] & 0x00000007u) << 0u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E99E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (39680u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9A08:
    ctx.gpr[6] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(143));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x00FFFFFFu) | ((ctx.gpr[5] & 0x00FFFFFFu) << 0u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9A3C:
    ctx.gpr[6] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x00FFFFFFu) | ((ctx.gpr[5] & 0x00FFFFFFu) << 0u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9AA4:
    ctx.gpr[5] = (ctx.gpr[4] << 1u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(123));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(124));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[9] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(125));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[8] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9B0C:
    ctx.gpr[9] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[9];
    ctx.gpr[8] = (0u | 2u);
      if (branch_taken) {
          goto L_089E9B30;
      }
      goto L_089E9B18;
    }
L_089E9B18:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (0u | 6u);
    if (ctx.gpr[8] == ctx.gpr[9]) {
    ctx.gpr[6] = (0u | 1u);
        goto L_089E9B2C;
    }
    goto L_089E9B2C;
L_089E9B2C:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_089E9B30;
L_089E9B30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[4] << 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(99));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[9] = (ctx.gpr[9] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[9] = (ctx.gpr[9] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(101));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9BB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(135));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(139));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] << 24u);
    ctx.gpr[6] = (ctx.gpr[8] >> 8u);
    ctx.gpr[6] = (ctx.gpr[9] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(111));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9C48:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] >> 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[4] >> 24u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    ctx.gpr[7] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9CA8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (23552u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9CD0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x000000FFu) | ((ctx.gpr[4] & 0x000000FFu) << 0u));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9CFC:
    ctx.gpr[5] = ((ctx.gpr[4] >> 24u) & 0x0000001Fu);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x001F0000u) | ((ctx.gpr[5] & 0x0000001Fu) << 16u));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (2560u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00FFFFFFu) | ((ctx.gpr[4] & 0x00FFFFFFu) << 0u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9D30:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (50944u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00000100u) | ((ctx.gpr[5] & 0x00000001u) << 8u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9D5C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[7] = (50688u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9D8C:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[11] = (256u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(68));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[11] = (ctx.gpr[8] & ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] >> 24u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[10] | ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[3] = (0u | 31u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[6])));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[3] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[5])));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[5] = (ctx.gpr[3] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9E28:
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (45056u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (45312u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (50176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9E98:
    ctx.gpr[8] = (49664u << 16u);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00070000u) | ((ctx.gpr[5] & 0x00000007u) << 16u));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000100u) | ((ctx.gpr[6] & 0x00000001u) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000001u) | ((ctx.gpr[7] & 0x00000001u) << 0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (49920u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x0000000Fu) | ((ctx.gpr[4] & 0x0000000Fu) << 0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9ED0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (51968u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (4608u << 16u);
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x00FFFFFFu) | ((ctx.gpr[5] & 0x00FFFFFFu) << 0u));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[11] = ((ctx.gpr[8] >> 24u) & 0x0000001Fu);
    ctx.gpr[10] = (4096u << 16u);
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x001F0000u) | ((ctx.gpr[11] & 0x0000001Fu) << 16u));
    ctx.gpr[11] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[11] = ((ctx.gpr[11] & ~0x00FFFFFFu) | ((ctx.gpr[8] & 0x00FFFFFFu) << 0u));
    ctx.gpr[8] = ((ctx.gpr[7] >> 24u) & 0x0000001Fu);
    ctx.gpr[10] = (4096u << 16u);
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x001F0000u) | ((ctx.gpr[8] & 0x0000001Fu) << 16u));
    ctx.gpr[8] = (512u << 16u);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00FFFFFFu) | ((ctx.gpr[7] & 0x00FFFFFFu) << 0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[7] = (1024u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x00070000u) | ((ctx.gpr[9] & 0x00000007u) << 16u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = ((ctx.gpr[7] & ~0x0000FFFFu) | ((ctx.gpr[6] & 0x0000FFFFu) << 0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E9FB0;
      }
      goto L_089E9F98;
    }
L_089E9F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9FB0;
      }
      goto L_089E9FA4;
    }
L_089E9FA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x089E9FB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x08AB448Cu;
    return;
L_089E9FB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089EA0A0;
      }
      goto L_089EA084;
    }
L_089EA084:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EA0FC;
      }
      goto L_089EA08C;
    }
L_089EA08C:
    ctx.gpr[31] = (0x089EA094u);
    // nop
    ctx.pc = 0x08AB447Cu;
    return;
L_089EA094:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA0A0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EA0D8;
      }
      goto L_089EA0AC;
    }
L_089EA0AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EA0FC;
      }
      goto L_089EA0B4;
    }
L_089EA0B4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089EA0CCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = 0x08AB4454u;
    return;
L_089EA0CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA0D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089EA0F0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = 0x08AB4454u;
    return;
L_089EA0F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA0FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EA150;
      }
      goto L_089EA134;
    }
L_089EA134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089EA150u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x08AB44A4u;
    return;
L_089EA150:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_089EA1A4;
      }
      goto L_089EA198;
    }
L_089EA198:
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_089EA1C0;
      }
      goto L_089EA1A4;
    }
L_089EA1A4:
    ctx.gpr[4] = ((ctx.gpr[18] >> 0u) & 0x1FFFFFFFu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089EA228;
      }
      goto L_089EA1C0;
    }
L_089EA1C0:
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x1FFFFFFFu) | ((ctx.gpr[18] & 0x1FFFFFFFu) << 0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = ((ctx.gpr[18] >> 30u) & 0x00000001u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089EA228;
      }
      goto L_089EA1E0;
    }
L_089EA1E0:
    ctx.gpr[31] = (0x089EA1E8u);
    // nop
    ctx.pc = 0x08AB4744u;
    return;
L_089EA1E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_089EA220;
      }
      goto L_089EA200;
    }
L_089EA200:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089EA204;
L_089EA204:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 63u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089EA204;
    }
    goto L_089EA220;
L_089EA220:
    ctx.gpr[31] = (0x089EA228u);
    // nop
    ctx.pc = 0x08AB474Cu;
    return;
L_089EA228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_089EA280;
      }
      goto L_089EA234;
    }
L_089EA234:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21504));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[31] = (0x089EA254u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22536));
    ctx.pc = 0x08AB4474u;
    return;
L_089EA254:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EA264;
      }
      goto L_089EA25C;
    }
L_089EA25C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089EA280;
      }
      goto L_089EA264;
    }
L_089EA264:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089EA2C0;
      }
      goto L_089EA28C;
    }
L_089EA28C:
    ctx.gpr[31] = (0x089EA294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22520));
    goto L_089EACC8;
L_089EA294:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x089EA2A0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089E960C;
L_089EA2A0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089EA2B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089E96D4;
L_089EA2B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089EA2BCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089EA6A4;
L_089EA2BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-14720), ctx.gpr[18]);
    goto L_089EA2C0;
L_089EA2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA35C;
      }
      goto L_089EA2CC;
    }
L_089EA2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA35C;
      }
      goto L_089EA2D8;
    }
L_089EA2D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (53760u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[8] = (39936u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (40192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089EA35C;
L_089EA35C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA37C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA3D4;
      }
      goto L_089EA39C;
    }
L_089EA39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA4A8;
      }
      goto L_089EA3AC;
    }
L_089EA3AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EA3E8;
      }
      goto L_089EA3B4;
    }
L_089EA3B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EA48C;
      }
      goto L_089EA3BC;
    }
L_089EA3BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089EA46C;
      }
      goto L_089EA3C4;
    }
L_089EA3C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EA48C;
      }
      goto L_089EA3CC;
    }
L_089EA3CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089EA46C;
      }
      goto L_089EA3D4;
    }
L_089EA3D4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (3840u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (3072u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA430;
      }
      goto L_089EA410;
    }
L_089EA410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA430;
      }
      goto L_089EA41C;
    }
L_089EA41C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x089EA428u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x08AB448Cu;
    return;
L_089EA428:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EA438;
      }
      goto L_089EA430;
    }
L_089EA430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EA438;
      }
      goto L_089EA438;
    }
L_089EA438:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EA45C;
      }
      goto L_089EA440;
    }
L_089EA440:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA45C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (3840u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (3072u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EA440;
      }
      goto L_089EA48C;
    }
L_089EA48C:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EA440;
      }
      goto L_089EA4A8;
    }
L_089EA4A8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA4BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (256u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[10] & ctx.gpr[13]);
    ctx.gpr[15] = (45568u << 16u);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[15]);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(68));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[24] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[10] = (ctx.gpr[10] >> 24u);
    ctx.gpr[10] = (ctx.gpr[10] & 15u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[14] = (45824u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[14]);
    ctx.gpr[9] = (ctx.gpr[10] | ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[9] = (60160u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[12] & ctx.gpr[13]);
    ctx.gpr[6] = (46080u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[12] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (46336u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[3]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] << 10u);
    ctx.gpr[6] = (60416u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[11]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (60928u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (59904u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA5F0:
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? ctx.gpr[5] : ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) > static_cast<std::int32_t>(ctx.gpr[6]) ? ctx.gpr[5] : ctx.gpr[6]);
    ctx.gpr[6] = (51200u << 16u);
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00FF0000u) | ((ctx.gpr[5] & 0x000000FFu) << 16u));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0x00000003u) | ((ctx.gpr[4] & 0x00000003u) << 0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA640:
    ctx.gpr[8] = (50432u << 16u);
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x001F0000u) | ((ctx.gpr[7] & 0x0000001Fu) << 16u));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x0000FF00u) | ((ctx.gpr[6] & 0x000000FFu) << 8u));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x0000007Cu) | ((ctx.gpr[5] & 0x0000001Fu) << 2u));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0x00000003u) | ((ctx.gpr[4] & 0x00000003u) << 0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA674:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (53248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA6A4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (18432u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA744:
    ctx.gpr[7] = (53760u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(68));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[10] = (39936u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (40192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA7CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089EA7F0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_089EA744;
L_089EA7F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_089EA838;
    }
    goto L_089EA810;
L_089EA810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_089EA838;
    }
    goto L_089EA81C;
L_089EA81C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_089EA838;
L_089EA838:
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
        goto L_089EA840;
    }
    goto L_089EA840;
L_089EA840:
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
L_089EA858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
        goto L_089EA898;
    }
    goto L_089EA898;
L_089EA898:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x089EA8ACu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB449Cu;
    return;
L_089EA8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8D4;
      }
      goto L_089EA8B8;
    }
L_089EA8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EA8D4u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08AB44A4u;
    return;
L_089EA8D4:
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
L_089EA8EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[31] = (0x089EA918u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089EA858;
L_089EA918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA940:
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (40448u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(68));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] >> 24u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[9] = (40704u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA9A4:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA9C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA9D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA9E4:
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (56320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAA1C:
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAA54:
    ctx.gpr[5] = (20480u << 16u);
    ctx.gpr[5] = ((ctx.gpr[5] & ~0x00000001u) | ((ctx.gpr[4] & 0x00000001u) << 0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAAA4:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(120)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[7] = (54784u << 16u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (55040u << 16u);
      if (branch_taken) {
          goto L_089EAAD4;
      }
      goto L_089EAAC8;
    }
L_089EAAC8:
    ctx.gpr[7] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[6]);
      if (branch_taken) {
          goto L_089EAADC;
      }
      goto L_089EAAD4;
    }
L_089EAAD4:
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] | ctx.gpr[6]);
    goto L_089EAADC;
L_089EAADC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (17408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAB44:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-14720));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[6] = (54784u << 16u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (55040u << 16u);
      if (branch_taken) {
          goto L_089EAB74;
      }
      goto L_089EAB68;
    }
L_089EAB68:
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EAB7C;
      }
      goto L_089EAB74;
    }
L_089EAB74:
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[5]);
    goto L_089EAB7C;
L_089EAB7C:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (17408u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EABE4:
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EACC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (57856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (58112u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (58368u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (58624u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB0B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14720));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EB0EC;
      }
      goto L_089EB0D0;
    }
L_089EB0D0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089EB0E4u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08AB44A4u;
    return;
L_089EB0E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089EB10C;
      }
      goto L_089EB0EC;
    }
L_089EB0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089EB108u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08AB44A4u;
    return;
L_089EB108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089EB10C;
L_089EB10C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EB140u);
    // nop
    ctx.pc = 0x08AB4744u;
    return;
L_089EB140:
    ctx.gpr[31] = (0x089EB148u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08AB4494u;
    return;
L_089EB148:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[31] = (0x089EB158u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.pc = 0x08AB4464u;
    return;
L_089EB158:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x089EB164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB474Cu;
    return;
L_089EB164:
    ctx.gpr[31] = (0x089EB16Cu);
    // nop
    goto L_089E8CFC;
L_089EB16C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30328));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089EB184u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08AB45F4u;
    return;
L_089EB184:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21504));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (2207u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (2207u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29492));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x089EB1B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AB446Cu;
    return;
L_089EB1B8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23424));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089EB1D4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08AB4474u;
    return;
L_089EB1D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EB1E4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB4454u;
    return;
L_089EB1E4:
    ctx.gpr[31] = (0x089EB1ECu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB447Cu;
    return;
L_089EB1EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21504));
    ctx.gpr[31] = (0x089EB218u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08AB4584u;
    return;
L_089EB218:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14720));
    ctx.gpr[31] = (0x089EB228u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.pc = 0x08AB445Cu;
    return;
L_089EB228:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EB244u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4484u;
    return;
L_089EB244:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089EB404;
      }
      goto L_089EB270;
    }
L_089EB270:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 14u);
      if (branch_taken) {
          goto L_089EB284;
      }
      goto L_089EB278;
    }
L_089EB278:
    ctx.gpr[31] = (0x089EB280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 267u, 0x089ED43Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB280u) goto L_089EB280;
    return;
L_089EB280:
    ctx.gpr[4] = (ctx.gpr[16] & 14u);
    goto L_089EB284;
L_089EB284:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
      if (branch_taken) {
          goto L_089EB298;
      }
      goto L_089EB28C;
    }
L_089EB28C:
    ctx.gpr[31] = (0x089EB294u);
    // nop
    goto L_089EB418;
L_089EB294:
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
    goto L_089EB298;
L_089EB298:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB2AC;
    }
    goto L_089EB2A0;
L_089EB2A0:
    ctx.gpr[31] = (0x089EB2A8u);
    // nop
    goto L_089EB5E4;
L_089EB2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB2AC;
L_089EB2AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1536u);
      if (branch_taken) {
          goto L_089EB404;
      }
      goto L_089EB2B4;
    }
L_089EB2B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2u << 16u);
      if (branch_taken) {
          goto L_089EB2C8;
      }
      goto L_089EB2BC;
    }
L_089EB2BC:
    ctx.gpr[31] = (0x089EB2C4u);
    // nop
    goto L_089EB664;
L_089EB2C4:
    ctx.gpr[4] = (2u << 16u);
    goto L_089EB2C8;
L_089EB2C8:
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2u << 16u);
      if (branch_taken) {
          goto L_089EB2E0;
      }
      goto L_089EB2D4;
    }
L_089EB2D4:
    ctx.gpr[31] = (0x089EB2DCu);
    // nop
    goto L_089EB874;
L_089EB2DC:
    ctx.gpr[4] = (2u << 16u);
    goto L_089EB2E0;
L_089EB2E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8192));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
      if (branch_taken) {
          goto L_089EB2FC;
      }
      goto L_089EB2F0;
    }
L_089EB2F0:
    ctx.gpr[31] = (0x089EB2F8u);
    // nop
    goto L_089EB7B4;
L_089EB2F8:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    goto L_089EB2FC;
L_089EB2FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_089EB310;
      }
      goto L_089EB304;
    }
L_089EB304:
    ctx.gpr[31] = (0x089EB30Cu);
    // nop
    goto L_089EB4A8;
L_089EB30C:
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
    goto L_089EB310;
L_089EB310:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 2048u);
      if (branch_taken) {
          goto L_089EB324;
      }
      goto L_089EB318;
    }
L_089EB318:
    ctx.gpr[31] = (0x089EB320u);
    // nop
    goto L_089EB598;
L_089EB320:
    ctx.gpr[4] = (ctx.gpr[16] & 2048u);
    goto L_089EB324;
L_089EB324:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (3072u << 16u);
      if (branch_taken) {
          goto L_089EB338;
      }
      goto L_089EB32C;
    }
L_089EB32C:
    ctx.gpr[31] = (0x089EB334u);
    // nop
    goto L_089EB73C;
L_089EB334:
    ctx.gpr[4] = (3072u << 16u);
    goto L_089EB338;
L_089EB338:
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (4u << 16u);
      if (branch_taken) {
          goto L_089EB350;
      }
      goto L_089EB344;
    }
L_089EB344:
    ctx.gpr[31] = (0x089EB34Cu);
    // nop
    goto L_089EBB4C;
L_089EB34C:
    ctx.gpr[4] = (4u << 16u);
    goto L_089EB350;
L_089EB350:
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (448u << 16u);
      if (branch_taken) {
          goto L_089EB368;
      }
      goto L_089EB35C;
    }
L_089EB35C:
    ctx.gpr[31] = (0x089EB364u);
    // nop
    goto L_089EB958;
L_089EB364:
    ctx.gpr[4] = (448u << 16u);
    goto L_089EB368;
L_089EB368:
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (56u << 16u);
      if (branch_taken) {
          goto L_089EB380;
      }
      goto L_089EB374;
    }
L_089EB374:
    ctx.gpr[31] = (0x089EB37Cu);
    // nop
    goto L_089EB9D4;
L_089EB37C:
    ctx.gpr[4] = (56u << 16u);
    goto L_089EB380;
L_089EB380:
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (512u << 16u);
      if (branch_taken) {
          goto L_089EB398;
      }
      goto L_089EB38C;
    }
L_089EB38C:
    ctx.gpr[31] = (0x089EB394u);
    // nop
    goto L_089EBA80;
L_089EB394:
    ctx.gpr[4] = (512u << 16u);
    goto L_089EB398;
L_089EB398:
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 64u);
      if (branch_taken) {
          goto L_089EB3BC;
      }
      goto L_089EB3A4;
    }
L_089EB3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 64u);
    goto L_089EB3BC;
L_089EB3BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
      if (branch_taken) {
          goto L_089EB3D0;
      }
      goto L_089EB3C4;
    }
L_089EB3C4:
    ctx.gpr[31] = (0x089EB3CCu);
    // nop
    goto L_089EB520;
L_089EB3CC:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    goto L_089EB3D0;
L_089EB3D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 4096u);
      if (branch_taken) {
          goto L_089EB3EC;
      }
      goto L_089EB3D8;
    }
L_089EB3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 4096u);
    goto L_089EB3EC;
L_089EB3EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB404;
      }
      goto L_089EB3F4;
    }
L_089EB3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    goto L_089EB404;
L_089EB404:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = ((ctx.gpr[4] >> 1u) & 0x00000001u);
    ctx.gpr[7] = ((ctx.gpr[4] >> 0u) & 0x00000001u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = ((ctx.gpr[4] >> 2u) & 0x00000001u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[7] = ((ctx.gpr[5] >> 1u) & 0x00000001u);
    ctx.gpr[4] = ((ctx.gpr[5] >> 0u) & 0x00000001u);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[5] = ((ctx.gpr[5] >> 2u) & 0x00000001u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EB474u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E9D30;
L_089EB474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
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
L_089EB4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_089EB4E8;
      }
      goto L_089EB4CC;
    }
L_089EB4CC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB500;
    }
    goto L_089EB4D4;
L_089EB4D4:
    ctx.gpr[31] = (0x089EB4DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_089E95D4;
L_089EB4DC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EB4FC;
      }
      goto L_089EB4E8;
    }
L_089EB4E8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB500;
    }
    goto L_089EB4F0;
L_089EB4F0:
    ctx.gpr[31] = (0x089EB4F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_089E95F0;
L_089EB4F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    goto L_089EB4FC;
L_089EB4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB500;
L_089EB500:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_089EB558;
    }
    goto L_089EB544;
L_089EB544:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB57C;
    }
    goto L_089EB54C;
L_089EB54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB570;
      }
      goto L_089EB554;
    }
L_089EB554:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_089EB558;
L_089EB558:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB57C;
    }
    goto L_089EB560;
L_089EB560:
    ctx.gpr[31] = (0x089EB568u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089EAA54;
L_089EB568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
      if (branch_taken) {
          goto L_089EB57C;
      }
      goto L_089EB570;
    }
L_089EB570:
    ctx.gpr[31] = (0x089EB578u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089EAA54;
L_089EB578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB57C;
L_089EB57C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089EB5BC;
    }
    goto L_089EB5BC;
L_089EB5BC:
    ctx.gpr[31] = (0x089EB5C4u);
    // nop
    goto L_089EABE4;
L_089EB5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB5E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EB61C;
      }
      goto L_089EB614;
    }
L_089EB614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EB61C;
      }
      goto L_089EB61C;
    }
L_089EB61C:
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[19] = (ctx.gpr[5] & 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089EB630u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E9D5C;
L_089EB630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
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
L_089EB664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
      if (branch_taken) {
          goto L_089EB6C0;
      }
      goto L_089EB688;
    }
L_089EB688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22352));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22400));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(344), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[31] = (0x089EB6C0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_089E8DF0;
L_089EB6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(332)));
        goto L_089EB70C;
    }
    goto L_089EB6D0;
L_089EB6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22352));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22400));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(348), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[31] = (0x089EB708u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_089E8E18;
L_089EB708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(332)));
    goto L_089EB70C;
L_089EB70C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x089EB718u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    goto L_089E8DC0;
L_089EB718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1537));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB73C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_089EB77C;
      }
      goto L_089EB760;
    }
L_089EB760:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB794;
    }
    goto L_089EB768;
L_089EB768:
    ctx.gpr[31] = (0x089EB770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_089E95D4;
L_089EB770:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EB790;
      }
      goto L_089EB77C;
    }
L_089EB77C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB794;
    }
    goto L_089EB784;
L_089EB784:
    ctx.gpr[31] = (0x089EB78Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_089E95F0;
L_089EB78C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    goto L_089EB790;
L_089EB790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB794;
L_089EB794:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
        goto L_089EB838;
    }
    goto L_089EB7D8;
L_089EB7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (65281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-256));
    ctx.gpr[6] = (255u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] >> 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14360)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x089EB818u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    goto L_089E9758;
L_089EB818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB850;
    }
    goto L_089EB824;
L_089EB824:
    ctx.gpr[31] = (0x089EB82Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_089E95D4;
L_089EB82C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EB84C;
      }
      goto L_089EB838;
    }
L_089EB838:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB850;
    }
    goto L_089EB840;
L_089EB840:
    ctx.gpr[31] = (0x089EB848u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_089E95F0;
L_089EB848:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    goto L_089EB84C;
L_089EB84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB850;
L_089EB850:
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8191));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EB8B0;
      }
      goto L_089EB89C;
    }
L_089EB89C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB934;
    }
    goto L_089EB8A4;
L_089EB8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_089EB8CC;
      }
      goto L_089EB8AC;
    }
L_089EB8AC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_089EB8B0;
L_089EB8B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EB8E4;
      }
      goto L_089EB8B8;
    }
L_089EB8B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB90C;
      }
      goto L_089EB8C0;
    }
L_089EB8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
      if (branch_taken) {
          goto L_089EB934;
      }
      goto L_089EB8C8;
    }
L_089EB8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    goto L_089EB8CC;
L_089EB8CC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB934;
    }
    goto L_089EB8D4;
L_089EB8D4:
    ctx.gpr[31] = (0x089EB8DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_089E95F0;
L_089EB8DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_089EB930;
      }
      goto L_089EB8E4;
    }
L_089EB8E4:
    ctx.gpr[31] = (0x089EB8ECu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089E99E0;
L_089EB8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB934;
    }
    goto L_089EB8F8;
L_089EB8F8:
    ctx.gpr[31] = (0x089EB900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_089E95D4;
L_089EB900:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EB930;
      }
      goto L_089EB90C;
    }
L_089EB90C:
    ctx.gpr[31] = (0x089EB914u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089E99E0;
L_089EB914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB934;
    }
    goto L_089EB920;
L_089EB920:
    ctx.gpr[31] = (0x089EB928u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_089E95D4;
L_089EB928:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    goto L_089EB930;
L_089EB930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB934;
L_089EB934:
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_089EB998;
      }
      goto L_089EB97C;
    }
L_089EB97C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB9B0;
    }
    goto L_089EB984;
L_089EB984:
    ctx.gpr[31] = (0x089EB98Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    goto L_089E95D4;
L_089EB98C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EB9AC;
      }
      goto L_089EB998;
    }
L_089EB998:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
        goto L_089EB9B0;
    }
    goto L_089EB9A0;
L_089EB9A0:
    ctx.gpr[31] = (0x089EB9A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    goto L_089E95F0;
L_089EB9A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    goto L_089EB9AC;
L_089EB9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104)));
    goto L_089EB9B0;
L_089EB9B0:
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB9D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15104));
      if (branch_taken) {
          goto L_089EBA14;
      }
      goto L_089EB9F8;
    }
L_089EB9F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22268));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[6]);
    goto L_089EBA14;
L_089EBA14:
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (256u << 16u);
      if (branch_taken) {
          goto L_089EBA34;
      }
      goto L_089EBA24;
    }
L_089EBA24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    goto L_089EBA34;
L_089EBA34:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
        goto L_089EBA50;
    }
    goto L_089EBA40;
L_089EBA40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    goto L_089EBA50;
L_089EBA50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x089EBA5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    goto L_089EA9E4;
L_089EBA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (65088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBA80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15104));
      if (branch_taken) {
          goto L_089EBAC0;
      }
      goto L_089EBAA4;
    }
L_089EBAA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22304));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), ctx.gpr[6]);
    goto L_089EBAC0;
L_089EBAC0:
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (32u << 16u);
      if (branch_taken) {
          goto L_089EBAF0;
      }
      goto L_089EBAD0;
    }
L_089EBAD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22304));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), ctx.gpr[6]);
    ctx.gpr[6] = (32u << 16u);
    goto L_089EBAF0;
L_089EBAF0:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
        goto L_089EBB1C;
    }
    goto L_089EBAFC;
L_089EBAFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22304));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    goto L_089EBB1C;
L_089EBB1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (0x089EBB28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(364)));
    goto L_089EAA1C;
L_089EBB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (65480u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22232));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EBB8Cu);
    ctx.gpr[6] = (0u | 255u);
    goto L_089E8E40;
L_089EBB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104)));
    ctx.gpr[5] = (62464u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-15104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBBB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EBBD0u);
    // nop
    goto L_089EB250;
L_089EBBD0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14360)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089EBC4C;
      }
      goto L_089EBBF0;
    }
L_089EBBF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14384)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089EBC08u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089E9808;
L_089EBC08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15104));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 512u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089EBC44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    goto L_089EA4BC;
L_089EBC44:
    ctx.gpr[31] = (0x089EBC4Cu);
    // nop
    goto L_089E9ED0;
L_089EBC4C:
    ctx.gpr[2] = (0u | 1u);
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
L_089EBC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-15104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[21] = (0u | 5u);
      if (branch_taken) {
          goto L_089EBCDC;
      }
      goto L_089EBCC4;
    }
L_089EBCC4:
    ctx.gpr[8] = (0u | 480u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 272u);
      if (branch_taken) {
          goto L_089EBCDC;
      }
      goto L_089EBCD0;
    }
L_089EBCD0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089EBCDC;
      }
      goto L_089EBCD8;
    }
L_089EBCD8:
    ctx.gpr[19] = (0u | 16u);
    goto L_089EBCDC;
L_089EBCDC:
    ctx.gpr[31] = (0x089EBCE4u);
    // nop
    goto L_089E8F2C;
L_089EBCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(136)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_089EBD04;
    }
    goto L_089EBCF0;
L_089EBCF0:
    ctx.gpr[31] = (0x089EBCF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    goto L_089E95D4;
L_089EBCF8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_089EBD04;
L_089EBD04:
    ctx.gpr[18] = (0u | 0u);
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[18] = (0u | 255u);
        goto L_089EBD10;
    }
    goto L_089EBD10;
L_089EBD10:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBDBC;
      }
      goto L_089EBD1C;
    }
L_089EBD1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EBD94;
      }
      goto L_089EBD28;
    }
L_089EBD28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    goto L_089EBD2C;
L_089EBD2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[31] = (0x089EBD48u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    goto L_089EA9A4;
L_089EBD48:
    ctx.gpr[31] = (0x089EBD50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089EA9D0;
L_089EBD50:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22196));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089EBD6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 342u, 0x089EE17Cu>(ctx, &aot_mem) && ctx.pc == 0x089EBD6Cu) goto L_089EBD6C;
    return;
L_089EBD6C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBD94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBDBC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_089EBD94;
      }
      goto L_089EBDC4;
    }
L_089EBDC4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
        goto L_089EBD2C;
    }
    goto L_089EBDCC;
L_089EBDCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] | 4u);
      if (branch_taken) {
          goto L_089EBD28;
      }
      goto L_089EBDD4;
    }
L_089EBDD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EBDE4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_089E8940;
L_089EBDE4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBDF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBDFC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBE04:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089EBE38;
      }
      goto L_089EBE14;
    }
L_089EBE14:
    ctx.gpr[9] = (2207u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16900));
    goto L_089EBE20;
L_089EBE20:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EBE20;
      }
      goto L_089EBE34;
    }
L_089EBE34:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_089EBE38;
L_089EBE38:
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089EBE80;
      }
      goto L_089EBE44;
    }
L_089EBE44:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
        goto L_089EBE70;
    }
    goto L_089EBE54;
L_089EBE54:
    if (static_cast<std::int32_t>(ctx.gpr[8]) < 0) {
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
        goto L_089EBE70;
    }
    goto L_089EBE5C;
L_089EBE5C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    goto L_089EBE70;
L_089EBE70:
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089EBE44;
      }
      goto L_089EBE80;
    }
L_089EBE80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBE88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBE94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21980)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBEBC;
      }
      goto L_089EBEB0;
    }
L_089EBEB0:
    ctx.gpr[31] = (0x089EBEB8u);
    // nop
    goto L_089EB128;
L_089EBEB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-21980), 0u);
    goto L_089EBEBC;
L_089EBEBC:
    ctx.gpr[31] = (0x089EBEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 69u, 0x089EC708u>(ctx, &aot_mem) && ctx.pc == 0x089EBEC4u) goto L_089EBEC4;
    return;
L_089EBEC4:
    ctx.gpr[31] = (0x089EBECCu);
    // nop
    goto L_089E870C;
L_089EBECC:
    ctx.gpr[31] = (0x089EBED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 263u, 0x089E20C0u>(ctx, &aot_mem) && ctx.pc == 0x089EBED4u) goto L_089EBED4;
    return;
L_089EBED4:
    ctx.gpr[31] = (0x089EBEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 347u, 0x089E3230u>(ctx, &aot_mem) && ctx.pc == 0x089EBEDCu) goto L_089EBEDC;
    return;
L_089EBEDC:
    ctx.gpr[31] = (0x089EBEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C6194u>(ctx, &aot_mem) && ctx.pc == 0x089EBEE4u) goto L_089EBEE4;
    return;
L_089EBEE4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBEF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EBF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 361u, 0x089E3398u>(ctx, &aot_mem) && ctx.pc == 0x089EBF08u) goto L_089EBF08;
    return;
L_089EBF08:
    ctx.gpr[31] = (0x089EBF10u);
    // nop
    goto L_089E8B34;
L_089EBF10:
    ctx.gpr[31] = (0x089EBF18u);
    // nop
    goto L_089EB234;
L_089EBF18:
    ctx.gpr[31] = (0x089EBF20u);
    // nop
    goto L_089EB200;
L_089EBF20:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBF30:
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-18368)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_089EBF60;
      }
      goto L_089EBF5C;
    }
L_089EBF5C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14368), ctx.gpr[4]);
    goto L_089EBF60;
L_089EBF60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBF68:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBF78:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1 ? 1u : 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBFDC;
      }
      goto L_089EBF90;
    }
L_089EBF90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_089EBFDC;
      }
      goto L_089EBF98;
    }
L_089EBF98:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22164));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_089EBFDC;
L_089EBFDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBFE4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14368)));
    ctx.gpr[2] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBFF8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0121(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0121_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_121(Runtime &runtime) {
    runtime.register_generated_unit(121u, 0x089E8000u, 16384u, &recomp_unit_0121, &recomp_unit_0121_entry);
    runtime.register_function(0x089E8000u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8020u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8028u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8074u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8084u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8094u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E809Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8100u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8108u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8114u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8120u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8124u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8134u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E813Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8140u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8150u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8160u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8168u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8170u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8194u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8200u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8208u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E822Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E825Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8264u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E827Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E828Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8298u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8308u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8310u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8318u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8320u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8340u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8348u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8354u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8360u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8364u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8374u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E837Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8380u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8390u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8400u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8404u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8410u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8418u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E842Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8434u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8440u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8508u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8510u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8518u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8538u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8564u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8700u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E870Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8744u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8788u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8790u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8810u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8814u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8820u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E884Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8854u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8888u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8910u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8940u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8970u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8990u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A64u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8ABCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B9Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DC0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9018u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9040u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E905Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9094u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9108u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9130u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9158u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9180u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9220u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9248u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9270u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9298u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9310u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9338u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9360u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9388u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9404u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E941Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9424u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9430u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9438u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9444u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E944Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9458u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9460u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E946Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9474u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9480u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9488u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9494u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E949Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9500u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E950Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9514u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9520u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9528u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9534u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E953Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9548u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9550u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E955Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9564u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9570u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9578u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9584u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E958Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9598u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9600u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E960Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9634u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E965Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9684u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9704u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9758u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9778u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E978Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9790u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9808u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9818u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9828u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9924u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9AA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9BB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C48u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9CA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9CD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9CFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9ED0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA068u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA084u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA08Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA094u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA108u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA134u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA150u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA164u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA198u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA200u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA204u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA220u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA228u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA234u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA254u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA25Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA264u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA280u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA28Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA294u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA35Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA37Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA39Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA410u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA41Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA428u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA430u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA438u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA440u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA45Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA46Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA48Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA4A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA4BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA5F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA640u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA674u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA744u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA7CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA7F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA810u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA81Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA838u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA840u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA858u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA898u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA918u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA940u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAAA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAAC8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAAD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAADCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACC8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB108u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB10Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB128u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB140u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB148u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB158u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB164u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB16Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB184u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB200u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB218u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB228u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB234u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB244u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB250u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB270u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB278u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB280u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB284u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB28Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB294u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB298u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB304u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB30Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB310u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB318u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB320u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB324u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB32Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB334u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB338u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB344u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB34Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB350u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB35Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB364u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB368u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB374u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB37Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB380u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB38Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB394u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB398u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB404u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB418u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB474u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB500u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB520u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB544u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB54Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB554u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB558u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB560u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB568u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB570u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB578u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB57Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB598u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB614u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB61Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB630u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB664u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB688u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB6C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB6D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB708u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB70Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB718u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB73Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB760u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB768u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB770u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB77Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB784u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB78Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB790u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB794u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB7B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB7D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB818u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB824u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB82Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB838u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB840u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB848u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB84Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB850u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB874u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB89Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB900u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB90Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB914u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB920u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB928u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB930u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB934u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB958u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB97Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB984u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB98Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB998u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAC0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCD8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD48u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDF4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBECCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBED4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF90u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFF8u, &recomp_unit_0121, "recomp_unit_0121");
}
} // namespace psprecomp

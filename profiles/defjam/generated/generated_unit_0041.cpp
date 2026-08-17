#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0041[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0,
    0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 38, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0,
    44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 67, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0,
    0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0,
    105, 0, 106, 0, 0, 0, 107, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0,
    128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0,
    0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0,
    0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 184, 0, 185, 0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0,
    0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217,
    0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 255, 0,
    256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 268,
    0, 269, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 285, 0, 0,
    286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 293, 294, 0, 0, 295, 0, 0, 0, 296, 0, 297,
    0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339,
    340, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426,
    0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0,
    440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 453,
    0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0,
    466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0,
    0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0,
    0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498,
    0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 507,
    0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 515, 0, 0, 516, 0, 0, 0, 0, 517,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 522, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531,
    0, 532, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 538, 0, 539, 0, 0, 540, 0, 0, 0,
    541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0,
    555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0,
    0, 0, 0, 568, 0, 569, 0, 0, 0, 570, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581,
    0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 589,
};
void recomp_unit_0041_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0041[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A8000;
    case 2u: goto L_088A801C;
    case 3u: goto L_088A8044;
    case 4u: goto L_088A804C;
    case 5u: goto L_088A8064;
    case 6u: goto L_088A8078;
    case 7u: goto L_088A8098;
    case 8u: goto L_088A80A0;
    case 9u: goto L_088A80C0;
    case 10u: goto L_088A80D0;
    case 11u: goto L_088A80E0;
    case 12u: goto L_088A80F8;
    case 13u: goto L_088A8120;
    case 14u: goto L_088A8128;
    case 15u: goto L_088A8140;
    case 16u: goto L_088A8154;
    case 17u: goto L_088A8174;
    case 18u: goto L_088A8194;
    case 19u: goto L_088A81A4;
    case 20u: goto L_088A81B4;
    case 21u: goto L_088A81CC;
    case 22u: goto L_088A81F0;
    case 23u: goto L_088A81FC;
    case 24u: goto L_088A8218;
    case 25u: goto L_088A8220;
    case 26u: goto L_088A8228;
    case 27u: goto L_088A8238;
    case 28u: goto L_088A8248;
    case 29u: goto L_088A8254;
    case 30u: goto L_088A8260;
    case 31u: goto L_088A826C;
    case 32u: goto L_088A8278;
    case 33u: goto L_088A8284;
    case 34u: goto L_088A8290;
    case 35u: goto L_088A829C;
    case 36u: goto L_088A82A8;
    case 37u: goto L_088A82B4;
    case 38u: goto L_088A82B8;
    case 39u: goto L_088A82C0;
    case 40u: goto L_088A82D0;
    case 41u: goto L_088A82DC;
    case 42u: goto L_088A82E8;
    case 43u: goto L_088A82F4;
    case 44u: goto L_088A8300;
    case 45u: goto L_088A830C;
    case 46u: goto L_088A8318;
    case 47u: goto L_088A8324;
    case 48u: goto L_088A8330;
    case 49u: goto L_088A833C;
    case 50u: goto L_088A8340;
    case 51u: goto L_088A8348;
    case 52u: goto L_088A8350;
    case 53u: goto L_088A8358;
    case 54u: goto L_088A8368;
    case 55u: goto L_088A8370;
    case 56u: goto L_088A8380;
    case 57u: goto L_088A8394;
    case 58u: goto L_088A839C;
    case 59u: goto L_088A83A4;
    case 60u: goto L_088A83A8;
    case 61u: goto L_088A83B0;
    case 62u: goto L_088A83B8;
    case 63u: goto L_088A83C8;
    case 64u: goto L_088A83D0;
    case 65u: goto L_088A83D8;
    case 66u: goto L_088A83E0;
    case 67u: goto L_088A83E4;
    case 68u: goto L_088A8400;
    case 69u: goto L_088A8424;
    case 70u: goto L_088A843C;
    case 71u: goto L_088A8444;
    case 72u: goto L_088A844C;
    case 73u: goto L_088A8454;
    case 74u: goto L_088A845C;
    case 75u: goto L_088A8468;
    case 76u: goto L_088A8478;
    case 77u: goto L_088A8488;
    case 78u: goto L_088A849C;
    case 79u: goto L_088A84A4;
    case 80u: goto L_088A84B4;
    case 81u: goto L_088A84C0;
    case 82u: goto L_088A84D4;
    case 83u: goto L_088A84E8;
    case 84u: goto L_088A8514;
    case 85u: goto L_088A8528;
    case 86u: goto L_088A8530;
    case 87u: goto L_088A853C;
    case 88u: goto L_088A8544;
    case 89u: goto L_088A8554;
    case 90u: goto L_088A8564;
    case 91u: goto L_088A8570;
    case 92u: goto L_088A8578;
    case 93u: goto L_088A8588;
    case 94u: goto L_088A8594;
    case 95u: goto L_088A859C;
    case 96u: goto L_088A85AC;
    case 97u: goto L_088A85B0;
    case 98u: goto L_088A85B8;
    case 99u: goto L_088A85C0;
    case 100u: goto L_088A85C8;
    case 101u: goto L_088A85D8;
    case 102u: goto L_088A85E4;
    case 103u: goto L_088A85EC;
    case 104u: goto L_088A85F4;
    case 105u: goto L_088A8600;
    case 106u: goto L_088A8608;
    case 107u: goto L_088A8618;
    case 108u: goto L_088A861C;
    case 109u: goto L_088A8624;
    case 110u: goto L_088A862C;
    case 111u: goto L_088A8634;
    case 112u: goto L_088A8644;
    case 113u: goto L_088A8654;
    case 114u: goto L_088A865C;
    case 115u: goto L_088A8664;
    case 116u: goto L_088A8670;
    case 117u: goto L_088A8690;
    case 118u: goto L_088A8698;
    case 119u: goto L_088A86A0;
    case 120u: goto L_088A86AC;
    case 121u: goto L_088A86B8;
    case 122u: goto L_088A86C4;
    case 123u: goto L_088A86CC;
    case 124u: goto L_088A86D4;
    case 125u: goto L_088A86E4;
    case 126u: goto L_088A86F0;
    case 127u: goto L_088A86F8;
    case 128u: goto L_088A8700;
    case 129u: goto L_088A870C;
    case 130u: goto L_088A871C;
    case 131u: goto L_088A8738;
    case 132u: goto L_088A8758;
    case 133u: goto L_088A8760;
    case 134u: goto L_088A8768;
    case 135u: goto L_088A8770;
    case 136u: goto L_088A8784;
    case 137u: goto L_088A878C;
    case 138u: goto L_088A8794;
    case 139u: goto L_088A879C;
    case 140u: goto L_088A87A4;
    case 141u: goto L_088A87AC;
    case 142u: goto L_088A87B8;
    case 143u: goto L_088A87C4;
    case 144u: goto L_088A87D4;
    case 145u: goto L_088A8800;
    case 146u: goto L_088A8818;
    case 147u: goto L_088A882C;
    case 148u: goto L_088A8858;
    case 149u: goto L_088A887C;
    case 150u: goto L_088A889C;
    case 151u: goto L_088A892C;
    case 152u: goto L_088A895C;
    case 153u: goto L_088A89E0;
    case 154u: goto L_088A8A2C;
    case 155u: goto L_088A8A3C;
    case 156u: goto L_088A8A58;
    case 157u: goto L_088A8A68;
    case 158u: goto L_088A8A78;
    case 159u: goto L_088A8A88;
    case 160u: goto L_088A8AA0;
    case 161u: goto L_088A8AB8;
    case 162u: goto L_088A8AF0;
    case 163u: goto L_088A8B34;
    case 164u: goto L_088A8B44;
    case 165u: goto L_088A8B64;
    case 166u: goto L_088A8B74;
    case 167u: goto L_088A8B84;
    case 168u: goto L_088A8B94;
    case 169u: goto L_088A8BAC;
    case 170u: goto L_088A8BB8;
    case 171u: goto L_088A8BE0;
    case 172u: goto L_088A8BE8;
    case 173u: goto L_088A8C00;
    case 174u: goto L_088A8C14;
    case 175u: goto L_088A8C34;
    case 176u: goto L_088A8CA8;
    case 177u: goto L_088A8CB4;
    case 178u: goto L_088A8CBC;
    case 179u: goto L_088A8D00;
    case 180u: goto L_088A8D1C;
    case 181u: goto L_088A8D34;
    case 182u: goto L_088A8D4C;
    case 183u: goto L_088A8D88;
    case 184u: goto L_088A8D94;
    case 185u: goto L_088A8D9C;
    case 186u: goto L_088A8DA4;
    case 187u: goto L_088A8DA8;
    case 188u: goto L_088A8DB0;
    case 189u: goto L_088A8DF0;
    case 190u: goto L_088A8DF8;
    case 191u: goto L_088A8E0C;
    case 192u: goto L_088A8E18;
    case 193u: goto L_088A8E4C;
    case 194u: goto L_088A8E50;
    case 195u: goto L_088A8E78;
    case 196u: goto L_088A8E80;
    case 197u: goto L_088A8E94;
    case 198u: goto L_088A8F34;
    case 199u: goto L_088A8F54;
    case 200u: goto L_088A8F64;
    case 201u: goto L_088A8F74;
    case 202u: goto L_088A8F8C;
    case 203u: goto L_088A8FA8;
    case 204u: goto L_088A8FB4;
    case 205u: goto L_088A8FC0;
    case 206u: goto L_088A8FCC;
    case 207u: goto L_088A8FD8;
    case 208u: goto L_088A8FEC;
    case 209u: goto L_088A9000;
    case 210u: goto L_088A9018;
    case 211u: goto L_088A9030;
    case 212u: goto L_088A90C8;
    case 213u: goto L_088A90D4;
    case 214u: goto L_088A90DC;
    case 215u: goto L_088A90E8;
    case 216u: goto L_088A90F0;
    case 217u: goto L_088A90FC;
    case 218u: goto L_088A9108;
    case 219u: goto L_088A9118;
    case 220u: goto L_088A9130;
    case 221u: goto L_088A913C;
    case 222u: goto L_088A9148;
    case 223u: goto L_088A9154;
    case 224u: goto L_088A9160;
    case 225u: goto L_088A9170;
    case 226u: goto L_088A9188;
    case 227u: goto L_088A9194;
    case 228u: goto L_088A91A0;
    case 229u: goto L_088A91B4;
    case 230u: goto L_088A91C8;
    case 231u: goto L_088A91E0;
    case 232u: goto L_088A91EC;
    case 233u: goto L_088A91F8;
    case 234u: goto L_088A9208;
    case 235u: goto L_088A9218;
    case 236u: goto L_088A9224;
    case 237u: goto L_088A923C;
    case 238u: goto L_088A9248;
    case 239u: goto L_088A926C;
    case 240u: goto L_088A9284;
    case 241u: goto L_088A9298;
    case 242u: goto L_088A92AC;
    case 243u: goto L_088A92B4;
    case 244u: goto L_088A92C0;
    case 245u: goto L_088A92D0;
    case 246u: goto L_088A92E8;
    case 247u: goto L_088A92F0;
    case 248u: goto L_088A9304;
    case 249u: goto L_088A9318;
    case 250u: goto L_088A9344;
    case 251u: goto L_088A9354;
    case 252u: goto L_088A9364;
    case 253u: goto L_088A936C;
    case 254u: goto L_088A9374;
    case 255u: goto L_088A9378;
    case 256u: goto L_088A9380;
    case 257u: goto L_088A9388;
    case 258u: goto L_088A9390;
    case 259u: goto L_088A93A0;
    case 260u: goto L_088A93AC;
    case 261u: goto L_088A93B8;
    case 262u: goto L_088A93C0;
    case 263u: goto L_088A93C8;
    case 264u: goto L_088A93D0;
    case 265u: goto L_088A93D8;
    case 266u: goto L_088A93E8;
    case 267u: goto L_088A93F4;
    case 268u: goto L_088A93FC;
    case 269u: goto L_088A9404;
    case 270u: goto L_088A9408;
    case 271u: goto L_088A9410;
    case 272u: goto L_088A941C;
    case 273u: goto L_088A9438;
    case 274u: goto L_088A9450;
    case 275u: goto L_088A9458;
    case 276u: goto L_088A9468;
    case 277u: goto L_088A9498;
    case 278u: goto L_088A94A0;
    case 279u: goto L_088A94B4;
    case 280u: goto L_088A94C8;
    case 281u: goto L_088A94D4;
    case 282u: goto L_088A94DC;
    case 283u: goto L_088A94E8;
    case 284u: goto L_088A94F0;
    case 285u: goto L_088A94F4;
    case 286u: goto L_088A9500;
    case 287u: goto L_088A9508;
    case 288u: goto L_088A951C;
    case 289u: goto L_088A9530;
    case 290u: goto L_088A9538;
    case 291u: goto L_088A9540;
    case 292u: goto L_088A954C;
    case 293u: goto L_088A9554;
    case 294u: goto L_088A9558;
    case 295u: goto L_088A9564;
    case 296u: goto L_088A9574;
    case 297u: goto L_088A957C;
    case 298u: goto L_088A9584;
    case 299u: goto L_088A958C;
    case 300u: goto L_088A9594;
    case 301u: goto L_088A95A4;
    case 302u: goto L_088A95B4;
    case 303u: goto L_088A95C4;
    case 304u: goto L_088A95E0;
    case 305u: goto L_088A9624;
    case 306u: goto L_088A9644;
    case 307u: goto L_088A964C;
    case 308u: goto L_088A96E4;
    case 309u: goto L_088A97B8;
    case 310u: goto L_088A97F4;
    case 311u: goto L_088A98C4;
    case 312u: goto L_088A9904;
    case 313u: goto L_088A9964;
    case 314u: goto L_088A99B8;
    case 315u: goto L_088A9A00;
    case 316u: goto L_088A9A08;
    case 317u: goto L_088A9AA0;
    case 318u: goto L_088A9ADC;
    case 319u: goto L_088A9B08;
    case 320u: goto L_088A9B9C;
    case 321u: goto L_088A9BAC;
    case 322u: goto L_088A9BC0;
    case 323u: goto L_088A9BDC;
    case 324u: goto L_088A9BFC;
    case 325u: goto L_088A9C2C;
    case 326u: goto L_088A9C88;
    case 327u: goto L_088A9CA8;
    case 328u: goto L_088A9CC4;
    case 329u: goto L_088A9D6C;
    case 330u: goto L_088A9D88;
    case 331u: goto L_088A9D94;
    case 332u: goto L_088A9DA4;
    case 333u: goto L_088A9E28;
    case 334u: goto L_088A9E3C;
    case 335u: goto L_088A9E4C;
    case 336u: goto L_088A9E84;
    case 337u: goto L_088A9EAC;
    case 338u: goto L_088A9EE4;
    case 339u: goto L_088A9EFC;
    case 340u: goto L_088A9F00;
    case 341u: goto L_088A9F04;
    case 342u: goto L_088A9F38;
    case 343u: goto L_088A9F84;
    case 344u: goto L_088A9FC8;
    case 345u: goto L_088A9FD0;
    case 346u: goto L_088A9FE8;
    case 347u: goto L_088A9FFC;
    case 348u: goto L_088AA00C;
    case 349u: goto L_088AA054;
    case 350u: goto L_088AA090;
    case 351u: goto L_088AA0B0;
    case 352u: goto L_088AA0B8;
    case 353u: goto L_088AA230;
    case 354u: goto L_088AA330;
    case 355u: goto L_088AA358;
    case 356u: goto L_088AA46C;
    case 357u: goto L_088AA494;
    case 358u: goto L_088AA5B4;
    case 359u: goto L_088AA5E4;
    case 360u: goto L_088AA704;
    case 361u: goto L_088AA73C;
    case 362u: goto L_088AA850;
    case 363u: goto L_088AAA14;
    case 364u: goto L_088AAAA8;
    case 365u: goto L_088AAAB8;
    case 366u: goto L_088AAAE0;
    case 367u: goto L_088AAB68;
    case 368u: goto L_088AAB74;
    case 369u: goto L_088AAB7C;
    case 370u: goto L_088AAB98;
    case 371u: goto L_088AABB0;
    case 372u: goto L_088AABC4;
    case 373u: goto L_088AAC68;
    case 374u: goto L_088AAC84;
    case 375u: goto L_088AAC90;
    case 376u: goto L_088AACF4;
    case 377u: goto L_088AAD0C;
    case 378u: goto L_088AAD74;
    case 379u: goto L_088AADA4;
    case 380u: goto L_088AADB0;
    case 381u: goto L_088AADB8;
    case 382u: goto L_088AADC0;
    case 383u: goto L_088AADC4;
    case 384u: goto L_088AADCC;
    case 385u: goto L_088AAE00;
    case 386u: goto L_088AAE08;
    case 387u: goto L_088AAE1C;
    case 388u: goto L_088AAE28;
    case 389u: goto L_088AAE50;
    case 390u: goto L_088AAE54;
    case 391u: goto L_088AAE70;
    case 392u: goto L_088AAE78;
    case 393u: goto L_088AAE90;
    case 394u: goto L_088AAEA4;
    case 395u: goto L_088AAEB8;
    case 396u: goto L_088AAF68;
    case 397u: goto L_088AAFB0;
    case 398u: goto L_088AAFC4;
    case 399u: goto L_088AB00C;
    case 400u: goto L_088AB014;
    case 401u: goto L_088AB0F4;
    case 402u: goto L_088AB100;
    case 403u: goto L_088AB108;
    case 404u: goto L_088AB114;
    case 405u: goto L_088AB184;
    case 406u: goto L_088AB1B0;
    case 407u: goto L_088AB1D0;
    case 408u: goto L_088AB1E0;
    case 409u: goto L_088AB1F4;
    case 410u: goto L_088AB20C;
    case 411u: goto L_088AB240;
    case 412u: goto L_088AB270;
    case 413u: goto L_088AB2C4;
    case 414u: goto L_088AB2D8;
    case 415u: goto L_088AB2E8;
    case 416u: goto L_088AB32C;
    case 417u: goto L_088AB340;
    case 418u: goto L_088AB348;
    case 419u: goto L_088AB350;
    case 420u: goto L_088AB358;
    case 421u: goto L_088AB378;
    case 422u: goto L_088AB398;
    case 423u: goto L_088AB3B8;
    case 424u: goto L_088AB3D8;
    case 425u: goto L_088AB3F4;
    case 426u: goto L_088AB3FC;
    case 427u: goto L_088AB408;
    case 428u: goto L_088AB41C;
    case 429u: goto L_088AB42C;
    case 430u: goto L_088AB438;
    case 431u: goto L_088AB494;
    case 432u: goto L_088AB4A4;
    case 433u: goto L_088AB4AC;
    case 434u: goto L_088AB4BC;
    case 435u: goto L_088AB4F4;
    case 436u: goto L_088AB528;
    case 437u: goto L_088AB558;
    case 438u: goto L_088AB564;
    case 439u: goto L_088AB574;
    case 440u: goto L_088AB580;
    case 441u: goto L_088AB590;
    case 442u: goto L_088AB5CC;
    case 443u: goto L_088AB600;
    case 444u: goto L_088AB630;
    case 445u: goto L_088AB638;
    case 446u: goto L_088AB648;
    case 447u: goto L_088AB654;
    case 448u: goto L_088AB68C;
    case 449u: goto L_088AB6C4;
    case 450u: goto L_088AB6D8;
    case 451u: goto L_088AB6EC;
    case 452u: goto L_088AB6F4;
    case 453u: goto L_088AB6FC;
    case 454u: goto L_088AB704;
    case 455u: goto L_088AB724;
    case 456u: goto L_088AB744;
    case 457u: goto L_088AB764;
    case 458u: goto L_088AB784;
    case 459u: goto L_088AB7A0;
    case 460u: goto L_088AB7A8;
    case 461u: goto L_088AB7B4;
    case 462u: goto L_088AB7C8;
    case 463u: goto L_088AB7D8;
    case 464u: goto L_088AB7E4;
    case 465u: goto L_088AB7EC;
    case 466u: goto L_088AB800;
    case 467u: goto L_088AB810;
    case 468u: goto L_088AB820;
    case 469u: goto L_088AB85C;
    case 470u: goto L_088AB8A0;
    case 471u: goto L_088AB8A8;
    case 472u: goto L_088AB8BC;
    case 473u: goto L_088AB8CC;
    case 474u: goto L_088AB8DC;
    case 475u: goto L_088AB918;
    case 476u: goto L_088AB95C;
    case 477u: goto L_088AB964;
    case 478u: goto L_088AB984;
    case 479u: goto L_088AB998;
    case 480u: goto L_088AB9C0;
    case 481u: goto L_088AB9D8;
    case 482u: goto L_088AB9EC;
    case 483u: goto L_088ABA04;
    case 484u: goto L_088ABA34;
    case 485u: goto L_088ABA4C;
    case 486u: goto L_088ABA68;
    case 487u: goto L_088ABA78;
    case 488u: goto L_088ABA88;
    case 489u: goto L_088ABA9C;
    case 490u: goto L_088ABAB4;
    case 491u: goto L_088ABABC;
    case 492u: goto L_088ABAD0;
    case 493u: goto L_088ABAEC;
    case 494u: goto L_088ABB0C;
    case 495u: goto L_088ABB2C;
    case 496u: goto L_088ABB4C;
    case 497u: goto L_088ABB70;
    case 498u: goto L_088ABB7C;
    case 499u: goto L_088ABB8C;
    case 500u: goto L_088ABBA0;
    case 501u: goto L_088ABBA8;
    case 502u: goto L_088ABBB8;
    case 503u: goto L_088ABBC0;
    case 504u: goto L_088ABBD0;
    case 505u: goto L_088ABBDC;
    case 506u: goto L_088ABBF0;
    case 507u: goto L_088ABBFC;
    case 508u: goto L_088ABC04;
    case 509u: goto L_088ABC1C;
    case 510u: goto L_088ABC24;
    case 511u: goto L_088ABC2C;
    case 512u: goto L_088ABC34;
    case 513u: goto L_088ABC4C;
    case 514u: goto L_088ABC54;
    case 515u: goto L_088ABC5C;
    case 516u: goto L_088ABC68;
    case 517u: goto L_088ABC7C;
    case 518u: goto L_088ABC90;
    case 519u: goto L_088ABCA8;
    case 520u: goto L_088ABCC0;
    case 521u: goto L_088ABCD8;
    case 522u: goto L_088ABD08;
    case 523u: goto L_088ABD10;
    case 524u: goto L_088ABD1C;
    case 525u: goto L_088ABD30;
    case 526u: goto L_088ABD38;
    case 527u: goto L_088ABD44;
    case 528u: goto L_088ABD54;
    case 529u: goto L_088ABD60;
    case 530u: goto L_088ABD68;
    case 531u: goto L_088ABD7C;
    case 532u: goto L_088ABD84;
    case 533u: goto L_088ABD9C;
    case 534u: goto L_088ABDA4;
    case 535u: goto L_088ABDAC;
    case 536u: goto L_088ABDB4;
    case 537u: goto L_088ABDD8;
    case 538u: goto L_088ABDDC;
    case 539u: goto L_088ABDE4;
    case 540u: goto L_088ABDF0;
    case 541u: goto L_088ABE00;
    case 542u: goto L_088ABE0C;
    case 543u: goto L_088ABE14;
    case 544u: goto L_088ABE1C;
    case 545u: goto L_088ABE28;
    case 546u: goto L_088ABE2C;
    case 547u: goto L_088ABE34;
    case 548u: goto L_088ABE3C;
    case 549u: goto L_088ABE44;
    case 550u: goto L_088ABE4C;
    case 551u: goto L_088ABE54;
    case 552u: goto L_088ABE60;
    case 553u: goto L_088ABE70;
    case 554u: goto L_088ABE78;
    case 555u: goto L_088ABE80;
    case 556u: goto L_088ABE88;
    case 557u: goto L_088ABEA0;
    case 558u: goto L_088ABEA8;
    case 559u: goto L_088ABEB8;
    case 560u: goto L_088ABEBC;
    case 561u: goto L_088ABEC4;
    case 562u: goto L_088ABECC;
    case 563u: goto L_088ABED4;
    case 564u: goto L_088ABEE0;
    case 565u: goto L_088ABEE8;
    case 566u: goto L_088ABEF0;
    case 567u: goto L_088ABEF8;
    case 568u: goto L_088ABF0C;
    case 569u: goto L_088ABF14;
    case 570u: goto L_088ABF24;
    case 571u: goto L_088ABF28;
    case 572u: goto L_088ABF30;
    case 573u: goto L_088ABF38;
    case 574u: goto L_088ABF40;
    case 575u: goto L_088ABF48;
    case 576u: goto L_088ABF50;
    case 577u: goto L_088ABF5C;
    case 578u: goto L_088ABF64;
    case 579u: goto L_088ABF6C;
    case 580u: goto L_088ABF74;
    case 581u: goto L_088ABF7C;
    case 582u: goto L_088ABF84;
    case 583u: goto L_088ABF8C;
    case 584u: goto L_088ABFA8;
    case 585u: goto L_088ABFB0;
    case 586u: goto L_088ABFD8;
    case 587u: goto L_088ABFE8;
    case 588u: goto L_088ABFF0;
    case 589u: goto L_088ABFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A8000:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A801C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088A8044;
L_088A8044:
    ctx.gpr[31] = (0x088A804Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A804Cu) goto L_088A804C;
    return;
L_088A804C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A8044;
      }
      goto L_088A8064;
    }
L_088A8064:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8078u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8078u) goto L_088A8078;
    return;
L_088A8078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
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
L_088A8098:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A80A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088A80C0;
L_088A80C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A80D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A80D0u) goto L_088A80D0;
    return;
L_088A80D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088A80C0;
      }
      goto L_088A80E0;
    }
L_088A80E0:
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
L_088A80F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088A8120;
L_088A8120:
    ctx.gpr[31] = (0x088A8128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088A8128u) goto L_088A8128;
    return;
L_088A8128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A8120;
      }
      goto L_088A8140;
    }
L_088A8140:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8154u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8154u) goto L_088A8154;
    return;
L_088A8154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
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
L_088A8174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088A8194;
L_088A8194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088A81A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088A81A4u) goto L_088A81A4;
    return;
L_088A81A4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088A8194;
      }
      goto L_088A81B4;
    }
L_088A81B4:
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
L_088A81CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A81F0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088A81F0u) goto L_088A81F0;
    return;
L_088A81F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088A8220;
      }
      goto L_088A81FC;
    }
L_088A81FC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 20u);
        goto L_088A8218;
    }
    goto L_088A8218;
L_088A8218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A83E4;
      }
      goto L_088A8220;
    }
L_088A8220:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A83D0;
      }
      goto L_088A8228;
    }
L_088A8228:
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088A8238u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x088A8238u) goto L_088A8238;
    return;
L_088A8238:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A8248u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088A8248u) goto L_088A8248;
    return;
L_088A8248:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A8254;
L_088A8254:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A8260;
L_088A8260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A826C;
L_088A826C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A8278;
L_088A8278:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A8284;
L_088A8284:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A8290;
L_088A8290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A829C;
L_088A829C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088A82B8;
    }
    goto L_088A82A8;
L_088A82A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A82B8;
      }
      goto L_088A82B4;
    }
L_088A82B4:
    ctx.gpr[16] = (0u | 0u);
    goto L_088A82B8;
L_088A82B8:
    ctx.gpr[31] = (0x088A82C0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x088A82C0u) goto L_088A82C0;
    return;
L_088A82C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A82D0u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088A82D0u) goto L_088A82D0;
    return;
L_088A82D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A82DC;
L_088A82DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A82E8;
L_088A82E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A82F4;
L_088A82F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A8300;
L_088A8300:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A830C;
L_088A830C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A8318;
L_088A8318:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A8324;
L_088A8324:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_088A8340;
    }
    goto L_088A8330;
L_088A8330:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A8340;
      }
      goto L_088A833C;
    }
L_088A833C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088A8340;
L_088A8340:
    ctx.gpr[31] = (0x088A8348u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8348u) goto L_088A8348;
    return;
L_088A8348:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A83A8;
      }
      goto L_088A8350;
    }
L_088A8350:
    ctx.gpr[31] = (0x088A8358u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x088A8358u) goto L_088A8358;
    return;
L_088A8358:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A8368u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088A8368u) goto L_088A8368;
    return;
L_088A8368:
    ctx.gpr[31] = (0x088A8370u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x088A8370u) goto L_088A8370;
    return;
L_088A8370:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(106));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A8380u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088A8380u) goto L_088A8380;
    return;
L_088A8380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(162))))));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088A839C;
      }
      goto L_088A8394;
    }
L_088A8394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088A83A8;
      }
      goto L_088A839C;
    }
L_088A839C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A83A8;
      }
      goto L_088A83A4;
    }
L_088A83A4:
    ctx.gpr[16] = (0u | 1u);
    goto L_088A83A8;
L_088A83A8:
    ctx.gpr[31] = (0x088A83B0u);
    ctx.gpr[17] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088A83B0u) goto L_088A83B0;
    return;
L_088A83B0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A83C8;
      }
      goto L_088A83B8;
    }
L_088A83B8:
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[17] = (0u | 7u);
        goto L_088A83C8;
    }
    goto L_088A83C8;
L_088A83C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A83E4;
      }
      goto L_088A83D0;
    }
L_088A83D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A83E4;
      }
      goto L_088A83D8;
    }
L_088A83D8:
    ctx.gpr[31] = (0x088A83E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 186u, 0x08934DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A83E0u) goto L_088A83E0;
    return;
L_088A83E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088A83E4;
L_088A83E4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8424u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8424u) goto L_088A8424;
    return;
L_088A8424:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(14172), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088A843Cu);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088A843Cu) goto L_088A843C;
    return;
L_088A843C:
    ctx.gpr[31] = (0x088A8444u);
    // nop
    goto L_088A87D4;
L_088A8444:
    ctx.gpr[31] = (0x088A844Cu);
    // nop
    goto L_088A8858;
L_088A844C:
    ctx.gpr[31] = (0x088A8454u);
    // nop
    goto L_088A8AB8;
L_088A8454:
    ctx.gpr[31] = (0x088A845Cu);
    // nop
    goto L_088AAAE0;
L_088A845C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A8468u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088AAF68;
L_088A8468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088A8478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088AB270;
L_088A8478:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A849Cu);
    // nop
    goto L_088A8A3C;
L_088A849C:
    ctx.gpr[31] = (0x088A84A4u);
    // nop
    goto L_088A8BB8;
L_088A84A4:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A84B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088A8F8C;
L_088A84B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A84C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088A9170;
L_088A84C0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A84D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A84D4u) goto L_088A84D4;
    return;
L_088A84D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(14172), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8514u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 158u, 0x0884CA28u>(ctx, &aot_mem) && ctx.pc == 0x088A8514u) goto L_088A8514;
    return;
L_088A8514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 128u);
      if (branch_taken) {
          goto L_088A862C;
      }
      goto L_088A8528;
    }
L_088A8528:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088A8544;
      }
      goto L_088A8530;
    }
L_088A8530:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x088A853Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A853Cu) goto L_088A853C;
    return;
L_088A853C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A8544;
    }
L_088A8544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 4u);
      if (branch_taken) {
          goto L_088A85C0;
      }
      goto L_088A8554;
    }
L_088A8554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088A8578;
      }
      goto L_088A8564;
    }
L_088A8564:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x088A8570u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A8570u) goto L_088A8570;
    return;
L_088A8570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A8578;
    }
L_088A8578:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A8588;
    }
L_088A8588:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x088A8594u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8594u) goto L_088A8594;
    return;
L_088A8594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A85B0;
      }
      goto L_088A859C;
    }
L_088A859C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A85B0;
      }
      goto L_088A85AC;
    }
L_088A85AC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088A85B0;
L_088A85B0:
    ctx.gpr[31] = (0x088A85B8u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A85B8u) goto L_088A85B8;
    return;
L_088A85B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A85C0;
    }
L_088A85C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A85C8;
    }
L_088A85C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (0u | 3u);
    if (ctx.gpr[5] != ctx.gpr[16]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_088A85EC;
    }
    goto L_088A85D8;
L_088A85D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x088A85E4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A85E4u) goto L_088A85E4;
    return;
L_088A85E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A85EC;
    }
L_088A85EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A85F4;
    }
L_088A85F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x088A8600u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8600u) goto L_088A8600;
    return;
L_088A8600:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A861C;
      }
      goto L_088A8608;
    }
L_088A8608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088A861C;
      }
      goto L_088A8618;
    }
L_088A8618:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_088A861C;
L_088A861C:
    ctx.gpr[31] = (0x088A8624u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A8624u) goto L_088A8624;
    return;
L_088A8624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A862C;
    }
L_088A862C:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088A86A0;
    }
    goto L_088A8634;
L_088A8634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[16]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_088A8654;
    }
    goto L_088A8644;
L_088A8644:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_088A8690;
      }
      goto L_088A8654;
    }
L_088A8654:
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
        goto L_088A8670;
    }
    goto L_088A865C;
L_088A865C:
    ctx.gpr[31] = (0x088A8664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 505u, 0x0886732Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8664u) goto L_088A8664;
    return;
L_088A8664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_088A8670;
L_088A8670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x088A8690u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088A8690u) goto L_088A8690;
    return;
L_088A8690:
    ctx.gpr[31] = (0x088A8698u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A8698u) goto L_088A8698;
    return;
L_088A8698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A86A0;
    }
L_088A86A0:
    ctx.gpr[5] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_088A86CC;
      }
      goto L_088A86AC;
    }
L_088A86AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A86B8;
    }
L_088A86B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[31] = (0x088A86C4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A86C4u) goto L_088A86C4;
    return;
L_088A86C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A86CC;
    }
L_088A86CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A86D4;
    }
L_088A86D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A86F0;
      }
      goto L_088A86E4;
    }
L_088A86E4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[31] = (0x088A86F0u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A86F0u) goto L_088A86F0;
    return;
L_088A86F0:
    ctx.gpr[31] = (0x088A86F8u);
    // nop
    goto L_088A8AB8;
L_088A86F8:
    ctx.gpr[31] = (0x088A8700u);
    // nop
    goto L_088A8C34;
L_088A8700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A870Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088A9018;
L_088A870C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088A871Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088AB68C;
L_088A871C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_088A8738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8794;
      }
      goto L_088A8758;
    }
L_088A8758:
    ctx.gpr[31] = (0x088A8760u);
    // nop
    goto L_088A8B94;
L_088A8760:
    ctx.gpr[31] = (0x088A8768u);
    // nop
    goto L_088A8B44;
L_088A8768:
    ctx.gpr[31] = (0x088A8770u);
    // nop
    goto L_088A8F34;
L_088A8770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A87C4;
      }
      goto L_088A8784;
    }
L_088A8784:
    ctx.gpr[31] = (0x088A878Cu);
    // nop
    goto L_088A9208;
L_088A878C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A87C4;
      }
      goto L_088A8794;
    }
L_088A8794:
    ctx.gpr[31] = (0x088A879Cu);
    // nop
    goto L_088A8B44;
L_088A879C:
    ctx.gpr[31] = (0x088A87A4u);
    // nop
    goto L_088A8F34;
L_088A87A4:
    ctx.gpr[31] = (0x088A87ACu);
    // nop
    goto L_088A8B94;
L_088A87AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A87B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088A9118;
L_088A87B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A87C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_088A91C8;
L_088A87C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A87D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8800u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8800u) goto L_088A8800;
    return;
L_088A8800:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088A8818;
L_088A8818:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8818;
      }
      goto L_088A882C;
    }
L_088A882C:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A887Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A887Cu) goto L_088A887C;
    return;
L_088A887C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[6] = (0u | 368u);
    ctx.gpr[31] = (0x088A889Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088A889Cu) goto L_088A889C;
    return;
L_088A889C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088A892Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A892Cu) goto L_088A892C;
    return;
L_088A892C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A895Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 518u, 0x0883BE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A895Cu) goto L_088A895C;
    return;
L_088A895C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (16932u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16816u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (17184u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A89E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 524u, 0x0883BECCu>(ctx, &aot_mem) && ctx.pc == 0x088A89E0u) goto L_088A89E0;
    return;
L_088A89E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (17016u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (17187u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088A8A2Cu) goto L_088A8A2C;
    return;
L_088A8A2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8A58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088A8A58u) goto L_088A8A58;
    return;
L_088A8A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8A68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 520u, 0x0883BE94u>(ctx, &aot_mem) && ctx.pc == 0x088A8A68u) goto L_088A8A68;
    return;
L_088A8A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8A78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 526u, 0x0883BF44u>(ctx, &aot_mem) && ctx.pc == 0x088A8A78u) goto L_088A8A78;
    return;
L_088A8A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8A88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088A8A88u) goto L_088A8A88;
    return;
L_088A8A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8AA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8AA0u) goto L_088A8AA0;
    return;
L_088A8AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8AF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088A8AF0u) goto L_088A8AF0;
    return;
L_088A8AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16932u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8B34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 528u, 0x0883BF60u>(ctx, &aot_mem) && ctx.pc == 0x088A8B34u) goto L_088A8B34;
    return;
L_088A8B34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 522u, 0x0883BEB0u>(ctx, &aot_mem) && ctx.pc == 0x088A8B64u) goto L_088A8B64;
    return;
L_088A8B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8B74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883BF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8B74u) goto L_088A8B74;
    return;
L_088A8B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088A8B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088A8B84u) goto L_088A8B84;
    return;
L_088A8B84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8BACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088A8BACu) goto L_088A8BAC;
    return;
L_088A8BAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088A8BE0;
L_088A8BE0:
    ctx.gpr[31] = (0x088A8BE8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8BE8u) goto L_088A8BE8;
    return;
L_088A8BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088A8BE0;
      }
      goto L_088A8C00;
    }
L_088A8C00:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8C14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8C14u) goto L_088A8C14;
    return;
L_088A8C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
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
L_088A8C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
      if (branch_taken) {
          goto L_088A8CB4;
      }
      goto L_088A8CA8;
    }
L_088A8CA8:
    ctx.gpr[30] = (2221u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(14228));
      if (branch_taken) {
          goto L_088A8CBC;
      }
      goto L_088A8CB4;
    }
L_088A8CB4:
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(14176));
    goto L_088A8CBC;
L_088A8CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_088A8D00;
L_088A8D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088A8D1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088A8D1Cu) goto L_088A8D1C;
    return;
L_088A8D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088A8D34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088A8D34u) goto L_088A8D34;
    return;
L_088A8D34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_088A8D88;
      }
      goto L_088A8D4C;
    }
L_088A8D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088A8E78;
      }
      goto L_088A8D88;
    }
L_088A8D88:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088A8DA4;
      }
      goto L_088A8D94;
    }
L_088A8D94:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
        goto L_088A8DA8;
    }
    goto L_088A8D9C;
L_088A8D9C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A8DF0;
      }
      goto L_088A8DA4;
    }
L_088A8DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    goto L_088A8DA8;
L_088A8DA8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A8DF0;
      }
      goto L_088A8DB0;
    }
L_088A8DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (0u | 150u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088A8E78;
      }
      goto L_088A8DF0;
    }
L_088A8DF0:
    ctx.gpr[31] = (0x088A8DF8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088A8DF8u) goto L_088A8DF8;
    return;
L_088A8DF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(348));
      if (branch_taken) {
          goto L_088A8E4C;
      }
      goto L_088A8E0C;
    }
L_088A8E0C:
    ctx.gpr[4] = (0u | 3u);
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[20] = (0u & 255u);
        goto L_088A8E50;
    }
    goto L_088A8E18;
L_088A8E18:
    ctx.gpr[21] = (0u | 150u);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088A8E78;
      }
      goto L_088A8E4C;
    }
L_088A8E4C:
    ctx.gpr[20] = (0u & 255u);
    goto L_088A8E50;
L_088A8E50:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(180));
    goto L_088A8E78;
L_088A8E78:
    ctx.gpr[31] = (0x088A8E80u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088A8E80u) goto L_088A8E80;
    return;
L_088A8E80:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8D00;
      }
      goto L_088A8E94;
    }
L_088A8E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088A8F54;
L_088A8F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088A8F64u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A8F64u) goto L_088A8F64;
    return;
L_088A8F64:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088A8F54;
      }
      goto L_088A8F74;
    }
L_088A8F74:
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
L_088A8F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8FA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 85u, 0x0883CBB8u>(ctx, &aot_mem) && ctx.pc == 0x088A8FA8u) goto L_088A8FA8;
    return;
L_088A8FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A8FB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088A8FB4u) goto L_088A8FB4;
    return;
L_088A8FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A8FC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088A8FC0u) goto L_088A8FC0;
    return;
L_088A8FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A8FCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088A8FCCu) goto L_088A8FCC;
    return;
L_088A8FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A8FD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088A8FD8u) goto L_088A8FD8;
    return;
L_088A8FD8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8FECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8FECu) goto L_088A8FEC;
    return;
L_088A8FEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A9000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9000u) goto L_088A9000;
    return;
L_088A9000:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9030u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9030u) goto L_088A9030;
    return;
L_088A9030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17078u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (17179u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17130u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (17177u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A90D4;
      }
      goto L_088A90C8;
    }
L_088A90C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A90E8;
      }
      goto L_088A90D4;
    }
L_088A90D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (17268u << 16u);
      if (branch_taken) {
          goto L_088A90E8;
      }
      goto L_088A90DC;
    }
L_088A90DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088A90E8;
L_088A90E8:
    ctx.gpr[31] = (0x088A90F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088A90F0u) goto L_088A90F0;
    return;
L_088A90F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A90FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088A90FCu) goto L_088A90FC;
    return;
L_088A90FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A9108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088A9108u) goto L_088A9108;
    return;
L_088A9108:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9130u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 87u, 0x0883CBD4u>(ctx, &aot_mem) && ctx.pc == 0x088A9130u) goto L_088A9130;
    return;
L_088A9130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A913Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088A913Cu) goto L_088A913C;
    return;
L_088A913C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A9148u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088A9148u) goto L_088A9148;
    return;
L_088A9148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A9154u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088A9154u) goto L_088A9154;
    return;
L_088A9154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A9160u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088A9160u) goto L_088A9160;
    return;
L_088A9160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9188u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9188u) goto L_088A9188;
    return;
L_088A9188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088A9194u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9194u) goto L_088A9194;
    return;
L_088A9194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088A91A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A91A0u) goto L_088A91A0;
    return;
L_088A91A0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A91B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A91B4u) goto L_088A91B4;
    return;
L_088A91B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A91C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A91E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A91E0u) goto L_088A91E0;
    return;
L_088A91E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088A91ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A91ECu) goto L_088A91EC;
    return;
L_088A91EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088A91F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A91F8u) goto L_088A91F8;
    return;
L_088A91F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9218u);
    // nop
    goto L_088A9224;
L_088A9218:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A923Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088A923Cu) goto L_088A923C;
    return;
L_088A923C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A926Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A926Cu) goto L_088A926C;
    return;
L_088A926C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(14280), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088A9284u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088A9284u) goto L_088A9284;
    return;
L_088A9284:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088A9298;
L_088A9298:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9298;
      }
      goto L_088A92AC;
    }
L_088A92AC:
    ctx.gpr[31] = (0x088A92B4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088AAF68;
L_088A92B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    ctx.gpr[31] = (0x088A92C0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088AB270;
L_088A92C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A92D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A92E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    goto L_088A8F8C;
L_088A92E8:
    ctx.gpr[31] = (0x088A92F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    goto L_088A9170;
L_088A92F0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A9304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9304u) goto L_088A9304;
    return;
L_088A9304:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(14280), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9344u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 158u, 0x0884CA28u>(ctx, &aot_mem) && ctx.pc == 0x088A9344u) goto L_088A9344;
    return;
L_088A9344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
      if (branch_taken) {
          goto L_088A9390;
      }
      goto L_088A9354;
    }
L_088A9354:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9374;
      }
      goto L_088A9364;
    }
L_088A9364:
    ctx.gpr[31] = (0x088A936Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 195u, 0x08934E94u>(ctx, &aot_mem) && ctx.pc == 0x088A936Cu) goto L_088A936C;
    return;
L_088A936C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088A9378;
      }
      goto L_088A9374;
    }
L_088A9374:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_088A9378;
L_088A9378:
    ctx.gpr[31] = (0x088A9380u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A9380u) goto L_088A9380;
    return;
L_088A9380:
    ctx.gpr[31] = (0x088A9388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 505u, 0x0886732Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9388u) goto L_088A9388;
    return;
L_088A9388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
      if (branch_taken) {
          goto L_088A9408;
      }
      goto L_088A9390;
    }
L_088A9390:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 1u);
      if (branch_taken) {
          goto L_088A93D0;
      }
      goto L_088A93A0;
    }
L_088A93A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088A93C0;
      }
      goto L_088A93AC;
    }
L_088A93AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x088A93B8u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A93B8u) goto L_088A93B8;
    return;
L_088A93B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
      if (branch_taken) {
          goto L_088A9408;
      }
      goto L_088A93C0;
    }
L_088A93C0:
    ctx.gpr[31] = (0x088A93C8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A93C8u) goto L_088A93C8;
    return;
L_088A93C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
      if (branch_taken) {
          goto L_088A9408;
      }
      goto L_088A93D0;
    }
L_088A93D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9408;
      }
      goto L_088A93D8;
    }
L_088A93D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A93FC;
      }
      goto L_088A93E8;
    }
L_088A93E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088A93F4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A93F4u) goto L_088A93F4;
    return;
L_088A93F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
      if (branch_taken) {
          goto L_088A9408;
      }
      goto L_088A93FC;
    }
L_088A93FC:
    ctx.gpr[31] = (0x088A9404u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x088A9404u) goto L_088A9404;
    return;
L_088A9404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    goto L_088A9408;
L_088A9408:
    ctx.gpr[31] = (0x088A9410u);
    // nop
    goto L_088A9018;
L_088A9410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    ctx.gpr[31] = (0x088A941Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_088AB68C;
L_088A941C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_088A9438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A9450u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    goto L_088A9118;
L_088A9450:
    ctx.gpr[31] = (0x088A9458u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14280)));
    goto L_088A91C8;
L_088A9458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088A94C8;
      }
      goto L_088A9498;
    }
L_088A9498:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
        goto L_088A94F4;
    }
    goto L_088A94A0;
L_088A94A0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14088)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x088A94B4u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088A94B4u) goto L_088A94B4;
    return;
L_088A94B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A94F0;
      }
      goto L_088A94C8;
    }
L_088A94C8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
        goto L_088A94F4;
    }
    goto L_088A94D4;
L_088A94D4:
    ctx.gpr[31] = (0x088A94DCu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088A94DCu) goto L_088A94DC;
    return;
L_088A94DC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
      if (branch_taken) {
          goto L_088A94F0;
      }
      goto L_088A94E8;
    }
L_088A94E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A94F0;
L_088A94F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
    goto L_088A94F4;
L_088A94F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
        goto L_088A9530;
    }
    goto L_088A9500;
L_088A9500:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
        goto L_088A9558;
    }
    goto L_088A9508;
L_088A9508:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14092)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x088A951Cu);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088A951Cu) goto L_088A951C;
    return;
L_088A951C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A9554;
      }
      goto L_088A9530;
    }
L_088A9530:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
        goto L_088A9558;
    }
    goto L_088A9538;
L_088A9538:
    ctx.gpr[31] = (0x088A9540u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088A9540u) goto L_088A9540;
    return;
L_088A9540:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
      if (branch_taken) {
          goto L_088A9554;
      }
      goto L_088A954C;
    }
L_088A954C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A9554;
L_088A9554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
    goto L_088A9558;
L_088A9558:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088A95C4;
      }
      goto L_088A9564;
    }
L_088A9564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088A95C4;
      }
      goto L_088A9574;
    }
L_088A9574:
    ctx.gpr[31] = (0x088A957Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 470u, 0x088A6780u>(ctx, &aot_mem) && ctx.pc == 0x088A957Cu) goto L_088A957C;
    return;
L_088A957C:
    ctx.gpr[31] = (0x088A9584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 480u, 0x088A687Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9584u) goto L_088A9584;
    return;
L_088A9584:
    ctx.gpr[31] = (0x088A958Cu);
    // nop
    goto L_088A95E0;
L_088A958C:
    ctx.gpr[31] = (0x088A9594u);
    // nop
    goto L_088A9C2C;
L_088A9594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7112)));
    ctx.gpr[31] = (0x088A95A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088A95A4u) goto L_088A95A4;
    return;
L_088A95A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7116)));
    ctx.gpr[31] = (0x088A95B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088A95B4u) goto L_088A95B4;
    return;
L_088A95B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7120), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088A95C4;
L_088A95C4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_088A95E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1104u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A9624u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9624u) goto L_088A9624;
    return;
L_088A9624:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7100), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[6] = (0u | 1104u);
    ctx.gpr[31] = (0x088A9644u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088A9644u) goto L_088A9644;
    return;
L_088A9644:
    ctx.gpr[31] = (0x088A964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 128u, 0x0895CA70u>(ctx, &aot_mem) && ctx.pc == 0x088A964Cu) goto L_088A964C;
    return;
L_088A964C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A96E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A96E4u) goto L_088A96E4;
    return;
L_088A96E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17120u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16148));
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[31] = (0x088A97B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A97B8u) goto L_088A97B8;
    return;
L_088A97B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17357u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[31] = (0x088A97F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088A97F4u) goto L_088A97F4;
    return;
L_088A97F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17038u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16916u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17321u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17245u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16136));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[31] = (0x088A98C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A98C4u) goto L_088A98C4;
    return;
L_088A98C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17062u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17000u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x088A9904u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 494u, 0x0883BC74u>(ctx, &aot_mem) && ctx.pc == 0x088A9904u) goto L_088A9904;
    return;
L_088A9904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17074u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17068u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17302u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16824u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_088A99B8;
      }
      goto L_088A9964;
    }
L_088A9964:
    ctx.gpr[5] = (0u | 156u);
    ctx.gpr[6] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 14u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
      if (branch_taken) {
          goto L_088A9A00;
      }
      goto L_088A99B8;
    }
L_088A99B8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 99u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    goto L_088A9A00;
L_088A9A00:
    ctx.gpr[31] = (0x088A9A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A9A08u) goto L_088A9A08;
    return;
L_088A9A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17341u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17124u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17146u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[31] = (0x088A9AA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A9AA0u) goto L_088A9AA0;
    return;
L_088A9AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17340u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(644));
    ctx.gpr[31] = (0x088A9ADCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 480u, 0x0883BB48u>(ctx, &aot_mem) && ctx.pc == 0x088A9ADCu) goto L_088A9ADC;
    return;
L_088A9ADC:
    ctx.gpr[4] = (17086u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (17126u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 204u);
    ctx.gpr[4] = (17289u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088A9B08;
L_088A9B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(756));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088A9B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088A9B9Cu) goto L_088A9B9C;
    return;
L_088A9B9C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088A9B08;
      }
      goto L_088A9BAC;
    }
L_088A9BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 48u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A9BC0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9BC0u) goto L_088A9BC0;
    return;
L_088A9BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7104), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7104)));
      if (branch_taken) {
          goto L_088A9BFC;
      }
      goto L_088A9BDC;
    }
L_088A9BDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[31] = (0x088A9BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7104)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 401u, 0x0883F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088A9BFCu) goto L_088A9BFC;
    return;
L_088A9BFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1620u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A9C88u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9C88u) goto L_088A9C88;
    return;
L_088A9C88:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7108), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[6] = (0u | 1620u);
    ctx.gpr[31] = (0x088A9CA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088A9CA8u) goto L_088A9CA8;
    return;
L_088A9CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14100));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088A9CC4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088A9CC4u) goto L_088A9CC4;
    return;
L_088A9CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16696u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (17080u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 233u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (0u | 217u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[23] = (0u | 185u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[19] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[22] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-16172));
    ctx.gpr[31] = (0x088A9D6Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088A9D6Cu) goto L_088A9D6C;
    return;
L_088A9D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-16156));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x088A9D88u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088A9D88u) goto L_088A9D88;
    return;
L_088A9D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[31] = (0x088A9D94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088A9D94u) goto L_088A9D94;
    return;
L_088A9D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[31] = (0x088A9DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 751u, 0x088A7990u>(ctx, &aot_mem) && ctx.pc == 0x088A9DA4u) goto L_088A9DA4;
    return;
L_088A9DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (16992u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088A9E28u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088A9E28u) goto L_088A9E28;
    return;
L_088A9E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[31] = (0x088A9E3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088A9E3Cu) goto L_088A9E3C;
    return;
L_088A9E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[31] = (0x088A9E4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088A9E4Cu) goto L_088A9E4C;
    return;
L_088A9E4C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17130u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17110u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17120u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    goto L_088A9E84;
L_088A9E84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x088A9EACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088A9EACu) goto L_088A9EAC;
    return;
L_088A9EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A9F00;
      }
      goto L_088A9EE4;
    }
L_088A9EE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2383)));
    if (ctx.gpr[4] != ctx.gpr[20]) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
        goto L_088A9F04;
    }
    goto L_088A9EFC;
L_088A9EFC:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[30];
    goto L_088A9F00;
L_088A9F00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    goto L_088A9F04;
L_088A9F04:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2384)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A9F84;
      }
      goto L_088A9F38;
    }
L_088A9F38:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 233u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088A9FC8;
      }
      goto L_088A9F84;
    }
L_088A9F84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088A9FC8;
L_088A9FC8:
    ctx.gpr[31] = (0x088A9FD0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088A9FD0u) goto L_088A9FD0;
    return;
L_088A9FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088A9FE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088A9FE8u) goto L_088A9FE8;
    return;
L_088A9FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088A9FFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088A9FFCu) goto L_088A9FFC;
    return;
L_088A9FFC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088A9E84;
      }
      goto L_088AA00C;
    }
L_088AA00C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1472u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AA090u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA090u) goto L_088AA090;
    return;
L_088AA090:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[6] = (0u | 1472u);
    ctx.gpr[31] = (0x088AA0B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AA0B0u) goto L_088AA0B0;
    return;
L_088AA0B0:
    ctx.gpr[31] = (0x088AA0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 128u, 0x0895CA70u>(ctx, &aot_mem) && ctx.pc == 0x088AA0B8u) goto L_088AA0B8;
    return;
L_088AA0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (17032u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (17323u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (17272u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (17084u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17150u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15872u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16192u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16896u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15360u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (17036u << 16u);
    ctx.gpr[6] = (16824u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[7] = (16776u << 16u);
    ctx.gpr[6] = (17064u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16160u << 16u);
    ctx.gpr[6] = (17024u << 16u);
    ctx.fpr[10] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[9] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_088AA230;
L_088AA230:
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[11] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[11])));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(140));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(148));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(164));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA230;
      }
      goto L_088AA330;
    }
L_088AA330:
    ctx.gpr[6] = (17128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16932u << 16u);
    ctx.gpr[6] = (17110u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16784u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_088AA358;
L_088AA358:
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[17];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[11] = ctx.fpr[2] + ctx.fpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(508));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(516));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(524));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(532));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA358;
      }
      goto L_088AA46C;
    }
L_088AA46C:
    ctx.gpr[6] = (17102u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (17167u << 16u);
    ctx.gpr[6] = (16848u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16960u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_088AA494;
L_088AA494:
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[11] = ctx.fpr[2] + ctx.fpr[14];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[11] = ctx.fpr[21] + ctx.fpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[18];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.fpr[21] = ctx.fpr[2] + ctx.fpr[9];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[19];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(692));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(700));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(708));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(716));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA494;
      }
      goto L_088AA5B4;
    }
L_088AA5B4:
    ctx.gpr[6] = (16816u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (17216u << 16u);
    ctx.gpr[6] = (17303u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (17026u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (15232u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_088AA5E4;
L_088AA5E4:
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[11] = ctx.fpr[17] - ctx.fpr[11];
    ctx.fpr[23] = ctx.fpr[21] + ctx.fpr[7];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(828), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[18];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[19] - ctx.fpr[2];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[9];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(876));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(884));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(892));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(900));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA5E4;
      }
      goto L_088AA704;
    }
L_088AA704:
    ctx.gpr[6] = (17148u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16792u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17191u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16640u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (17104u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17088u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_088AA73C;
L_088AA73C:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[6])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[18];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[7] = ctx.fpr[6] + ctx.fpr[0];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1020), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[2];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1060));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1068));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1076));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1084));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088AA73C;
      }
      goto L_088AA850;
    }
L_088AA850:
    ctx.gpr[4] = (17299u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17187u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (16656u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1336));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1344));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1352));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1360));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (17309u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17238u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1380), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1436));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1444));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1452));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 255u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-16120));
    ctx.gpr[20] = (0u | 0u);
    goto L_088AAA14;
L_088AAA14:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(274), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(273)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(274)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(275)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(14168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088AAAA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088AAAA8u) goto L_088AAAA8;
    return;
L_088AAAA8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088AAA14;
      }
      goto L_088AAAB8;
    }
L_088AAAB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAAE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088AAB74;
      }
      goto L_088AAB68;
    }
L_088AAB68:
    ctx.gpr[30] = (2221u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(14228));
      if (branch_taken) {
          goto L_088AAB7C;
      }
      goto L_088AAB74;
    }
L_088AAB74:
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(14176));
    goto L_088AAB7C;
L_088AAB7C:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 1080u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AAB98u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AAB98u) goto L_088AAB98;
    return;
L_088AAB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088AABB0u);
    ctx.gpr[6] = (0u | 1080u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AABB0u) goto L_088AABB0;
    return;
L_088AABB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088AABC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AABC4u) goto L_088AABC4;
    return;
L_088AABC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (16788u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (17091u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (16760u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (0u | 234u);
    ctx.gpr[6] = (0u | 249u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16172));
    ctx.gpr[31] = (0x088AAC68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088AAC68u) goto L_088AAC68;
    return;
L_088AAC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16156));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x088AAC84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AAC84u) goto L_088AAC84;
    return;
L_088AAC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[31] = (0x088AAC90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088AAC90u) goto L_088AAC90;
    return;
L_088AAC90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (16832u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (16950u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16816u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_088AACF4;
L_088AACF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088AAD0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AAD0Cu) goto L_088AAD0C;
    return;
L_088AAD0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_088AADA4;
      }
      goto L_088AAD74;
    }
L_088AAD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_088AAE70;
      }
      goto L_088AADA4;
    }
L_088AADA4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088AADC0;
      }
      goto L_088AADB0;
    }
L_088AADB0:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
        goto L_088AADC4;
    }
    goto L_088AADB8;
L_088AADB8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AAE00;
      }
      goto L_088AADC0;
    }
L_088AADC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    goto L_088AADC4;
L_088AADC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AAE00;
      }
      goto L_088AADCC;
    }
L_088AADCC:
    ctx.gpr[23] = (0u | 150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088AAE70;
      }
      goto L_088AAE00;
    }
L_088AAE00:
    ctx.gpr[31] = (0x088AAE08u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088AAE08u) goto L_088AAE08;
    return;
L_088AAE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(348));
      if (branch_taken) {
          goto L_088AAE50;
      }
      goto L_088AAE1C;
    }
L_088AAE1C:
    ctx.gpr[4] = (0u | 3u);
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[21] = (0u & 255u);
        goto L_088AAE54;
    }
    goto L_088AAE28;
L_088AAE28:
    ctx.gpr[22] = (0u | 150u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088AAE70;
      }
      goto L_088AAE50;
    }
L_088AAE50:
    ctx.gpr[21] = (0u & 255u);
    goto L_088AAE54;
L_088AAE54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_088AAE70;
L_088AAE70:
    ctx.gpr[31] = (0x088AAE78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088AAE78u) goto L_088AAE78;
    return;
L_088AAE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088AAE90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AAE90u) goto L_088AAE90;
    return;
L_088AAE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(14172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088AAEA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088AAEA4u) goto L_088AAEA4;
    return;
L_088AAEA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AACF4;
      }
      goto L_088AAEB8;
    }
L_088AAEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAF68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 460u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AAFB0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AAFB0u) goto L_088AAFB0;
    return;
L_088AAFB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088AAFC4u);
    ctx.gpr[6] = (0u | 460u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AAFC4u) goto L_088AAFC4;
    return;
L_088AAFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (17157u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17028u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17248u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17178u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088AB00Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 83u, 0x0883CB40u>(ctx, &aot_mem) && ctx.pc == 0x088AB00Cu) goto L_088AB00C;
    return;
L_088AB00C:
    ctx.gpr[31] = (0x088AB014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 128u, 0x0895CA70u>(ctx, &aot_mem) && ctx.pc == 0x088AB014u) goto L_088AB014;
    return;
L_088AB014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17078u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17179u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17130u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (17068u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (16972u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16104));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (17177u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (17126u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (17072u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (16984u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16092));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088AB100;
      }
      goto L_088AB0F4;
    }
L_088AB0F4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088AB114;
      }
      goto L_088AB100;
    }
L_088AB100:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17268u << 16u);
      if (branch_taken) {
          goto L_088AB114;
      }
      goto L_088AB108;
    }
L_088AB108:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088AB114;
L_088AB114:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16076));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[21] = (ctx.gpr[4] << 24u);
    ctx.gpr[22] = (ctx.gpr[5] << 24u);
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[30] = (ctx.gpr[7] << 24u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    goto L_088AB184;
L_088AB184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x088AB1B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 473u, 0x0883B810u>(ctx, &aot_mem) && ctx.pc == 0x088AB1B0u) goto L_088AB1B0;
    return;
L_088AB1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x088AB1D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088AB1D0u) goto L_088AB1D0;
    return;
L_088AB1D0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088AB184;
      }
      goto L_088AB1E0;
    }
L_088AB1E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB1F4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB1F4u) goto L_088AB1F4;
    return;
L_088AB1F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088AB20Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088AB20Cu) goto L_088AB20C;
    return;
L_088AB20C:
    ctx.gpr[5] = (17285u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17199u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088AB240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088AB240u) goto L_088AB240;
    return;
L_088AB240:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 540u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB2C4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB2C4u) goto L_088AB2C4;
    return;
L_088AB2C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088AB2D8u);
    ctx.gpr[6] = (0u | 540u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AB2D8u) goto L_088AB2D8;
    return;
L_088AB2D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088AB2E8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AB2E8u) goto L_088AB2E8;
    return;
L_088AB2E8:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (16904u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17152u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[17] << 2u);
    ctx.gpr[23] = (0u | 249u);
    ctx.gpr[22] = (0u | 234u);
    ctx.gpr[21] = (0u | 203u);
    ctx.gpr[18] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-16156));
      if (branch_taken) {
          goto L_088AB3F4;
      }
      goto L_088AB32C;
    }
L_088AB32C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088AB378;
      }
      goto L_088AB340;
    }
L_088AB340:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088AB398;
      }
      goto L_088AB348;
    }
L_088AB348:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB3B8;
      }
      goto L_088AB350;
    }
L_088AB350:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088AB3D8;
      }
      goto L_088AB358;
    }
L_088AB358:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17070u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB3F4;
      }
      goto L_088AB378;
    }
L_088AB378:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17074u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB3F4;
      }
      goto L_088AB398;
    }
L_088AB398:
    ctx.gpr[4] = (16792u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17074u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB3F4;
      }
      goto L_088AB3B8;
    }
L_088AB3B8:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17070u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB3F4;
      }
      goto L_088AB3D8;
    }
L_088AB3D8:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17070u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088AB3F4;
L_088AB3F4:
    ctx.gpr[31] = (0x088AB3FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088AB3FCu) goto L_088AB3FC;
    return;
L_088AB3FC:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088AB41C;
      }
      goto L_088AB408;
    }
L_088AB408:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14252));
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AB42C;
      }
      goto L_088AB41C;
    }
L_088AB41C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14200));
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088AB42C;
L_088AB42C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088AB438u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB438u) goto L_088AB438;
    return;
L_088AB438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (17266u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AB494u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088AB494u) goto L_088AB494;
    return;
L_088AB494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088AB4A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB4A4u) goto L_088AB4A4;
    return;
L_088AB4A4:
    ctx.gpr[31] = (0x088AB4ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088AB4ACu) goto L_088AB4AC;
    return;
L_088AB4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088AB4BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB4BCu) goto L_088AB4BC;
    return;
L_088AB4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (17220u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
      if (branch_taken) {
          goto L_088AB528;
      }
      goto L_088AB4F4;
    }
L_088AB4F4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088AB558;
      }
      goto L_088AB528;
    }
L_088AB528:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088AB558;
L_088AB558:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088AB564u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088AB564u) goto L_088AB564;
    return;
L_088AB564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088AB574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB574u) goto L_088AB574;
    return;
L_088AB574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088AB580u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088AB580u) goto L_088AB580;
    return;
L_088AB580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088AB590u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB590u) goto L_088AB590;
    return;
L_088AB590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (17296u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(528));
      if (branch_taken) {
          goto L_088AB600;
      }
      goto L_088AB5CC;
    }
L_088AB5CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088AB630;
      }
      goto L_088AB600;
    }
L_088AB600:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(67)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088AB630;
L_088AB630:
    ctx.gpr[31] = (0x088AB638u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088AB638u) goto L_088AB638;
    return;
L_088AB638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088AB648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB648u) goto L_088AB648;
    return;
L_088AB648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088AB654u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088AB654u) goto L_088AB654;
    return;
L_088AB654:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB68C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB6C4u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AB6C4u) goto L_088AB6C4;
    return;
L_088AB6C4:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[17] << 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 255u);
      if (branch_taken) {
          goto L_088AB7A0;
      }
      goto L_088AB6D8;
    }
L_088AB6D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088AB724;
      }
      goto L_088AB6EC;
    }
L_088AB6EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088AB744;
      }
      goto L_088AB6F4;
    }
L_088AB6F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB764;
      }
      goto L_088AB6FC;
    }
L_088AB6FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088AB784;
      }
      goto L_088AB704;
    }
L_088AB704:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17070u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB7A0;
      }
      goto L_088AB724;
    }
L_088AB724:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17074u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB7A0;
      }
      goto L_088AB744;
    }
L_088AB744:
    ctx.gpr[4] = (16792u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17074u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB7A0;
      }
      goto L_088AB764;
    }
L_088AB764:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17070u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088AB7A0;
      }
      goto L_088AB784;
    }
L_088AB784:
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17070u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088AB7A0;
L_088AB7A0:
    ctx.gpr[31] = (0x088AB7A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088AB7A8u) goto L_088AB7A8;
    return;
L_088AB7A8:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088AB7C8;
      }
      goto L_088AB7B4;
    }
L_088AB7B4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14252));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AB7D8;
      }
      goto L_088AB7C8;
    }
L_088AB7C8:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14200));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_088AB7D8;
L_088AB7D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088AB7E4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB7E4u) goto L_088AB7E4;
    return;
L_088AB7E4:
    ctx.gpr[31] = (0x088AB7ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088AB7ECu) goto L_088AB7EC;
    return;
L_088AB7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x088AB800u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AB800u) goto L_088AB800;
    return;
L_088AB800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088AB810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB810u) goto L_088AB810;
    return;
L_088AB810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
      if (branch_taken) {
          goto L_088AB85C;
      }
      goto L_088AB820;
    }
L_088AB820:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088AB8A0;
      }
      goto L_088AB85C;
    }
L_088AB85C:
    ctx.gpr[5] = (0u | 249u);
    ctx.gpr[6] = (0u | 234u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    goto L_088AB8A0;
L_088AB8A0:
    ctx.gpr[31] = (0x088AB8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088AB8A8u) goto L_088AB8A8;
    return;
L_088AB8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x088AB8BCu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AB8BCu) goto L_088AB8BC;
    return;
L_088AB8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088AB8CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088AB8CCu) goto L_088AB8CC;
    return;
L_088AB8CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(528));
      if (branch_taken) {
          goto L_088AB918;
      }
      goto L_088AB8DC;
    }
L_088AB8DC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_088AB95C;
      }
      goto L_088AB918;
    }
L_088AB918:
    ctx.gpr[4] = (0u | 249u);
    ctx.gpr[5] = (0u | 234u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    goto L_088AB95C;
L_088AB95C:
    ctx.gpr[31] = (0x088AB964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088AB964u) goto L_088AB964;
    return;
L_088AB964:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB984:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14080)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(14084), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1156u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB9C0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB9C0u) goto L_088AB9C0;
    return;
L_088AB9C0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(14844), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088AB9D8u);
    ctx.gpr[6] = (0u | 1156u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088AB9D8u) goto L_088AB9D8;
    return;
L_088AB9D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB9ECu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB9ECu) goto L_088AB9EC;
    return;
L_088AB9EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088ABA04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15640));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x088ABA04u) goto L_088ABA04;
    return;
L_088ABA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABA34u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABA34u) goto L_088ABA34;
    return;
L_088ABA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088ABA4Cu);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088ABA4Cu) goto L_088ABA4C;
    return;
L_088ABA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2187u << 16u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088ABA68u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088ABA68u) goto L_088ABA68;
    return;
L_088ABA68:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088ABA78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16472));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088ABA78u) goto L_088ABA78;
    return;
L_088ABA78:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088ABA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16464));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088ABA88u) goto L_088ABA88;
    return;
L_088ABA88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 9976u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABA9Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABA9Cu) goto L_088ABA9C;
    return;
L_088ABA9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088ABAB4u);
    ctx.gpr[6] = (0u | 9976u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088ABAB4u) goto L_088ABAB4;
    return;
L_088ABAB4:
    ctx.gpr[31] = (0x088ABABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 397u, 0x088ADB7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABABCu) goto L_088ABABC;
    return;
L_088ABABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 704u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABAD0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABAD0u) goto L_088ABAD0;
    return;
L_088ABAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1148), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 80u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABAECu);
    ctx.gpr[5] = (0u | 225u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABAECu) goto L_088ABAEC;
    return;
L_088ABAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABB0Cu);
    ctx.gpr[5] = (0u | 225u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABB0Cu) goto L_088ABB0C;
    return;
L_088ABB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(424), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 4592u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABB2Cu);
    ctx.gpr[5] = (0u | 225u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABB2Cu) goto L_088ABB2C;
    return;
L_088ABB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(428), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABB4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_088ABC2C;
      }
      goto L_088ABB70;
    }
L_088ABB70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
        goto L_088ABBA0;
    }
    goto L_088ABB7C;
L_088ABB7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088ABB8Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABB8Cu) goto L_088ABB8C;
    return;
L_088ABB8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(428), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    goto L_088ABBA0;
L_088ABBA0:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_088ABBF0;
    }
    goto L_088ABBA8;
L_088ABBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_088ABBD0;
    }
    goto L_088ABBB8;
L_088ABBB8:
    ctx.gpr[31] = (0x088ABBC0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088ABBC0u) goto L_088ABBC0;
    return;
L_088ABBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_088ABBD0;
L_088ABBD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088ABBDCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABBDCu) goto L_088ABBDC;
    return;
L_088ABBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(424), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_088ABBF0;
L_088ABBF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_088ABC1C;
      }
      goto L_088ABBFC;
    }
L_088ABBFC:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABC04u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABC04u) goto L_088ABC04;
    return;
L_088ABC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    goto L_088ABC1C;
L_088ABC1C:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABC24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABC24u) goto L_088ABC24;
    return;
L_088ABC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1148), 0u);
    goto L_088ABC2C;
L_088ABC2C:
    ctx.gpr[31] = (0x088ABC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 15u, 0x088AC13Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABC34u) goto L_088ABC34;
    return;
L_088ABC34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_088ABC5C;
    }
    goto L_088ABC4C;
L_088ABC4C:
    ctx.gpr[31] = (0x088ABC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 94u, 0x088AC664u>(ctx, &aot_mem) && ctx.pc == 0x088ABC54u) goto L_088ABC54;
    return;
L_088ABC54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_088ABC5C;
L_088ABC5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088ABC68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABC68u) goto L_088ABC68;
    return;
L_088ABC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x088ABC7Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x088ABC7Cu) goto L_088ABC7C;
    return;
L_088ABC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088ABC90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABC90u) goto L_088ABC90;
    return;
L_088ABC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088ABCA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABCA8u) goto L_088ABCA8;
    return;
L_088ABCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088ABCC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABCC0u) goto L_088ABCC0;
    return;
L_088ABCC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(14844), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABCD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088ABD38;
    }
    goto L_088ABD08;
L_088ABD08:
    ctx.gpr[31] = (0x088ABD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 357u, 0x088AD8D4u>(ctx, &aot_mem) && ctx.pc == 0x088ABD10u) goto L_088ABD10;
    return;
L_088ABD10:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ABF8C;
      }
      goto L_088ABD1C;
    }
L_088ABD1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x088ABD30u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088ABD30u) goto L_088ABD30;
    return;
L_088ABD30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF8C;
      }
      goto L_088ABD38;
    }
L_088ABD38:
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088ABD54;
      }
      goto L_088ABD44;
    }
L_088ABD44:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
      if (branch_taken) {
          goto L_088ABDD8;
      }
      goto L_088ABD54;
    }
L_088ABD54:
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_088ABD7C;
      }
      goto L_088ABD60;
    }
L_088ABD60:
    ctx.gpr[31] = (0x088ABD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 202u, 0x088ACE70u>(ctx, &aot_mem) && ctx.pc == 0x088ABD68u) goto L_088ABD68;
    return;
L_088ABD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
      if (branch_taken) {
          goto L_088ABDD8;
      }
      goto L_088ABD7C;
    }
L_088ABD7C:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_088ABDDC;
    }
    goto L_088ABD84;
L_088ABD84:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5084));
    ctx.gpr[31] = (0x088ABD9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5348));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088ABD9Cu) goto L_088ABD9C;
    return;
L_088ABD9C:
    ctx.gpr[31] = (0x088ABDA4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088ABDA4u) goto L_088ABDA4;
    return;
L_088ABDA4:
    ctx.gpr[31] = (0x088ABDACu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088ABDACu) goto L_088ABDAC;
    return;
L_088ABDAC:
    ctx.gpr[31] = (0x088ABDB4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABDB4u) goto L_088ABDB4;
    return;
L_088ABDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    goto L_088ABDD8;
L_088ABDD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088ABDDC;
L_088ABDDC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABDE4;
    }
L_088ABDE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_088ABF38;
    }
    goto L_088ABDF0;
L_088ABDF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_088ABE3C;
      }
      goto L_088ABE00;
    }
L_088ABE00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088ABE14;
      }
      goto L_088ABE0C;
    }
L_088ABE0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ABE2C;
      }
      goto L_088ABE14;
    }
L_088ABE14:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088ABE28;
      }
      goto L_088ABE1C;
    }
L_088ABE1C:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088ABE2C;
      }
      goto L_088ABE28;
    }
L_088ABE28:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_088ABE2C;
L_088ABE2C:
    ctx.gpr[31] = (0x088ABE34u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABE34u) goto L_088ABE34;
    return;
L_088ABE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABE3C;
    }
L_088ABE3C:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088ABE54;
    }
    goto L_088ABE44;
L_088ABE44:
    ctx.gpr[31] = (0x088ABE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 71u, 0x088AC500u>(ctx, &aot_mem) && ctx.pc == 0x088ABE4Cu) goto L_088ABE4C;
    return;
L_088ABE4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABE54;
    }
L_088ABE54:
    ctx.gpr[5] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_088ABECC;
      }
      goto L_088ABE60;
    }
L_088ABE60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ABE80;
      }
      goto L_088ABE70;
    }
L_088ABE70:
    ctx.gpr[31] = (0x088ABE78u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABE78u) goto L_088ABE78;
    return;
L_088ABE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABE80;
    }
L_088ABE80:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088ABEA0;
      }
      goto L_088ABE88;
    }
L_088ABE88:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
      if (branch_taken) {
          goto L_088ABEB8;
      }
      goto L_088ABEA0;
    }
L_088ABEA0:
    if (ctx.gpr[5] != ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_088ABEBC;
    }
    goto L_088ABEA8;
L_088ABEA8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    goto L_088ABEB8;
L_088ABEB8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_088ABEBC;
L_088ABEBC:
    ctx.gpr[31] = (0x088ABEC4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABEC4u) goto L_088ABEC4;
    return;
L_088ABEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABECC;
    }
L_088ABECC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABED4;
    }
L_088ABED4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088ABEF0;
      }
      goto L_088ABEE0;
    }
L_088ABEE0:
    ctx.gpr[31] = (0x088ABEE8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABEE8u) goto L_088ABEE8;
    return;
L_088ABEE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABEF0;
    }
L_088ABEF0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088ABF0C;
      }
      goto L_088ABEF8;
    }
L_088ABEF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
      if (branch_taken) {
          goto L_088ABF24;
      }
      goto L_088ABF0C;
    }
L_088ABF0C:
    if (ctx.gpr[6] != ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_088ABF28;
    }
    goto L_088ABF14;
L_088ABF14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    goto L_088ABF24;
L_088ABF24:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_088ABF28;
L_088ABF28:
    ctx.gpr[31] = (0x088ABF30u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABF30u) goto L_088ABF30;
    return;
L_088ABF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF38;
    }
L_088ABF38:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088ABF5C;
      }
      goto L_088ABF40;
    }
L_088ABF40:
    ctx.gpr[31] = (0x088ABF48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 98u, 0x088AC690u>(ctx, &aot_mem) && ctx.pc == 0x088ABF48u) goto L_088ABF48;
    return;
L_088ABF48:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF50;
    }
L_088ABF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF5C;
    }
L_088ABF5C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF64;
    }
L_088ABF64:
    ctx.gpr[31] = (0x088ABF6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 206u, 0x088ACEA8u>(ctx, &aot_mem) && ctx.pc == 0x088ABF6Cu) goto L_088ABF6C;
    return;
L_088ABF6C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF74;
    }
L_088ABF74:
    ctx.gpr[31] = (0x088ABF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 204u, 0x088ACE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABF7Cu) goto L_088ABF7C;
    return;
L_088ABF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_088ABF84;
L_088ABF84:
    ctx.gpr[31] = (0x088ABF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 32u, 0x088AC268u>(ctx, &aot_mem) && ctx.pc == 0x088ABF8Cu) goto L_088ABF8C;
    return;
L_088ABF8C:
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
L_088ABFA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(14844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 4u, 0x088AC020u>(ctx, &aot_mem); return;
      }
      goto L_088ABFD8;
    }
L_088ABFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ABFF8;
      }
      goto L_088ABFE8;
    }
L_088ABFE8:
    ctx.gpr[31] = (0x088ABFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 213u, 0x088ACF04u>(ctx, &aot_mem) && ctx.pc == 0x088ABFF0u) goto L_088ABFF0;
    return;
L_088ABFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 4u, 0x088AC020u>(ctx, &aot_mem); return;
      }
      goto L_088ABFF8;
    }
L_088ABFF8:
    ctx.gpr[31] = (0x088AC000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 48u, 0x088AC3CCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0041(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0041_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_41(Runtime &runtime) {
    runtime.register_generated_unit(41u, 0x088A8000u, 16384u, &recomp_unit_0041, &recomp_unit_0041_entry);
    runtime.register_function(0x088A8000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A801Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8044u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A804Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8078u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8098u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8120u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8128u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8140u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8154u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8174u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8194u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8220u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8228u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8238u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8248u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8254u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8260u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A826Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8278u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8284u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8290u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A829Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A830Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8318u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8324u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8330u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A833Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8340u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8348u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8350u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8358u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8368u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8370u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8380u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8394u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A839Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8400u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8424u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A843Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A844Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8454u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A845Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8468u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8488u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A849Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8514u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8528u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8530u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A853Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8544u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8554u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8564u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8570u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8578u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8588u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A859Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8600u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8608u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8618u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A861Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A862Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8634u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8644u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A865Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8664u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8670u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8690u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8698u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8700u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A870Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A871Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8738u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8758u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8760u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8768u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8770u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A878Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8794u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A879Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8800u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8818u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A882Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8858u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A887Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A889Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A892Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A895Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9018u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9030u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9108u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9118u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9130u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A913Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9148u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9154u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9160u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9188u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9194u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9208u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9224u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A923Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9248u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A926Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9284u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9298u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9318u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9344u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9354u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9364u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A936Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9378u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9380u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9388u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9390u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9404u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9410u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A941Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9438u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9450u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9468u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9498u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9500u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9508u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A951Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9530u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9538u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9540u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A954Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9554u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9564u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A957Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9584u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A958Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9644u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A964Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9904u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9ADCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA00Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA054u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA090u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA230u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA330u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA358u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA46Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA704u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA73Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA850u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB00Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB014u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB100u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB108u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB184u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB20Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB240u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB270u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB32Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB340u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB348u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB350u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB358u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB378u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB398u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB41Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB42Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB438u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB528u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB564u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB580u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB590u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB600u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB630u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB638u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB648u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB68Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB704u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB724u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB764u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB800u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB810u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB820u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB85Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB918u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB95Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB984u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABABCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABED4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFF8u, &recomp_unit_0041, "recomp_unit_0041");
}
} // namespace psprecomp

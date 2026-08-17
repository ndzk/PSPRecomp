#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0030[4081] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 11,
    0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0,
    78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 171, 0, 0,
    0, 0, 0, 172, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0,
    0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251,
    0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0,
    258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0,
    0, 0, 280, 281, 282, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0,
    0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315,
    0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0,
    331, 0, 0, 0, 332, 0, 333, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340,
    0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 351, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401,
    0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0,
    0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440,
    0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 0,
    457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0,
    0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470,
    0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479, 0,
    480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502,
    0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 526, 0, 527, 0, 0, 0, 0, 528, 0,
    0, 529, 530, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0,
    0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0,
    0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0,
    561, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 573,
    0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 582, 0, 583, 0, 584,
    0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595,
    0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597,
};
void recomp_unit_0030_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0887C000u;
        entry_id = (entry_delta < 16324u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0030[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887C000;
    case 2u: goto L_0887C008;
    case 3u: goto L_0887C010;
    case 4u: goto L_0887C018;
    case 5u: goto L_0887C024;
    case 6u: goto L_0887C04C;
    case 7u: goto L_0887C05C;
    case 8u: goto L_0887C064;
    case 9u: goto L_0887C06C;
    case 10u: goto L_0887C078;
    case 11u: goto L_0887C07C;
    case 12u: goto L_0887C084;
    case 13u: goto L_0887C094;
    case 14u: goto L_0887C09C;
    case 15u: goto L_0887C0A8;
    case 16u: goto L_0887C0B0;
    case 17u: goto L_0887C0B8;
    case 18u: goto L_0887C0C4;
    case 19u: goto L_0887C0CC;
    case 20u: goto L_0887C0E4;
    case 21u: goto L_0887C110;
    case 22u: goto L_0887C130;
    case 23u: goto L_0887C330;
    case 24u: goto L_0887C340;
    case 25u: goto L_0887C350;
    case 26u: goto L_0887C368;
    case 27u: goto L_0887C390;
    case 28u: goto L_0887C398;
    case 29u: goto L_0887C3B0;
    case 30u: goto L_0887C3C4;
    case 31u: goto L_0887C3E4;
    case 32u: goto L_0887C404;
    case 33u: goto L_0887C40C;
    case 34u: goto L_0887C42C;
    case 35u: goto L_0887C43C;
    case 36u: goto L_0887C454;
    case 37u: goto L_0887C460;
    case 38u: goto L_0887C480;
    case 39u: goto L_0887C48C;
    case 40u: goto L_0887C494;
    case 41u: goto L_0887C4A4;
    case 42u: goto L_0887C4B4;
    case 43u: goto L_0887C4DC;
    case 44u: goto L_0887C4E4;
    case 45u: goto L_0887C4FC;
    case 46u: goto L_0887C510;
    case 47u: goto L_0887C530;
    case 48u: goto L_0887C550;
    case 49u: goto L_0887C560;
    case 50u: goto L_0887C570;
    case 51u: goto L_0887C588;
    case 52u: goto L_0887C5B8;
    case 53u: goto L_0887C5DC;
    case 54u: goto L_0887C5EC;
    case 55u: goto L_0887C608;
    case 56u: goto L_0887C610;
    case 57u: goto L_0887C624;
    case 58u: goto L_0887C644;
    case 59u: goto L_0887C67C;
    case 60u: goto L_0887C6A8;
    case 61u: goto L_0887C6BC;
    case 62u: goto L_0887C6D8;
    case 63u: goto L_0887C6E8;
    case 64u: goto L_0887C704;
    case 65u: goto L_0887C728;
    case 66u: goto L_0887C758;
    case 67u: goto L_0887C764;
    case 68u: goto L_0887C778;
    case 69u: goto L_0887C788;
    case 70u: goto L_0887C790;
    case 71u: goto L_0887C7A4;
    case 72u: goto L_0887C7B8;
    case 73u: goto L_0887C7CC;
    case 74u: goto L_0887C7D4;
    case 75u: goto L_0887C7DC;
    case 76u: goto L_0887C7E4;
    case 77u: goto L_0887C7F8;
    case 78u: goto L_0887C800;
    case 79u: goto L_0887C818;
    case 80u: goto L_0887C840;
    case 81u: goto L_0887C854;
    case 82u: goto L_0887C868;
    case 83u: goto L_0887C870;
    case 84u: goto L_0887C884;
    case 85u: goto L_0887C8C4;
    case 86u: goto L_0887C8F0;
    case 87u: goto L_0887C90C;
    case 88u: goto L_0887C9C4;
    case 89u: goto L_0887CA74;
    case 90u: goto L_0887CB14;
    case 91u: goto L_0887CB1C;
    case 92u: goto L_0887CB38;
    case 93u: goto L_0887CB4C;
    case 94u: goto L_0887CB5C;
    case 95u: goto L_0887CB88;
    case 96u: goto L_0887CBBC;
    case 97u: goto L_0887CBC4;
    case 98u: goto L_0887CBE0;
    case 99u: goto L_0887CBF4;
    case 100u: goto L_0887CC1C;
    case 101u: goto L_0887CC54;
    case 102u: goto L_0887CC70;
    case 103u: goto L_0887CC80;
    case 104u: goto L_0887CC9C;
    case 105u: goto L_0887CCB8;
    case 106u: goto L_0887CCCC;
    case 107u: goto L_0887CCE8;
    case 108u: goto L_0887CD00;
    case 109u: goto L_0887CD14;
    case 110u: goto L_0887CD2C;
    case 111u: goto L_0887CD54;
    case 112u: goto L_0887CD68;
    case 113u: goto L_0887CD78;
    case 114u: goto L_0887CD94;
    case 115u: goto L_0887CDC4;
    case 116u: goto L_0887CDF4;
    case 117u: goto L_0887CE10;
    case 118u: goto L_0887CE2C;
    case 119u: goto L_0887CE50;
    case 120u: goto L_0887CE58;
    case 121u: goto L_0887CE60;
    case 122u: goto L_0887CE78;
    case 123u: goto L_0887CE80;
    case 124u: goto L_0887CE88;
    case 125u: goto L_0887CE94;
    case 126u: goto L_0887CEA0;
    case 127u: goto L_0887CEB0;
    case 128u: goto L_0887CEBC;
    case 129u: goto L_0887CECC;
    case 130u: goto L_0887CED4;
    case 131u: goto L_0887CEEC;
    case 132u: goto L_0887CF0C;
    case 133u: goto L_0887CF1C;
    case 134u: goto L_0887CF24;
    case 135u: goto L_0887CF34;
    case 136u: goto L_0887CF48;
    case 137u: goto L_0887CF58;
    case 138u: goto L_0887CF68;
    case 139u: goto L_0887CF90;
    case 140u: goto L_0887CFB8;
    case 141u: goto L_0887CFE4;
    case 142u: goto L_0887D018;
    case 143u: goto L_0887D05C;
    case 144u: goto L_0887D084;
    case 145u: goto L_0887D0AC;
    case 146u: goto L_0887D0D4;
    case 147u: goto L_0887D0F8;
    case 148u: goto L_0887D110;
    case 149u: goto L_0887D118;
    case 150u: goto L_0887D120;
    case 151u: goto L_0887D128;
    case 152u: goto L_0887D138;
    case 153u: goto L_0887D164;
    case 154u: goto L_0887D18C;
    case 155u: goto L_0887D198;
    case 156u: goto L_0887D1B8;
    case 157u: goto L_0887D1C8;
    case 158u: goto L_0887D1F4;
    case 159u: goto L_0887D210;
    case 160u: goto L_0887D228;
    case 161u: goto L_0887D270;
    case 162u: goto L_0887D284;
    case 163u: goto L_0887D28C;
    case 164u: goto L_0887D2A0;
    case 165u: goto L_0887D2B8;
    case 166u: goto L_0887D2C8;
    case 167u: goto L_0887D2D0;
    case 168u: goto L_0887D2DC;
    case 169u: goto L_0887D2E8;
    case 170u: goto L_0887D2F0;
    case 171u: goto L_0887D2F4;
    case 172u: goto L_0887D30C;
    case 173u: goto L_0887D310;
    case 174u: goto L_0887D31C;
    case 175u: goto L_0887D324;
    case 176u: goto L_0887D338;
    case 177u: goto L_0887D354;
    case 178u: goto L_0887D384;
    case 179u: goto L_0887D3AC;
    case 180u: goto L_0887D3B8;
    case 181u: goto L_0887D3C0;
    case 182u: goto L_0887D3C4;
    case 183u: goto L_0887D3D8;
    case 184u: goto L_0887D3F0;
    case 185u: goto L_0887D414;
    case 186u: goto L_0887D430;
    case 187u: goto L_0887D448;
    case 188u: goto L_0887D460;
    case 189u: goto L_0887D478;
    case 190u: goto L_0887D498;
    case 191u: goto L_0887D4A0;
    case 192u: goto L_0887D4B8;
    case 193u: goto L_0887D4C0;
    case 194u: goto L_0887D4D0;
    case 195u: goto L_0887D4F0;
    case 196u: goto L_0887D4F8;
    case 197u: goto L_0887D504;
    case 198u: goto L_0887D510;
    case 199u: goto L_0887D520;
    case 200u: goto L_0887D544;
    case 201u: goto L_0887D568;
    case 202u: goto L_0887D598;
    case 203u: goto L_0887D5A8;
    case 204u: goto L_0887D5BC;
    case 205u: goto L_0887D5D8;
    case 206u: goto L_0887D5E0;
    case 207u: goto L_0887D5EC;
    case 208u: goto L_0887D614;
    case 209u: goto L_0887D638;
    case 210u: goto L_0887D648;
    case 211u: goto L_0887D660;
    case 212u: goto L_0887D698;
    case 213u: goto L_0887D6A0;
    case 214u: goto L_0887D6B4;
    case 215u: goto L_0887D6DC;
    case 216u: goto L_0887D6E8;
    case 217u: goto L_0887D6FC;
    case 218u: goto L_0887D710;
    case 219u: goto L_0887D72C;
    case 220u: goto L_0887D73C;
    case 221u: goto L_0887D750;
    case 222u: goto L_0887D780;
    case 223u: goto L_0887D790;
    case 224u: goto L_0887D798;
    case 225u: goto L_0887D7A4;
    case 226u: goto L_0887D7AC;
    case 227u: goto L_0887D7C0;
    case 228u: goto L_0887D7F0;
    case 229u: goto L_0887D7FC;
    case 230u: goto L_0887D810;
    case 231u: goto L_0887D824;
    case 232u: goto L_0887D82C;
    case 233u: goto L_0887D840;
    case 234u: goto L_0887D878;
    case 235u: goto L_0887D8A4;
    case 236u: goto L_0887D8C0;
    case 237u: goto L_0887D984;
    case 238u: goto L_0887DA38;
    case 239u: goto L_0887DA40;
    case 240u: goto L_0887DA5C;
    case 241u: goto L_0887DA70;
    case 242u: goto L_0887DA80;
    case 243u: goto L_0887DAA4;
    case 244u: goto L_0887DAD8;
    case 245u: goto L_0887DAE0;
    case 246u: goto L_0887DAFC;
    case 247u: goto L_0887DB10;
    case 248u: goto L_0887DB38;
    case 249u: goto L_0887DB40;
    case 250u: goto L_0887DB68;
    case 251u: goto L_0887DB7C;
    case 252u: goto L_0887DB8C;
    case 253u: goto L_0887DBA8;
    case 254u: goto L_0887DBDC;
    case 255u: goto L_0887DBE4;
    case 256u: goto L_0887DBEC;
    case 257u: goto L_0887DBF4;
    case 258u: goto L_0887DC00;
    case 259u: goto L_0887DC0C;
    case 260u: goto L_0887DC1C;
    case 261u: goto L_0887DC28;
    case 262u: goto L_0887DC30;
    case 263u: goto L_0887DC3C;
    case 264u: goto L_0887DC54;
    case 265u: goto L_0887DC5C;
    case 266u: goto L_0887DC64;
    case 267u: goto L_0887DC6C;
    case 268u: goto L_0887DC74;
    case 269u: goto L_0887DC7C;
    case 270u: goto L_0887DC9C;
    case 271u: goto L_0887DCA8;
    case 272u: goto L_0887DCB8;
    case 273u: goto L_0887DCC8;
    case 274u: goto L_0887DCD0;
    case 275u: goto L_0887DCD8;
    case 276u: goto L_0887DCE0;
    case 277u: goto L_0887DCE8;
    case 278u: goto L_0887DCF0;
    case 279u: goto L_0887DCF8;
    case 280u: goto L_0887DD08;
    case 281u: goto L_0887DD0C;
    case 282u: goto L_0887DD10;
    case 283u: goto L_0887DD1C;
    case 284u: goto L_0887DD24;
    case 285u: goto L_0887DD2C;
    case 286u: goto L_0887DD34;
    case 287u: goto L_0887DD54;
    case 288u: goto L_0887DD60;
    case 289u: goto L_0887DD78;
    case 290u: goto L_0887DD80;
    case 291u: goto L_0887DD88;
    case 292u: goto L_0887DD94;
    case 293u: goto L_0887DD9C;
    case 294u: goto L_0887DDA4;
    case 295u: goto L_0887DDAC;
    case 296u: goto L_0887DDB4;
    case 297u: goto L_0887DDC0;
    case 298u: goto L_0887DDD0;
    case 299u: goto L_0887DDE0;
    case 300u: goto L_0887DDE8;
    case 301u: goto L_0887DDF8;
    case 302u: goto L_0887DE04;
    case 303u: goto L_0887DE0C;
    case 304u: goto L_0887DE14;
    case 305u: goto L_0887DE1C;
    case 306u: goto L_0887DE24;
    case 307u: goto L_0887DE2C;
    case 308u: goto L_0887DE34;
    case 309u: goto L_0887DE3C;
    case 310u: goto L_0887DE4C;
    case 311u: goto L_0887DE54;
    case 312u: goto L_0887DE60;
    case 313u: goto L_0887DE6C;
    case 314u: goto L_0887DE74;
    case 315u: goto L_0887DE7C;
    case 316u: goto L_0887DE84;
    case 317u: goto L_0887DE8C;
    case 318u: goto L_0887DE94;
    case 319u: goto L_0887DE9C;
    case 320u: goto L_0887DEA4;
    case 321u: goto L_0887DEAC;
    case 322u: goto L_0887DEB4;
    case 323u: goto L_0887DEBC;
    case 324u: goto L_0887DEC8;
    case 325u: goto L_0887DED0;
    case 326u: goto L_0887DED8;
    case 327u: goto L_0887DEE0;
    case 328u: goto L_0887DEE8;
    case 329u: goto L_0887DEF0;
    case 330u: goto L_0887DEF8;
    case 331u: goto L_0887DF00;
    case 332u: goto L_0887DF10;
    case 333u: goto L_0887DF18;
    case 334u: goto L_0887DF1C;
    case 335u: goto L_0887DF24;
    case 336u: goto L_0887DF48;
    case 337u: goto L_0887DF54;
    case 338u: goto L_0887DF64;
    case 339u: goto L_0887DF6C;
    case 340u: goto L_0887DF7C;
    case 341u: goto L_0887DF84;
    case 342u: goto L_0887DF98;
    case 343u: goto L_0887DFA0;
    case 344u: goto L_0887DFA8;
    case 345u: goto L_0887DFB0;
    case 346u: goto L_0887DFB8;
    case 347u: goto L_0887DFC0;
    case 348u: goto L_0887DFC8;
    case 349u: goto L_0887DFE8;
    case 350u: goto L_0887DFF4;
    case 351u: goto L_0887E010;
    case 352u: goto L_0887E014;
    case 353u: goto L_0887E01C;
    case 354u: goto L_0887E03C;
    case 355u: goto L_0887E068;
    case 356u: goto L_0887E088;
    case 357u: goto L_0887E218;
    case 358u: goto L_0887E60C;
    case 359u: goto L_0887E614;
    case 360u: goto L_0887E624;
    case 361u: goto L_0887E634;
    case 362u: goto L_0887E64C;
    case 363u: goto L_0887E69C;
    case 364u: goto L_0887E6BC;
    case 365u: goto L_0887E6D4;
    case 366u: goto L_0887E7A4;
    case 367u: goto L_0887E7C0;
    case 368u: goto L_0887E838;
    case 369u: goto L_0887E898;
    case 370u: goto L_0887E8F4;
    case 371u: goto L_0887E9B4;
    case 372u: goto L_0887EA6C;
    case 373u: goto L_0887EA7C;
    case 374u: goto L_0887EA94;
    case 375u: goto L_0887EA9C;
    case 376u: goto L_0887EAB4;
    case 377u: goto L_0887EAC4;
    case 378u: goto L_0887EAD4;
    case 379u: goto L_0887EB10;
    case 380u: goto L_0887EB64;
    case 381u: goto L_0887EB84;
    case 382u: goto L_0887EBA0;
    case 383u: goto L_0887EC44;
    case 384u: goto L_0887ECDC;
    case 385u: goto L_0887ED8C;
    case 386u: goto L_0887EDA4;
    case 387u: goto L_0887EE4C;
    case 388u: goto L_0887EEE0;
    case 389u: goto L_0887EF00;
    case 390u: goto L_0887EF08;
    case 391u: goto L_0887EF1C;
    case 392u: goto L_0887EF24;
    case 393u: goto L_0887EF34;
    case 394u: goto L_0887EF3C;
    case 395u: goto L_0887EF48;
    case 396u: goto L_0887EF50;
    case 397u: goto L_0887EF60;
    case 398u: goto L_0887EFA0;
    case 399u: goto L_0887EFD4;
    case 400u: goto L_0887EFE8;
    case 401u: goto L_0887EFFC;
    case 402u: goto L_0887F008;
    case 403u: goto L_0887F020;
    case 404u: goto L_0887F03C;
    case 405u: goto L_0887F04C;
    case 406u: goto L_0887F064;
    case 407u: goto L_0887F080;
    case 408u: goto L_0887F094;
    case 409u: goto L_0887F0A4;
    case 410u: goto L_0887F0BC;
    case 411u: goto L_0887F0D0;
    case 412u: goto L_0887F0E8;
    case 413u: goto L_0887F0FC;
    case 414u: goto L_0887F118;
    case 415u: goto L_0887F128;
    case 416u: goto L_0887F13C;
    case 417u: goto L_0887F144;
    case 418u: goto L_0887F150;
    case 419u: goto L_0887F160;
    case 420u: goto L_0887F178;
    case 421u: goto L_0887F184;
    case 422u: goto L_0887F198;
    case 423u: goto L_0887F1A8;
    case 424u: goto L_0887F1C0;
    case 425u: goto L_0887F1DC;
    case 426u: goto L_0887F1F0;
    case 427u: goto L_0887F208;
    case 428u: goto L_0887F218;
    case 429u: goto L_0887F230;
    case 430u: goto L_0887F244;
    case 431u: goto L_0887F250;
    case 432u: goto L_0887F25C;
    case 433u: goto L_0887F27C;
    case 434u: goto L_0887F28C;
    case 435u: goto L_0887F2A4;
    case 436u: goto L_0887F2B0;
    case 437u: goto L_0887F2C4;
    case 438u: goto L_0887F2D4;
    case 439u: goto L_0887F2E8;
    case 440u: goto L_0887F2FC;
    case 441u: goto L_0887F308;
    case 442u: goto L_0887F314;
    case 443u: goto L_0887F320;
    case 444u: goto L_0887F338;
    case 445u: goto L_0887F35C;
    case 446u: goto L_0887F36C;
    case 447u: goto L_0887F390;
    case 448u: goto L_0887F3A4;
    case 449u: goto L_0887F3D4;
    case 450u: goto L_0887F3EC;
    case 451u: goto L_0887F408;
    case 452u: goto L_0887F428;
    case 453u: goto L_0887F458;
    case 454u: goto L_0887F464;
    case 455u: goto L_0887F470;
    case 456u: goto L_0887F478;
    case 457u: goto L_0887F480;
    case 458u: goto L_0887F488;
    case 459u: goto L_0887F4A0;
    case 460u: goto L_0887F4B8;
    case 461u: goto L_0887F4C0;
    case 462u: goto L_0887F4DC;
    case 463u: goto L_0887F4F4;
    case 464u: goto L_0887F50C;
    case 465u: goto L_0887F534;
    case 466u: goto L_0887F548;
    case 467u: goto L_0887F550;
    case 468u: goto L_0887F55C;
    case 469u: goto L_0887F564;
    case 470u: goto L_0887F57C;
    case 471u: goto L_0887F584;
    case 472u: goto L_0887F58C;
    case 473u: goto L_0887F598;
    case 474u: goto L_0887F5A8;
    case 475u: goto L_0887F5BC;
    case 476u: goto L_0887F5D0;
    case 477u: goto L_0887F5D8;
    case 478u: goto L_0887F5F0;
    case 479u: goto L_0887F5F8;
    case 480u: goto L_0887F600;
    case 481u: goto L_0887F608;
    case 482u: goto L_0887F610;
    case 483u: goto L_0887F618;
    case 484u: goto L_0887F63C;
    case 485u: goto L_0887F64C;
    case 486u: goto L_0887F654;
    case 487u: goto L_0887F660;
    case 488u: goto L_0887F688;
    case 489u: goto L_0887F690;
    case 490u: goto L_0887F6A8;
    case 491u: goto L_0887F6BC;
    case 492u: goto L_0887F6DC;
    case 493u: goto L_0887F72C;
    case 494u: goto L_0887F750;
    case 495u: goto L_0887F75C;
    case 496u: goto L_0887F768;
    case 497u: goto L_0887F784;
    case 498u: goto L_0887F7A4;
    case 499u: goto L_0887F7AC;
    case 500u: goto L_0887F7E8;
    case 501u: goto L_0887F7F4;
    case 502u: goto L_0887F7FC;
    case 503u: goto L_0887F808;
    case 504u: goto L_0887F824;
    case 505u: goto L_0887F838;
    case 506u: goto L_0887F84C;
    case 507u: goto L_0887F854;
    case 508u: goto L_0887F870;
    case 509u: goto L_0887F890;
    case 510u: goto L_0887F8A8;
    case 511u: goto L_0887F8B4;
    case 512u: goto L_0887F8C0;
    case 513u: goto L_0887F8E8;
    case 514u: goto L_0887F8F0;
    case 515u: goto L_0887F924;
    case 516u: goto L_0887F928;
    case 517u: goto L_0887F930;
    case 518u: goto L_0887F964;
    case 519u: goto L_0887F98C;
    case 520u: goto L_0887F994;
    case 521u: goto L_0887F9A4;
    case 522u: goto L_0887FA24;
    case 523u: goto L_0887FA48;
    case 524u: goto L_0887FA50;
    case 525u: goto L_0887FA58;
    case 526u: goto L_0887FA5C;
    case 527u: goto L_0887FA64;
    case 528u: goto L_0887FA78;
    case 529u: goto L_0887FA84;
    case 530u: goto L_0887FA88;
    case 531u: goto L_0887FA8C;
    case 532u: goto L_0887FAA0;
    case 533u: goto L_0887FAB0;
    case 534u: goto L_0887FAC8;
    case 535u: goto L_0887FAEC;
    case 536u: goto L_0887FB0C;
    case 537u: goto L_0887FB18;
    case 538u: goto L_0887FB28;
    case 539u: goto L_0887FB38;
    case 540u: goto L_0887FBE4;
    case 541u: goto L_0887FBF4;
    case 542u: goto L_0887FC10;
    case 543u: goto L_0887FC20;
    case 544u: goto L_0887FC30;
    case 545u: goto L_0887FC40;
    case 546u: goto L_0887FC58;
    case 547u: goto L_0887FC70;
    case 548u: goto L_0887FC8C;
    case 549u: goto L_0887FC9C;
    case 550u: goto L_0887FCAC;
    case 551u: goto L_0887FCBC;
    case 552u: goto L_0887FCCC;
    case 553u: goto L_0887FCE4;
    case 554u: goto L_0887FD24;
    case 555u: goto L_0887FD3C;
    case 556u: goto L_0887FD4C;
    case 557u: goto L_0887FD5C;
    case 558u: goto L_0887FD64;
    case 559u: goto L_0887FD70;
    case 560u: goto L_0887FD78;
    case 561u: goto L_0887FD80;
    case 562u: goto L_0887FD8C;
    case 563u: goto L_0887FD98;
    case 564u: goto L_0887FDA0;
    case 565u: goto L_0887FDAC;
    case 566u: goto L_0887FDB4;
    case 567u: goto L_0887FDBC;
    case 568u: goto L_0887FDC4;
    case 569u: goto L_0887FDD0;
    case 570u: goto L_0887FDE4;
    case 571u: goto L_0887FDEC;
    case 572u: goto L_0887FDF4;
    case 573u: goto L_0887FDFC;
    case 574u: goto L_0887FE08;
    case 575u: goto L_0887FE14;
    case 576u: goto L_0887FE20;
    case 577u: goto L_0887FE30;
    case 578u: goto L_0887FE3C;
    case 579u: goto L_0887FE4C;
    case 580u: goto L_0887FE54;
    case 581u: goto L_0887FE5C;
    case 582u: goto L_0887FE6C;
    case 583u: goto L_0887FE74;
    case 584u: goto L_0887FE7C;
    case 585u: goto L_0887FE84;
    case 586u: goto L_0887FE8C;
    case 587u: goto L_0887FE94;
    case 588u: goto L_0887FE9C;
    case 589u: goto L_0887FEB0;
    case 590u: goto L_0887FEC0;
    case 591u: goto L_0887FEC8;
    case 592u: goto L_0887FEF4;
    case 593u: goto L_0887FF04;
    case 594u: goto L_0887FF60;
    case 595u: goto L_0887FF7C;
    case 596u: goto L_0887FF9C;
    case 597u: goto L_0887FFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887C000:
    ctx.gpr[31] = (0x0887C008u);
    // nop
    goto L_0887D4D0;
L_0887C008:
    ctx.gpr[31] = (0x0887C010u);
    // nop
    goto L_0887C3E4;
L_0887C010:
    ctx.gpr[31] = (0x0887C018u);
    // nop
    goto L_0887EFA0;
L_0887C018:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C0CC;
      }
      goto L_0887C04C;
    }
L_0887C04C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C064;
      }
      goto L_0887C05C;
    }
L_0887C05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C07C;
      }
      goto L_0887C064;
    }
L_0887C064:
    ctx.gpr[31] = (0x0887C06Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887D0D4;
L_0887C06C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887C07C;
      }
      goto L_0887C078;
    }
L_0887C078:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887C07C;
L_0887C07C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C0CC;
      }
      goto L_0887C084;
    }
L_0887C084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887C0CC;
      }
      goto L_0887C094;
    }
L_0887C094:
    ctx.gpr[31] = (0x0887C09Cu);
    // nop
    goto L_0887C43C;
L_0887C09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887C0A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883BF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C0A8u) goto L_0887C0A8;
    return;
L_0887C0A8:
    ctx.gpr[31] = (0x0887C0B0u);
    // nop
    goto L_0887C460;
L_0887C0B0:
    ctx.gpr[31] = (0x0887C0B8u);
    // nop
    goto L_0887D5BC;
L_0887C0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887C0C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 180u, 0x088396F8u>(ctx, &aot_mem) && ctx.pc == 0x0887C0C4u) goto L_0887C0C4;
    return;
L_0887C0C4:
    ctx.gpr[31] = (0x0887C0CCu);
    // nop
    goto L_0887C530;
L_0887C0CC:
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
L_0887C0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887C110u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C110u) goto L_0887C110;
    return;
L_0887C110:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (0u | 276u);
    ctx.gpr[31] = (0x0887C130u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887C130u) goto L_0887C130;
    return;
L_0887C130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17292u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16872u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17261u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17309u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17184u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 112u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17308u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17183u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17100u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16576u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 219u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 210u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 190u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0887C330;
L_0887C330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x0887C340u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0887C340u) goto L_0887C340;
    return;
L_0887C340:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0887C330;
      }
      goto L_0887C350;
    }
L_0887C350:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0887C390;
L_0887C390:
    ctx.gpr[31] = (0x0887C398u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0887C398u) goto L_0887C398;
    return;
L_0887C398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_0887C390;
      }
      goto L_0887C3B0;
    }
L_0887C3B0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887C3C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C3C4u) goto L_0887C3C4;
    return;
L_0887C3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
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
L_0887C3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887C42C;
      }
      goto L_0887C404;
    }
L_0887C404:
    ctx.gpr[31] = (0x0887C40Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887CF90;
L_0887C40C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x0887C42Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0887C42Cu) goto L_0887C42C;
    return;
L_0887C42C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887C454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0887C454u) goto L_0887C454;
    return;
L_0887C454:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x0887C480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0887C480u) goto L_0887C480;
    return;
L_0887C480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887C48Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887CF90;
L_0887C48C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C4A4;
      }
      goto L_0887C494;
    }
L_0887C494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x0887C4A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0887C4A4u) goto L_0887C4A4;
    return;
L_0887C4A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C4B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0887C4DC;
L_0887C4DC:
    ctx.gpr[31] = (0x0887C4E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C4E4u) goto L_0887C4E4;
    return;
L_0887C4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0887C4DC;
      }
      goto L_0887C4FC;
    }
L_0887C4FC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887C510u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C510u) goto L_0887C510;
    return;
L_0887C510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
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
L_0887C530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0887C550;
L_0887C550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887C560u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887C560u) goto L_0887C560;
    return;
L_0887C560:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887C550;
      }
      goto L_0887C570;
    }
L_0887C570:
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
L_0887C588:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887C5B8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C5B8u) goto L_0887C5B8;
    return;
L_0887C5B8:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1180), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887C5DCu);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887C5DCu) goto L_0887C5DC;
    return;
L_0887C5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0887C5ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 47u, 0x088386E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C5ECu) goto L_0887C5EC;
    return;
L_0887C5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0887C608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x0887C608u) goto L_0887C608;
    return;
L_0887C608:
    ctx.gpr[31] = (0x0887C610u);
    // nop
    goto L_0887C884;
L_0887C610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 464u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887C624u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C624u) goto L_0887C624;
    return;
L_0887C624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1188), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887C644u);
    ctx.gpr[6] = (0u | 464u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887C644u) goto L_0887C644;
    return;
L_0887C644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
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
L_0887C67C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887C6A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 50u, 0x08838774u>(ctx, &aot_mem) && ctx.pc == 0x0887C6A8u) goto L_0887C6A8;
    return;
L_0887C6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[31] = (0x0887C6BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C6BCu) goto L_0887C6BC;
    return;
L_0887C6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887C6D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C6D8u) goto L_0887C6D8;
    return;
L_0887C6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887C6E8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1180), 0u);
    goto L_0887CB88;
L_0887C6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887C704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C704u) goto L_0887C704;
    return;
L_0887C704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1188), 0u);
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
L_0887C728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887C758u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883E8C4u>(ctx, &aot_mem) && ctx.pc == 0x0887C758u) goto L_0887C758;
    return;
L_0887C758:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C7D4;
      }
      goto L_0887C764;
    }
L_0887C764:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887C778u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887C778u) goto L_0887C778;
    return;
L_0887C778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887C788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887CF34;
L_0887C788:
    ctx.gpr[31] = (0x0887C790u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 299u, 0x08921710u>(ctx, &aot_mem) && ctx.pc == 0x0887C790u) goto L_0887C790;
    return;
L_0887C790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x0887C7A4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4504u;
    return;
L_0887C7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x0887C7B8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 635u, 0x0892A1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887C7B8u) goto L_0887C7B8;
    return;
L_0887C7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0887C7CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 89u, 0x0883CBF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C7CCu) goto L_0887C7CC;
    return;
L_0887C7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C7F8;
      }
      goto L_0887C7D4;
    }
L_0887C7D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C7F8;
      }
      goto L_0887C7DC;
    }
L_0887C7DC:
    ctx.gpr[31] = (0x0887C7E4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887C7E4u) goto L_0887C7E4;
    return;
L_0887C7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0887C7F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 89u, 0x0883CBF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C7F8u) goto L_0887C7F8;
    return;
L_0887C7F8:
    ctx.gpr[31] = (0x0887C800u);
    // nop
    goto L_0887CC1C;
L_0887C800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887C840u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 54u, 0x088387ACu>(ctx, &aot_mem) && ctx.pc == 0x0887C840u) goto L_0887C840;
    return;
L_0887C840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[31] = (0x0887C854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x0887C854u) goto L_0887C854;
    return;
L_0887C854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0887C868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1188)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 94u, 0x0883CC48u>(ctx, &aot_mem) && ctx.pc == 0x0887C868u) goto L_0887C868;
    return;
L_0887C868:
    ctx.gpr[31] = (0x0887C870u);
    // nop
    goto L_0887CD2C;
L_0887C870:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 540u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887C8C4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C8C4u) goto L_0887C8C4;
    return;
L_0887C8C4:
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1184), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887C8F0u);
    ctx.gpr[6] = (0u | 540u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887C8F0u) goto L_0887C8F0;
    return;
L_0887C8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10840)));
    ctx.gpr[31] = (0x0887C90Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887C90Cu) goto L_0887C90C;
    return;
L_0887C90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17136u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17046u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10840));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0887C9C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887C9C4u) goto L_0887C9C4;
    return;
L_0887C9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17134u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17106u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887CA74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887CA74u) goto L_0887CA74;
    return;
L_0887CA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17140u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[16] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23320));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-23304));
    goto L_0887CB14;
L_0887CB14:
    ctx.gpr[31] = (0x0887CB1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0887CB1Cu) goto L_0887CB1C;
    return;
L_0887CB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887CB38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887CB38u) goto L_0887CB38;
    return;
L_0887CB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887CB4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0887CB4Cu) goto L_0887CB4C;
    return;
L_0887CB4C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887CB14;
      }
      goto L_0887CB5C;
    }
L_0887CB5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0887CBBC;
L_0887CBBC:
    ctx.gpr[31] = (0x0887CBC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CBC4u) goto L_0887CBC4;
    return;
L_0887CBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
      if (branch_taken) {
          goto L_0887CBBC;
      }
      goto L_0887CBE0;
    }
L_0887CBE0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887CBF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887CBF4u) goto L_0887CBF4;
    return;
L_0887CBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1184), 0u);
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
L_0887CC1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887CC54u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887CC54u) goto L_0887CC54;
    return;
L_0887CC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10840)));
    ctx.gpr[31] = (0x0887CC70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887CC70u) goto L_0887CC70;
    return;
L_0887CC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887CC80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887CC80u) goto L_0887CC80;
    return;
L_0887CC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887CC9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887CC9Cu) goto L_0887CC9C;
    return;
L_0887CC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10840));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0887CCB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887CCB8u) goto L_0887CCB8;
    return;
L_0887CCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887CCCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887CCCCu) goto L_0887CCCC;
    return;
L_0887CCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887CCE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887CCE8u) goto L_0887CCE8;
    return;
L_0887CCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887CD00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887CD00u) goto L_0887CD00;
    return;
L_0887CD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887CD14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887CD14u) goto L_0887CD14;
    return;
L_0887CD14:
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
L_0887CD2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[17] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0887CD54;
L_0887CD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0887CD68u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887CD68u) goto L_0887CD68;
    return;
L_0887CD68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887CD54;
      }
      goto L_0887CD78;
    }
L_0887CD78:
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
L_0887CD94:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CDC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (22u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23752));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887CDF4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887CDF4u) goto L_0887CDF4;
    return;
L_0887CDF4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CE10u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887CE10u) goto L_0887CE10;
    return;
L_0887CE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CE2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0887CE78;
      }
      goto L_0887CE50;
    }
L_0887CE50:
    ctx.gpr[31] = (0x0887CE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 556u, 0x08929C28u>(ctx, &aot_mem) && ctx.pc == 0x0887CE58u) goto L_0887CE58;
    return;
L_0887CE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    goto L_0887CE60;
L_0887CE60:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CE78:
    ctx.gpr[31] = (0x0887CE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 577u, 0x08929DB4u>(ctx, &aot_mem) && ctx.pc == 0x0887CE80u) goto L_0887CE80;
    return;
L_0887CE80:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887CE60;
      }
      goto L_0887CE88;
    }
L_0887CE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887CE94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 591u, 0x08929E60u>(ctx, &aot_mem) && ctx.pc == 0x0887CE94u) goto L_0887CE94;
    return;
L_0887CE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887CEA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 594u, 0x08929E98u>(ctx, &aot_mem) && ctx.pc == 0x0887CEA0u) goto L_0887CEA0;
    return;
L_0887CEA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    goto L_0887CEB0;
L_0887CEB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_0887CEBC;
    }
    goto L_0887CEBC;
L_0887CEBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887CEB0;
      }
      goto L_0887CECC;
    }
L_0887CECC:
    ctx.gpr[31] = (0x0887CED4u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 570u, 0x08929D2Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CED4u) goto L_0887CED4;
    return;
L_0887CED4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CEEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0887CF24;
      }
      goto L_0887CF0C;
    }
L_0887CF0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887CF1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887CF1Cu) goto L_0887CF1C;
    return;
L_0887CF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    goto L_0887CF24;
L_0887CF24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887CF48u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 530u, 0x08842960u>(ctx, &aot_mem) && ctx.pc == 0x0887CF48u) goto L_0887CF48;
    return;
L_0887CF48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887CF58u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0887CF58u) goto L_0887CF58;
    return;
L_0887CF58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CF68:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CF90:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CFB8:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CFE4:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D018:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D05C:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D084:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D0AC:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D0D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D128;
      }
      goto L_0887D0F8;
    }
L_0887D0F8:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887D128;
      }
      goto L_0887D110;
    }
L_0887D110:
    ctx.gpr[31] = (0x0887D118u);
    ctx.gpr[16] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 542u, 0x08842A08u>(ctx, &aot_mem) && ctx.pc == 0x0887D118u) goto L_0887D118;
    return;
L_0887D118:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_0887D120;
    }
    goto L_0887D120;
L_0887D120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0887D128;
      }
      goto L_0887D128;
    }
L_0887D128:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3600 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0887D18C;
      }
      goto L_0887D164;
    }
L_0887D164:
    ctx.gpr[5] = (0u | 3600u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_0887D18C;
L_0887D18C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887D1B8;
      }
      goto L_0887D198;
    }
L_0887D198:
    ctx.gpr[5] = (0u | 60u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[17] << 6u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_0887D1B8;
L_0887D1B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887D1C8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D1C8u) goto L_0887D1C8;
    return;
L_0887D1C8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10784));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887D1F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23296));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887D1F4u) goto L_0887D1F4;
    return;
L_0887D1F4:
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
L_0887D210:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10736));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887D270u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D270u) goto L_0887D270;
    return;
L_0887D270:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887D284u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23276));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887D284u) goto L_0887D284;
    return;
L_0887D284:
    ctx.gpr[31] = (0x0887D28Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887D28Cu) goto L_0887D28C;
    return;
L_0887D28C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0887D310;
      }
      goto L_0887D2A0;
    }
L_0887D2A0:
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(10784));
    goto L_0887D2B8;
L_0887D2B8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
        goto L_0887D2F0;
    }
    goto L_0887D2C8;
L_0887D2C8:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
        goto L_0887D2E8;
    }
    goto L_0887D2D0;
L_0887D2D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x0887D2DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x0887D2DCu) goto L_0887D2DC;
    return;
L_0887D2DC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
    goto L_0887D2E8;
L_0887D2E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D2F4;
      }
      goto L_0887D2F0;
    }
L_0887D2F0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0887D2F4;
L_0887D2F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887D2B8;
      }
      goto L_0887D30C;
    }
L_0887D30C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887D310;
L_0887D310:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887D31Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D31Cu) goto L_0887D31C;
    return;
L_0887D31C:
    ctx.gpr[31] = (0x0887D324u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887D324u) goto L_0887D324;
    return;
L_0887D324:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887D354;
      }
      goto L_0887D338;
    }
L_0887D338:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887D338;
      }
      goto L_0887D354;
    }
L_0887D354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887D460;
      }
      goto L_0887D3AC;
    }
L_0887D3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0887D3C4;
      }
      goto L_0887D3B8;
    }
L_0887D3B8:
    ctx.gpr[31] = (0x0887D3C0u);
    // nop
    goto L_0887D478;
L_0887D3C0:
    ctx.gpr[4] = (2222u << 16u);
    goto L_0887D3C4;
L_0887D3C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 52u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887D3D8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887D3D8u) goto L_0887D3D8;
    return;
L_0887D3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887D3F0u);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D3F0u) goto L_0887D3F0;
    return;
L_0887D3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x0887D414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 747u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x0887D414u) goto L_0887D414;
    return;
L_0887D414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(1028));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887D430u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D430u) goto L_0887D430;
    return;
L_0887D430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x0887D448u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5592));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0887D448u) goto L_0887D448;
    return;
L_0887D448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_0887D460;
L_0887D460:
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
L_0887D478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4C0;
      }
      goto L_0887D498;
    }
L_0887D498:
    ctx.gpr[31] = (0x0887D4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 751u, 0x08847D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D4A0u) goto L_0887D4A0;
    return;
L_0887D4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887D4B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887D4B8u) goto L_0887D4B8;
    return;
L_0887D4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    goto L_0887D4C0;
L_0887D4C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D4D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887D510;
      }
      goto L_0887D4F0;
    }
L_0887D4F0:
    ctx.gpr[31] = (0x0887D4F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887D0D4;
L_0887D4F8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887D510;
      }
      goto L_0887D504;
    }
L_0887D504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887D510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 753u, 0x08847D68u>(ctx, &aot_mem) && ctx.pc == 0x0887D510u) goto L_0887D510;
    return;
L_0887D510:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887D5A8;
      }
      goto L_0887D544;
    }
L_0887D544:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(1028));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887D568u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D568u) goto L_0887D568;
    return;
L_0887D568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10732));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[31] = (0x0887D598u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5592));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0887D598u) goto L_0887D598;
    return;
L_0887D598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_0887D5A8;
L_0887D5A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D5BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887D5E0;
      }
      goto L_0887D5D8;
    }
L_0887D5D8:
    ctx.gpr[31] = (0x0887D5E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x0887D5E0u) goto L_0887D5E0;
    return;
L_0887D5E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887D614u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887D614u) goto L_0887D614;
    return;
L_0887D614:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1200), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887D638u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D638u) goto L_0887D638;
    return;
L_0887D638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887D648u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 47u, 0x088386E0u>(ctx, &aot_mem) && ctx.pc == 0x0887D648u) goto L_0887D648;
    return;
L_0887D648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0887D660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x0887D660u) goto L_0887D660;
    return;
L_0887D660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[6] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0887D698u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0887D698u) goto L_0887D698;
    return;
L_0887D698:
    ctx.gpr[31] = (0x0887D6A0u);
    // nop
    goto L_0887D840;
L_0887D6A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_0887D73C;
      }
      goto L_0887D6DC;
    }
L_0887D6DC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887D6E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 50u, 0x08838774u>(ctx, &aot_mem) && ctx.pc == 0x0887D6E8u) goto L_0887D6E8;
    return;
L_0887D6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0887D6FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D6FCu) goto L_0887D6FC;
    return;
L_0887D6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0887D710u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0887D710u) goto L_0887D710;
    return;
L_0887D710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887D72Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887D72Cu) goto L_0887D72C;
    return;
L_0887D72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887D73Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1200), 0u);
    goto L_0887DAA4;
L_0887D73C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1196)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887D7A4;
      }
      goto L_0887D780;
    }
L_0887D780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887D7A4;
      }
      goto L_0887D790;
    }
L_0887D790:
    ctx.gpr[31] = (0x0887D798u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887D798u) goto L_0887D798;
    return;
L_0887D798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1196), static_cast<std::uint8_t>(0u));
    goto L_0887D7A4;
L_0887D7A4:
    ctx.gpr[31] = (0x0887D7ACu);
    // nop
    goto L_0887DB38;
L_0887D7AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D7C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1196)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_0887D82C;
      }
      goto L_0887D7F0;
    }
L_0887D7F0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887D7FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 54u, 0x088387ACu>(ctx, &aot_mem) && ctx.pc == 0x0887D7FCu) goto L_0887D7FC;
    return;
L_0887D7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0887D810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x0887D810u) goto L_0887D810;
    return;
L_0887D810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0887D824u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0887D824u) goto L_0887D824;
    return;
L_0887D824:
    ctx.gpr[31] = (0x0887D82Cu);
    // nop
    goto L_0887DB40;
L_0887D82C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 360u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887D878u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887D878u) goto L_0887D878;
    return;
L_0887D878:
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1204), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[31] = (0x0887D8A4u);
    ctx.gpr[6] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887D8A4u) goto L_0887D8A4;
    return;
L_0887D8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10852)));
    ctx.gpr[31] = (0x0887D8C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887D8C0u) goto L_0887D8C0;
    return;
L_0887D8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (16792u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17114u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17084u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 202u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 183u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(10852));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0887D984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887D984u) goto L_0887D984;
    return;
L_0887D984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (17164u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[16] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23320));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-23304));
    goto L_0887DA38;
L_0887DA38:
    ctx.gpr[31] = (0x0887DA40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0887DA40u) goto L_0887DA40;
    return;
L_0887DA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887DA5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887DA5Cu) goto L_0887DA5C;
    return;
L_0887DA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[31] = (0x0887DA70u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0887DA70u) goto L_0887DA70;
    return;
L_0887DA70:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887DA38;
      }
      goto L_0887DA80;
    }
L_0887DA80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0887DAD8;
L_0887DAD8:
    ctx.gpr[31] = (0x0887DAE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DAE0u) goto L_0887DAE0;
    return;
L_0887DAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_0887DAD8;
      }
      goto L_0887DAFC;
    }
L_0887DAFC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887DB10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887DB10u) goto L_0887DB10;
    return;
L_0887DB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1204), 0u);
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
L_0887DB38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DB40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[17] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0887DB68;
L_0887DB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[31] = (0x0887DB7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887DB7Cu) goto L_0887DB7C;
    return;
L_0887DB7C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887DB68;
      }
      goto L_0887DB8C;
    }
L_0887DB8C:
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
L_0887DBA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0887DBEC;
    }
    goto L_0887DBDC;
L_0887DBDC:
    ctx.gpr[31] = (0x0887DBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 310u, 0x0887A884u>(ctx, &aot_mem) && ctx.pc == 0x0887DBE4u) goto L_0887DBE4;
    return;
L_0887DBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E01C;
      }
      goto L_0887DBEC;
    }
L_0887DBEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DE8C;
      }
      goto L_0887DBF4;
    }
L_0887DBF4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE8C;
      }
      goto L_0887DC00;
    }
L_0887DC00:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (1u << 16u);
      if (branch_taken) {
          goto L_0887DE8C;
      }
      goto L_0887DC0C;
    }
L_0887DC0C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE8C;
      }
      goto L_0887DC1C;
    }
L_0887DC1C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE8C;
      }
      goto L_0887DC28;
    }
L_0887DC28:
    ctx.gpr[31] = (0x0887DC30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 261u, 0x08821820u>(ctx, &aot_mem) && ctx.pc == 0x0887DC30u) goto L_0887DC30;
    return;
L_0887DC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0887DC74;
      }
      goto L_0887DC3C;
    }
L_0887DC3C:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_0887DD10;
    }
    goto L_0887DC54;
L_0887DC54:
    ctx.gpr[31] = (0x0887DC5Cu);
    // nop
    goto L_0887CEEC;
L_0887DC5C:
    ctx.gpr[31] = (0x0887DC64u);
    // nop
    goto L_0887CD94;
L_0887DC64:
    ctx.gpr[31] = (0x0887DC6Cu);
    // nop
    goto L_0887CDC4;
L_0887DC6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    goto L_0887DC74;
L_0887DC74:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_0887DD0C;
      }
      goto L_0887DC7C;
    }
L_0887DC7C:
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23344));
    ctx.gpr[31] = (0x0887DC9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_0887DC9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
      if (branch_taken) {
          goto L_0887DCB8;
      }
      goto L_0887DCA8;
    }
L_0887DCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887DCB8;
      }
      goto L_0887DCB8;
    }
L_0887DCB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[19] == ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
        goto L_0887DD0C;
    }
    goto L_0887DCC8;
L_0887DCC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887DCF0;
      }
      goto L_0887DCD0;
    }
L_0887DCD0:
    ctx.gpr[31] = (0x0887DCD8u);
    // nop
    goto L_0887CEEC;
L_0887DCD8:
    ctx.gpr[31] = (0x0887DCE0u);
    // nop
    goto L_0887CD94;
L_0887DCE0:
    ctx.gpr[31] = (0x0887DCE8u);
    // nop
    goto L_0887CDC4;
L_0887DCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
      if (branch_taken) {
          goto L_0887DD08;
      }
      goto L_0887DCF0;
    }
L_0887DCF0:
    ctx.gpr[31] = (0x0887DCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 124u, 0x088BCDBCu>(ctx, &aot_mem) && ctx.pc == 0x0887DCF8u) goto L_0887DCF8;
    return;
L_0887DCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    goto L_0887DD08;
L_0887DD08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    goto L_0887DD0C;
L_0887DD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_0887DD10;
L_0887DD10:
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 128u);
      if (branch_taken) {
          goto L_0887DD2C;
      }
      goto L_0887DD1C;
    }
L_0887DD1C:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
        goto L_0887DD54;
    }
    goto L_0887DD24;
L_0887DD24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887DDB4;
      }
      goto L_0887DD2C;
    }
L_0887DD2C:
    ctx.gpr[31] = (0x0887DD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 295u, 0x0887A7BCu>(ctx, &aot_mem) && ctx.pc == 0x0887DD34u) goto L_0887DD34;
    return;
L_0887DD34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DDA4;
      }
      goto L_0887DD60;
    }
L_0887DD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DD88;
      }
      goto L_0887DD78;
    }
L_0887DD78:
    ctx.gpr[31] = (0x0887DD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 306u, 0x0887A840u>(ctx, &aot_mem) && ctx.pc == 0x0887DD80u) goto L_0887DD80;
    return;
L_0887DD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DD88;
    }
L_0887DD88:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0887DD94u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1196), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0887D5EC;
L_0887DD94:
    ctx.gpr[31] = (0x0887DD9Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DD9Cu) goto L_0887DD9C;
    return;
L_0887DD9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DDA4;
    }
L_0887DDA4:
    ctx.gpr[31] = (0x0887DDACu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DDACu) goto L_0887DDAC;
    return;
L_0887DDAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DDB4;
    }
L_0887DDB4:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
      if (branch_taken) {
          goto L_0887DE34;
      }
      goto L_0887DDC0;
    }
L_0887DDC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887DE24;
      }
      goto L_0887DDD0;
    }
L_0887DDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887DDE8;
      }
      goto L_0887DDE0;
    }
L_0887DDE0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    goto L_0887DDE8;
L_0887DDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887DE14;
      }
      goto L_0887DDF8;
    }
L_0887DDF8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x0887DE04u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DE04u) goto L_0887DE04;
    return;
L_0887DE04:
    ctx.gpr[31] = (0x0887DE0Cu);
    // nop
    goto L_0887D520;
L_0887DE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DE14;
    }
L_0887DE14:
    ctx.gpr[31] = (0x0887DE1Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DE1Cu) goto L_0887DE1C;
    return;
L_0887DE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DE24;
    }
L_0887DE24:
    ctx.gpr[31] = (0x0887DE2Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DE2Cu) goto L_0887DE2C;
    return;
L_0887DE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DE34;
    }
L_0887DE34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DE3C;
    }
L_0887DE3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887DE54;
      }
      goto L_0887DE4C;
    }
L_0887DE4C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    goto L_0887DE54;
L_0887DE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887DE7C;
      }
      goto L_0887DE60;
    }
L_0887DE60:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x0887DE6Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DE6Cu) goto L_0887DE6C;
    return;
L_0887DE6C:
    ctx.gpr[31] = (0x0887DE74u);
    // nop
    goto L_0887D520;
L_0887DE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DE7C;
    }
L_0887DE7C:
    ctx.gpr[31] = (0x0887DE84u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887DE84u) goto L_0887DE84;
    return;
L_0887DE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DE8C;
    }
L_0887DE8C:
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
        goto L_0887DEA4;
    }
    goto L_0887DE94;
L_0887DE94:
    ctx.gpr[31] = (0x0887DE9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887C728;
L_0887DE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DEA4;
    }
L_0887DEA4:
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
        goto L_0887DEE8;
    }
    goto L_0887DEAC;
L_0887DEAC:
    ctx.gpr[31] = (0x0887DEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 651u, 0x0892A2F4u>(ctx, &aot_mem) && ctx.pc == 0x0887DEB4u) goto L_0887DEB4;
    return;
L_0887DEB4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DEBC;
    }
L_0887DEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887DEC8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 645u, 0x0892A284u>(ctx, &aot_mem) && ctx.pc == 0x0887DEC8u) goto L_0887DEC8;
    return;
L_0887DEC8:
    ctx.gpr[31] = (0x0887DED0u);
    // nop
    goto L_0887CEEC;
L_0887DED0:
    ctx.gpr[31] = (0x0887DED8u);
    // nop
    goto L_0887CD94;
L_0887DED8:
    ctx.gpr[31] = (0x0887DEE0u);
    // nop
    goto L_0887CDC4;
L_0887DEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DEE8;
    }
L_0887DEE8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[19] = (1u << 16u);
      if (branch_taken) {
          goto L_0887DF6C;
      }
      goto L_0887DEF0;
    }
L_0887DEF0:
    ctx.gpr[31] = (0x0887DEF8u);
    // nop
    goto L_0887CE2C;
L_0887DEF8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DF00;
    }
L_0887DF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887DF1C;
      }
      goto L_0887DF10;
    }
L_0887DF10:
    ctx.gpr[31] = (0x0887DF18u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB44ECu;
    return;
L_0887DF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    goto L_0887DF1C;
L_0887DF1C:
    ctx.gpr[31] = (0x0887DF24u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    goto L_0887D384;
L_0887DF24:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23344));
    ctx.gpr[31] = (0x0887DF48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_0887DF48:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
      if (branch_taken) {
          goto L_0887DF64;
      }
      goto L_0887DF54;
    }
L_0887DF54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887DF64;
      }
      goto L_0887DF64;
    }
L_0887DF64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DF6C;
    }
L_0887DF6C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1196)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
        goto L_0887DFA8;
    }
    goto L_0887DF7C;
L_0887DF7C:
    ctx.gpr[31] = (0x0887DF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887D750;
L_0887DF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DF98;
    }
L_0887DF98:
    ctx.gpr[31] = (0x0887DFA0u);
    // nop
    goto L_0887D6B4;
L_0887DFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DFA8;
    }
L_0887DFA8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DFB0;
    }
L_0887DFB0:
    ctx.gpr[31] = (0x0887DFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 128u, 0x088BCDECu>(ctx, &aot_mem) && ctx.pc == 0x0887DFB8u) goto L_0887DFB8;
    return;
L_0887DFB8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887E014;
      }
      goto L_0887DFC0;
    }
L_0887DFC0:
    ctx.gpr[31] = (0x0887DFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 127u, 0x088BCDE4u>(ctx, &aot_mem) && ctx.pc == 0x0887DFC8u) goto L_0887DFC8;
    return;
L_0887DFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (22u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0887DFE8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23752));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887DFE8u) goto L_0887DFE8;
    return;
L_0887DFE8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (0u | 0u);
    goto L_0887DFF4;
L_0887DFF4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10756)));
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887E010;
    }
L_0887E010:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887E014;
L_0887E014:
    ctx.gpr[31] = (0x0887E01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 351u, 0x0887AB34u>(ctx, &aot_mem) && ctx.pc == 0x0887E01Cu) goto L_0887E01C;
    return;
L_0887E01C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E03C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887E068u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887E068u) goto L_0887E068;
    return;
L_0887E068:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (0u | 2300u);
    ctx.gpr[31] = (0x0887E088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887E088u) goto L_0887E088;
    return;
L_0887E088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16840u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16916u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17250u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17253u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (16928u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[3] = (17054u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[3] = (17207u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[8] = (17060u << 16u);
    ctx.gpr[3] = (16976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[8] = (16936u << 16u);
    ctx.gpr[3] = (17090u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[3] = (17104u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[8] = (17162u << 16u);
    ctx.gpr[3] = (16640u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[8] = (16656u << 16u);
    ctx.gpr[3] = (16980u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[8] = (17070u << 16u);
    ctx.gpr[12] = (17092u << 16u);
    ctx.gpr[3] = (17100u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[12]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (2220u << 16u);
    ctx.gpr[12] = (16576u << 16u);
    ctx.gpr[3] = (16984u << 16u);
    ctx.gpr[13] = (17094u << 16u);
    ctx.gpr[14] = (16512u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(0u);
    ctx.fpr[9] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[10] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[9] = (0u | 16u);
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.gpr[10] = (0u | 219u);
    ctx.fpr[23] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.gpr[11] = (0u | 210u);
    ctx.gpr[2] = (0u | 190u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-23272));
    goto L_0887E218;
L_0887E218:
    ctx.fpr[25] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[25] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[25])));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.fpr[27] = ctx.fpr[25] + ctx.fpr[15];
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(120), ctx.gpr[12]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(128), ctx.gpr[12]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(112));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[27] = ctx.fpr[25] + ctx.fpr[18];
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(488), ctx.gpr[12]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(484), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(496), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(480));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[27] = ctx.fpr[25] + ctx.fpr[0];
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(828), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(856), ctx.gpr[12]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(320));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(864), ctx.gpr[12]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(848));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[27] = ctx.fpr[25] + ctx.fpr[3];
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1216));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[27] = ctx.fpr[25] + ctx.fpr[7];
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1584));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[25] = ctx.fpr[25] + ctx.fpr[11];
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1952));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0887E218;
      }
      goto L_0887E60C;
    }
L_0887E60C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0887E614;
L_0887E614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0887E624u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0887E624u) goto L_0887E624;
    return;
L_0887E624:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0887E614;
      }
      goto L_0887E634;
    }
L_0887E634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2340u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887E69Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887E69Cu) goto L_0887E69C;
    return;
L_0887E69C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (0u | 2340u);
    ctx.gpr[31] = (0x0887E6BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887E6BCu) goto L_0887E6BC;
    return;
L_0887E6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10784)));
    ctx.gpr[31] = (0x0887E6D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887E6D4u) goto L_0887E6D4;
    return;
L_0887E6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17169u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16988u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (16976u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17064u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17208u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17088u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[4] = (17110u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23260));
    goto L_0887E7A4;
L_0887E7A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0887E7C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887E7C0u) goto L_0887E7C0;
    return;
L_0887E7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16936u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0887E838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(932));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887E838u) goto L_0887E838;
    return;
L_0887E838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0887E898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887E898u) goto L_0887E898;
    return;
L_0887E898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1624), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1628), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
        goto L_0887E9B4;
    }
    goto L_0887E8F4;
L_0887E8F4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1068));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1788));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887EA6C;
      }
      goto L_0887E9B4;
    }
L_0887E9B4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1068));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1788));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0887EA6C;
L_0887EA6C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887E7A4;
      }
      goto L_0887EA7C;
    }
L_0887EA7C:
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23320));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23304));
    goto L_0887EA94;
L_0887EA94:
    ctx.gpr[31] = (0x0887EA9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0887EA9Cu) goto L_0887EA9C;
    return;
L_0887EA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0887EAB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EAB4u) goto L_0887EAB4;
    return;
L_0887EAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0887EAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0887EAC4u) goto L_0887EAC4;
    return;
L_0887EAC4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887EA94;
      }
      goto L_0887EAD4;
    }
L_0887EAD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EB10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2700u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887EB64u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EB64u) goto L_0887EB64;
    return;
L_0887EB64:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (0u | 2700u);
    ctx.gpr[31] = (0x0887EB84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887EB84u) goto L_0887EB84;
    return;
L_0887EB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23260));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0887EBA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EBA0u) goto L_0887EBA0;
    return;
L_0887EBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17297u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16900u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10784));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x0887EC44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EC44u) goto L_0887EC44;
    return;
L_0887EC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17307u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17168u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887ECDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887ECDCu) goto L_0887ECDC;
    return;
L_0887ECDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (17362u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16728u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17198u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17299u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (17369u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(10816));
    goto L_0887ED8C;
L_0887ED8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0887EDA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EDA4u) goto L_0887EDA4;
    return;
L_0887EDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(544), 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[30] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(708));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0887EE4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EE4Cu) goto L_0887EE4C;
    return;
L_0887EE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1624), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1628), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1788));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887ED8C;
      }
      goto L_0887EEE0;
    }
L_0887EEE0:
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23320));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23256));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-23304));
    goto L_0887EF00;
L_0887EF00:
    ctx.gpr[31] = (0x0887EF08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0887EF08u) goto L_0887EF08;
    return;
L_0887EF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0887EF34;
      }
      goto L_0887EF1C;
    }
L_0887EF1C:
    ctx.gpr[31] = (0x0887EF24u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EF24u) goto L_0887EF24;
    return;
L_0887EF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0887EF48;
      }
      goto L_0887EF34;
    }
L_0887EF34:
    ctx.gpr[31] = (0x0887EF3Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EF3Cu) goto L_0887EF3C;
    return;
L_0887EF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0887EF48;
L_0887EF48:
    ctx.gpr[31] = (0x0887EF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0887EF50u) goto L_0887EF50;
    return;
L_0887EF50:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887EF00;
      }
      goto L_0887EF60;
    }
L_0887EF60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EFA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887F36C;
      }
      goto L_0887EFD4;
    }
L_0887EFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0887EFE8u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887EFE8u) goto L_0887EFE8;
    return;
L_0887EFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0887EFFCu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    goto L_0887CF34;
L_0887EFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887F008u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F008u) goto L_0887F008;
    return;
L_0887F008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F020u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F020u) goto L_0887F020;
    return;
L_0887F020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10784));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x0887F03Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887F03Cu) goto L_0887F03C;
    return;
L_0887F03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F04Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F04Cu) goto L_0887F04C;
    return;
L_0887F04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F064u) goto L_0887F064;
    return;
L_0887F064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x0887F080u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23328));
    goto L_0887CF90;
L_0887F080:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887F094u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F094u) goto L_0887F094;
    return;
L_0887F094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F0A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F0A4u) goto L_0887F0A4;
    return;
L_0887F0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10816));
    goto L_0887F0BC;
L_0887F0BC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887F0D0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F0D0u) goto L_0887F0D0;
    return;
L_0887F0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887F0E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887F0E8u) goto L_0887F0E8;
    return;
L_0887F0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887F0FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F0FCu) goto L_0887F0FC;
    return;
L_0887F0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0887F0BC;
      }
      goto L_0887F118;
    }
L_0887F118:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887F128u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F128u) goto L_0887F128;
    return;
L_0887F128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0887F13Cu);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1652));
    goto L_0887CF68;
L_0887F13C:
    ctx.gpr[31] = (0x0887F144u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887D210;
L_0887F144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887F150u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887F150u) goto L_0887F150;
    return;
L_0887F150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F160u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F160u) goto L_0887F160;
    return;
L_0887F160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1832));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F178u) goto L_0887F178;
    return;
L_0887F178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887F184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887CFB8;
L_0887F184:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F198u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1832));
    goto L_0887D138;
L_0887F198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F1A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F1A8u) goto L_0887F1A8;
    return;
L_0887F1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F1C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2012));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F1C0u) goto L_0887F1C0;
    return;
L_0887F1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(2012));
    ctx.gpr[31] = (0x0887F1DCu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23248));
    goto L_0887CFE4;
L_0887F1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0887F1F0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_0887D018;
L_0887F1F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0887F208u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F208u) goto L_0887F208;
    return;
L_0887F208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1980));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F218u) goto L_0887F218;
    return;
L_0887F218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F230u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F230u) goto L_0887F230;
    return;
L_0887F230:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887F244u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F244u) goto L_0887F244;
    return;
L_0887F244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887F250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887D05C;
L_0887F250:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887F25Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0887D228;
L_0887F25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2192));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887F27Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23240));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F27Cu) goto L_0887F27C;
    return;
L_0887F27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F28Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2160));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F28Cu) goto L_0887F28C;
    return;
L_0887F28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F2A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2372));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F2A4u) goto L_0887F2A4;
    return;
L_0887F2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887F2B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887D084;
L_0887F2B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F2C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2372));
    goto L_0887D228;
L_0887F2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F2D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2340));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F2D4u) goto L_0887F2D4;
    return;
L_0887F2D4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887F2E8u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F2E8u) goto L_0887F2E8;
    return;
L_0887F2E8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887F2FCu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F2FCu) goto L_0887F2FC;
    return;
L_0887F2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[31] = (0x0887F308u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_0887D0AC;
L_0887F308:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887F314u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0887D228;
L_0887F314:
    ctx.gpr[4] = (0u | 904u);
    ctx.gpr[31] = (0x0887F320u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0887D228;
L_0887F320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2552));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F338u) goto L_0887F338;
    return;
L_0887F338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2552));
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887F35Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23232));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F35Cu) goto L_0887F35C;
    return;
L_0887F35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(10756)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x0887F36Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2520));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F36Cu) goto L_0887F36C;
    return;
L_0887F36C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F390:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10624)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10628), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F3A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887F3D4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F3D4u) goto L_0887F3D4;
    return;
L_0887F3D4:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(10872), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887F3ECu);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F3ECu) goto L_0887F3EC;
    return;
L_0887F3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887F408u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F408u) goto L_0887F408;
    return;
L_0887F408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887F428u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F428u) goto L_0887F428;
    return;
L_0887F428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[31] = (0x0887F458u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F458u) goto L_0887F458;
    return;
L_0887F458:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
      if (branch_taken) {
          goto L_0887F470;
      }
      goto L_0887F464;
    }
L_0887F464:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887F478;
      }
      goto L_0887F470;
    }
L_0887F470:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    goto L_0887F478;
L_0887F478:
    ctx.gpr[31] = (0x0887F480u);
    // nop
    goto L_0887FF04;
L_0887F480:
    ctx.gpr[31] = (0x0887F488u);
    // nop
    goto L_0887FAC8;
L_0887F488:
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
L_0887F4A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F4B8u);
    // nop
    goto L_0887F660;
L_0887F4B8:
    ctx.gpr[31] = (0x0887F4C0u);
    // nop
    goto L_0887FBF4;
L_0887F4C0:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887F4DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F4DCu) goto L_0887F4DC;
    return;
L_0887F4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887F4F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F4F4u) goto L_0887F4F4;
    return;
L_0887F4F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10872), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F50C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F58C;
      }
      goto L_0887F534;
    }
L_0887F534:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
        goto L_0887F564;
    }
    goto L_0887F548;
L_0887F548:
    ctx.gpr[31] = (0x0887F550u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F550u) goto L_0887F550;
    return;
L_0887F550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887F55Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0887FCE4;
L_0887F55C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887F608;
      }
      goto L_0887F564;
    }
L_0887F564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887F57Cu);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F57Cu) goto L_0887F57C;
    return;
L_0887F57C:
    ctx.gpr[31] = (0x0887F584u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887F584u) goto L_0887F584;
    return;
L_0887F584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F608;
      }
      goto L_0887F58C;
    }
L_0887F58C:
    ctx.gpr[6] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[18] = (2221u << 16u);
      if (branch_taken) {
          goto L_0887F600;
      }
      goto L_0887F598;
    }
L_0887F598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
        goto L_0887F5D8;
    }
    goto L_0887F5A8;
L_0887F5A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0887F5BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F5BCu) goto L_0887F5BC;
    return;
L_0887F5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0887F5D0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887F5D0u) goto L_0887F5D0;
    return;
L_0887F5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F608;
      }
      goto L_0887F5D8;
    }
L_0887F5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887F5F0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F5F0u) goto L_0887F5F0;
    return;
L_0887F5F0:
    ctx.gpr[31] = (0x0887F5F8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887F5F8u) goto L_0887F5F8;
    return;
L_0887F5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F608;
      }
      goto L_0887F600;
    }
L_0887F600:
    ctx.gpr[31] = (0x0887F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 45u, 0x088806F8u>(ctx, &aot_mem) && ctx.pc == 0x0887F608u) goto L_0887F608;
    return;
L_0887F608:
    ctx.gpr[31] = (0x0887F610u);
    // nop
    goto L_0887F6DC;
L_0887F610:
    ctx.gpr[31] = (0x0887F618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 34u, 0x088804CCu>(ctx, &aot_mem) && ctx.pc == 0x0887F618u) goto L_0887F618;
    return;
L_0887F618:
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
L_0887F63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F64Cu);
    // nop
    goto L_0887FC70;
L_0887F64C:
    ctx.gpr[31] = (0x0887F654u);
    // nop
    goto L_0887FA24;
L_0887F654:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0887F688;
L_0887F688:
    ctx.gpr[31] = (0x0887F690u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F690u) goto L_0887F690;
    return;
L_0887F690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0887F688;
      }
      goto L_0887F6A8;
    }
L_0887F6A8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887F6BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F6BCu) goto L_0887F6BC;
    return;
L_0887F6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
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
L_0887F6DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F72Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F72Cu) goto L_0887F72C;
    return;
L_0887F72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23020));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887F750u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F750u) goto L_0887F750;
    return;
L_0887F750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[31] = (0x0887F75Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F75Cu) goto L_0887F75C;
    return;
L_0887F75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[31] = (0x0887F768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 171u, 0x08844E28u>(ctx, &aot_mem) && ctx.pc == 0x0887F768u) goto L_0887F768;
    return;
L_0887F768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0887F784u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F784u) goto L_0887F784;
    return;
L_0887F784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10876));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x0887F7A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F7A4u) goto L_0887F7A4;
    return;
L_0887F7A4:
    ctx.gpr[31] = (0x0887F7ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F7ACu) goto L_0887F7AC;
    return;
L_0887F7AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887F7F4;
      }
      goto L_0887F7E8;
    }
L_0887F7E8:
    ctx.gpr[4] = (16880u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887F7FC;
      }
      goto L_0887F7F4;
    }
L_0887F7F4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0887F7FC;
L_0887F7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[31] = (0x0887F808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887F808u) goto L_0887F808;
    return;
L_0887F808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_0887F838;
      }
      goto L_0887F824;
    }
L_0887F824:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887F84C;
      }
      goto L_0887F838;
    }
L_0887F838:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    goto L_0887F84C;
L_0887F84C:
    ctx.gpr[31] = (0x0887F854u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F854u) goto L_0887F854;
    return;
L_0887F854:
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0887F870;
L_0887F870:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0887F890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887F890u) goto L_0887F890;
    return;
L_0887F890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0887F8A8u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    goto L_0887FCCC;
L_0887F8A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887F8B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887F8B4u) goto L_0887F8B4;
    return;
L_0887F8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[31] = (0x0887F8C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887F8C0u) goto L_0887F8C0;
    return;
L_0887F8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[8];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0887F924;
      }
      goto L_0887F8E8;
    }
L_0887F8E8:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0887F928;
    }
    goto L_0887F8F0;
L_0887F8F0:
    ctx.gpr[30] = (0u | 128u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_0887F98C;
      }
      goto L_0887F924;
    }
L_0887F924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887F928;
L_0887F928:
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
        goto L_0887F964;
    }
    goto L_0887F930;
L_0887F930:
    ctx.gpr[22] = (0u | 242u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[21] = (0u & 255u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_0887F98C;
      }
      goto L_0887F964;
    }
L_0887F964:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    goto L_0887F98C;
L_0887F98C:
    ctx.gpr[31] = (0x0887F994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0887F994u) goto L_0887F994;
    return;
L_0887F994:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887F870;
      }
      goto L_0887F9A4;
    }
L_0887F9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FA24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887FA48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887FA48u) goto L_0887FA48;
    return;
L_0887FA48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
      if (branch_taken) {
          goto L_0887FA5C;
      }
      goto L_0887FA50;
    }
L_0887FA50:
    ctx.gpr[31] = (0x0887FA58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887FA58u) goto L_0887FA58;
    return;
L_0887FA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    goto L_0887FA5C;
L_0887FA5C:
    ctx.gpr[31] = (0x0887FA64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887FA64u) goto L_0887FA64;
    return;
L_0887FA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FA88;
      }
      goto L_0887FA78;
    }
L_0887FA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0887FA84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887FA84u) goto L_0887FA84;
    return;
L_0887FA84:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887FA88;
L_0887FA88:
    ctx.gpr[17] = (0u | 0u);
    goto L_0887FA8C;
L_0887FA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887FAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0887FAA0u) goto L_0887FAA0;
    return;
L_0887FAA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0887FA8C;
      }
      goto L_0887FAB0;
    }
L_0887FAB0:
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
L_0887FAC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887FAECu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887FAECu) goto L_0887FAEC;
    return;
L_0887FAEC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[6] = (0u | 368u);
    ctx.gpr[31] = (0x0887FB0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887FB0Cu) goto L_0887FB0C;
    return;
L_0887FB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[31] = (0x0887FB18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 47u, 0x088386E0u>(ctx, &aot_mem) && ctx.pc == 0x0887FB18u) goto L_0887FB18;
    return;
L_0887FB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FB28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 168u, 0x08839518u>(ctx, &aot_mem) && ctx.pc == 0x0887FB28u) goto L_0887FB28;
    return;
L_0887FB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FB38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 175u, 0x08839614u>(ctx, &aot_mem) && ctx.pc == 0x0887FB38u) goto L_0887FB38;
    return;
L_0887FB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (16936u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (16768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FBE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0887FBE4u) goto L_0887FBE4;
    return;
L_0887FBE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FBF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887FC10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 50u, 0x08838774u>(ctx, &aot_mem) && ctx.pc == 0x0887FC10u) goto L_0887FC10;
    return;
L_0887FC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FC20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 171u, 0x088395DCu>(ctx, &aot_mem) && ctx.pc == 0x0887FC20u) goto L_0887FC20;
    return;
L_0887FC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FC30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 178u, 0x088396DCu>(ctx, &aot_mem) && ctx.pc == 0x0887FC30u) goto L_0887FC30;
    return;
L_0887FC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FC40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0887FC40u) goto L_0887FC40;
    return;
L_0887FC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0887FC58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887FC58u) goto L_0887FC58;
    return;
L_0887FC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FC70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887FC8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 54u, 0x088387ACu>(ctx, &aot_mem) && ctx.pc == 0x0887FC8Cu) goto L_0887FC8C;
    return;
L_0887FC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FC9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 173u, 0x088395F8u>(ctx, &aot_mem) && ctx.pc == 0x0887FC9Cu) goto L_0887FC9C;
    return;
L_0887FC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FCACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 180u, 0x088396F8u>(ctx, &aot_mem) && ctx.pc == 0x0887FCACu) goto L_0887FCAC;
    return;
L_0887FCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0887FCBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0887FCBCu) goto L_0887FCBC;
    return;
L_0887FCBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FCCC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10876));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FCE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887FD24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887FD24u) goto L_0887FD24;
    return;
L_0887FD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (0u | 41u);
    ctx.gpr[5] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 42u);
      if (branch_taken) {
          goto L_0887FDAC;
      }
      goto L_0887FD3C;
    }
L_0887FD3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887FD70;
      }
      goto L_0887FD4C;
    }
L_0887FD4C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887FD5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23016));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x0887FD5Cu) goto L_0887FD5C;
    return;
L_0887FD5C:
    ctx.gpr[31] = (0x0887FD64u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FD64u) goto L_0887FD64;
    return;
L_0887FD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887FDBC;
      }
      goto L_0887FD70;
    }
L_0887FD70:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887FDBC;
      }
      goto L_0887FD78;
    }
L_0887FD78:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0887FDBC;
      }
      goto L_0887FD80;
    }
L_0887FD80:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887FD8Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0887FCCC;
L_0887FD8C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0887FD98u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x0887FD98u) goto L_0887FD98;
    return;
L_0887FD98:
    ctx.gpr[31] = (0x0887FDA0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FDA0u) goto L_0887FDA0;
    return;
L_0887FDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887FDBC;
      }
      goto L_0887FDAC;
    }
L_0887FDAC:
    ctx.gpr[31] = (0x0887FDB4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FDB4u) goto L_0887FDB4;
    return;
L_0887FDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887FDBC;
L_0887FDBC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887FDEC;
      }
      goto L_0887FDC4;
    }
L_0887FDC4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887FDD0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887FDD0u) goto L_0887FDD0;
    return;
L_0887FDD0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0887FDE4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FDE4u) goto L_0887FDE4;
    return;
L_0887FDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887FDEC;
L_0887FDEC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0887FEC8;
      }
      goto L_0887FDF4;
    }
L_0887FDF4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0887FE94;
      }
      goto L_0887FDFC;
    }
L_0887FDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0887FE08u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887FE08u) goto L_0887FE08;
    return;
L_0887FE08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FE84;
      }
      goto L_0887FE14;
    }
L_0887FE14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FE4C;
      }
      goto L_0887FE20;
    }
L_0887FE20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0887FE30;
L_0887FE30:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
        goto L_0887FE3C;
    }
    goto L_0887FE3C;
L_0887FE3C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0887FE30;
      }
      goto L_0887FE4C;
    }
L_0887FE4C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887FE74;
      }
      goto L_0887FE54;
    }
L_0887FE54:
    ctx.gpr[31] = (0x0887FE5Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FE5Cu) goto L_0887FE5C;
    return;
L_0887FE5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887FE6Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887FE6Cu) goto L_0887FE6C;
    return;
L_0887FE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_0887FEC8;
      }
      goto L_0887FE74;
    }
L_0887FE74:
    ctx.gpr[31] = (0x0887FE7Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FE7Cu) goto L_0887FE7C;
    return;
L_0887FE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FEC8;
      }
      goto L_0887FE84;
    }
L_0887FE84:
    ctx.gpr[31] = (0x0887FE8Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0887FE8Cu) goto L_0887FE8C;
    return;
L_0887FE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FEC8;
      }
      goto L_0887FE94;
    }
L_0887FE94:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FEC8;
      }
      goto L_0887FE9C;
    }
L_0887FE9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887FEB0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0887FEB0u) goto L_0887FEB0;
    return;
L_0887FEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[31] = (0x0887FEC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0887FEC0u) goto L_0887FEC0;
    return;
L_0887FEC0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (0u | 2u);
        goto L_0887FEC8;
    }
    goto L_0887FEC8;
L_0887FEC8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0887FEF4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10872)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 8100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0887FF60u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887FF60u) goto L_0887FF60;
    return;
L_0887FF60:
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887FF7Cu);
    ctx.gpr[6] = (0u | 8100u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0887FF7Cu) goto L_0887FF7C;
    return;
L_0887FF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23020));
    ctx.gpr[31] = (0x0887FF9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0887FF9Cu) goto L_0887FF9C;
    return;
L_0887FF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0887FFC0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0887FFC0u) goto L_0887FFC0;
    return;
L_0887FFC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10872)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.pc = 0x08880000u; return;
}

void recomp_unit_0030(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0030_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_30(Runtime &runtime) {
    runtime.register_generated_unit(30u, 0x0887C000u, 16384u, &recomp_unit_0030, &recomp_unit_0030_entry);
    runtime.register_function(0x0887C000u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C008u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C024u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C05Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C064u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C06Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C078u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C07Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C084u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C094u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C09Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C110u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C130u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C330u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C340u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C350u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C368u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C390u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C398u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C404u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C40Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C42Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C43Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C454u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C460u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C480u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C48Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C494u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C510u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C530u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C550u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C560u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C570u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C608u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C610u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C624u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C644u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C67Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C704u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C728u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C758u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C764u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C778u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C788u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C790u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C800u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C818u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C854u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C884u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C90Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CEA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CEB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CEBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CECCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CED4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CEECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D05Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D084u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D110u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D118u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D120u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D138u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D164u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D18Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D198u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D210u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D228u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D270u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D284u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D30Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D310u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D31Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D324u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D338u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D354u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D384u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D414u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D430u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D448u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D460u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D498u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D510u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D520u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D544u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D614u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D638u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D648u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D698u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D710u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D73Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D750u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D780u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D790u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D798u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D810u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D824u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D82Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D878u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D984u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DED8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E014u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E01Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E03Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E068u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E088u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E218u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E60Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E614u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E624u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E634u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E64Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E69Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E898u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F008u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F020u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F03Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F064u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F080u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F094u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F118u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F13Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F144u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F150u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F160u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F178u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F184u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F198u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F208u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F218u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F230u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F244u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F250u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F25Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F27Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F308u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F314u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F320u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F338u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F35Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F36Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F390u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F408u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F428u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F458u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F464u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F470u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F480u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F50Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F534u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F548u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F550u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F55Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F564u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F57Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F584u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F58Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F600u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F608u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F610u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F618u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F63Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F64Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F688u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F750u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F75Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F768u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F784u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F808u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F824u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F84Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F854u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F890u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F924u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F928u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F930u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F964u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F98Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F994u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFC0u, &recomp_unit_0030, "recomp_unit_0030");
}
} // namespace psprecomp

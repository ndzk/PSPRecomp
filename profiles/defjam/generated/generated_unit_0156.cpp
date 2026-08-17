#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0156[4090] = {
    1, 0, 0, 0, 2, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 30, 0, 0, 31, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0,
    41, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0,
    64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72,
    0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 129, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0,
    0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0,
    176, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 197, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 204, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0,
    215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 221, 0, 222, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 235, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 252, 0, 0, 253, 0,
    0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259,
    0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0,
    267, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0,
    0, 288, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0,
    298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    306, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316,
    0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 322, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 0,
    344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356,
    0, 357, 0, 358, 0, 359, 0, 360, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 379, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 389, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399,
    0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 405, 0, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 411, 0, 0, 412, 0, 413,
    0, 414, 0, 0, 0, 415, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0,
    0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0,
    0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470,
    471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0,
    0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 484, 0, 0, 485, 486, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0,
    491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 494, 0, 0, 495, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 502,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0,
    0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    517, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 531, 0, 532, 0,
    533, 0, 534, 0, 535, 536, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 555, 0, 0, 0, 556,
    0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 561, 562, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0,
    571, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0,
    0, 579, 580, 0, 0, 0, 0, 581, 582, 0, 0, 0, 0, 583, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0,
    0, 0, 587, 0, 588, 0, 0, 0, 589, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0,
    0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 601, 0, 0, 0, 0, 602, 603,
    0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608,
    0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0,
    0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620,
    0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625,
    0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0,
    632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0,
    0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646,
};
void recomp_unit_0156_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A74000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0156[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A74000;
    case 2u: goto L_08A74010;
    case 3u: goto L_08A74014;
    case 4u: goto L_08A7401C;
    case 5u: goto L_08A74028;
    case 6u: goto L_08A74038;
    case 7u: goto L_08A74050;
    case 8u: goto L_08A74084;
    case 9u: goto L_08A74134;
    case 10u: goto L_08A74138;
    case 11u: goto L_08A74140;
    case 12u: goto L_08A74150;
    case 13u: goto L_08A74160;
    case 14u: goto L_08A74178;
    case 15u: goto L_08A74184;
    case 16u: goto L_08A741AC;
    case 17u: goto L_08A741B4;
    case 18u: goto L_08A741C0;
    case 19u: goto L_08A741C8;
    case 20u: goto L_08A741D0;
    case 21u: goto L_08A741D4;
    case 22u: goto L_08A741DC;
    case 23u: goto L_08A7421C;
    case 24u: goto L_08A7422C;
    case 25u: goto L_08A74234;
    case 26u: goto L_08A7423C;
    case 27u: goto L_08A7424C;
    case 28u: goto L_08A7425C;
    case 29u: goto L_08A74264;
    case 30u: goto L_08A74268;
    case 31u: goto L_08A74274;
    case 32u: goto L_08A7427C;
    case 33u: goto L_08A742E0;
    case 34u: goto L_08A742EC;
    case 35u: goto L_08A74334;
    case 36u: goto L_08A7433C;
    case 37u: goto L_08A74354;
    case 38u: goto L_08A74358;
    case 39u: goto L_08A74360;
    case 40u: goto L_08A74368;
    case 41u: goto L_08A74380;
    case 42u: goto L_08A74384;
    case 43u: goto L_08A743A0;
    case 44u: goto L_08A743F8;
    case 45u: goto L_08A74404;
    case 46u: goto L_08A744C0;
    case 47u: goto L_08A744CC;
    case 48u: goto L_08A744D8;
    case 49u: goto L_08A744E0;
    case 50u: goto L_08A744F8;
    case 51u: goto L_08A74504;
    case 52u: goto L_08A74538;
    case 53u: goto L_08A74570;
    case 54u: goto L_08A74574;
    case 55u: goto L_08A745C4;
    case 56u: goto L_08A745C8;
    case 57u: goto L_08A745D4;
    case 58u: goto L_08A74608;
    case 59u: goto L_08A74628;
    case 60u: goto L_08A7463C;
    case 61u: goto L_08A7465C;
    case 62u: goto L_08A74664;
    case 63u: goto L_08A74678;
    case 64u: goto L_08A74680;
    case 65u: goto L_08A74694;
    case 66u: goto L_08A746A8;
    case 67u: goto L_08A746AC;
    case 68u: goto L_08A746B4;
    case 69u: goto L_08A746F8;
    case 70u: goto L_08A74760;
    case 71u: goto L_08A74774;
    case 72u: goto L_08A7477C;
    case 73u: goto L_08A74790;
    case 74u: goto L_08A7479C;
    case 75u: goto L_08A747B8;
    case 76u: goto L_08A748E4;
    case 77u: goto L_08A748EC;
    case 78u: goto L_08A748F4;
    case 79u: goto L_08A74904;
    case 80u: goto L_08A74924;
    case 81u: goto L_08A74948;
    case 82u: goto L_08A74950;
    case 83u: goto L_08A74958;
    case 84u: goto L_08A74970;
    case 85u: goto L_08A74980;
    case 86u: goto L_08A74988;
    case 87u: goto L_08A74998;
    case 88u: goto L_08A749A0;
    case 89u: goto L_08A749B0;
    case 90u: goto L_08A749B8;
    case 91u: goto L_08A749C8;
    case 92u: goto L_08A749D0;
    case 93u: goto L_08A749E0;
    case 94u: goto L_08A749E8;
    case 95u: goto L_08A749F8;
    case 96u: goto L_08A74A00;
    case 97u: goto L_08A74BA0;
    case 98u: goto L_08A74D30;
    case 99u: goto L_08A74EA4;
    case 100u: goto L_08A74ECC;
    case 101u: goto L_08A74ED8;
    case 102u: goto L_08A74EE0;
    case 103u: goto L_08A74EE8;
    case 104u: goto L_08A74F0C;
    case 105u: goto L_08A74F4C;
    case 106u: goto L_08A74F80;
    case 107u: goto L_08A74F98;
    case 108u: goto L_08A74FA0;
    case 109u: goto L_08A74FA8;
    case 110u: goto L_08A74FC0;
    case 111u: goto L_08A74FD0;
    case 112u: goto L_08A74FE0;
    case 113u: goto L_08A74FE8;
    case 114u: goto L_08A7501C;
    case 115u: goto L_08A75028;
    case 116u: goto L_08A7505C;
    case 117u: goto L_08A75064;
    case 118u: goto L_08A7506C;
    case 119u: goto L_08A75098;
    case 120u: goto L_08A7509C;
    case 121u: goto L_08A750C8;
    case 122u: goto L_08A750D4;
    case 123u: goto L_08A750DC;
    case 124u: goto L_08A750F0;
    case 125u: goto L_08A750F8;
    case 126u: goto L_08A7512C;
    case 127u: goto L_08A75148;
    case 128u: goto L_08A75174;
    case 129u: goto L_08A7518C;
    case 130u: goto L_08A75190;
    case 131u: goto L_08A75198;
    case 132u: goto L_08A751AC;
    case 133u: goto L_08A751B4;
    case 134u: goto L_08A751B8;
    case 135u: goto L_08A751C0;
    case 136u: goto L_08A751F4;
    case 137u: goto L_08A75228;
    case 138u: goto L_08A75264;
    case 139u: goto L_08A75280;
    case 140u: goto L_08A7528C;
    case 141u: goto L_08A7529C;
    case 142u: goto L_08A752B0;
    case 143u: goto L_08A752B8;
    case 144u: goto L_08A752D4;
    case 145u: goto L_08A752DC;
    case 146u: goto L_08A752E4;
    case 147u: goto L_08A752F8;
    case 148u: goto L_08A75304;
    case 149u: goto L_08A7530C;
    case 150u: goto L_08A75314;
    case 151u: goto L_08A7531C;
    case 152u: goto L_08A75324;
    case 153u: goto L_08A75334;
    case 154u: goto L_08A75340;
    case 155u: goto L_08A7534C;
    case 156u: goto L_08A75354;
    case 157u: goto L_08A7535C;
    case 158u: goto L_08A75364;
    case 159u: goto L_08A7537C;
    case 160u: goto L_08A7539C;
    case 161u: goto L_08A753C8;
    case 162u: goto L_08A75408;
    case 163u: goto L_08A75414;
    case 164u: goto L_08A7542C;
    case 165u: goto L_08A7544C;
    case 166u: goto L_08A7547C;
    case 167u: goto L_08A75488;
    case 168u: goto L_08A754A4;
    case 169u: goto L_08A754A8;
    case 170u: goto L_08A754C0;
    case 171u: goto L_08A754CC;
    case 172u: goto L_08A754D4;
    case 173u: goto L_08A754E0;
    case 174u: goto L_08A754EC;
    case 175u: goto L_08A754F8;
    case 176u: goto L_08A75500;
    case 177u: goto L_08A75504;
    case 178u: goto L_08A75528;
    case 179u: goto L_08A75580;
    case 180u: goto L_08A7558C;
    case 181u: goto L_08A755C8;
    case 182u: goto L_08A755D4;
    case 183u: goto L_08A755E0;
    case 184u: goto L_08A7560C;
    case 185u: goto L_08A75638;
    case 186u: goto L_08A75644;
    case 187u: goto L_08A75650;
    case 188u: goto L_08A75684;
    case 189u: goto L_08A75690;
    case 190u: goto L_08A75698;
    case 191u: goto L_08A756A4;
    case 192u: goto L_08A756A8;
    case 193u: goto L_08A756BC;
    case 194u: goto L_08A756CC;
    case 195u: goto L_08A756D8;
    case 196u: goto L_08A756EC;
    case 197u: goto L_08A7570C;
    case 198u: goto L_08A75710;
    case 199u: goto L_08A75718;
    case 200u: goto L_08A7573C;
    case 201u: goto L_08A75740;
    case 202u: goto L_08A75750;
    case 203u: goto L_08A75764;
    case 204u: goto L_08A75768;
    case 205u: goto L_08A75788;
    case 206u: goto L_08A757A8;
    case 207u: goto L_08A757F8;
    case 208u: goto L_08A75820;
    case 209u: goto L_08A75840;
    case 210u: goto L_08A75848;
    case 211u: goto L_08A75854;
    case 212u: goto L_08A7585C;
    case 213u: goto L_08A75864;
    case 214u: goto L_08A7586C;
    case 215u: goto L_08A75880;
    case 216u: goto L_08A75888;
    case 217u: goto L_08A75890;
    case 218u: goto L_08A75898;
    case 219u: goto L_08A758A4;
    case 220u: goto L_08A758B0;
    case 221u: goto L_08A758B8;
    case 222u: goto L_08A758C0;
    case 223u: goto L_08A758C4;
    case 224u: goto L_08A758DC;
    case 225u: goto L_08A75908;
    case 226u: goto L_08A75918;
    case 227u: goto L_08A75930;
    case 228u: goto L_08A75950;
    case 229u: goto L_08A75968;
    case 230u: goto L_08A759E4;
    case 231u: goto L_08A75A00;
    case 232u: goto L_08A75A30;
    case 233u: goto L_08A75A54;
    case 234u: goto L_08A75A60;
    case 235u: goto L_08A75A64;
    case 236u: goto L_08A75A74;
    case 237u: goto L_08A75A8C;
    case 238u: goto L_08A75A94;
    case 239u: goto L_08A75AC0;
    case 240u: goto L_08A75AD4;
    case 241u: goto L_08A75AEC;
    case 242u: goto L_08A75B00;
    case 243u: goto L_08A75B18;
    case 244u: goto L_08A75B30;
    case 245u: goto L_08A75B44;
    case 246u: goto L_08A75B58;
    case 247u: goto L_08A75B74;
    case 248u: goto L_08A75B88;
    case 249u: goto L_08A75B9C;
    case 250u: goto L_08A75BAC;
    case 251u: goto L_08A75BE8;
    case 252u: goto L_08A75BEC;
    case 253u: goto L_08A75BF8;
    case 254u: goto L_08A75C04;
    case 255u: goto L_08A75C18;
    case 256u: goto L_08A75C40;
    case 257u: goto L_08A75C54;
    case 258u: goto L_08A75C6C;
    case 259u: goto L_08A75C7C;
    case 260u: goto L_08A75C84;
    case 261u: goto L_08A75C98;
    case 262u: goto L_08A75CA0;
    case 263u: goto L_08A75CAC;
    case 264u: goto L_08A75CB0;
    case 265u: goto L_08A75CEC;
    case 266u: goto L_08A75CF0;
    case 267u: goto L_08A75D00;
    case 268u: goto L_08A75D04;
    case 269u: goto L_08A75D1C;
    case 270u: goto L_08A75D28;
    case 271u: goto L_08A75D44;
    case 272u: goto L_08A75D74;
    case 273u: goto L_08A75DB4;
    case 274u: goto L_08A75DC4;
    case 275u: goto L_08A75DE4;
    case 276u: goto L_08A75DF4;
    case 277u: goto L_08A75E14;
    case 278u: goto L_08A75E40;
    case 279u: goto L_08A75E58;
    case 280u: goto L_08A75E84;
    case 281u: goto L_08A75E90;
    case 282u: goto L_08A75EA0;
    case 283u: goto L_08A75EC4;
    case 284u: goto L_08A75ECC;
    case 285u: goto L_08A75ED4;
    case 286u: goto L_08A75EE0;
    case 287u: goto L_08A75EF8;
    case 288u: goto L_08A75F04;
    case 289u: goto L_08A75F10;
    case 290u: goto L_08A75F18;
    case 291u: goto L_08A75F24;
    case 292u: goto L_08A75F38;
    case 293u: goto L_08A75F44;
    case 294u: goto L_08A75F4C;
    case 295u: goto L_08A75F58;
    case 296u: goto L_08A75F6C;
    case 297u: goto L_08A75F78;
    case 298u: goto L_08A75F80;
    case 299u: goto L_08A75F8C;
    case 300u: goto L_08A75FA0;
    case 301u: goto L_08A75FB4;
    case 302u: goto L_08A75FC0;
    case 303u: goto L_08A75FC8;
    case 304u: goto L_08A75FD4;
    case 305u: goto L_08A75FEC;
    case 306u: goto L_08A76000;
    case 307u: goto L_08A7600C;
    case 308u: goto L_08A76018;
    case 309u: goto L_08A76020;
    case 310u: goto L_08A7602C;
    case 311u: goto L_08A76038;
    case 312u: goto L_08A76044;
    case 313u: goto L_08A7604C;
    case 314u: goto L_08A76058;
    case 315u: goto L_08A7606C;
    case 316u: goto L_08A7607C;
    case 317u: goto L_08A76088;
    case 318u: goto L_08A76090;
    case 319u: goto L_08A76098;
    case 320u: goto L_08A760A0;
    case 321u: goto L_08A760A8;
    case 322u: goto L_08A760AC;
    case 323u: goto L_08A760B0;
    case 324u: goto L_08A760B8;
    case 325u: goto L_08A760D8;
    case 326u: goto L_08A760F0;
    case 327u: goto L_08A76120;
    case 328u: goto L_08A76138;
    case 329u: goto L_08A76148;
    case 330u: goto L_08A76158;
    case 331u: goto L_08A76180;
    case 332u: goto L_08A76194;
    case 333u: goto L_08A761A0;
    case 334u: goto L_08A761AC;
    case 335u: goto L_08A761BC;
    case 336u: goto L_08A761D8;
    case 337u: goto L_08A761F4;
    case 338u: goto L_08A76200;
    case 339u: goto L_08A7622C;
    case 340u: goto L_08A76240;
    case 341u: goto L_08A7624C;
    case 342u: goto L_08A76270;
    case 343u: goto L_08A76274;
    case 344u: goto L_08A76280;
    case 345u: goto L_08A76298;
    case 346u: goto L_08A762CC;
    case 347u: goto L_08A764D8;
    case 348u: goto L_08A76724;
    case 349u: goto L_08A76774;
    case 350u: goto L_08A76790;
    case 351u: goto L_08A767A0;
    case 352u: goto L_08A767A8;
    case 353u: goto L_08A767B0;
    case 354u: goto L_08A767BC;
    case 355u: goto L_08A767CC;
    case 356u: goto L_08A767FC;
    case 357u: goto L_08A76804;
    case 358u: goto L_08A7680C;
    case 359u: goto L_08A76814;
    case 360u: goto L_08A7681C;
    case 361u: goto L_08A76820;
    case 362u: goto L_08A7682C;
    case 363u: goto L_08A76858;
    case 364u: goto L_08A768AC;
    case 365u: goto L_08A768B4;
    case 366u: goto L_08A768C8;
    case 367u: goto L_08A768F4;
    case 368u: goto L_08A76908;
    case 369u: goto L_08A76924;
    case 370u: goto L_08A76954;
    case 371u: goto L_08A76974;
    case 372u: goto L_08A76980;
    case 373u: goto L_08A76994;
    case 374u: goto L_08A769BC;
    case 375u: goto L_08A769E4;
    case 376u: goto L_08A76A04;
    case 377u: goto L_08A76A14;
    case 378u: goto L_08A76A30;
    case 379u: goto L_08A76A34;
    case 380u: goto L_08A76A38;
    case 381u: goto L_08A76A44;
    case 382u: goto L_08A76A58;
    case 383u: goto L_08A76A60;
    case 384u: goto L_08A76A78;
    case 385u: goto L_08A76A90;
    case 386u: goto L_08A76AA0;
    case 387u: goto L_08A76AB0;
    case 388u: goto L_08A76AC4;
    case 389u: goto L_08A76AC8;
    case 390u: goto L_08A76ACC;
    case 391u: goto L_08A76ADC;
    case 392u: goto L_08A76B0C;
    case 393u: goto L_08A76B1C;
    case 394u: goto L_08A76B28;
    case 395u: goto L_08A76B38;
    case 396u: goto L_08A76B44;
    case 397u: goto L_08A76B60;
    case 398u: goto L_08A76B68;
    case 399u: goto L_08A76B7C;
    case 400u: goto L_08A76B84;
    case 401u: goto L_08A76B8C;
    case 402u: goto L_08A76B94;
    case 403u: goto L_08A76B9C;
    case 404u: goto L_08A76BA4;
    case 405u: goto L_08A76BA8;
    case 406u: goto L_08A76BB4;
    case 407u: goto L_08A76BBC;
    case 408u: goto L_08A76BC4;
    case 409u: goto L_08A76BD0;
    case 410u: goto L_08A76BE4;
    case 411u: goto L_08A76BE8;
    case 412u: goto L_08A76BF4;
    case 413u: goto L_08A76BFC;
    case 414u: goto L_08A76C04;
    case 415u: goto L_08A76C14;
    case 416u: goto L_08A76C18;
    case 417u: goto L_08A76C20;
    case 418u: goto L_08A76C28;
    case 419u: goto L_08A76C40;
    case 420u: goto L_08A76C64;
    case 421u: goto L_08A76C78;
    case 422u: goto L_08A76C80;
    case 423u: goto L_08A76C90;
    case 424u: goto L_08A76CD4;
    case 425u: goto L_08A76D00;
    case 426u: goto L_08A76D14;
    case 427u: goto L_08A76D30;
    case 428u: goto L_08A76D3C;
    case 429u: goto L_08A76D50;
    case 430u: goto L_08A76D64;
    case 431u: goto L_08A76D74;
    case 432u: goto L_08A76DBC;
    case 433u: goto L_08A76DF8;
    case 434u: goto L_08A76E0C;
    case 435u: goto L_08A76E38;
    case 436u: goto L_08A76E48;
    case 437u: goto L_08A76E50;
    case 438u: goto L_08A76E54;
    case 439u: goto L_08A76E5C;
    case 440u: goto L_08A76E64;
    case 441u: goto L_08A76E7C;
    case 442u: goto L_08A76EBC;
    case 443u: goto L_08A76F00;
    case 444u: goto L_08A76F54;
    case 445u: goto L_08A76F60;
    case 446u: goto L_08A76F74;
    case 447u: goto L_08A76F84;
    case 448u: goto L_08A76F94;
    case 449u: goto L_08A76FA8;
    case 450u: goto L_08A76FC0;
    case 451u: goto L_08A76FCC;
    case 452u: goto L_08A76FDC;
    case 453u: goto L_08A76FE8;
    case 454u: goto L_08A76FF4;
    case 455u: goto L_08A77008;
    case 456u: goto L_08A77010;
    case 457u: goto L_08A7702C;
    case 458u: goto L_08A77030;
    case 459u: goto L_08A77044;
    case 460u: goto L_08A77068;
    case 461u: goto L_08A77070;
    case 462u: goto L_08A77084;
    case 463u: goto L_08A770A0;
    case 464u: goto L_08A770A8;
    case 465u: goto L_08A770AC;
    case 466u: goto L_08A770B8;
    case 467u: goto L_08A770C4;
    case 468u: goto L_08A770D8;
    case 469u: goto L_08A770E0;
    case 470u: goto L_08A770FC;
    case 471u: goto L_08A77100;
    case 472u: goto L_08A77108;
    case 473u: goto L_08A77138;
    case 474u: goto L_08A77168;
    case 475u: goto L_08A77174;
    case 476u: goto L_08A77180;
    case 477u: goto L_08A771A4;
    case 478u: goto L_08A771AC;
    case 479u: goto L_08A771C4;
    case 480u: goto L_08A771E4;
    case 481u: goto L_08A771F0;
    case 482u: goto L_08A77204;
    case 483u: goto L_08A7722C;
    case 484u: goto L_08A77230;
    case 485u: goto L_08A7723C;
    case 486u: goto L_08A77240;
    case 487u: goto L_08A77250;
    case 488u: goto L_08A7725C;
    case 489u: goto L_08A77264;
    case 490u: goto L_08A77270;
    case 491u: goto L_08A77280;
    case 492u: goto L_08A77290;
    case 493u: goto L_08A772B0;
    case 494u: goto L_08A772B4;
    case 495u: goto L_08A772C0;
    case 496u: goto L_08A772C4;
    case 497u: goto L_08A772D8;
    case 498u: goto L_08A772E4;
    case 499u: goto L_08A77310;
    case 500u: goto L_08A7734C;
    case 501u: goto L_08A77378;
    case 502u: goto L_08A7737C;
    case 503u: goto L_08A773C0;
    case 504u: goto L_08A773C8;
    case 505u: goto L_08A773D0;
    case 506u: goto L_08A773D8;
    case 507u: goto L_08A773E0;
    case 508u: goto L_08A773E8;
    case 509u: goto L_08A773F0;
    case 510u: goto L_08A77404;
    case 511u: goto L_08A77420;
    case 512u: goto L_08A7742C;
    case 513u: goto L_08A77440;
    case 514u: goto L_08A7744C;
    case 515u: goto L_08A7746C;
    case 516u: goto L_08A77490;
    case 517u: goto L_08A77500;
    case 518u: goto L_08A77508;
    case 519u: goto L_08A77514;
    case 520u: goto L_08A7751C;
    case 521u: goto L_08A77524;
    case 522u: goto L_08A7752C;
    case 523u: goto L_08A77534;
    case 524u: goto L_08A7753C;
    case 525u: goto L_08A77544;
    case 526u: goto L_08A7754C;
    case 527u: goto L_08A77554;
    case 528u: goto L_08A7755C;
    case 529u: goto L_08A77564;
    case 530u: goto L_08A7756C;
    case 531u: goto L_08A77570;
    case 532u: goto L_08A77578;
    case 533u: goto L_08A77580;
    case 534u: goto L_08A77588;
    case 535u: goto L_08A77590;
    case 536u: goto L_08A77594;
    case 537u: goto L_08A77598;
    case 538u: goto L_08A775B8;
    case 539u: goto L_08A775F8;
    case 540u: goto L_08A77684;
    case 541u: goto L_08A776A0;
    case 542u: goto L_08A776B8;
    case 543u: goto L_08A776C0;
    case 544u: goto L_08A776C8;
    case 545u: goto L_08A776E0;
    case 546u: goto L_08A77714;
    case 547u: goto L_08A77724;
    case 548u: goto L_08A7772C;
    case 549u: goto L_08A77740;
    case 550u: goto L_08A77794;
    case 551u: goto L_08A777A4;
    case 552u: goto L_08A777B8;
    case 553u: goto L_08A777D4;
    case 554u: goto L_08A777E8;
    case 555u: goto L_08A777EC;
    case 556u: goto L_08A777FC;
    case 557u: goto L_08A77810;
    case 558u: goto L_08A7782C;
    case 559u: goto L_08A77838;
    case 560u: goto L_08A7784C;
    case 561u: goto L_08A77858;
    case 562u: goto L_08A7785C;
    case 563u: goto L_08A77870;
    case 564u: goto L_08A77884;
    case 565u: goto L_08A7789C;
    case 566u: goto L_08A778B8;
    case 567u: goto L_08A778C4;
    case 568u: goto L_08A778CC;
    case 569u: goto L_08A778DC;
    case 570u: goto L_08A778E4;
    case 571u: goto L_08A77900;
    case 572u: goto L_08A7790C;
    case 573u: goto L_08A77914;
    case 574u: goto L_08A7791C;
    case 575u: goto L_08A77924;
    case 576u: goto L_08A7794C;
    case 577u: goto L_08A77958;
    case 578u: goto L_08A7796C;
    case 579u: goto L_08A77984;
    case 580u: goto L_08A77988;
    case 581u: goto L_08A7799C;
    case 582u: goto L_08A779A0;
    case 583u: goto L_08A779B4;
    case 584u: goto L_08A779B8;
    case 585u: goto L_08A779CC;
    case 586u: goto L_08A779E8;
    case 587u: goto L_08A77A08;
    case 588u: goto L_08A77A10;
    case 589u: goto L_08A77A20;
    case 590u: goto L_08A77A24;
    case 591u: goto L_08A77A44;
    case 592u: goto L_08A77A50;
    case 593u: goto L_08A77A58;
    case 594u: goto L_08A77A6C;
    case 595u: goto L_08A77A78;
    case 596u: goto L_08A77A84;
    case 597u: goto L_08A77AA0;
    case 598u: goto L_08A77ABC;
    case 599u: goto L_08A77AC4;
    case 600u: goto L_08A77AE0;
    case 601u: goto L_08A77AE4;
    case 602u: goto L_08A77AF8;
    case 603u: goto L_08A77AFC;
    case 604u: goto L_08A77B0C;
    case 605u: goto L_08A77B20;
    case 606u: goto L_08A77B54;
    case 607u: goto L_08A77B68;
    case 608u: goto L_08A77B7C;
    case 609u: goto L_08A77B88;
    case 610u: goto L_08A77B98;
    case 611u: goto L_08A77BAC;
    case 612u: goto L_08A77BE4;
    case 613u: goto L_08A77BF4;
    case 614u: goto L_08A77C08;
    case 615u: goto L_08A77C40;
    case 616u: goto L_08A77C48;
    case 617u: goto L_08A77C94;
    case 618u: goto L_08A77CD4;
    case 619u: goto L_08A77CEC;
    case 620u: goto L_08A77CFC;
    case 621u: goto L_08A77D10;
    case 622u: goto L_08A77D20;
    case 623u: goto L_08A77D54;
    case 624u: goto L_08A77D6C;
    case 625u: goto L_08A77D7C;
    case 626u: goto L_08A77D8C;
    case 627u: goto L_08A77D94;
    case 628u: goto L_08A77DD0;
    case 629u: goto L_08A77DDC;
    case 630u: goto L_08A77DE8;
    case 631u: goto L_08A77DF0;
    case 632u: goto L_08A77E00;
    case 633u: goto L_08A77E1C;
    case 634u: goto L_08A77E24;
    case 635u: goto L_08A77E30;
    case 636u: goto L_08A77E4C;
    case 637u: goto L_08A77E6C;
    case 638u: goto L_08A77E84;
    case 639u: goto L_08A77EA4;
    case 640u: goto L_08A77ECC;
    case 641u: goto L_08A77EF8;
    case 642u: goto L_08A77F40;
    case 643u: goto L_08A77F48;
    case 644u: goto L_08A77F5C;
    case 645u: goto L_08A77FB0;
    case 646u: goto L_08A77FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A74000:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 734u, 0x08A73FD4u>(ctx, &aot_mem); return;
      }
      goto L_08A74010;
    }
L_08A74010:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A74014;
L_08A74014:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A74050;
      }
      goto L_08A7401C;
    }
L_08A7401C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A74050;
      }
      goto L_08A74028;
    }
L_08A74028:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (0x08A74038u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 407u, 0x08A720BCu>(ctx, &aot_mem) && ctx.pc == 0x08A74038u) goto L_08A74038;
    return;
L_08A74038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A74028;
      }
      goto L_08A74050;
    }
L_08A74050:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[2] = (15361u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 516u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (2222u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8040));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[30] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[11]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(21312));
    ctx.gpr[23] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    goto L_08A74134;
L_08A74134:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08A74138;
L_08A74138:
    ctx.gpr[31] = (0x08A74140u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 64u, 0x08A7CD20u>(ctx, &aot_mem) && ctx.pc == 0x08A74140u) goto L_08A74140;
    return;
L_08A74140:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 127u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A746B4;
      }
      goto L_08A74150;
    }
L_08A74150:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A74160u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 175u, 0x08A78E60u>(ctx, &aot_mem) && ctx.pc == 0x08A74160u) goto L_08A74160;
    return;
L_08A74160:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A74178u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 564u, 0x08A6E4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A74178u) goto L_08A74178;
    return;
L_08A74178:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A74138;
      }
      goto L_08A74184;
    }
L_08A74184:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A741D4;
      }
      goto L_08A741AC;
    }
L_08A741AC:
    ctx.gpr[31] = (0x08A741B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 79u, 0x08A7CDC8u>(ctx, &aot_mem) && ctx.pc == 0x08A741B4u) goto L_08A741B4;
    return;
L_08A741B4:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A741C8;
      }
      goto L_08A741C0;
    }
L_08A741C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A741D4;
      }
      goto L_08A741C8;
    }
L_08A741C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A741D4;
      }
      goto L_08A741D0;
    }
L_08A741D0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08A741D4;
L_08A741D4:
    ctx.gpr[31] = (0x08A741DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 665u, 0x08A7BCBCu>(ctx, &aot_mem) && ctx.pc == 0x08A741DCu) goto L_08A741DC;
    return;
L_08A741DC:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(136))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6))))));
        goto L_08A7422C;
    }
    goto L_08A7421C;
L_08A7421C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(136))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6))))));
    goto L_08A7422C;
L_08A7422C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
        goto L_08A7424C;
    }
    goto L_08A74234;
L_08A74234:
    ctx.gpr[31] = (0x08A7423Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 79u, 0x08A7CDC8u>(ctx, &aot_mem) && ctx.pc == 0x08A7423Cu) goto L_08A7423C;
    return;
L_08A7423C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(136))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    goto L_08A7424C;
L_08A7424C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(21))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(20))))));
      if (branch_taken) {
          goto L_08A74268;
      }
      goto L_08A7425C;
    }
L_08A7425C:
    ctx.gpr[31] = (0x08A74264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 79u, 0x08A7CDC8u>(ctx, &aot_mem) && ctx.pc == 0x08A74264u) goto L_08A74264;
    return;
L_08A74264:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[2]);
    goto L_08A74268;
L_08A74268:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 128 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_08A74274;
    }
    goto L_08A74274;
L_08A74274:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.gpr[16] = (0u | 0u);
        goto L_08A7427C;
    }
    goto L_08A7427C;
L_08A7427C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A742EC;
      }
      goto L_08A742E0;
    }
L_08A742E0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A742EC;
L_08A742EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
        goto L_08A74354;
    }
    goto L_08A74334;
L_08A74334:
    ctx.gpr[31] = (0x08A7433Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 326u, 0x08A71AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A7433Cu) goto L_08A7433C;
    return;
L_08A7433C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_08A74358;
      }
      goto L_08A74354;
    }
L_08A74354:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(30)));
    goto L_08A74358;
L_08A74358:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
        goto L_08A74380;
    }
    goto L_08A74360;
L_08A74360:
    ctx.gpr[31] = (0x08A74368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 326u, 0x08A71AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A74368u) goto L_08A74368;
    return;
L_08A74368:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(29)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
      if (branch_taken) {
          goto L_08A74384;
      }
      goto L_08A74380;
    }
L_08A74380:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    goto L_08A74384;
L_08A74384:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08A743A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 603u, 0x08A7B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A743A0u) goto L_08A743A0;
    return;
L_08A743A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86)));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A744F8;
      }
      goto L_08A743F8;
    }
L_08A743F8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    goto L_08A74404;
L_08A74404:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(15))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(107)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A744C0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 647u, 0x08A7BA04u>(ctx, &aot_mem) && ctx.pc == 0x08A744C0u) goto L_08A744C0;
    return;
L_08A744C0:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A744D8;
      }
      goto L_08A744CC;
    }
L_08A744CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
      if (branch_taken) {
          goto L_08A744E0;
      }
      goto L_08A744D8;
    }
L_08A744D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    goto L_08A744E0;
L_08A744E0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A74404;
      }
      goto L_08A744F8;
    }
L_08A744F8:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08A74538;
    }
    goto L_08A74504;
L_08A74504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
      if (branch_taken) {
          goto L_08A745C4;
      }
      goto L_08A74538;
    }
L_08A74538:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22096)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A745C8;
      }
      goto L_08A74570;
    }
L_08A74570:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A74574;
L_08A74574:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(468)));
    ctx.gpr[9] = (ctx.gpr[7] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[9] << 8u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A74574;
      }
      goto L_08A745C4;
    }
L_08A745C4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A745C8;
L_08A745C8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A7463C;
      }
      goto L_08A745D4;
    }
L_08A745D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A74628;
      }
      goto L_08A74608;
    }
L_08A74608:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A74608;
      }
      goto L_08A74628;
    }
L_08A74628:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A745D4;
      }
      goto L_08A7463C;
    }
L_08A7463C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A7465Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 496u, 0x08A7AB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7465Cu) goto L_08A7465C;
    return;
L_08A7465C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A746B4;
      }
      goto L_08A74664;
    }
L_08A74664:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08A746AC;
      }
      goto L_08A74678;
    }
L_08A74678:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A74680;
L_08A74680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08A74694u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 534u, 0x08A6E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08A74694u) goto L_08A74694;
    return;
L_08A74694:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A74680;
      }
      goto L_08A746A8;
    }
L_08A746A8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    goto L_08A746AC;
L_08A746AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A74134;
      }
      goto L_08A746B4;
    }
L_08A746B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A746F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), ctx.gpr[31]);
    goto L_08A74760;
L_08A74760:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A74760;
      }
      goto L_08A74774;
    }
L_08A74774:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08A7477C;
L_08A7477C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(544), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 46 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7477C;
      }
      goto L_08A74790;
    }
L_08A74790:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A7479C;
L_08A7479C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7479C;
      }
      goto L_08A747B8;
    }
L_08A747B8:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), 0u);
    ctx.gpr[4] = (0u | 22050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), 0u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[30] = (0u | 20u);
    ctx.gpr[23] = (0u | 152u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[4]);
    ctx.gpr[22] = (0u | 153u);
    ctx.gpr[21] = (0u | 154u);
    ctx.gpr[20] = (0u | 155u);
    ctx.gpr[19] = (0u | 164u);
    ctx.gpr[18] = (0u | 165u);
    ctx.gpr[17] = (0u | 254u);
    goto L_08A748E4;
L_08A748E4:
    ctx.gpr[31] = (0x08A748ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 631u, 0x08A7B8E4u>(ctx, &aot_mem) && ctx.pc == 0x08A748ECu) goto L_08A748EC;
    return;
L_08A748EC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
        goto L_08A74BA0;
    }
    goto L_08A748F4;
L_08A748F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A74948;
      }
      goto L_08A74904;
    }
L_08A74904:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A74924;
    }
L_08A74924:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A74948;
    }
L_08A74948:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 174 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A749F8;
      }
      goto L_08A74950;
    }
L_08A74950:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A749F8;
      }
      goto L_08A74958;
    }
L_08A74958:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-152), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A74980;
      }
      goto L_08A74970;
    }
L_08A74970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A74980;
    }
L_08A74980:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A74998;
      }
      goto L_08A74988;
    }
L_08A74988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A74998;
    }
L_08A74998:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A749B0;
      }
      goto L_08A749A0;
    }
L_08A749A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A749B0;
    }
L_08A749B0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A749C8;
      }
      goto L_08A749B8;
    }
L_08A749B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A749C8;
    }
L_08A749C8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A749E0;
      }
      goto L_08A749D0;
    }
L_08A749D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A749E0;
    }
L_08A749E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A749E8;
    }
L_08A749E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A749F8;
    }
L_08A749F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A748E4;
      }
      goto L_08A74A00;
    }
L_08A74A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(844), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(796), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(780), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[2]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[6]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_08A74D30;
      }
      goto L_08A74BA0;
    }
L_08A74BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(844), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(796), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(780), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[2]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[6]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_08A74D30;
L_08A74D30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(892)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(876)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(828)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(820)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(796)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(788)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[13]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08A74F0C;
      }
      goto L_08A74EA4;
    }
L_08A74EA4:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (2227u << 16u);
    goto L_08A74ECC;
L_08A74ECC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22096)));
    if (ctx.gpr[11] != ctx.gpr[10]) {
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(468)));
        goto L_08A74EE8;
    }
    goto L_08A74ED8;
L_08A74ED8:
    if (ctx.gpr[5] != ctx.gpr[8]) {
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(468)));
        goto L_08A74EE8;
    }
    goto L_08A74EE0;
L_08A74EE0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(728), 0u);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(468)));
    goto L_08A74EE8;
L_08A74EE8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(728)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A74ECC;
      }
      goto L_08A74F0C;
    }
L_08A74F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20448));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6024)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A74FA0;
      }
      goto L_08A74F80;
    }
L_08A74F80:
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A74F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20416));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 396u, 0x08A86690u>(ctx, &aot_mem) && ctx.pc == 0x08A74F98u) goto L_08A74F98;
    return;
L_08A74F98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6024), ctx.gpr[17]);
    ctx.gpr[4] = (2216u << 16u);
    goto L_08A74FA0;
L_08A74FA0:
    ctx.gpr[31] = (0x08A74FA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 313u, 0x08A85EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A74FA8u) goto L_08A74FA8;
    return;
L_08A74FA8:
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
L_08A74FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A74FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 679u, 0x08A73C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74FD0u) goto L_08A74FD0;
    return;
L_08A74FD0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74FE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7501Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7501Cu) goto L_08A7501C;
    return;
L_08A7501C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A750F8;
      }
      goto L_08A75028;
    }
L_08A75028:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (15361u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 516u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A7505C;
L_08A7505C:
    ctx.gpr[31] = (0x08A75064u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 666u, 0x08A7BCD4u>(ctx, &aot_mem) && ctx.pc == 0x08A75064u) goto L_08A75064;
    return;
L_08A75064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A750F8;
      }
      goto L_08A7506C;
    }
L_08A7506C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(35)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A7505C;
      }
      goto L_08A75098;
    }
L_08A75098:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08A7509C;
L_08A7509C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[19] << 7u);
    ctx.gpr[6] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A750DC;
      }
      goto L_08A750C8;
    }
L_08A750C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A750D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 647u, 0x08A7BA04u>(ctx, &aot_mem) && ctx.pc == 0x08A750D4u) goto L_08A750D4;
    return;
L_08A750D4:
    ctx.gpr[31] = (0x08A750DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A7512C;
L_08A750DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(35)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7509C;
      }
      goto L_08A750F0;
    }
L_08A750F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A7505C;
      }
      goto L_08A750F8;
    }
L_08A750F8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7512C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A75148u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 411u, 0x08A7A594u>(ctx, &aot_mem) && ctx.pc == 0x08A75148u) goto L_08A75148;
    return;
L_08A75148:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A751B8;
      }
      goto L_08A75174;
    }
L_08A75174:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A751C0;
      }
      goto L_08A7518C;
    }
L_08A7518C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A75190;
L_08A75190:
    ctx.gpr[31] = (0x08A75198u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 211u, 0x08A79288u>(ctx, &aot_mem) && ctx.pc == 0x08A75198u) goto L_08A75198;
    return;
L_08A75198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A75190;
      }
      goto L_08A751AC;
    }
L_08A751AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A751C0;
      }
      goto L_08A751B4;
    }
L_08A751B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A751B8;
L_08A751B8:
    ctx.gpr[31] = (0x08A751C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 211u, 0x08A79288u>(ctx, &aot_mem) && ctx.pc == 0x08A751C0u) goto L_08A751C0;
    return;
L_08A751C0:
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
L_08A751F4:
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7328));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-43)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7537C;
      }
      goto L_08A75264;
    }
L_08A75264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A75280u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75280u) goto L_08A75280;
    return;
L_08A75280:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A75304;
      }
      goto L_08A7528C;
    }
L_08A7528C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A75304;
      }
      goto L_08A7529C;
    }
L_08A7529C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A752D4;
      }
      goto L_08A752B0;
    }
L_08A752B0:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A752B8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A752B8u) goto L_08A752B8;
    return;
L_08A752B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A752D4;
L_08A752D4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A752F8;
    }
    goto L_08A752DC;
L_08A752DC:
    ctx.gpr[31] = (0x08A752E4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A752E4u) goto L_08A752E4;
    return;
L_08A752E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A752F8;
L_08A752F8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7529C;
      }
      goto L_08A75304;
    }
L_08A75304:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A7531C;
    }
    goto L_08A7530C;
L_08A7530C:
    ctx.gpr[31] = (0x08A75314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75314u) goto L_08A75314;
    return;
L_08A75314:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7531C;
L_08A7531C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_08A75324;
L_08A75324:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A75340;
    }
    goto L_08A75334;
L_08A75334:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A75340;
L_08A75340:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A75324;
      }
      goto L_08A7534C;
    }
L_08A7534C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A75364;
      }
      goto L_08A75354;
    }
L_08A75354:
    ctx.gpr[31] = (0x08A7535Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7535Cu) goto L_08A7535C;
    return;
L_08A7535C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A75364;
L_08A75364:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1024u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A7537Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7537Cu) goto L_08A7537C;
    return;
L_08A7537C:
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
L_08A7539C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A753C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A753C8u) goto L_08A753C8;
    return;
L_08A753C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(22136));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22152));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(284), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22136), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A75408u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75408u) goto L_08A75408;
    return;
L_08A75408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[31] = (0x08A75414u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A75414u) goto L_08A75414;
    return;
L_08A75414:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22088), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[31] = (0x08A7542Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7542Cu) goto L_08A7542C;
    return;
L_08A7542C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7624), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7544C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A75504;
      }
      goto L_08A7547C;
    }
L_08A7547C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22136));
    ctx.gpr[31] = (0x08A75488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75488u) goto L_08A75488;
    return;
L_08A75488:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22088)));
      if (branch_taken) {
          goto L_08A754F8;
      }
      goto L_08A754A4;
    }
L_08A754A4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A754A8;
L_08A754A8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A754EC;
    }
    goto L_08A754C0;
L_08A754C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A754EC;
    }
    goto L_08A754CC;
L_08A754CC:
    ctx.gpr[31] = (0x08A754D4u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A754D4u) goto L_08A754D4;
    return;
L_08A754D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A754CC;
      }
      goto L_08A754E0;
    }
L_08A754E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22088)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A754EC;
L_08A754EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A754A8;
      }
      goto L_08A754F8;
    }
L_08A754F8:
    ctx.gpr[31] = (0x08A75500u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75500u) goto L_08A75500;
    return;
L_08A75500:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(7624), 0u);
    goto L_08A75504;
L_08A75504:
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
L_08A75528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[30]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A755C8;
      }
      goto L_08A75580;
    }
L_08A75580:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A7558Cu);
    ctx.gpr[4] = (0u | 1088u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7558Cu) goto L_08A7558C;
    return;
L_08A7558C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22136));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A755C8;
L_08A755C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A755D4u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A755D4u) goto L_08A755D4;
    return;
L_08A755D4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A75650;
      }
      goto L_08A755E0;
    }
L_08A755E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7560Cu);
    ctx.gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A7560Cu) goto L_08A7560C;
    return;
L_08A7560C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(22152));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[22] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A75638u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75638u) goto L_08A75638;
    return;
L_08A75638:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75684;
      }
      goto L_08A75644;
    }
L_08A75644:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A756A8;
      }
      goto L_08A75650;
    }
L_08A75650:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75684:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A75690u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75690u) goto L_08A75690;
    return;
L_08A75690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A756A4;
      }
      goto L_08A75698;
    }
L_08A75698:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A75684;
      }
      goto L_08A756A4;
    }
L_08A756A4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    goto L_08A756A8;
L_08A756A8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A75740;
      }
      goto L_08A756BC;
    }
L_08A756BC:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(36));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7584));
    goto L_08A756CC;
L_08A756CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A756D8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A756D8u) goto L_08A756D8;
    return;
L_08A756D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08A75710;
    }
    goto L_08A756EC;
L_08A756EC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A756EC;
      }
      goto L_08A7570C;
    }
L_08A7570C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A75710;
L_08A75710:
    ctx.gpr[31] = (0x08A75718u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75718u) goto L_08A75718;
    return;
L_08A75718:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A756CC;
      }
      goto L_08A7573C;
    }
L_08A7573C:
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A75740;
L_08A75740:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22124), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A75750u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75750u) goto L_08A75750;
    return;
L_08A75750:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A75788;
      }
      goto L_08A75764;
    }
L_08A75764:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7584));
    goto L_08A75768;
L_08A75768:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A75768;
      }
      goto L_08A75788;
    }
L_08A75788:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22128), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A757A8u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_08A75D74;
L_08A757A8:
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22888));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A757F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A75820u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08A75228;
L_08A75820:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22088)));
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75854;
      }
      goto L_08A75840;
    }
L_08A75840:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A75854;
      }
      goto L_08A75848;
    }
L_08A75848:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A758B0;
      }
      goto L_08A75854;
    }
L_08A75854:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A758B0;
      }
      goto L_08A7585C;
    }
L_08A7585C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A758B0;
      }
      goto L_08A75864;
    }
L_08A75864:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A75890;
      }
      goto L_08A7586C;
    }
L_08A7586C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22088)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75888;
      }
      goto L_08A75880;
    }
L_08A75880:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08A75888;
L_08A75888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75854;
      }
      goto L_08A75890;
    }
L_08A75890:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A758A4;
      }
      goto L_08A75898;
    }
L_08A75898:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A75854;
      }
      goto L_08A758A4;
    }
L_08A758A4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A75854;
      }
      goto L_08A758B0;
    }
L_08A758B0:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22088)));
        goto L_08A758C4;
    }
    goto L_08A758B8;
L_08A758B8:
    ctx.gpr[31] = (0x08A758C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A758C0u) goto L_08A758C0;
    return;
L_08A758C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22088)));
    goto L_08A758C4;
L_08A758C4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A75930;
      }
      goto L_08A758DC;
    }
L_08A758DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(22136));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75930;
      }
      goto L_08A75908;
    }
L_08A75908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A75918u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75918u) goto L_08A75918;
    return;
L_08A75918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A75930;
L_08A75930:
    ctx.gpr[2] = (0u | 0u);
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
L_08A75950:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22152));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3000 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A75D44;
      }
      goto L_08A759E4;
    }
L_08A759E4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08A75D44;
      }
      goto L_08A75A00;
    }
L_08A75A00:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6032));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-252));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[30] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    goto L_08A75A30;
L_08A75A30:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22088)));
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08A75D28;
    }
    goto L_08A75A54;
L_08A75A54:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08A75D04;
    }
    goto L_08A75A60;
L_08A75A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_08A75A64;
L_08A75A64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A75A74u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75A74u) goto L_08A75A74;
    return;
L_08A75A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A75A8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75A8Cu) goto L_08A75A8C;
    return;
L_08A75A8C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08A75CF0;
    }
    goto L_08A75A94;
L_08A75A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[31] = (0x08A75AC0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 339u, 0x08A7E7B0u>(ctx, &aot_mem) && ctx.pc == 0x08A75AC0u) goto L_08A75AC0;
    return;
L_08A75AC0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A75CEC;
      }
      goto L_08A75AD4;
    }
L_08A75AD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[29]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    goto L_08A75AEC;
L_08A75AEC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A75CAC;
      }
      goto L_08A75B00;
    }
L_08A75B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A75CB0;
    }
    goto L_08A75B18;
L_08A75B18:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A75B30u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75B30u) goto L_08A75B30;
    return;
L_08A75B30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_08A75B88;
      }
      goto L_08A75B44;
    }
L_08A75B44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A75B58u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A764D8;
L_08A75B58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A75B74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75B74u) goto L_08A75B74;
    return;
L_08A75B74:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[8] << 5u);
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A75BAC;
      }
      goto L_08A75B88;
    }
L_08A75B88:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A75B9Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75B9Cu) goto L_08A75B9C;
    return;
L_08A75B9C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[8] << 5u);
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A75BAC;
L_08A75BAC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A75C98;
      }
      goto L_08A75BE8;
    }
L_08A75BE8:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    goto L_08A75BEC;
L_08A75BEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A75C84;
      }
      goto L_08A75BF8;
    }
L_08A75BF8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_08A75C54;
      }
      goto L_08A75C04;
    }
L_08A75C04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A75C18u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A764D8;
L_08A75C18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A75C40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75C40u) goto L_08A75C40;
    return;
L_08A75C40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75C7C;
      }
      goto L_08A75C54;
    }
L_08A75C54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A75C6Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A75C6Cu) goto L_08A75C6C;
    return;
L_08A75C6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    goto L_08A75C7C;
L_08A75C7C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(128)));
    goto L_08A75C84;
L_08A75C84:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A75BEC;
      }
      goto L_08A75C98;
    }
L_08A75C98:
    if (ctx.gpr[7] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A75CB0;
    }
    goto L_08A75CA0;
L_08A75CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    goto L_08A75CAC;
L_08A75CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A75CB0;
L_08A75CB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A75AEC;
      }
      goto L_08A75CEC;
    }
L_08A75CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A75CF0;
L_08A75CF0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08A75A64;
    }
    goto L_08A75D00;
L_08A75D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A75D04;
L_08A75D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08A75D1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75D1Cu) goto L_08A75D1C;
    return;
L_08A75D1C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08A75D28;
L_08A75D28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A75A30;
      }
      goto L_08A75D44;
    }
L_08A75D44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A75DB4u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A75DB4u) goto L_08A75DB4;
    return;
L_08A75DB4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A75DC4u);
    ctx.gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75DC4u) goto L_08A75DC4;
    return;
L_08A75DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A75DE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75DE4u) goto L_08A75DE4;
    return;
L_08A75DE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[31] = (0x08A75DF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A75DF4u) goto L_08A75DF4;
    return;
L_08A75DF4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22124)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76180;
      }
      goto L_08A75E14;
    }
L_08A75E14:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[22] = (ctx.gpr[21] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7584));
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22152));
    goto L_08A75E40;
L_08A75E40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08A75E58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A75E58u) goto L_08A75E58;
    return;
L_08A75E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08A75E84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75E84u) goto L_08A75E84;
    return;
L_08A75E84:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A75E90u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75E90u) goto L_08A75E90;
    return;
L_08A75E90:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
        goto L_08A760B0;
    }
    goto L_08A75EA0;
L_08A75EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12600)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75EC4:
    ctx.gpr[31] = (0x08A75ECCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 340u, 0x08A7E7C8u>(ctx, &aot_mem) && ctx.pc == 0x08A75ECCu) goto L_08A75ECC;
    return;
L_08A75ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A75ED4;
    }
L_08A75ED4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A75EE0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75EE0u) goto L_08A75EE0;
    return;
L_08A75EE0:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.gpr[31] = (0x08A75EF8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75EF8u) goto L_08A75EF8;
    return;
L_08A75EF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A75F04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 261u, 0x08A7DF28u>(ctx, &aot_mem) && ctx.pc == 0x08A75F04u) goto L_08A75F04;
    return;
L_08A75F04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75F10u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 262u, 0x08A7DF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75F10u) goto L_08A75F10;
    return;
L_08A75F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A75F18;
    }
L_08A75F18:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A75F24u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75F24u) goto L_08A75F24;
    return;
L_08A75F24:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A75F38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7E074u>(ctx, &aot_mem) && ctx.pc == 0x08A75F38u) goto L_08A75F38;
    return;
L_08A75F38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75F44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 271u, 0x08A7E0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A75F44u) goto L_08A75F44;
    return;
L_08A75F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A75F4C;
    }
L_08A75F4C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A75F58u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75F58u) goto L_08A75F58;
    return;
L_08A75F58:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A75F6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 151u, 0x08A7D5E4u>(ctx, &aot_mem) && ctx.pc == 0x08A75F6Cu) goto L_08A75F6C;
    return;
L_08A75F6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75F78u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 153u, 0x08A7D628u>(ctx, &aot_mem) && ctx.pc == 0x08A75F78u) goto L_08A75F78;
    return;
L_08A75F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A75F80;
    }
L_08A75F80:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A75F8Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75F8Cu) goto L_08A75F8C;
    return;
L_08A75F8C:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.gpr[31] = (0x08A75FA0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75FA0u) goto L_08A75FA0;
    return;
L_08A75FA0:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A75FB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 106u, 0x08A7D018u>(ctx, &aot_mem) && ctx.pc == 0x08A75FB4u) goto L_08A75FB4;
    return;
L_08A75FB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75FC0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 108u, 0x08A7D05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75FC0u) goto L_08A75FC0;
    return;
L_08A75FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A75FC8;
    }
L_08A75FC8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A75FD4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75FD4u) goto L_08A75FD4;
    return;
L_08A75FD4:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A75FECu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A75FECu) goto L_08A75FEC;
    return;
L_08A75FEC:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.gpr[31] = (0x08A76000u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A76000u) goto L_08A76000;
    return;
L_08A76000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A7600Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 312u, 0x08A7E484u>(ctx, &aot_mem) && ctx.pc == 0x08A7600Cu) goto L_08A7600C;
    return;
L_08A7600C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76018u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 313u, 0x08A7E4C0u>(ctx, &aot_mem) && ctx.pc == 0x08A76018u) goto L_08A76018;
    return;
L_08A76018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A76020;
    }
L_08A76020:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A7602Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A7602Cu) goto L_08A7602C;
    return;
L_08A7602C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A76038u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 96u, 0x08A7CF14u>(ctx, &aot_mem) && ctx.pc == 0x08A76038u) goto L_08A76038;
    return;
L_08A76038:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76044u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 97u, 0x08A7CF48u>(ctx, &aot_mem) && ctx.pc == 0x08A76044u) goto L_08A76044;
    return;
L_08A76044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A7604C;
    }
L_08A7604C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A76058u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A76058u) goto L_08A76058;
    return;
L_08A76058:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A7606Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A7606Cu) goto L_08A7606C;
    return;
L_08A7606C:
    ctx.gpr[4] = (ctx.gpr[2] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A7607Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 129u, 0x08A7D30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7607Cu) goto L_08A7607C;
    return;
L_08A7607C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A76088u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 130u, 0x08A7D348u>(ctx, &aot_mem) && ctx.pc == 0x08A76088u) goto L_08A76088;
    return;
L_08A76088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A76090;
    }
L_08A76090:
    ctx.gpr[31] = (0x08A76098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 292u, 0x08A7E26Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76098u) goto L_08A76098;
    return;
L_08A76098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A760AC;
      }
      goto L_08A760A0;
    }
L_08A760A0:
    ctx.gpr[31] = (0x08A760A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 336u, 0x08A7E718u>(ctx, &aot_mem) && ctx.pc == 0x08A760A8u) goto L_08A760A8;
    return;
L_08A760A8:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A760AC;
L_08A760AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    goto L_08A760B0;
L_08A760B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A76158;
      }
      goto L_08A760B8;
    }
L_08A760B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A76138;
      }
      goto L_08A760D8;
    }
L_08A760D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.gpr[7] = (ctx.gpr[5] & 15u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A760F0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A751F4;
L_08A760F0:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08A76120u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 4u));
    goto L_08A751F4;
L_08A76120:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A76158;
      }
      goto L_08A76138;
    }
L_08A76138:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A76148u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A751F4;
L_08A76148:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A76158;
L_08A76158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A75E40;
      }
      goto L_08A76180;
    }
L_08A76180:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    goto L_08A76194;
L_08A76194:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A761A0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A761A0u) goto L_08A761A0;
    return;
L_08A761A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A76200;
      }
      goto L_08A761AC;
    }
L_08A761AC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A761BCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A761BCu) goto L_08A761BC;
    return;
L_08A761BC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A761D8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 619u, 0x08A7B840u>(ctx, &aot_mem) && ctx.pc == 0x08A761D8u) goto L_08A761D8;
    return;
L_08A761D8:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[31] = (0x08A761F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 183u, 0x08A7D7D0u>(ctx, &aot_mem) && ctx.pc == 0x08A761F4u) goto L_08A761F4;
    return;
L_08A761F4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A76194;
      }
      goto L_08A76200;
    }
L_08A76200:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22136));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 3000u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1024u);
    ctx.gpr[31] = (0x08A7622Cu);
    ctx.gpr[16] = (2227u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7622Cu) goto L_08A7622C;
    return;
L_08A7622C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22124)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A76274;
      }
      goto L_08A76240;
    }
L_08A76240:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7584));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08A7624C;
L_08A7624C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A7624C;
      }
      goto L_08A76270;
    }
L_08A76270:
    ctx.gpr[6] = (16256u << 16u);
    goto L_08A76274;
L_08A76274:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A76280;
L_08A76280:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76280;
      }
      goto L_08A76298;
    }
L_08A76298:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(128), 0u);
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
L_08A762CC:
    ctx.gpr[6] = (16240u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 61681u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 57826u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (16210u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 53971u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (16195u << 16u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 50116u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (16180u << 16u);
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 46261u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (16165u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 42406u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (16150u << 16u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 38551u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (16135u << 16u);
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 34696u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (16112u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 61681u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (16082u << 16u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 53971u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (16052u << 16u);
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 46261u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (16022u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 38551u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (15984u << 16u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 61681u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (15924u << 16u);
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 46261u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (15856u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 61681u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (15728u << 16u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 61681u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A764D8:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (15728u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 61681u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[6] = (16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[19] + ctx.fpr[14];
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (16576u << 16u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (16608u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[19] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (16656u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (16688u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[19] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (16720u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (16736u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (16752u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (16768u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[19] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7682C;
      }
      goto L_08A76774;
    }
L_08A76774:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 256u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21312));
    goto L_08A76790;
L_08A76790:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(312)));
      if (branch_taken) {
          goto L_08A76804;
      }
      goto L_08A767A0;
    }
L_08A767A0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(38)));
        goto L_08A767CC;
    }
    goto L_08A767A8;
L_08A767A8:
    ctx.gpr[31] = (0x08A767B0u);
    ctx.gpr[4] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A767B0u) goto L_08A767B0;
    return;
L_08A767B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A767BCu);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(312), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 261u, 0x08A7DF28u>(ctx, &aot_mem) && ctx.pc == 0x08A767BCu) goto L_08A767BC;
    return;
L_08A767BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(312)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(312)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(38)));
    goto L_08A767CC;
L_08A767CC:
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[31] = (0x08A767FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 262u, 0x08A7DF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A767FCu) goto L_08A767FC;
    return;
L_08A767FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A7681C;
      }
      goto L_08A76804;
    }
L_08A76804:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08A76820;
    }
    goto L_08A7680C;
L_08A7680C:
    ctx.gpr[31] = (0x08A76814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76814u) goto L_08A76814;
    return;
L_08A76814:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(312), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    goto L_08A7681C;
L_08A7681C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A76820;
L_08A76820:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76790;
      }
      goto L_08A7682C;
    }
L_08A7682C:
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
L_08A76858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 16u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A768ACu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A768ACu) goto L_08A768AC;
    return;
L_08A768AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A76954;
      }
      goto L_08A768B4;
    }
L_08A768B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A768F4;
      }
      goto L_08A768C8;
    }
L_08A768C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A768C8;
      }
      goto L_08A768F4;
    }
L_08A768F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76924;
      }
      goto L_08A76908;
    }
L_08A76908:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76908;
      }
      goto L_08A76924;
    }
L_08A76924:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A76A44;
      }
      goto L_08A76974;
    }
L_08A76974:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22136));
    goto L_08A76980;
L_08A76980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08A76A38;
    }
    goto L_08A76994;
L_08A76994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A76A04;
      }
      goto L_08A769BC;
    }
L_08A769BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A769E4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A764D8;
L_08A769E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
      if (branch_taken) {
          goto L_08A76A34;
      }
      goto L_08A76A04;
    }
L_08A76A04:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08A76A38;
    }
    goto L_08A76A14;
L_08A76A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A76A30u);
    ctx.gpr[4] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A76A30u) goto L_08A76A30;
    return;
L_08A76A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    goto L_08A76A34;
L_08A76A34:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A76A38;
L_08A76A38:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76980;
      }
      goto L_08A76A44;
    }
L_08A76A44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76ADC;
      }
      goto L_08A76A58;
    }
L_08A76A58:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08A76A60;
L_08A76A60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A76AA0;
      }
      goto L_08A76A78;
    }
L_08A76A78:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A76A90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A764D8;
L_08A76A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A76AC8;
      }
      goto L_08A76AA0;
    }
L_08A76AA0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A76ACC;
    }
    goto L_08A76AB0;
L_08A76AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(232)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A76AC4u);
    ctx.gpr[4] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A76AC4u) goto L_08A76AC4;
    return;
L_08A76AC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    goto L_08A76AC8;
L_08A76AC8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A76ACC;
L_08A76ACC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76A60;
      }
      goto L_08A76ADC;
    }
L_08A76ADC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A76B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A76B1Cu) goto L_08A76B1C;
    return;
L_08A76B1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A76B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76B38u) goto L_08A76B38;
    return;
L_08A76B38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A76B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A76B60u) goto L_08A76B60;
    return;
L_08A76B60:
    ctx.gpr[31] = (0x08A76B68u);
    // nop
    goto L_08A7544C;
L_08A76B68:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
        goto L_08A76B8C;
    }
    goto L_08A76B7C;
L_08A76B7C:
    ctx.gpr[31] = (0x08A76B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76B84u) goto L_08A76B84;
    return;
L_08A76B84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    goto L_08A76B8C;
L_08A76B8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76BA4;
      }
      goto L_08A76B94;
    }
L_08A76B94:
    ctx.gpr[31] = (0x08A76B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76B9Cu) goto L_08A76B9C;
    return;
L_08A76B9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A76BA4;
L_08A76BA4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A76BA8;
L_08A76BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A76BC4;
    }
    goto L_08A76BB4;
L_08A76BB4:
    ctx.gpr[31] = (0x08A76BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76BBCu) goto L_08A76BBC;
    return;
L_08A76BBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A76BC4;
L_08A76BC4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76BA8;
      }
      goto L_08A76BD0;
    }
L_08A76BD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A76C18;
      }
      goto L_08A76BE4;
    }
L_08A76BE4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A76BE8;
L_08A76BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
        goto L_08A76C04;
    }
    goto L_08A76BF4;
L_08A76BF4:
    ctx.gpr[31] = (0x08A76BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76BFCu) goto L_08A76BFC;
    return;
L_08A76BFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    goto L_08A76C04;
L_08A76C04:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76BE8;
      }
      goto L_08A76C14;
    }
L_08A76C14:
    ctx.gpr[4] = (16384u << 16u);
    goto L_08A76C18;
L_08A76C18:
    ctx.gpr[31] = (0x08A76C20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A76724;
L_08A76C20:
    ctx.gpr[31] = (0x08A76C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A76C28u) goto L_08A76C28;
    return;
L_08A76C28:
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
L_08A76C40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22152));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5096));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A76C78;
      }
      goto L_08A76C64;
    }
L_08A76C64:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A76C78;
L_08A76C78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76C80:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76C90:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76D00;
      }
      goto L_08A76CD4;
    }
L_08A76CD4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76CD4;
      }
      goto L_08A76D00;
    }
L_08A76D00:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A76D30;
      }
      goto L_08A76D14;
    }
L_08A76D14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(9)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76D14;
      }
      goto L_08A76D30;
    }
L_08A76D30:
    ctx.gpr[4] = (0u | 2u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A76D50u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A76D74;
L_08A76D50:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22152));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A76D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A76D64u) goto L_08A76D64;
    return;
L_08A76D64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22152));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76DF8;
      }
      goto L_08A76DBC;
    }
L_08A76DBC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76DBC;
      }
      goto L_08A76DF8;
    }
L_08A76DF8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A76E38;
      }
      goto L_08A76E0C;
    }
L_08A76E0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76E0C;
      }
      goto L_08A76E38;
    }
L_08A76E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76E54;
      }
      goto L_08A76E48;
    }
L_08A76E48:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A76E50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A76E50u) goto L_08A76E50;
    return;
L_08A76E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_08A76E54;
L_08A76E54:
    ctx.gpr[31] = (0x08A76E5Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76E5Cu) goto L_08A76E5C;
    return;
L_08A76E5C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A76E38;
      }
      goto L_08A76E64;
    }
L_08A76E64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76E7C:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22152));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76EBC:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22152));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(0u));
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22152));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A77070;
      }
      goto L_08A76F54;
    }
L_08A76F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77108;
      }
      goto L_08A76F60;
    }
L_08A76F60:
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[30] = (0u | 5u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    goto L_08A76F74;
L_08A76F74:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 257 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 256u);
        goto L_08A76F84;
    }
    goto L_08A76F84;
L_08A76F84:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A76FC0;
      }
      goto L_08A76F94;
    }
L_08A76F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_08A76FA8;
L_08A76FA8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A76FA8;
      }
      goto L_08A76FC0;
    }
L_08A76FC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A76FCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A77740;
L_08A76FCC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A76FE8;
      }
      goto L_08A76FDC;
    }
L_08A76FDC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7702C;
      }
      goto L_08A76FE8;
    }
L_08A76FE8:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A77008;
      }
      goto L_08A76FF4;
    }
L_08A76FF4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A7702C;
      }
      goto L_08A77008;
    }
L_08A77008:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A77030;
      }
      goto L_08A77010;
    }
L_08A77010:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08A7702C;
L_08A7702C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A77030;
L_08A77030:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A77044u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 345u, 0x08A7E914u>(ctx, &aot_mem) && ctx.pc == 0x08A77044u) goto L_08A77044;
    return;
L_08A77044:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76F74;
      }
      goto L_08A77068;
    }
L_08A77068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77108;
      }
      goto L_08A77070;
    }
L_08A77070:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A770A0;
      }
      goto L_08A77084;
    }
L_08A77084:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77084;
      }
      goto L_08A770A0;
    }
L_08A770A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A77108;
      }
      goto L_08A770A8;
    }
L_08A770A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A770AC;
L_08A770AC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 257 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 256u);
        goto L_08A770B8;
    }
    goto L_08A770B8;
L_08A770B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A770C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A77740;
L_08A770C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-256));
        goto L_08A77100;
    }
    goto L_08A770D8;
L_08A770D8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08A770E0;
L_08A770E0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A770E0;
      }
      goto L_08A770FC;
    }
L_08A770FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-256));
    goto L_08A77100;
L_08A77100:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A770AC;
      }
      goto L_08A77108;
    }
L_08A77108:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2215u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A77168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27404));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 85u, 0x08A7CE24u>(ctx, &aot_mem) && ctx.pc == 0x08A77168u) goto L_08A77168;
    return;
L_08A77168:
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[31] = (0x08A77174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27432));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 86u, 0x08A7CE30u>(ctx, &aot_mem) && ctx.pc == 0x08A77174u) goto L_08A77174;
    return;
L_08A77174:
    ctx.gpr[4] = (2215u << 16u);
    ctx.gpr[31] = (0x08A77180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5140));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 87u, 0x08A7CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77180u) goto L_08A77180;
    return;
L_08A77180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(22152));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(22152), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A771A4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A771A4u) goto L_08A771A4;
    return;
L_08A771A4:
    ctx.gpr[31] = (0x08A771ACu);
    // nop
    goto L_08A7539C;
L_08A771AC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A771E4;
      }
      goto L_08A771C4;
    }
L_08A771C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A771C4;
      }
      goto L_08A771E4;
    }
L_08A771E4:
    ctx.gpr[5] = (0u | 4300u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08A771F0;
L_08A771F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A77204u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A77204u) goto L_08A77204;
    return;
L_08A77204:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[6] & 63u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A77240;
      }
      goto L_08A7722C;
    }
L_08A7722C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_08A77230;
L_08A77230:
    ctx.gpr[9] = (ctx.gpr[6] & 63u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
        goto L_08A77230;
    }
    goto L_08A7723C;
L_08A7723C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    goto L_08A77240;
L_08A77240:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A771F0;
      }
      goto L_08A77250;
    }
L_08A77250:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A77270;
      }
      goto L_08A7725C;
    }
L_08A7725C:
    ctx.gpr[31] = (0x08A77264u);
    ctx.gpr[4] = (ctx.gpr[5] << 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A77264u) goto L_08A77264;
    return;
L_08A77264:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A77270;
L_08A77270:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A772D8;
      }
      goto L_08A77280;
    }
L_08A77280:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A77290u);
    ctx.gpr[4] = (0u | 1088u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A77290u) goto L_08A77290;
    return;
L_08A77290:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[5] & 63u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A772C4;
      }
      goto L_08A772B0;
    }
L_08A772B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A772B4;
L_08A772B4:
    ctx.gpr[8] = (ctx.gpr[5] & 63u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
        goto L_08A772B4;
    }
    goto L_08A772C0;
L_08A772C0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    goto L_08A772C4;
L_08A772C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77280;
      }
      goto L_08A772D8;
    }
L_08A772D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A773C0;
      }
      goto L_08A772E4;
    }
L_08A772E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A77310u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A77310u) goto L_08A77310;
    return;
L_08A77310:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A7734Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7734Cu) goto L_08A7734C;
    return;
L_08A7734C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A773C0;
      }
      goto L_08A77378;
    }
L_08A77378:
    ctx.gpr[7] = (0u | 0u);
    goto L_08A7737C;
L_08A7737C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08A7737C;
      }
      goto L_08A773C0;
    }
L_08A773C0:
    ctx.gpr[31] = (0x08A773C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A773C8u) goto L_08A773C8;
    return;
L_08A773C8:
    ctx.gpr[31] = (0x08A773D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 341u, 0x08A7E7E8u>(ctx, &aot_mem) && ctx.pc == 0x08A773D0u) goto L_08A773D0;
    return;
L_08A773D0:
    ctx.gpr[31] = (0x08A773D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 344u, 0x08A7E8CCu>(ctx, &aot_mem) && ctx.pc == 0x08A773D8u) goto L_08A773D8;
    return;
L_08A773D8:
    ctx.gpr[31] = (0x08A773E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 343u, 0x08A7E86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A773E0u) goto L_08A773E0;
    return;
L_08A773E0:
    ctx.gpr[31] = (0x08A773E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 342u, 0x08A7E830u>(ctx, &aot_mem) && ctx.pc == 0x08A773E8u) goto L_08A773E8;
    return;
L_08A773E8:
    ctx.gpr[31] = (0x08A773F0u);
    // nop
    goto L_08A76C40;
L_08A773F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_08A7746C;
      }
      goto L_08A77404;
    }
L_08A77404:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08A77420;
L_08A77420:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(288), 0u);
    ctx.gpr[31] = (0x08A7742Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 142u, 0x08A7D520u>(ctx, &aot_mem) && ctx.pc == 0x08A7742Cu) goto L_08A7742C;
    return;
L_08A7742C:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(360), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A77440u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 155u, 0x08A7D670u>(ctx, &aot_mem) && ctx.pc == 0x08A77440u) goto L_08A77440;
    return;
L_08A77440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A7744Cu);
    ctx.gpr[5] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7744Cu) goto L_08A7744C;
    return;
L_08A7744C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77420;
      }
      goto L_08A7746C;
    }
L_08A7746C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[2] = (ctx.gpr[4] << 5u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[3] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(22152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(504)));
    ctx.gpr[3] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[16] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[16] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_08A77508;
      }
      goto L_08A77500;
    }
L_08A77500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 0u);
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A77508;
    }
L_08A77508:
    ctx.gpr[16] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_08A7751C;
      }
      goto L_08A77514;
    }
L_08A77514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A7751C;
    }
L_08A7751C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[16] = (0u | 22u);
      if (branch_taken) {
          goto L_08A7752C;
      }
      goto L_08A77524;
    }
L_08A77524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 2u);
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A7752C;
    }
L_08A7752C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[16] = (0u | 16u);
      if (branch_taken) {
          goto L_08A7753C;
      }
      goto L_08A77534;
    }
L_08A77534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 3u);
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A7753C;
    }
L_08A7753C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[16] = (0u | 23u);
      if (branch_taken) {
          goto L_08A7754C;
      }
      goto L_08A77544;
    }
L_08A77544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 4u);
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A7754C;
    }
L_08A7754C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[16] = (0u | 26u);
      if (branch_taken) {
          goto L_08A7755C;
      }
      goto L_08A77554;
    }
L_08A77554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (0u | 5u);
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A7755C;
    }
L_08A7755C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    ctx.gpr[16] = (0u | 27u);
      if (branch_taken) {
          goto L_08A7756C;
      }
      goto L_08A77564;
    }
L_08A77564:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A77570;
      }
      goto L_08A7756C;
    }
L_08A7756C:
    ctx.gpr[14] = (0u | 6u);
    goto L_08A77570;
L_08A77570:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A77588;
      }
      goto L_08A77578;
    }
L_08A77578:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[5] = (ctx.gpr[14] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_08A77598;
      }
      goto L_08A77580;
    }
L_08A77580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A77594;
      }
      goto L_08A77588;
    }
L_08A77588:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[14] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_08A77598;
      }
      goto L_08A77590;
    }
L_08A77590:
    ctx.gpr[13] = (0u | 2u);
    goto L_08A77594;
L_08A77594:
    ctx.gpr[5] = (ctx.gpr[14] + ctx.gpr[14]);
    goto L_08A77598;
L_08A77598:
    ctx.gpr[5] = (ctx.gpr[14] + ctx.gpr[5]);
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[14] = (ctx.gpr[5] + ctx.gpr[13]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A776B8;
      }
      goto L_08A775B8;
    }
L_08A775B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A775F8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A775F8u) goto L_08A775F8;
    return;
L_08A775F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(367)));
    ctx.gpr[6] = (0u | 240u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A77684u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77684u) goto L_08A77684;
    return;
L_08A77684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A776A0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 155u, 0x08A7D670u>(ctx, &aot_mem) && ctx.pc == 0x08A776A0u) goto L_08A776A0;
    return;
L_08A776A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08A776B8;
L_08A776B8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7772C;
      }
      goto L_08A776C0;
    }
L_08A776C0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A776C8;
    }
    goto L_08A776C8;
L_08A776C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.gpr[31] = (0x08A776E0u);
    ctx.gpr[4] = (0u | 6196u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A776E0u) goto L_08A776E0;
    return;
L_08A776E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A77714u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 72u, 0x08A784B8u>(ctx, &aot_mem) && ctx.pc == 0x08A77714u) goto L_08A77714;
    return;
L_08A77714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A77724u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 155u, 0x08A7D670u>(ctx, &aot_mem) && ctx.pc == 0x08A77724u) goto L_08A77724;
    return;
L_08A77724:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A7772C;
L_08A7772C:
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A777FC;
      }
      goto L_08A77794;
    }
L_08A77794:
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22136));
    goto L_08A777A4;
L_08A777A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
        goto L_08A777EC;
    }
    goto L_08A777B8;
L_08A777B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(284)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
        goto L_08A777EC;
    }
    goto L_08A777D4;
L_08A777D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A777E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A762CC;
L_08A777E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    goto L_08A777EC;
L_08A777EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A777A4;
      }
      goto L_08A777FC;
    }
L_08A777FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A77870;
      }
      goto L_08A77810;
    }
L_08A77810:
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(260));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[20] << 2u);
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A7782C;
L_08A7782C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A77838u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x08A7857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77838u) goto L_08A77838;
    return;
L_08A77838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
        goto L_08A7785C;
    }
    goto L_08A7784C;
L_08A7784C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x08A77858u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A762CC;
L_08A77858:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    goto L_08A7785C;
L_08A7785C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7782C;
      }
      goto L_08A77870;
    }
L_08A77870:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77A44;
      }
      goto L_08A77884;
    }
L_08A77884:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(22136));
    ctx.gpr[19] = (2222u << 16u);
    goto L_08A7789C;
L_08A7789C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A77A20;
      }
      goto L_08A778B8;
    }
L_08A778B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08A778DC;
      }
      goto L_08A778C4;
    }
L_08A778C4:
    ctx.gpr[31] = (0x08A778CCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A76858;
L_08A778CC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A778DC;
      }
      goto L_08A778DC;
    }
L_08A778DC:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A77A24;
    }
    goto L_08A778E4;
L_08A778E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(200)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A77900u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77900u) goto L_08A77900;
    return;
L_08A77900:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A7791C;
      }
      goto L_08A7790C;
    }
L_08A7790C:
    ctx.gpr[31] = (0x08A77914u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A76D3C;
L_08A77914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77A24;
      }
      goto L_08A7791C;
    }
L_08A7791C:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A77A24;
    }
    goto L_08A77924;
L_08A77924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A779A0;
      }
      goto L_08A7794C;
    }
L_08A7794C:
    ctx.gpr[19] = (ctx.gpr[30] << 2u);
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    goto L_08A77958;
L_08A77958:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
        goto L_08A77988;
    }
    goto L_08A7796C;
L_08A7796C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A77984u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77984u) goto L_08A77984;
    return;
L_08A77984:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    goto L_08A77988;
L_08A77988:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77958;
      }
      goto L_08A7799C;
    }
L_08A7799C:
    ctx.gpr[19] = (2222u << 16u);
    goto L_08A779A0;
L_08A779A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[30] << 2u);
      if (branch_taken) {
          goto L_08A77A20;
      }
      goto L_08A779B4;
    }
L_08A779B4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A779B8;
L_08A779B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
        goto L_08A77A10;
    }
    goto L_08A779CC;
L_08A779CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
        goto L_08A77A10;
    }
    goto L_08A779E8;
L_08A779E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A77A08u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77A08u) goto L_08A77A08;
    return;
L_08A77A08:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5996)));
    goto L_08A77A10;
L_08A77A10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A779B8;
      }
      goto L_08A77A20;
    }
L_08A77A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A77A24;
L_08A77A24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7789C;
      }
      goto L_08A77A44;
    }
L_08A77A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A77A58;
      }
      goto L_08A77A50;
    }
L_08A77A50:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A77A58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77A58u) goto L_08A77A58;
    return;
L_08A77A58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A77AFC;
      }
      goto L_08A77A6C;
    }
L_08A77A6C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A77A78;
L_08A77A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A84;
    }
L_08A77A84:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(200)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A77AA0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77AA0u) goto L_08A77AA0;
    return;
L_08A77AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(200)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A77ABCu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77ABCu) goto L_08A77ABC;
    return;
L_08A77ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08A77AE4;
      }
      goto L_08A77AC4;
    }
L_08A77AC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A77AE0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77AE0u) goto L_08A77AE0;
    return;
L_08A77AE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    goto L_08A77AE4;
L_08A77AE4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77A78;
      }
      goto L_08A77AF8;
    }
L_08A77AF8:
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A77AFC;
L_08A77AFC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77B20;
      }
      goto L_08A77B0C;
    }
L_08A77B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22668)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A77B20u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A77B20u) goto L_08A77B20;
    return;
L_08A77B20:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77B54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A77B7C;
      }
      goto L_08A77B68;
    }
L_08A77B68:
    ctx.gpr[9] = (49024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A77B88;
      }
      goto L_08A77B7C;
    }
L_08A77B7C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (0u - ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    goto L_08A77B88;
L_08A77B88:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[8] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A77BE4;
      }
      goto L_08A77B98;
    }
L_08A77B98:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[2] = (ctx.gpr[8] << 2u);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    goto L_08A77BAC;
L_08A77BAC:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77BAC;
      }
      goto L_08A77BE4;
    }
L_08A77BE4:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A77C40;
      }
      goto L_08A77BF4;
    }
L_08A77BF4:
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[7]);
    goto L_08A77C08;
L_08A77C08:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A77C08;
      }
      goto L_08A77C40;
    }
L_08A77C40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77C48:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[14];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
      if (branch_taken) {
          goto L_08A77D20;
      }
      goto L_08A77C94;
    }
L_08A77C94:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    if (ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_08A77CD4;
    }
    goto L_08A77CD4;
L_08A77CD4:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A77CEC;
    }
    goto L_08A77CEC;
L_08A77CEC:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A77D10;
      }
      goto L_08A77CFC;
    }
L_08A77CFC:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77D10:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77D20:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_08A77D54;
    }
    goto L_08A77D54;
L_08A77D54:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A77D6C;
    }
    goto L_08A77D6C;
L_08A77D6C:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08A77D8C;
    }
    goto L_08A77D7C;
L_08A77D7C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77D8C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2104));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A77DDC;
      }
      goto L_08A77DD0;
    }
L_08A77DD0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A77DE8;
      }
      goto L_08A77DDC;
    }
L_08A77DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_08A77DE8;
L_08A77DE8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77E1C;
      }
      goto L_08A77DF0;
    }
L_08A77DF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A77E00u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A77E00u) goto L_08A77E00;
    return;
L_08A77E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A77ECC;
      }
      goto L_08A77E1C;
    }
L_08A77E1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[21] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_08A77E6C;
      }
      goto L_08A77E24;
    }
L_08A77E24:
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[31] = (0x08A77E30u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A77E30u) goto L_08A77E30;
    return;
L_08A77E30:
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2104));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A77E4Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08A77B54;
L_08A77E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A77ECC;
      }
      goto L_08A77E6C;
    }
L_08A77E6C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A77E84u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08A77B54;
L_08A77E84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2104));
    ctx.gpr[31] = (0x08A77EA4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A77EA4u) goto L_08A77EA4;
    return;
L_08A77EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A77ECC;
L_08A77ECC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
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
L_08A77EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2104));
      if (branch_taken) {
          goto L_08A77F48;
      }
      goto L_08A77F40;
    }
L_08A77F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A77F48;
      }
      goto L_08A77F48;
    }
L_08A77F48:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A77F5Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A77F5Cu) goto L_08A77F5C;
    return;
L_08A77F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08A77FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 3u, 0x08A78010u>(ctx, &aot_mem); return;
      }
      goto L_08A77FE4;
    }
L_08A77FE4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08A78000u; return;
}

void recomp_unit_0156(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0156_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_156(Runtime &runtime) {
    runtime.register_generated_unit(156u, 0x08A74000u, 16384u, &recomp_unit_0156, &recomp_unit_0156_entry);
    runtime.register_function(0x08A74000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74010u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74014u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7401Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74028u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74038u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74050u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74084u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74134u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74138u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74140u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74150u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74160u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74178u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74184u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7421Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7422Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74234u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7423Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7424Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7425Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74264u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74268u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74274u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7427Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74334u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7433Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74354u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74358u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74360u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74368u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74380u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74384u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74404u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74504u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74538u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74570u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74574u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74608u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74628u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7463Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7465Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74664u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74678u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74680u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74694u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74760u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74774u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7477Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74790u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7479Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74904u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74948u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74950u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74958u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74970u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74980u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74988u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74998u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74ECCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74ED8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7501Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75028u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7505Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75064u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7506Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75098u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7509Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7512Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75148u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75174u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7518Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75190u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75198u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75228u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75264u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75280u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7528Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7529Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75304u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7530Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75314u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7531Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75324u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75334u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75340u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7534Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75354u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7535Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7537Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7539Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75408u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75414u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7542Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7544Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7547Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75488u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75500u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75504u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75528u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75580u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7558Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7560Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75638u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75644u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75650u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75684u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75690u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75698u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7570Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75710u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75718u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7573Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75740u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75750u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75764u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75768u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75788u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75820u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75840u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75848u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75854u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7585Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75864u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7586Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75880u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75888u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75890u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75898u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75908u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75918u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75930u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75950u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75968u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A759E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75AC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75AD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75AECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75ECCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75ED4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7600Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76018u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76020u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7602Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76038u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76044u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7604Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76058u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7606Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7607Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76088u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76090u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76098u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76120u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76138u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76148u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76158u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76180u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76194u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76200u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7622Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76240u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7624Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76270u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76274u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76280u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76298u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76724u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76774u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76790u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76804u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7680Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76814u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7681Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76820u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7682Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76908u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76954u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76974u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76980u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76994u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76ACCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76ADCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D3Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76EBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77010u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7702Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77030u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77044u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77068u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77070u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77084u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77100u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77108u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77138u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77168u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77174u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77180u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77204u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7722Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77230u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7723Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77240u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77250u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7725Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77264u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77270u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77280u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77290u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77310u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7734Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77378u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7737Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77404u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77420u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7742Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77440u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7744Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7746Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77490u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77500u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77508u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77514u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7751Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77524u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7752Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77534u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7753Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77544u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7754Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77554u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7755Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77564u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7756Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77570u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77578u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77580u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77588u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77590u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77594u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77598u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77684u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77714u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77724u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7772Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77740u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77794u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77810u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7782Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77838u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7784Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7785Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77870u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77884u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7789Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77900u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7790Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77914u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7791Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7794Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77958u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7796Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77984u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77988u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7799Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77ABCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77ECCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FE4u, &recomp_unit_0156, "recomp_unit_0156");
}
} // namespace psprecomp

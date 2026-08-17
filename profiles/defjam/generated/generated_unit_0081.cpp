#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0081[4085] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0,
    0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 39, 0, 40, 0, 41, 0, 0, 0,
    42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 47, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 52,
    0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 57, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 64, 65, 0,
    66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 72, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0,
    0, 79, 0, 80, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142,
    143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 170, 0, 0, 171, 0, 172, 0, 0, 0,
    0, 173, 0, 174, 0, 0, 0, 0, 175, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 185, 0,
    0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209,
    0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0,
    0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 252,
    0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0,
    0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0,
    0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 287, 288, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326,
    0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 358, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 383,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 412, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 438, 0, 0, 439, 0, 440, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 445,
    0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 459, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 469,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0,
    0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 506, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507,
    0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 512, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521,
    0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0,
    0, 528, 0, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0,
    0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0,
    0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548,
    0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0,
    0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0,
    565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572,
    0, 573, 0, 574, 0, 575, 0, 576, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0,
    0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0,
    0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 603, 0, 0,
    604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 0,
    0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0,
    0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627,
};
void recomp_unit_0081_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08948000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0081[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08948000;
    case 2u: goto L_08948014;
    case 3u: goto L_08948030;
    case 4u: goto L_08948038;
    case 5u: goto L_0894804C;
    case 6u: goto L_0894805C;
    case 7u: goto L_08948108;
    case 8u: goto L_0894811C;
    case 9u: goto L_08948124;
    case 10u: goto L_08948130;
    case 11u: goto L_08948134;
    case 12u: goto L_089481B8;
    case 13u: goto L_08948210;
    case 14u: goto L_08948218;
    case 15u: goto L_08948238;
    case 16u: goto L_08948254;
    case 17u: goto L_08948268;
    case 18u: goto L_08948274;
    case 19u: goto L_08948288;
    case 20u: goto L_08948294;
    case 21u: goto L_0894829C;
    case 22u: goto L_089482A4;
    case 23u: goto L_089482B0;
    case 24u: goto L_089482C4;
    case 25u: goto L_089482D8;
    case 26u: goto L_089482E0;
    case 27u: goto L_089482F8;
    case 28u: goto L_08948318;
    case 29u: goto L_08948334;
    case 30u: goto L_089483A0;
    case 31u: goto L_089483C8;
    case 32u: goto L_089483D0;
    case 33u: goto L_089483E0;
    case 34u: goto L_08948408;
    case 35u: goto L_0894841C;
    case 36u: goto L_08948420;
    case 37u: goto L_08948450;
    case 38u: goto L_0894845C;
    case 39u: goto L_08948460;
    case 40u: goto L_08948468;
    case 41u: goto L_08948470;
    case 42u: goto L_08948480;
    case 43u: goto L_0894848C;
    case 44u: goto L_08948494;
    case 45u: goto L_089484BC;
    case 46u: goto L_089484CC;
    case 47u: goto L_089484D0;
    case 48u: goto L_089484D8;
    case 49u: goto L_089484E0;
    case 50u: goto L_089484E8;
    case 51u: goto L_089484F4;
    case 52u: goto L_089484FC;
    case 53u: goto L_08948508;
    case 54u: goto L_08948514;
    case 55u: goto L_08948520;
    case 56u: goto L_08948528;
    case 57u: goto L_0894852C;
    case 58u: goto L_08948534;
    case 59u: goto L_0894853C;
    case 60u: goto L_08948548;
    case 61u: goto L_08948550;
    case 62u: goto L_0894855C;
    case 63u: goto L_0894856C;
    case 64u: goto L_08948574;
    case 65u: goto L_08948578;
    case 66u: goto L_08948580;
    case 67u: goto L_08948588;
    case 68u: goto L_08948594;
    case 69u: goto L_0894859C;
    case 70u: goto L_089485A8;
    case 71u: goto L_089485B8;
    case 72u: goto L_089485C0;
    case 73u: goto L_089485C4;
    case 74u: goto L_089485CC;
    case 75u: goto L_089485D4;
    case 76u: goto L_089485E0;
    case 77u: goto L_089485E8;
    case 78u: goto L_089485F4;
    case 79u: goto L_08948604;
    case 80u: goto L_0894860C;
    case 81u: goto L_08948610;
    case 82u: goto L_08948618;
    case 83u: goto L_08948620;
    case 84u: goto L_08948628;
    case 85u: goto L_08948630;
    case 86u: goto L_0894863C;
    case 87u: goto L_0894864C;
    case 88u: goto L_08948654;
    case 89u: goto L_08948664;
    case 90u: goto L_0894866C;
    case 91u: goto L_08948670;
    case 92u: goto L_08948694;
    case 93u: goto L_089486CC;
    case 94u: goto L_08948700;
    case 95u: goto L_08948714;
    case 96u: goto L_08948734;
    case 97u: goto L_08948748;
    case 98u: goto L_08948750;
    case 99u: goto L_08948764;
    case 100u: goto L_08948778;
    case 101u: goto L_08948784;
    case 102u: goto L_08948794;
    case 103u: goto L_089487A0;
    case 104u: goto L_089487DC;
    case 105u: goto L_089487FC;
    case 106u: goto L_08948808;
    case 107u: goto L_08948810;
    case 108u: goto L_08948834;
    case 109u: goto L_0894884C;
    case 110u: goto L_08948858;
    case 111u: goto L_08948864;
    case 112u: goto L_08948870;
    case 113u: goto L_089488E0;
    case 114u: goto L_089488EC;
    case 115u: goto L_08948904;
    case 116u: goto L_08948914;
    case 117u: goto L_08948928;
    case 118u: goto L_0894893C;
    case 119u: goto L_0894894C;
    case 120u: goto L_08948958;
    case 121u: goto L_08948970;
    case 122u: goto L_08948984;
    case 123u: goto L_0894898C;
    case 124u: goto L_08948994;
    case 125u: goto L_089489A4;
    case 126u: goto L_089489B8;
    case 127u: goto L_089489E8;
    case 128u: goto L_08948A1C;
    case 129u: goto L_08948A3C;
    case 130u: goto L_08948A6C;
    case 131u: goto L_08948A7C;
    case 132u: goto L_08948A90;
    case 133u: goto L_08948A9C;
    case 134u: goto L_08948AB8;
    case 135u: goto L_08948AD4;
    case 136u: goto L_08948AFC;
    case 137u: goto L_08948B10;
    case 138u: goto L_08948B1C;
    case 139u: goto L_08948B38;
    case 140u: goto L_08948B60;
    case 141u: goto L_08948B74;
    case 142u: goto L_08948B7C;
    case 143u: goto L_08948B80;
    case 144u: goto L_08948B94;
    case 145u: goto L_08948BB8;
    case 146u: goto L_08948BC8;
    case 147u: goto L_08948BDC;
    case 148u: goto L_08948BE4;
    case 149u: goto L_08948C0C;
    case 150u: goto L_08948C14;
    case 151u: goto L_08948C24;
    case 152u: goto L_08948C30;
    case 153u: goto L_08948C40;
    case 154u: goto L_08948C48;
    case 155u: goto L_08948C50;
    case 156u: goto L_08948C68;
    case 157u: goto L_08948C70;
    case 158u: goto L_08948C7C;
    case 159u: goto L_08948C98;
    case 160u: goto L_08948CA0;
    case 161u: goto L_08948CB0;
    case 162u: goto L_08948CEC;
    case 163u: goto L_08948CFC;
    case 164u: goto L_08948D08;
    case 165u: goto L_08948D20;
    case 166u: goto L_08948D28;
    case 167u: goto L_08948D38;
    case 168u: goto L_08948D50;
    case 169u: goto L_08948D58;
    case 170u: goto L_08948D5C;
    case 171u: goto L_08948D68;
    case 172u: goto L_08948D70;
    case 173u: goto L_08948D84;
    case 174u: goto L_08948D8C;
    case 175u: goto L_08948DA0;
    case 176u: goto L_08948DA4;
    case 177u: goto L_08948DB0;
    case 178u: goto L_08948DBC;
    case 179u: goto L_08948DC4;
    case 180u: goto L_08948DCC;
    case 181u: goto L_08948DDC;
    case 182u: goto L_08948DE4;
    case 183u: goto L_08948DEC;
    case 184u: goto L_08948DF4;
    case 185u: goto L_08948DF8;
    case 186u: goto L_08948E0C;
    case 187u: goto L_08948E14;
    case 188u: goto L_08948E44;
    case 189u: goto L_08948E8C;
    case 190u: goto L_08948EB4;
    case 191u: goto L_08948EC0;
    case 192u: goto L_08948EE4;
    case 193u: goto L_08948EEC;
    case 194u: goto L_08948EF8;
    case 195u: goto L_08948F20;
    case 196u: goto L_08948F2C;
    case 197u: goto L_08948F4C;
    case 198u: goto L_08948F54;
    case 199u: goto L_08948F5C;
    case 200u: goto L_08948F74;
    case 201u: goto L_08948F84;
    case 202u: goto L_08948F98;
    case 203u: goto L_08948FA0;
    case 204u: goto L_08948FA8;
    case 205u: goto L_08948FB8;
    case 206u: goto L_08948FC0;
    case 207u: goto L_08948FD0;
    case 208u: goto L_08948FF0;
    case 209u: goto L_08948FFC;
    case 210u: goto L_08949014;
    case 211u: goto L_0894901C;
    case 212u: goto L_08949024;
    case 213u: goto L_08949044;
    case 214u: goto L_08949054;
    case 215u: goto L_08949070;
    case 216u: goto L_0894907C;
    case 217u: goto L_08949094;
    case 218u: goto L_089490A8;
    case 219u: goto L_089490B0;
    case 220u: goto L_089490B8;
    case 221u: goto L_089490E8;
    case 222u: goto L_089490F0;
    case 223u: goto L_089490F8;
    case 224u: goto L_08949144;
    case 225u: goto L_08949170;
    case 226u: goto L_08949184;
    case 227u: goto L_089491C0;
    case 228u: goto L_0894924C;
    case 229u: goto L_0894925C;
    case 230u: goto L_08949264;
    case 231u: goto L_0894926C;
    case 232u: goto L_08949278;
    case 233u: goto L_08949288;
    case 234u: goto L_08949290;
    case 235u: goto L_08949298;
    case 236u: goto L_089492A0;
    case 237u: goto L_089492B0;
    case 238u: goto L_089492B8;
    case 239u: goto L_089492C4;
    case 240u: goto L_089492CC;
    case 241u: goto L_0894934C;
    case 242u: goto L_08949354;
    case 243u: goto L_08949364;
    case 244u: goto L_08949370;
    case 245u: goto L_0894937C;
    case 246u: goto L_08949384;
    case 247u: goto L_089493C4;
    case 248u: goto L_089493D0;
    case 249u: goto L_089493D8;
    case 250u: goto L_089493E8;
    case 251u: goto L_089493F4;
    case 252u: goto L_089493FC;
    case 253u: goto L_0894940C;
    case 254u: goto L_08949418;
    case 255u: goto L_08949420;
    case 256u: goto L_08949430;
    case 257u: goto L_0894943C;
    case 258u: goto L_08949444;
    case 259u: goto L_08949454;
    case 260u: goto L_08949460;
    case 261u: goto L_08949468;
    case 262u: goto L_08949478;
    case 263u: goto L_08949484;
    case 264u: goto L_0894948C;
    case 265u: goto L_089494B0;
    case 266u: goto L_089494BC;
    case 267u: goto L_089494C4;
    case 268u: goto L_089494D8;
    case 269u: goto L_089494F0;
    case 270u: goto L_0894951C;
    case 271u: goto L_0894954C;
    case 272u: goto L_0894957C;
    case 273u: goto L_089495AC;
    case 274u: goto L_089495DC;
    case 275u: goto L_0894960C;
    case 276u: goto L_0894963C;
    case 277u: goto L_08949654;
    case 278u: goto L_08949660;
    case 279u: goto L_08949668;
    case 280u: goto L_08949684;
    case 281u: goto L_08949688;
    case 282u: goto L_089496F8;
    case 283u: goto L_08949724;
    case 284u: goto L_08949740;
    case 285u: goto L_08949748;
    case 286u: goto L_08949764;
    case 287u: goto L_0894976C;
    case 288u: goto L_08949770;
    case 289u: goto L_08949778;
    case 290u: goto L_08949790;
    case 291u: goto L_089497C8;
    case 292u: goto L_089497E8;
    case 293u: goto L_08949854;
    case 294u: goto L_08949884;
    case 295u: goto L_089498B0;
    case 296u: goto L_0894998C;
    case 297u: goto L_089499A0;
    case 298u: goto L_089499A8;
    case 299u: goto L_08949A08;
    case 300u: goto L_08949A18;
    case 301u: goto L_08949A20;
    case 302u: goto L_08949A6C;
    case 303u: goto L_08949A88;
    case 304u: goto L_08949A9C;
    case 305u: goto L_08949AC4;
    case 306u: goto L_08949B00;
    case 307u: goto L_08949B3C;
    case 308u: goto L_08949B58;
    case 309u: goto L_08949B78;
    case 310u: goto L_08949B84;
    case 311u: goto L_08949B8C;
    case 312u: goto L_08949BA0;
    case 313u: goto L_08949BBC;
    case 314u: goto L_08949BD4;
    case 315u: goto L_08949BEC;
    case 316u: goto L_08949C00;
    case 317u: goto L_08949C1C;
    case 318u: goto L_08949C28;
    case 319u: goto L_08949C30;
    case 320u: goto L_08949C34;
    case 321u: goto L_08949C44;
    case 322u: goto L_08949C54;
    case 323u: goto L_08949C5C;
    case 324u: goto L_08949C64;
    case 325u: goto L_08949C6C;
    case 326u: goto L_08949C7C;
    case 327u: goto L_08949C84;
    case 328u: goto L_08949C90;
    case 329u: goto L_08949EE8;
    case 330u: goto L_08949F00;
    case 331u: goto L_08949F10;
    case 332u: goto L_08949F1C;
    case 333u: goto L_08949F28;
    case 334u: goto L_08949F30;
    case 335u: goto L_08949F3C;
    case 336u: goto L_08949F6C;
    case 337u: goto L_08949F78;
    case 338u: goto L_0894A03C;
    case 339u: goto L_0894A05C;
    case 340u: goto L_0894A088;
    case 341u: goto L_0894A09C;
    case 342u: goto L_0894A0C8;
    case 343u: goto L_0894A0F0;
    case 344u: goto L_0894A0FC;
    case 345u: goto L_0894A108;
    case 346u: goto L_0894A120;
    case 347u: goto L_0894A12C;
    case 348u: goto L_0894A150;
    case 349u: goto L_0894A158;
    case 350u: goto L_0894A178;
    case 351u: goto L_0894A18C;
    case 352u: goto L_0894A194;
    case 353u: goto L_0894A19C;
    case 354u: goto L_0894A350;
    case 355u: goto L_0894A3C4;
    case 356u: goto L_0894A3DC;
    case 357u: goto L_0894A3F4;
    case 358u: goto L_0894A3F8;
    case 359u: goto L_0894A408;
    case 360u: goto L_0894A414;
    case 361u: goto L_0894A438;
    case 362u: goto L_0894A444;
    case 363u: goto L_0894A450;
    case 364u: goto L_0894A458;
    case 365u: goto L_0894A46C;
    case 366u: goto L_0894A4CC;
    case 367u: goto L_0894A508;
    case 368u: goto L_0894A518;
    case 369u: goto L_0894A520;
    case 370u: goto L_0894A530;
    case 371u: goto L_0894A53C;
    case 372u: goto L_0894A544;
    case 373u: goto L_0894A558;
    case 374u: goto L_0894A560;
    case 375u: goto L_0894A568;
    case 376u: goto L_0894A590;
    case 377u: goto L_0894A598;
    case 378u: goto L_0894A5C0;
    case 379u: goto L_0894A5D0;
    case 380u: goto L_0894A5D8;
    case 381u: goto L_0894A5E0;
    case 382u: goto L_0894A5E8;
    case 383u: goto L_0894A5FC;
    case 384u: goto L_0894A604;
    case 385u: goto L_0894A6FC;
    case 386u: goto L_0894A704;
    case 387u: goto L_0894A728;
    case 388u: goto L_0894A730;
    case 389u: goto L_0894A754;
    case 390u: goto L_0894A778;
    case 391u: goto L_0894A780;
    case 392u: goto L_0894A788;
    case 393u: goto L_0894A7B0;
    case 394u: goto L_0894A87C;
    case 395u: goto L_0894A88C;
    case 396u: goto L_0894A8DC;
    case 397u: goto L_0894A980;
    case 398u: goto L_0894A998;
    case 399u: goto L_0894A9B0;
    case 400u: goto L_0894A9B4;
    case 401u: goto L_0894AA24;
    case 402u: goto L_0894AA30;
    case 403u: goto L_0894AA7C;
    case 404u: goto L_0894AA88;
    case 405u: goto L_0894AAB8;
    case 406u: goto L_0894AAC0;
    case 407u: goto L_0894AAE4;
    case 408u: goto L_0894AB1C;
    case 409u: goto L_0894AB54;
    case 410u: goto L_0894AB60;
    case 411u: goto L_0894AB68;
    case 412u: goto L_0894AB6C;
    case 413u: goto L_0894AB70;
    case 414u: goto L_0894ABAC;
    case 415u: goto L_0894AC40;
    case 416u: goto L_0894AC4C;
    case 417u: goto L_0894AC54;
    case 418u: goto L_0894AC5C;
    case 419u: goto L_0894AD2C;
    case 420u: goto L_0894AD3C;
    case 421u: goto L_0894AD50;
    case 422u: goto L_0894AD60;
    case 423u: goto L_0894ADB8;
    case 424u: goto L_0894ADEC;
    case 425u: goto L_0894AE2C;
    case 426u: goto L_0894AE48;
    case 427u: goto L_0894AE5C;
    case 428u: goto L_0894AE90;
    case 429u: goto L_0894AE98;
    case 430u: goto L_0894AEC0;
    case 431u: goto L_0894AEC8;
    case 432u: goto L_0894AED4;
    case 433u: goto L_0894AEE0;
    case 434u: goto L_0894AEF4;
    case 435u: goto L_0894AF08;
    case 436u: goto L_0894AF2C;
    case 437u: goto L_0894AF60;
    case 438u: goto L_0894AF64;
    case 439u: goto L_0894AF70;
    case 440u: goto L_0894AF78;
    case 441u: goto L_0894AF8C;
    case 442u: goto L_0894AFA0;
    case 443u: goto L_0894AFC8;
    case 444u: goto L_0894AFF8;
    case 445u: goto L_0894AFFC;
    case 446u: goto L_0894B00C;
    case 447u: goto L_0894B01C;
    case 448u: goto L_0894B038;
    case 449u: goto L_0894B0AC;
    case 450u: goto L_0894B0C4;
    case 451u: goto L_0894B0CC;
    case 452u: goto L_0894B108;
    case 453u: goto L_0894B11C;
    case 454u: goto L_0894B130;
    case 455u: goto L_0894B138;
    case 456u: goto L_0894B148;
    case 457u: goto L_0894B15C;
    case 458u: goto L_0894B170;
    case 459u: goto L_0894B174;
    case 460u: goto L_0894B1A0;
    case 461u: goto L_0894B1B0;
    case 462u: goto L_0894B1B8;
    case 463u: goto L_0894B1C0;
    case 464u: goto L_0894B1F4;
    case 465u: goto L_0894B23C;
    case 466u: goto L_0894B24C;
    case 467u: goto L_0894B260;
    case 468u: goto L_0894B270;
    case 469u: goto L_0894B27C;
    case 470u: goto L_0894B288;
    case 471u: goto L_0894B2C4;
    case 472u: goto L_0894B314;
    case 473u: goto L_0894B31C;
    case 474u: goto L_0894B334;
    case 475u: goto L_0894B33C;
    case 476u: goto L_0894B348;
    case 477u: goto L_0894B350;
    case 478u: goto L_0894B358;
    case 479u: goto L_0894B368;
    case 480u: goto L_0894B384;
    case 481u: goto L_0894B398;
    case 482u: goto L_0894B39C;
    case 483u: goto L_0894B3B4;
    case 484u: goto L_0894B3DC;
    case 485u: goto L_0894B3E4;
    case 486u: goto L_0894B3F8;
    case 487u: goto L_0894B404;
    case 488u: goto L_0894B410;
    case 489u: goto L_0894B424;
    case 490u: goto L_0894B434;
    case 491u: goto L_0894B444;
    case 492u: goto L_0894B4A0;
    case 493u: goto L_0894B4C4;
    case 494u: goto L_0894B4E4;
    case 495u: goto L_0894B500;
    case 496u: goto L_0894B510;
    case 497u: goto L_0894B51C;
    case 498u: goto L_0894B528;
    case 499u: goto L_0894B5CC;
    case 500u: goto L_0894B5E0;
    case 501u: goto L_0894B600;
    case 502u: goto L_0894B620;
    case 503u: goto L_0894B63C;
    case 504u: goto L_0894B644;
    case 505u: goto L_0894B658;
    case 506u: goto L_0894B65C;
    case 507u: goto L_0894B77C;
    case 508u: goto L_0894B79C;
    case 509u: goto L_0894B800;
    case 510u: goto L_0894B814;
    case 511u: goto L_0894B874;
    case 512u: goto L_0894B884;
    case 513u: goto L_0894B88C;
    case 514u: goto L_0894B898;
    case 515u: goto L_0894B8A8;
    case 516u: goto L_0894B8B4;
    case 517u: goto L_0894B8C4;
    case 518u: goto L_0894B8D0;
    case 519u: goto L_0894B8E0;
    case 520u: goto L_0894B8EC;
    case 521u: goto L_0894B8FC;
    case 522u: goto L_0894B908;
    case 523u: goto L_0894B928;
    case 524u: goto L_0894B934;
    case 525u: goto L_0894B944;
    case 526u: goto L_0894B958;
    case 527u: goto L_0894B968;
    case 528u: goto L_0894B984;
    case 529u: goto L_0894B990;
    case 530u: goto L_0894B998;
    case 531u: goto L_0894B9A4;
    case 532u: goto L_0894B9AC;
    case 533u: goto L_0894B9B4;
    case 534u: goto L_0894B9BC;
    case 535u: goto L_0894B9F8;
    case 536u: goto L_0894BA04;
    case 537u: goto L_0894BA20;
    case 538u: goto L_0894BA30;
    case 539u: goto L_0894BA4C;
    case 540u: goto L_0894BA64;
    case 541u: goto L_0894BA6C;
    case 542u: goto L_0894BA90;
    case 543u: goto L_0894BAA8;
    case 544u: goto L_0894BAB8;
    case 545u: goto L_0894BAD0;
    case 546u: goto L_0894BAE8;
    case 547u: goto L_0894BAF4;
    case 548u: goto L_0894BAFC;
    case 549u: goto L_0894BB14;
    case 550u: goto L_0894BB1C;
    case 551u: goto L_0894BB3C;
    case 552u: goto L_0894BB54;
    case 553u: goto L_0894BB60;
    case 554u: goto L_0894BB6C;
    case 555u: goto L_0894BB8C;
    case 556u: goto L_0894BB98;
    case 557u: goto L_0894BBA4;
    case 558u: goto L_0894BBB0;
    case 559u: goto L_0894BBB8;
    case 560u: goto L_0894BBBC;
    case 561u: goto L_0894BBCC;
    case 562u: goto L_0894BBD8;
    case 563u: goto L_0894BBF0;
    case 564u: goto L_0894BBF8;
    case 565u: goto L_0894BC00;
    case 566u: goto L_0894BC18;
    case 567u: goto L_0894BC30;
    case 568u: goto L_0894BC40;
    case 569u: goto L_0894BC48;
    case 570u: goto L_0894BC54;
    case 571u: goto L_0894BC5C;
    case 572u: goto L_0894BC7C;
    case 573u: goto L_0894BC84;
    case 574u: goto L_0894BC8C;
    case 575u: goto L_0894BC94;
    case 576u: goto L_0894BC9C;
    case 577u: goto L_0894BCA0;
    case 578u: goto L_0894BCA8;
    case 579u: goto L_0894BCEC;
    case 580u: goto L_0894BCF4;
    case 581u: goto L_0894BD14;
    case 582u: goto L_0894BD1C;
    case 583u: goto L_0894BD34;
    case 584u: goto L_0894BD40;
    case 585u: goto L_0894BD5C;
    case 586u: goto L_0894BD68;
    case 587u: goto L_0894BD84;
    case 588u: goto L_0894BD9C;
    case 589u: goto L_0894BDB8;
    case 590u: goto L_0894BDD4;
    case 591u: goto L_0894BDDC;
    case 592u: goto L_0894BDF0;
    case 593u: goto L_0894BDF8;
    case 594u: goto L_0894BE0C;
    case 595u: goto L_0894BE18;
    case 596u: goto L_0894BE20;
    case 597u: goto L_0894BE28;
    case 598u: goto L_0894BE40;
    case 599u: goto L_0894BE4C;
    case 600u: goto L_0894BE54;
    case 601u: goto L_0894BE5C;
    case 602u: goto L_0894BE64;
    case 603u: goto L_0894BE74;
    case 604u: goto L_0894BE80;
    case 605u: goto L_0894BE98;
    case 606u: goto L_0894BEA0;
    case 607u: goto L_0894BEA8;
    case 608u: goto L_0894BEC0;
    case 609u: goto L_0894BED8;
    case 610u: goto L_0894BEE8;
    case 611u: goto L_0894BEF0;
    case 612u: goto L_0894BF04;
    case 613u: goto L_0894BF10;
    case 614u: goto L_0894BF18;
    case 615u: goto L_0894BF24;
    case 616u: goto L_0894BF2C;
    case 617u: goto L_0894BF34;
    case 618u: goto L_0894BF3C;
    case 619u: goto L_0894BF50;
    case 620u: goto L_0894BF64;
    case 621u: goto L_0894BF74;
    case 622u: goto L_0894BF84;
    case 623u: goto L_0894BF8C;
    case 624u: goto L_0894BFA4;
    case 625u: goto L_0894BFB0;
    case 626u: goto L_0894BFB8;
    case 627u: goto L_0894BFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08948000:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x08948014u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 548u, 0x089CF308u>(ctx, &aot_mem) && ctx.pc == 0x08948014u) goto L_08948014;
    return;
L_08948014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08948030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08948030u) goto L_08948030;
    return;
L_08948030:
    ctx.gpr[31] = (0x08948038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 188u, 0x089D9304u>(ctx, &aot_mem) && ctx.pc == 0x08948038u) goto L_08948038;
    return;
L_08948038:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08948130;
      }
      goto L_0894804C;
    }
L_0894804C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08948134;
    }
    goto L_0894805C;
L_0894805C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08948108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 174u, 0x08944C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08948108u) goto L_08948108;
    return;
L_08948108:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x0894811Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0894A46C;
L_0894811C:
    ctx.gpr[31] = (0x08948124u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20016)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 175u, 0x08944CBCu>(ctx, &aot_mem) && ctx.pc == 0x08948124u) goto L_08948124;
    return;
L_08948124:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08948130;
L_08948130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08948134;
L_08948134:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(84));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089481B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23420)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11560));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x08948210u) goto L_08948210;
    return;
L_08948210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08948694;
      }
      goto L_08948218;
    }
L_08948218:
    ctx.gpr[16] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11572));
    ctx.gpr[6] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948238u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11576));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x08948238u) goto L_08948238;
    return;
L_08948238:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3692), ctx.gpr[2]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948254u);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948254u) goto L_08948254;
    return;
L_08948254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3692)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3688), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089482C4;
      }
      goto L_08948268;
    }
L_08948268:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    goto L_08948274;
L_08948274:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3688)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08948288u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08948288u) goto L_08948288;
    return;
L_08948288:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08948294u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08948294u) goto L_08948294;
    return;
L_08948294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089482B0;
      }
      goto L_0894829C;
    }
L_0894829C:
    ctx.gpr[31] = (0x089482A4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089482A4u) goto L_089482A4;
    return;
L_089482A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089482B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089482B0u) goto L_089482B0;
    return;
L_089482B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3692)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08948274;
      }
      goto L_089482C4;
    }
L_089482C4:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089482D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11588));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x089482D8u) goto L_089482D8;
    return;
L_089482D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_08948694;
      }
      goto L_089482E0;
    }
L_089482E0:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(11596));
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089482F8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11608));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x089482F8u) goto L_089482F8;
    return;
L_089482F8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948318u);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948318u) goto L_08948318;
    return;
L_08948318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08948694;
      }
      goto L_08948334;
    }
L_08948334:
    ctx.gpr[4] = (2220u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11636));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11644));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11624));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(11532));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(11652));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(11660));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(11668));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(11676));
    goto L_089483A0;
L_089483A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089483C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x089483C8u) goto L_089483C8;
    return;
L_089483C8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
        goto L_08948670;
    }
    goto L_089483D0;
L_089483D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x089483E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x089483E0u) goto L_089483E0;
    return;
L_089483E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948408u);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948408u) goto L_08948408;
    return;
L_08948408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08948450;
      }
      goto L_0894841C;
    }
L_0894841C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08948420;
L_08948420:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08948420;
      }
      goto L_08948450;
    }
L_08948450:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    goto L_0894845C;
L_0894845C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    goto L_08948460;
L_08948460:
    ctx.gpr[31] = (0x08948468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08948468u) goto L_08948468;
    return;
L_08948468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948470;
    }
L_08948470:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948480u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08948480u) goto L_08948480;
    return;
L_08948480:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894848Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0894848Cu) goto L_0894848C;
    return;
L_0894848C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
        goto L_08948460;
    }
    goto L_08948494;
L_08948494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 36u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089484BCu);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089484BCu) goto L_089484BC;
    return;
L_089484BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089484CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x089484CCu) goto L_089484CC;
    return;
L_089484CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    goto L_089484D0;
L_089484D0:
    ctx.gpr[31] = (0x089484D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089484D8u) goto L_089484D8;
    return;
L_089484D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08948654;
      }
      goto L_089484E0;
    }
L_089484E0:
    ctx.gpr[31] = (0x089484E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089484E8u) goto L_089484E8;
    return;
L_089484E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089484F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089484F4u) goto L_089484F4;
    return;
L_089484F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0894852C;
      }
      goto L_089484FC;
    }
L_089484FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948508u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08948508u) goto L_08948508;
    return;
L_08948508:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948514u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08948514u) goto L_08948514;
    return;
L_08948514:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948520u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08948520u) goto L_08948520;
    return;
L_08948520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089484D0;
      }
      goto L_08948528;
    }
L_08948528:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894852C;
L_0894852C:
    ctx.gpr[31] = (0x08948534u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08948534u) goto L_08948534;
    return;
L_08948534:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08948578;
      }
      goto L_0894853C;
    }
L_0894853C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948548u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08948548u) goto L_08948548;
    return;
L_08948548:
    ctx.gpr[31] = (0x08948550u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08948550u) goto L_08948550;
    return;
L_08948550:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0894855Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x0894855Cu) goto L_0894855C;
    return;
L_0894855C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0894856Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0894856Cu) goto L_0894856C;
    return;
L_0894856C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089484D0;
      }
      goto L_08948574;
    }
L_08948574:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08948578;
L_08948578:
    ctx.gpr[31] = (0x08948580u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08948580u) goto L_08948580;
    return;
L_08948580:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089485C4;
      }
      goto L_08948588;
    }
L_08948588:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948594u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08948594u) goto L_08948594;
    return;
L_08948594:
    ctx.gpr[31] = (0x0894859Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0894859Cu) goto L_0894859C;
    return;
L_0894859C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089485A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089485A8u) goto L_089485A8;
    return;
L_089485A8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089485B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089485B8u) goto L_089485B8;
    return;
L_089485B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089484D0;
      }
      goto L_089485C0;
    }
L_089485C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089485C4;
L_089485C4:
    ctx.gpr[31] = (0x089485CCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089485CCu) goto L_089485CC;
    return;
L_089485CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08948610;
      }
      goto L_089485D4;
    }
L_089485D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089485E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089485E0u) goto L_089485E0;
    return;
L_089485E0:
    ctx.gpr[31] = (0x089485E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x089485E8u) goto L_089485E8;
    return;
L_089485E8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089485F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089485F4u) goto L_089485F4;
    return;
L_089485F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948604u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08948604u) goto L_08948604;
    return;
L_08948604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089484D0;
      }
      goto L_0894860C;
    }
L_0894860C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08948610;
L_08948610:
    ctx.gpr[31] = (0x08948618u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08948618u) goto L_08948618;
    return;
L_08948618:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089484CC;
      }
      goto L_08948620;
    }
L_08948620:
    ctx.gpr[31] = (0x08948628u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08948628u) goto L_08948628;
    return;
L_08948628:
    ctx.gpr[31] = (0x08948630u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08948630u) goto L_08948630;
    return;
L_08948630:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0894863Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x0894863Cu) goto L_0894863C;
    return;
L_0894863C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0894864Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0894864Cu) goto L_0894864C;
    return;
L_0894864C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089484D0;
      }
      goto L_08948654;
    }
L_08948654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894845C;
      }
      goto L_08948664;
    }
L_08948664:
    ctx.gpr[31] = (0x0894866Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0894866Cu) goto L_0894866C;
    return;
L_0894866C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_08948670;
L_08948670:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089483A0;
      }
      goto L_08948694;
    }
L_08948694:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089486CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948700u);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08948700u) goto L_08948700;
    return;
L_08948700:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08948714u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23420)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08948714u) goto L_08948714;
    return;
L_08948714:
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(2));
    ctx.gpr[20] = (ctx.gpr[23] << 4u);
    ctx.gpr[20] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[30] << 2u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08948750;
      }
      goto L_08948734;
    }
L_08948734:
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948748u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11296));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08948748u) goto L_08948748;
    return;
L_08948748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089487A0;
      }
      goto L_08948750;
    }
L_08948750:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[31] = (0x08948764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08948764u) goto L_08948764;
    return;
L_08948764:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x08948778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23508)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08948778u) goto L_08948778;
    return;
L_08948778:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08948784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08948784u) goto L_08948784;
    return;
L_08948784:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[17] = (0u | 65u);
    ctx.gpr[31] = (0x08948794u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11308));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08948794u) goto L_08948794;
    return;
L_08948794:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    goto L_089487A0;
L_089487A0:
    ctx.gpr[4] = (ctx.gpr[19] << (ctx.gpr[23] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] << 6u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23504)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089487DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089487DCu) goto L_089487DC;
    return;
L_089487DC:
    ctx.gpr[4] = (ctx.gpr[23] << 4u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089487FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x089487FCu) goto L_089487FC;
    return;
L_089487FC:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948808u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08948808u) goto L_08948808;
    return;
L_08948808:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    ctx.gpr[23] = (0u | 2u);
        goto L_08948810;
    }
    goto L_08948810;
L_08948810:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948834u);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948834u) goto L_08948834;
    return;
L_08948834:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894884Cu);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894884Cu) goto L_0894884C;
    return;
L_0894884C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089489B8;
      }
      goto L_08948858;
    }
L_08948858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089489B8;
      }
      goto L_08948864;
    }
L_08948864:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089489B8;
      }
      goto L_08948870;
    }
L_08948870:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11304));
    ctx.gpr[7] = (ctx.gpr[21] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11364));
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11372));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11384));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(872));
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1512));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(11412));
    goto L_089488E0;
L_089488E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[31] = (0x089488ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x089488ECu) goto L_089488EC;
    return;
L_089488EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08948904u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08948904u) goto L_08948904;
    return;
L_08948904:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948914u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08948914u) goto L_08948914;
    return;
L_08948914:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08948958;
      }
      goto L_08948928;
    }
L_08948928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894893Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894893Cu) goto L_0894893C;
    return;
L_0894893C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894894Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894894Cu) goto L_0894894C;
    return;
L_0894894C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0894898C;
      }
      goto L_08948958;
    }
L_08948958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948970u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948970u) goto L_08948970;
    return;
L_08948970:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948984u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948984u) goto L_08948984;
    return;
L_08948984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0894898C;
L_0894898C:
    ctx.gpr[31] = (0x08948994u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x08948994u) goto L_08948994;
    return;
L_08948994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089489A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x089489A4u) goto L_089489A4;
    return;
L_089489A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089488E0;
      }
      goto L_089489B8;
    }
L_089489B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089489E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08948A1Cu) goto L_08948A1C;
    return;
L_08948A1C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23420)));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08948A3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11316));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08948A3Cu) goto L_08948A3C;
    return;
L_08948A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(424));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11188));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23504)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948A6Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948A6Cu) goto L_08948A6C;
    return;
L_08948A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08948A7Cu) goto L_08948A7C;
    return;
L_08948A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08948B7C;
      }
      goto L_08948A90;
    }
L_08948A90:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08948B80;
      }
      goto L_08948A9C;
    }
L_08948A9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948AB8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948AD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11328));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948AD4u) goto L_08948AD4;
    return;
L_08948AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23504)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948AFCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948AFCu) goto L_08948AFC;
    return;
L_08948AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 760u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08948B10u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08948B10u) goto L_08948B10;
    return;
L_08948B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08948B7C;
      }
      goto L_08948B1C;
    }
L_08948B1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948B38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11340));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948B38u) goto L_08948B38;
    return;
L_08948B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23504)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948B60u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948B60u) goto L_08948B60;
    return;
L_08948B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 760u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08948B74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08948B74u) goto L_08948B74;
    return;
L_08948B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08948B7C;
L_08948B7C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08948B80;
L_08948B80:
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948B94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11352));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948B94u) goto L_08948B94;
    return;
L_08948B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23504)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948BB8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948BB8u) goto L_08948BB8;
    return;
L_08948BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08948BC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08948BC8u) goto L_08948BC8;
    return;
L_08948BC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 360u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948BDCu);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948BDCu) goto L_08948BDC;
    return;
L_08948BDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08948C68;
      }
      goto L_08948BE4;
    }
L_08948BE4:
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (0u | 9u);
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(2152));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(11424));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(23592));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(11436));
    goto L_08948C0C;
L_08948C0C:
    if (ctx.gpr[18] == ctx.gpr[22]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
        goto L_08948C30;
    }
    goto L_08948C14;
L_08948C14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948C24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948C24u) goto L_08948C24;
    return;
L_08948C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08948C48;
      }
      goto L_08948C30;
    }
L_08948C30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08948C40u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948C40u) goto L_08948C40;
    return;
L_08948C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08948C48;
L_08948C48:
    ctx.gpr[31] = (0x08948C50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x08948C50u) goto L_08948C50;
    return;
L_08948C50:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08948C0C;
      }
      goto L_08948C68;
    }
L_08948C68:
    ctx.gpr[31] = (0x08948C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 139u, 0x089449ECu>(ctx, &aot_mem) && ctx.pc == 0x08948C70u) goto L_08948C70;
    return;
L_08948C70:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08948E0C;
      }
      goto L_08948C7C;
    }
L_08948C7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08948C98u);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948C98u) goto L_08948C98;
    return;
L_08948C98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08948E0C;
      }
      goto L_08948CA0;
    }
L_08948CA0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_08948E0C;
      }
      goto L_08948CB0;
    }
L_08948CB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11504));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(23628));
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(2792));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-40));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(11452));
    goto L_08948CEC;
L_08948CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08948DA0;
      }
      goto L_08948CFC;
    }
L_08948CFC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08948DA0;
      }
      goto L_08948D08;
    }
L_08948D08:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948D20:
    ctx.gpr[31] = (0x08948D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 139u, 0x089449ECu>(ctx, &aot_mem) && ctx.pc == 0x08948D28u) goto L_08948D28;
    return;
L_08948D28:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08948D5C;
    }
    goto L_08948D38;
L_08948D38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08948D50u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948D50u) goto L_08948D50;
    return;
L_08948D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08948DA4;
      }
      goto L_08948D58;
    }
L_08948D58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08948D5C;
L_08948D5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08948D68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948D68u) goto L_08948D68;
    return;
L_08948D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08948DA4;
      }
      goto L_08948D70;
    }
L_08948D70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08948D84u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948D84u) goto L_08948D84;
    return;
L_08948D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08948DA4;
      }
      goto L_08948D8C;
    }
L_08948D8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948DA0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08948DA0u) goto L_08948DA0;
    return;
L_08948DA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08948DA4;
L_08948DA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948DB0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08948DB0u) goto L_08948DB0;
    return;
L_08948DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08948DCC;
      }
      goto L_08948DBC;
    }
L_08948DBC:
    ctx.gpr[31] = (0x08948DC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x08948DC4u) goto L_08948DC4;
    return;
L_08948DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08948DF8;
      }
      goto L_08948DCC;
    }
L_08948DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08948DEC;
      }
      goto L_08948DDC;
    }
L_08948DDC:
    ctx.gpr[31] = (0x08948DE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x08948DE4u) goto L_08948DE4;
    return;
L_08948DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08948DF8;
      }
      goto L_08948DEC;
    }
L_08948DEC:
    ctx.gpr[31] = (0x08948DF4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x08948DF4u) goto L_08948DF4;
    return;
L_08948DF4:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08948DF8;
L_08948DF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08948CEC;
      }
      goto L_08948E0C;
    }
L_08948E0C:
    ctx.gpr[31] = (0x08948E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 320u, 0x08945AACu>(ctx, &aot_mem) && ctx.pc == 0x08948E14u) goto L_08948E14;
    return;
L_08948E14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(23420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08948EEC;
      }
      goto L_08948E8C;
    }
L_08948E8C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (0u | 6u);
    ctx.gpr[31] = (0x08948EB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08948EB4u) goto L_08948EB4;
    return;
L_08948EB4:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[19] = (ctx.gpr[18] << 3u);
        goto L_08948EC0;
    }
    goto L_08948EC0;
L_08948EC0:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948EE4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948EE4u) goto L_08948EE4;
    return;
L_08948EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_08948EEC;
    }
L_08948EEC:
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08948F54;
      }
      goto L_08948EF8;
    }
L_08948EF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08948F20u);
    ctx.gpr[17] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08948F20u) goto L_08948F20;
    return;
L_08948F20:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
        goto L_08948F2C;
    }
    goto L_08948F2C;
L_08948F2C:
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948F4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948F4Cu) goto L_08948F4C;
    return;
L_08948F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_08948F54;
    }
L_08948F54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0894901C;
      }
      goto L_08948F5C;
    }
L_08948F5C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08948F74u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08948F74u) goto L_08948F74;
    return;
L_08948F74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08948F98;
      }
      goto L_08948F84;
    }
L_08948F84:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08948FFC;
      }
      goto L_08948F98;
    }
L_08948F98:
    if (ctx.gpr[5] != ctx.gpr[19]) {
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
        goto L_08948FF0;
    }
    goto L_08948FA0;
L_08948FA0:
    ctx.gpr[31] = (0x08948FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 139u, 0x089449ECu>(ctx, &aot_mem) && ctx.pc == 0x08948FA8u) goto L_08948FA8;
    return;
L_08948FA8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
        goto L_08948FF0;
    }
    goto L_08948FB8;
L_08948FB8:
    ctx.gpr[31] = (0x08948FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 139u, 0x089449ECu>(ctx, &aot_mem) && ctx.pc == 0x08948FC0u) goto L_08948FC0;
    return;
L_08948FC0:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08948FD0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 139u, 0x089449ECu>(ctx, &aot_mem) && ctx.pc == 0x08948FD0u) goto L_08948FD0;
    return;
L_08948FD0:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08948FFC;
      }
      goto L_08948FF0;
    }
L_08948FF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_08948FFC;
L_08948FFC:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949014u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08949014u) goto L_08949014;
    return;
L_08949014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_0894901C;
    }
L_0894901C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_089490B0;
      }
      goto L_08949024;
    }
L_08949024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2220u << 16u);
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_08949044;
    }
L_08949044:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(11252));
    ctx.gpr[22] = (2221u << 16u);
    goto L_08949054;
L_08949054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(23512)));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08949070u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08949070u) goto L_08949070;
    return;
L_08949070:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894907Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0894907Cu) goto L_0894907C;
    return;
L_0894907C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08949094u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08949094u) goto L_08949094;
    return;
L_08949094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08949054;
      }
      goto L_089490A8;
    }
L_089490A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_089490B0;
    }
L_089490B0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089490F0;
      }
      goto L_089490B8;
    }
L_089490B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089490E8u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945E7Cu>(ctx, &aot_mem) && ctx.pc == 0x089490E8u) goto L_089490E8;
    return;
L_089490E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_089490F0;
    }
L_089490F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_089490F8;
    }
L_089490F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[18] << 5u);
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08949144u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 388u, 0x08945E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08949144u) goto L_08949144;
    return;
L_08949144:
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
L_08949170:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23540)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23544), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089491C0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9736));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x089491C0u) goto L_089491C0;
    return;
L_089491C0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (16936u << 16u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894924C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_0894926C;
      }
      goto L_0894925C;
    }
L_0894925C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894926C;
      }
      goto L_08949264;
    }
L_08949264:
    ctx.gpr[31] = (0x0894926Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 97u, 0x08AA8780u>(ctx, &aot_mem) && ctx.pc == 0x0894926Cu) goto L_0894926C;
    return;
L_0894926C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949278:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_08949288;
L_08949288:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089492B0;
      }
      goto L_08949290;
    }
L_08949290:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089492B0;
      }
      goto L_08949298;
    }
L_08949298:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089492B0;
      }
      goto L_089492A0;
    }
L_089492A0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08949288;
      }
      goto L_089492B0;
    }
L_089492B0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089492C4;
      }
      goto L_089492B8;
    }
L_089492B8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089492C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089492CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894934C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894937C;
      }
      goto L_08949354;
    }
L_08949354:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894937C;
      }
      goto L_08949364;
    }
L_08949364:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_0894937C;
    }
    goto L_08949370;
L_08949370:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0894937C;
L_0894937C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(220));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089493C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089493C4u) goto L_089493C4;
    return;
L_089493C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089493D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_089493D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0894960C;
      }
      goto L_089493D8;
    }
L_089493D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(296));
    ctx.gpr[31] = (0x089493E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12196));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089493E8u) goto L_089493E8;
    return;
L_089493E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089493F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_089493F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_089495DC;
      }
      goto L_089493FC;
    }
L_089493FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x0894940Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12208));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0894940Cu) goto L_0894940C;
    return;
L_0894940C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08949418u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_08949418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_089495AC;
      }
      goto L_08949420;
    }
L_08949420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(228));
    ctx.gpr[31] = (0x08949430u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12220));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08949430u) goto L_08949430;
    return;
L_08949430:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894943Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_0894943C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0894957C;
      }
      goto L_08949444;
    }
L_08949444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x08949454u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12232));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08949454u) goto L_08949454;
    return;
L_08949454:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08949460u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_08949460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0894954C;
      }
      goto L_08949468;
    }
L_08949468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(236));
    ctx.gpr[31] = (0x08949478u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12244));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08949478u) goto L_08949478;
    return;
L_08949478:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08949484u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_08949484:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0894951C;
      }
      goto L_0894948C;
    }
L_0894948C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(272));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(276));
    ctx.gpr[8] = (ctx.gpr[17] + static_cast<std::uint32_t>(280));
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(284));
    ctx.gpr[10] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
    ctx.gpr[11] = (ctx.gpr[17] + static_cast<std::uint32_t>(292));
    ctx.gpr[31] = (0x089494B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12256));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089494B0u) goto L_089494B0;
    return;
L_089494B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089494BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_089494BC:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
        goto L_089494F0;
    }
    goto L_089494C4;
L_089494C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08949688;
      }
      goto L_089494D8;
    }
L_089494D8:
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12288));
      if (branch_taken) {
          goto L_0894963C;
      }
      goto L_089494F0;
    }
L_089494F0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894951C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894954C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894957C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089495AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089495DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894960C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894963C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08949654u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08949654u) goto L_08949654;
    return;
L_08949654:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08949660u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08949278;
L_08949660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089496F8;
      }
      goto L_08949668;
    }
L_08949668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0894963C;
      }
      goto L_08949684;
    }
L_08949684:
    ctx.gpr[4] = (0u + 0u);
    goto L_08949688;
L_08949688:
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089496F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08949748;
      }
      goto L_08949740;
    }
L_08949740:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949778;
      }
      goto L_08949748;
    }
L_08949748:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08949770;
      }
      goto L_08949764;
    }
L_08949764:
    ctx.gpr[31] = (0x0894976Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949790;
L_0894976C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949770;
L_08949770:
    ctx.gpr[31] = (0x08949778u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08949854;
L_08949778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949790:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089497E8;
      }
      goto L_089497C8;
    }
L_089497C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089497E8:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089498B0;
      }
      goto L_08949884;
    }
L_08949884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089498B0;
L_089498B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(284));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(284)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(248));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[0];
    ctx.fpr[13] = ctx.fpr[19] - ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0894998Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 663u, 0x089D3C00u>(ctx, &aot_mem) && ctx.pc == 0x0894998Cu) goto L_0894998C;
    return;
L_0894998C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08949A6C;
      }
      goto L_089499A0;
    }
L_089499A0:
    ctx.gpr[31] = (0x089499A8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 656u, 0x089D3B5Cu>(ctx, &aot_mem) && ctx.pc == 0x089499A8u) goto L_089499A8;
    return;
L_089499A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16936u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23980)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08949A08u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 663u, 0x089D3C00u>(ctx, &aot_mem) && ctx.pc == 0x08949A08u) goto L_08949A08;
    return;
L_08949A08:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08949A6C;
      }
      goto L_08949A18;
    }
L_08949A18:
    ctx.gpr[31] = (0x08949A20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 656u, 0x089D3B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08949A20u) goto L_08949A20;
    return;
L_08949A20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08949A6C;
L_08949A6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949A88:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23960)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23964), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 308u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949AC4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9760));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x08949AC4u) goto L_08949AC4;
    return;
L_08949AC4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    ctx.gpr[31] = (0x08949B00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12356));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08949B00u) goto L_08949B00;
    return;
L_08949B00:
    ctx.gpr[4] = (16936u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3244), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3256), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08949B8C;
      }
      goto L_08949B58;
    }
L_08949B58:
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 308u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08949B78u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9852));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 497u, 0x08AAAE88u>(ctx, &aot_mem) && ctx.pc == 0x08949B78u) goto L_08949B78;
    return;
L_08949B78:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B8C;
      }
      goto L_08949B84;
    }
L_08949B84:
    ctx.gpr[31] = (0x08949B8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 97u, 0x08AA8780u>(ctx, &aot_mem) && ctx.pc == 0x08949B8Cu) goto L_08949B8C;
    return;
L_08949B8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949BA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08949BEC;
      }
      goto L_08949BBC;
    }
L_08949BBC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3248));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08949BD4u);
    ctx.gpr[7] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 444u, 0x08809B44u>(ctx, &aot_mem) && ctx.pc == 0x08949BD4u) goto L_08949BD4;
    return;
L_08949BD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3256), ctx.gpr[2]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949BEC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949C34;
      }
      goto L_08949C1C;
    }
L_08949C1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3260)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08949C34;
      }
      goto L_08949C28;
    }
L_08949C28:
    ctx.gpr[31] = (0x08949C30u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3248));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 458u, 0x08809C70u>(ctx, &aot_mem) && ctx.pc == 0x08949C30u) goto L_08949C30;
    return;
L_08949C30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3256), 0u);
    goto L_08949C34;
L_08949C34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949C44:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_08949C54;
L_08949C54:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08949C7C;
      }
      goto L_08949C5C;
    }
L_08949C5C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08949C7C;
      }
      goto L_08949C64;
    }
L_08949C64:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949C7C;
      }
      goto L_08949C6C;
    }
L_08949C6C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08949C54;
      }
      goto L_08949C7C;
    }
L_08949C7C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08949C90;
      }
      goto L_08949C84;
    }
L_08949C84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949C90:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08949F30;
      }
      goto L_08949F00;
    }
L_08949F00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F30;
      }
      goto L_08949F10;
    }
L_08949F10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08949F28;
    }
    goto L_08949F1C;
L_08949F1C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08949F28;
L_08949F28:
    ctx.gpr[31] = (0x08949F30u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0894A88C;
L_08949F30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949F3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08949F6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    goto L_0894934C;
L_08949F6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949F78:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(340));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A03C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894A05Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0894A05Cu) goto L_0894A05C;
    return;
L_0894A05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(3248));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3248)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3256), ctx.gpr[5]);
    ctx.gpr[31] = (0x0894A088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894A4CC;
L_0894A088:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A09C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894A0C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0894A0C8u) goto L_0894A0C8;
    return;
L_0894A0C8:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24000)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23984)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0894A0F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12368));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894A0F0u) goto L_0894A0F0;
    return;
L_0894A0F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A0FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08949BA0;
L_0894A0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A150;
      }
      goto L_0894A108;
    }
L_0894A108:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24000)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23984)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894A120u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12376));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894A120u) goto L_0894A120;
    return;
L_0894A120:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A12Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08949BA0;
L_0894A12C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A150:
    ctx.gpr[31] = (0x0894A158u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894A4CC;
L_0894A158:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894A194;
      }
      goto L_0894A18C;
    }
L_0894A18C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A19C;
      }
      goto L_0894A194;
    }
L_0894A194:
    ctx.gpr[31] = (0x0894A19Cu);
    // nop
    goto L_0894A754;
L_0894A19C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894A3F4;
      }
      goto L_0894A3C4;
    }
L_0894A3C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_0894A3F8;
      }
      goto L_0894A3DC;
    }
L_0894A3DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A458;
      }
      goto L_0894A3F4;
    }
L_0894A3F4:
    ctx.gpr[17] = (2221u << 16u);
    goto L_0894A3F8;
L_0894A3F8:
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x0894A408u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 344u, 0x0880F4A0u>(ctx, &aot_mem) && ctx.pc == 0x0894A408u) goto L_0894A408;
    return;
L_0894A408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x0894A414u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 340u, 0x0880F428u>(ctx, &aot_mem) && ctx.pc == 0x0894A414u) goto L_0894A414;
    return;
L_0894A414:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0894A438u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 350u, 0x0880F4F8u>(ctx, &aot_mem) && ctx.pc == 0x0894A438u) goto L_0894A438;
    return;
L_0894A438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x0894A444u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 351u, 0x0880F524u>(ctx, &aot_mem) && ctx.pc == 0x0894A444u) goto L_0894A444;
    return;
L_0894A444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x0894A450u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 352u, 0x0880F550u>(ctx, &aot_mem) && ctx.pc == 0x0894A450u) goto L_0894A450;
    return;
L_0894A450:
    ctx.gpr[31] = (0x0894A458u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 338u, 0x0880F348u>(ctx, &aot_mem) && ctx.pc == 0x0894A458u) goto L_0894A458;
    return;
L_0894A458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A46C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A4CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(3172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894A508u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12388));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A508u) goto L_0894A508;
    return;
L_0894A508:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A518u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08949C44;
L_0894A518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0894A590;
      }
      goto L_0894A520;
    }
L_0894A520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x0894A530u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12400));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 572u, 0x08A9BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A530u) goto L_0894A530;
    return;
L_0894A530:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A53Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08949C44;
L_0894A53C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A560;
      }
      goto L_0894A544;
    }
L_0894A544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5FC;
      }
      goto L_0894A558;
    }
L_0894A558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0894A5C0;
      }
      goto L_0894A560;
    }
L_0894A560:
    ctx.gpr[31] = (0x0894A568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949C00;
L_0894A568:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A590:
    ctx.gpr[31] = (0x0894A598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949C00;
L_0894A598:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A5C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894A5D0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08949384;
L_0894A5D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0894A728;
      }
      goto L_0894A5D8;
    }
L_0894A5D8:
    ctx.gpr[31] = (0x0894A5E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08949C44;
L_0894A5E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6FC;
      }
      goto L_0894A5E8;
    }
L_0894A5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_0894A5C0;
      }
      goto L_0894A5FC;
    }
L_0894A5FC:
    ctx.gpr[31] = (0x0894A604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949C00;
L_0894A604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A6FC:
    ctx.gpr[31] = (0x0894A704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949C00;
L_0894A704:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A728:
    ctx.gpr[31] = (0x0894A730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08949C00;
L_0894A730:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894A788;
      }
      goto L_0894A778;
    }
L_0894A778:
    ctx.gpr[31] = (0x0894A780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894AB1C;
L_0894A780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A87C;
      }
      goto L_0894A788;
    }
L_0894A788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0894A7B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    goto L_08949724;
L_0894A7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894A87C;
L_0894A87C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894A8DCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08949854;
L_0894A8DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
      if (branch_taken) {
          goto L_0894A9B0;
      }
      goto L_0894A980;
    }
L_0894A980:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0894A9B4;
    }
    goto L_0894A998;
L_0894A998:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0894AA88;
    }
    goto L_0894A9B0;
L_0894A9B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0894A9B4;
L_0894A9B4:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0894AA24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 663u, 0x089D3C00u>(ctx, &aot_mem) && ctx.pc == 0x0894AA24u) goto L_0894AA24;
    return;
L_0894AA24:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0894AA30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 663u, 0x089D3C00u>(ctx, &aot_mem) && ctx.pc == 0x0894AA30u) goto L_0894AA30;
    return;
L_0894AA30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_0894AAB8;
      }
      goto L_0894AA7C;
    }
L_0894AA7C:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894AAC0;
      }
      goto L_0894AA88;
    }
L_0894AA88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AAB8:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0894AAC0;
L_0894AAC0:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[31] = (0x0894AAE4u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 453u, 0x08A96538u>(ctx, &aot_mem) && ctx.pc == 0x0894AAE4u) goto L_0894AAE4;
    return;
L_0894AAE4:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AB1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894AB6C;
      }
      goto L_0894AB54;
    }
L_0894AB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_0894AB70;
    }
    goto L_0894AB60;
L_0894AB60:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0894AB68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894AB68u) goto L_0894AB68;
    return;
L_0894AB68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0894AB6C;
L_0894AB6C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_0894AB70;
L_0894AB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0894AC5C;
      }
      goto L_0894ABAC;
    }
L_0894ABAC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(248));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AC40;
    }
L_0894AC40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AC4C;
    }
L_0894AC4C:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x0894AC54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894AC54u) goto L_0894AC54;
    return;
L_0894AC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AC5C;
    }
L_0894AC5C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17280u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17304));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[17];
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] & 511u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[18] - ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[0];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0894AD50;
      }
      goto L_0894AD2C;
    }
L_0894AD2C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894AD50;
      }
      goto L_0894AD3C;
    }
L_0894AD3C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AD50;
    }
L_0894AD50:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894AE2C;
      }
      goto L_0894AD60;
    }
L_0894AD60:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894ADB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 219u, 0x0880DFACu>(ctx, &aot_mem) && ctx.pc == 0x0894ADB8u) goto L_0894ADB8;
    return;
L_0894ADB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x0894ADECu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 401u, 0x0899B404u>(ctx, &aot_mem) && ctx.pc == 0x0894ADECu) goto L_0894ADEC;
    return;
L_0894ADEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894AE2C;
L_0894AE2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AE48:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23988)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23992), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(23424));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894AE98;
      }
      goto L_0894AE90;
    }
L_0894AE90:
    ctx.gpr[31] = (0x0894AE98u);
    // nop
    goto L_0894AF2C;
L_0894AE98:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(23424), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 528u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894AEC0u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894AEC0u) goto L_0894AEC0;
    return;
L_0894AEC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0894AF08;
      }
      goto L_0894AEC8;
    }
L_0894AEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0894AF08;
      }
      goto L_0894AED4;
    }
L_0894AED4:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24216));
    goto L_0894AEE0;
L_0894AEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23424)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0894AEF4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0894B3B4;
L_0894AEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894AEE0;
      }
      goto L_0894AF08;
    }
L_0894AF08:
    ctx.gpr[2] = (0u | 1u);
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
L_0894AF2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(23424));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0894AF8C;
      }
      goto L_0894AF60;
    }
L_0894AF60:
    ctx.gpr[16] = (0u | 0u);
    goto L_0894AF64;
L_0894AF64:
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0894AF70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 327u, 0x08811A54u>(ctx, &aot_mem) && ctx.pc == 0x0894AF70u) goto L_0894AF70;
    return;
L_0894AF70:
    ctx.gpr[31] = (0x0894AF78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0894B620;
L_0894AF78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0894AF64;
      }
      goto L_0894AF8C;
    }
L_0894AF8C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0894AFA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894AFA0u) goto L_0894AFA0;
    return;
L_0894AFA0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(23424), 0u);
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
L_0894AFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23424));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B01C;
      }
      goto L_0894AFF8;
    }
L_0894AFF8:
    ctx.gpr[16] = (0u | 0u);
    goto L_0894AFFC;
L_0894AFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894B00Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0894B038;
L_0894B00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0894AFFC;
      }
      goto L_0894B01C;
    }
L_0894B01C:
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
L_0894B038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[30] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[20] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[5];
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[13];
      if (branch_taken) {
          goto L_0894B1B8;
      }
      goto L_0894B0AC;
    }
L_0894B0AC:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = ctx.fpr[30] + ctx.fpr[22];
    ctx.fpr[24] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0894B0C4;
L_0894B0C4:
    ctx.gpr[31] = (0x0894B0CCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 667u, 0x0897AD5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B0CCu) goto L_0894B0CC;
    return;
L_0894B0CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0894B138;
      }
      goto L_0894B108;
    }
L_0894B108:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
        goto L_0894B11C;
    }
    goto L_0894B11C;
L_0894B11C:
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_0894B130;
    }
    goto L_0894B130;
L_0894B130:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0894B174;
      }
      goto L_0894B138;
    }
L_0894B138:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_0894B174;
    }
    goto L_0894B148;
L_0894B148:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_0894B15C;
    }
    goto L_0894B15C;
L_0894B15C:
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_0894B170;
    }
    goto L_0894B170;
L_0894B170:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0894B174;
L_0894B174:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x0894B1A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 668u, 0x0897AD78u>(ctx, &aot_mem) && ctx.pc == 0x0894B1A0u) goto L_0894B1A0;
    return;
L_0894B1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0894B0C4;
      }
      goto L_0894B1B0;
    }
L_0894B1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0894B1B8;
L_0894B1B8:
    ctx.gpr[31] = (0x0894B1C0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0894B1C0u) goto L_0894B1C0;
    return;
L_0894B1C0:
    ctx.gpr[7] = (15395u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (48768u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    goto L_0894B1F4;
L_0894B1F4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_0894B23C;
    }
    goto L_0894B23C;
L_0894B23C:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0894B27C;
    }
    goto L_0894B24C;
L_0894B24C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_0894B260;
    }
    goto L_0894B260;
L_0894B260:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0894B27C;
    }
    goto L_0894B270;
L_0894B270:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0894B27C;
L_0894B27C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894B1F4;
      }
      goto L_0894B288;
    }
L_0894B288:
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B2C4:
    ctx.gpr[6] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23424));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0894B33C;
      }
      goto L_0894B314;
    }
L_0894B314:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0894B39C;
    }
    goto L_0894B31C;
L_0894B31C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[18];
      if (branch_taken) {
          goto L_0894B358;
      }
      goto L_0894B334;
    }
L_0894B334:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
      if (branch_taken) {
          goto L_0894B398;
      }
      goto L_0894B33C;
    }
L_0894B33C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894B368;
      }
      goto L_0894B348;
    }
L_0894B348:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_0894B384;
    }
    goto L_0894B350;
L_0894B350:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0894B39C;
      }
      goto L_0894B358;
    }
L_0894B358:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0894B398;
      }
      goto L_0894B368;
    }
L_0894B368:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[18];
      if (branch_taken) {
          goto L_0894B398;
      }
      goto L_0894B384;
    }
L_0894B384:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[18];
    goto L_0894B398;
L_0894B398:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0894B39C;
L_0894B39C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B3B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0894B600;
      }
      goto L_0894B3DC;
    }
L_0894B3DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0894B600;
      }
      goto L_0894B3E4;
    }
L_0894B3E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894B3F8u);
    ctx.gpr[5] = (0u | 134u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B3F8u) goto L_0894B3F8;
    return;
L_0894B3F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0894B404u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x0894B404u) goto L_0894B404;
    return;
L_0894B404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0894B410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 231u, 0x089B159Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B410u) goto L_0894B410;
    return;
L_0894B410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x0894B424u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 286u, 0x088117E0u>(ctx, &aot_mem) && ctx.pc == 0x0894B424u) goto L_0894B424;
    return;
L_0894B424:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0894B434u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0894B434u) goto L_0894B434;
    return;
L_0894B434:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0894B444u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0894B444u) goto L_0894B444;
    return;
L_0894B444:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24016));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0894B4A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 362u, 0x08811D04u>(ctx, &aot_mem) && ctx.pc == 0x0894B4A0u) goto L_0894B4A0;
    return;
L_0894B4A0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x0894B4C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 363u, 0x08811D30u>(ctx, &aot_mem) && ctx.pc == 0x0894B4C4u) goto L_0894B4C4;
    return;
L_0894B4C4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0894B4E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 364u, 0x08811D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B4E4u) goto L_0894B4E4;
    return;
L_0894B4E4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23424));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0894B500u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 368u, 0x08811DC4u>(ctx, &aot_mem) && ctx.pc == 0x0894B500u) goto L_0894B500;
    return;
L_0894B500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0894B510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0894B510u) goto L_0894B510;
    return;
L_0894B510:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0894B51Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0894B51Cu) goto L_0894B51C;
    return;
L_0894B51C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B528u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 322u, 0x08811A08u>(ctx, &aot_mem) && ctx.pc == 0x0894B528u) goto L_0894B528;
    return;
L_0894B528:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x0894B5CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 478u, 0x08812DF0u>(ctx, &aot_mem) && ctx.pc == 0x0894B5CCu) goto L_0894B5CC;
    return;
L_0894B5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0894B5E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x0894B5E0u) goto L_0894B5E0;
    return;
L_0894B5E0:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B600:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B65C;
      }
      goto L_0894B63C;
    }
L_0894B63C:
    ctx.gpr[31] = (0x0894B644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x0894B644u) goto L_0894B644;
    return;
L_0894B644:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0894B658u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B658u) goto L_0894B658;
    return;
L_0894B658:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0894B65C;
L_0894B65C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B77C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24008)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24012), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B79C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18280));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18196));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18252));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18224));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24264), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24268), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24276), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B800u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23440));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0894B800u) goto L_0894B800;
    return;
L_0894B800:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0894B814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23452));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0894B814u) goto L_0894B814;
    return;
L_0894B814:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B884u);
    // nop
    goto L_0894BA90;
L_0894B884:
    ctx.gpr[31] = (0x0894B88Cu);
    // nop
    goto L_0894BAA8;
L_0894B88C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B8A8u);
    // nop
    goto L_0894BB1C;
L_0894B8A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B8C4u);
    // nop
    goto L_0894BDB8;
L_0894B8C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B8E0u);
    // nop
    goto L_0894B908;
L_0894B8E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B8EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B8FCu);
    // nop
    goto L_0894B958;
L_0894B8FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x0894B928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0894B898;
L_0894B928:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0894B944;
      }
      goto L_0894B934;
    }
L_0894B934:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B944u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0894B944u) goto L_0894B944;
    return;
L_0894B944:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0894BA6C;
      }
      goto L_0894B968;
    }
L_0894B968:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 193 ? 1u : 0u);
    ctx.gpr[6] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0894B998;
      }
      goto L_0894B984;
    }
L_0894B984:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 192 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
        goto L_0894B9BC;
    }
    goto L_0894B990;
L_0894B990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_0894B9BC;
      }
      goto L_0894B998;
    }
L_0894B998:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894B9B4;
      }
      goto L_0894B9A4;
    }
L_0894B9A4:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
        goto L_0894B9BC;
    }
    goto L_0894B9AC;
L_0894B9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_0894B9BC;
      }
      goto L_0894B9B4;
    }
L_0894B9B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0894B9BC;
      }
      goto L_0894B9BC;
    }
L_0894B9BC:
    ctx.gpr[9] = (2221u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24264)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24264), ctx.gpr[10]);
    ctx.gpr[9] = (2221u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24268)));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24268), ctx.gpr[10]);
    ctx.gpr[9] = (256u << 16u);
    ctx.gpr[11] = (ctx.gpr[8] >> 8u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[11] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_0894BA04;
      }
      goto L_0894B9F8;
    }
L_0894B9F8:
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894BA20;
      }
      goto L_0894BA04;
    }
L_0894BA04:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(23440)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23452)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(23440), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23452), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0894BA64;
      }
      goto L_0894BA20;
    }
L_0894BA20:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(23440));
    ctx.gpr[10] = (0u | 232u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(23452));
      if (branch_taken) {
          goto L_0894BA4C;
      }
      goto L_0894BA30;
    }
L_0894BA30:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894BA64;
      }
      goto L_0894BA4C;
    }
L_0894BA4C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0894BA64;
L_0894BA64:
    ctx.gpr[31] = (0x0894BA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x0894BA6Cu) goto L_0894BA6C;
    return;
L_0894BA6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BA90:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24264)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BAA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894BAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 214u, 0x089D1AA0u>(ctx, &aot_mem) && ctx.pc == 0x0894BAB8u) goto L_0894BAB8;
    return;
L_0894BAB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BAD0:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24276)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0894BAF4;
      }
      goto L_0894BAE8;
    }
L_0894BAE8:
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24276), ctx.gpr[4]);
    goto L_0894BAF4;
L_0894BAF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BAFC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24276)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_0894BB14;
    }
    goto L_0894BB14;
L_0894BB14:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24276), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BB1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894BB6C;
      }
      goto L_0894BB3C;
    }
L_0894BB3C:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 193 ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24264)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (318u << 16u);
      if (branch_taken) {
          goto L_0894BB8C;
      }
      goto L_0894BB54;
    }
L_0894BB54:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[17] = (0u | 32u);
      if (branch_taken) {
          goto L_0894BBB8;
      }
      goto L_0894BB60;
    }
L_0894BB60:
    ctx.gpr[17] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0894BBBC;
      }
      goto L_0894BB6C;
    }
L_0894BB6C:
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
L_0894BB8C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (0u | 32u);
      if (branch_taken) {
          goto L_0894BBB0;
      }
      goto L_0894BB98;
    }
L_0894BB98:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (0u | 32u);
      if (branch_taken) {
          goto L_0894BBB8;
      }
      goto L_0894BBA4;
    }
L_0894BBA4:
    ctx.gpr[17] = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0894BBBC;
      }
      goto L_0894BBB0;
    }
L_0894BBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0894BBBC;
      }
      goto L_0894BBB8;
    }
L_0894BBB8:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_0894BBBC;
L_0894BBBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 194 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BBF0;
      }
      goto L_0894BBCC;
    }
L_0894BBCC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31));
        goto L_0894BC30;
    }
    goto L_0894BBD8;
L_0894BBD8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BC40;
      }
      goto L_0894BBF0;
    }
L_0894BBF0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BC18;
      }
      goto L_0894BBF8;
    }
L_0894BBF8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31));
        goto L_0894BC30;
    }
    goto L_0894BC00;
L_0894BC00:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(63));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BC40;
      }
      goto L_0894BC18;
    }
L_0894BC18:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BC40;
      }
      goto L_0894BC30;
    }
L_0894BC30:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    goto L_0894BC40;
L_0894BC40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0894BC5C;
      }
      goto L_0894BC48;
    }
L_0894BC48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BC94;
      }
      goto L_0894BC54;
    }
L_0894BC54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BC7C;
      }
      goto L_0894BC5C;
    }
L_0894BC5C:
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
L_0894BC7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0894BC94;
      }
      goto L_0894BC84;
    }
L_0894BC84:
    ctx.gpr[31] = (0x0894BC8Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9CCD4u>(ctx, &aot_mem) && ctx.pc == 0x0894BC8Cu) goto L_0894BC8C;
    return;
L_0894BC8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0894BCA0;
      }
      goto L_0894BC94;
    }
L_0894BC94:
    ctx.gpr[31] = (0x0894BC9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 239u, 0x08A9CCFCu>(ctx, &aot_mem) && ctx.pc == 0x0894BC9Cu) goto L_0894BC9C;
    return;
L_0894BC9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0894BCA0;
L_0894BCA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0894BCF4;
      }
      goto L_0894BCA8;
    }
L_0894BCA8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24264)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24264), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24272)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24268)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24268), ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_0894BD14;
      }
      goto L_0894BCEC;
    }
L_0894BCEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_0894BD1C;
      }
      goto L_0894BCF4;
    }
L_0894BCF4:
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
L_0894BD14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24272), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    goto L_0894BD1C;
L_0894BD1C:
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0894BD40;
      }
      goto L_0894BD34;
    }
L_0894BD34:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 232u);
      if (branch_taken) {
          goto L_0894BD5C;
      }
      goto L_0894BD40;
    }
L_0894BD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23440)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(23452)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23440), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(23452), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894BD9C;
      }
      goto L_0894BD5C;
    }
L_0894BD5C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23440));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(23452));
      if (branch_taken) {
          goto L_0894BD84;
      }
      goto L_0894BD68;
    }
L_0894BD68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894BD9C;
      }
      goto L_0894BD84;
    }
L_0894BD84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0894BD9C;
L_0894BD9C:
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
L_0894BDB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894BDF0;
      }
      goto L_0894BDD4;
    }
L_0894BDD4:
    ctx.gpr[31] = (0x0894BDDCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0894B898;
L_0894BDDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BDF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0894BE20;
      }
      goto L_0894BDF8;
    }
L_0894BDF8:
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 193 ? 1u : 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24264)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[9] = (318u << 16u);
      if (branch_taken) {
          goto L_0894BE40;
      }
      goto L_0894BE0C;
    }
L_0894BE0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0894BE64;
      }
      goto L_0894BE18;
    }
L_0894BE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0894BE64;
      }
      goto L_0894BE20;
    }
L_0894BE20:
    ctx.gpr[31] = (0x0894BE28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894B8EC;
L_0894BE28:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BE40:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BE5C;
      }
      goto L_0894BE4C;
    }
L_0894BE4C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0894BE64;
      }
      goto L_0894BE54;
    }
L_0894BE54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0894BE64;
      }
      goto L_0894BE5C;
    }
L_0894BE5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0894BE64;
      }
      goto L_0894BE64;
    }
L_0894BE64:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 194 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BE98;
      }
      goto L_0894BE74;
    }
L_0894BE74:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_0894BED8;
      }
      goto L_0894BE80;
    }
L_0894BE80:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(15));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BEE8;
      }
      goto L_0894BE98;
    }
L_0894BE98:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BEC0;
      }
      goto L_0894BEA0;
    }
L_0894BEA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_0894BED8;
      }
      goto L_0894BEA8;
    }
L_0894BEA8:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(63));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BEE8;
      }
      goto L_0894BEC0;
    }
L_0894BEC0:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(31));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BEE8;
      }
      goto L_0894BED8;
    }
L_0894BED8:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    goto L_0894BEE8;
L_0894BEE8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0894BF8C;
      }
      goto L_0894BEF0;
    }
L_0894BEF0:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0894BF18;
      }
      goto L_0894BF04;
    }
L_0894BF04:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 32u);
      if (branch_taken) {
          goto L_0894BF3C;
      }
      goto L_0894BF10;
    }
L_0894BF10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_0894BF3C;
      }
      goto L_0894BF18;
    }
L_0894BF18:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894BF34;
      }
      goto L_0894BF24;
    }
L_0894BF24:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 32u);
      if (branch_taken) {
          goto L_0894BF3C;
      }
      goto L_0894BF2C;
    }
L_0894BF2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 64u);
      if (branch_taken) {
          goto L_0894BF3C;
      }
      goto L_0894BF34;
    }
L_0894BF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 32u);
      if (branch_taken) {
          goto L_0894BF3C;
      }
      goto L_0894BF3C;
    }
L_0894BF3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x0894BF50u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0894B898;
L_0894BF50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0894BF8C;
      }
      goto L_0894BF64;
    }
L_0894BF64:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894BFA4;
      }
      goto L_0894BF74;
    }
L_0894BF74:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BF84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0894BF84u) goto L_0894BF84;
    return;
L_0894BF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BFB0;
      }
      goto L_0894BF8C;
    }
L_0894BF8C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BFA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BFB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0894BFB0u) goto L_0894BFB0;
    return;
L_0894BFB0:
    ctx.gpr[31] = (0x0894BFB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894B8EC;
L_0894BFB8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BFD0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.pc = 0x0894C000u; return;
}

void recomp_unit_0081(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0081_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_81(Runtime &runtime) {
    runtime.register_generated_unit(81u, 0x08948000u, 16384u, &recomp_unit_0081, &recomp_unit_0081_entry);
    runtime.register_function(0x08948000u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948030u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894804Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894805Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948108u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894811Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948124u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948130u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948210u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948254u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948268u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948274u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948294u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894829Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948318u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948334u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948408u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894841Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948450u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894845Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948460u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948470u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948480u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894848Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948494u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948508u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948514u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948520u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948528u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894852Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948534u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894853Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948548u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948550u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894855Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894856Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948574u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948578u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948580u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948588u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948594u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894859Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948604u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894860Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948610u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948618u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894863Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894864Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948654u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948664u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894866Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948714u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948734u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948748u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948750u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948784u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948794u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948808u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948810u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948834u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894884Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948858u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948864u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948870u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948904u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948914u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894893Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894894Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948958u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948970u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948984u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894898Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948994u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894901Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949024u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949044u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949054u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949070u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894907Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949094u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949144u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949170u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949184u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894924Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894925Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894926Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949278u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949290u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949298u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894934Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949354u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949364u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949370u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894937Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949384u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894940Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949418u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949430u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894943Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949460u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949478u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949484u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894948Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894951Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894954Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894957Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894960Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894963Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949654u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949660u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949668u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949684u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949688u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949724u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949740u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949748u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894976Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949770u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949790u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949854u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949884u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894998Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A03Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A05Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A088u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A09Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A108u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A120u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A12Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A158u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A178u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A18Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A19Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A350u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A408u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A414u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A438u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A450u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A458u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A46Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A508u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A518u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A520u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A530u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A53Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A558u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A560u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A568u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A590u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A598u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A604u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A704u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A728u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A730u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A754u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A780u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A788u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A87Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A88Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A980u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A998u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AED4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B00Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B01Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B108u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B11Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B130u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B138u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B15Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B170u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B174u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B23Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B24Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B260u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B270u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B27Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B314u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B31Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B334u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B33Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B348u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B350u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B358u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B368u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B384u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B398u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B39Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B404u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B410u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B424u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B434u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B500u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B510u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B51Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B528u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B600u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B63Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B644u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B658u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B65Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B77Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B79Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B800u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B814u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B874u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B884u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B88Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B908u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B934u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B944u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B958u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B968u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B984u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B990u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B998u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BED8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFD0u, &recomp_unit_0081, "recomp_unit_0081");
}
} // namespace psprecomp

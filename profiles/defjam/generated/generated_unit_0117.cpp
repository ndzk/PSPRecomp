#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0117[3997] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0,
    34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0,
    85, 0, 0, 0, 0, 86, 0, 0, 87, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108,
    0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 126, 0, 127, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 137, 0, 138, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 168, 0, 0, 0, 169, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 210, 0, 0, 211, 212, 0,
    0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 217, 0, 0, 218, 0, 219, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 245, 0, 246, 0, 247, 0, 0, 0,
    0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 294, 295, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 304, 0, 0, 0, 0,
    0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 325, 326, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0,
    0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0,
    0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 365, 0, 0, 0, 366, 0,
    367, 0, 0, 0, 0, 368, 0, 369, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 379, 0,
    380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 394,
    0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0,
    406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0,
    0, 0, 413, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 429, 0, 430, 0, 431, 0, 0, 0, 432,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 436, 0, 0, 437, 0, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 443, 0, 0, 0, 0, 444, 0, 0, 445, 446, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 0, 452, 0, 453, 454, 455, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0,
    0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0,
    0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 475, 0, 0, 0, 476, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 486,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0,
    0, 0, 492, 493, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499,
    0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0,
    516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0,
    0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0,
    0, 530, 0, 531, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 538, 0, 539, 0, 0, 540, 0,
    541, 0, 542, 0, 543, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 549, 0, 550, 0, 0, 551, 0, 552, 0,
    553, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558, 0, 559, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    562, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 566, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569,
    0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0,
    0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580,
    0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587,
};
void recomp_unit_0117_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D8004u;
        entry_id = (entry_delta < 15988u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0117[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D8004;
    case 2u: goto L_089D8024;
    case 3u: goto L_089D802C;
    case 4u: goto L_089D804C;
    case 5u: goto L_089D806C;
    case 6u: goto L_089D8078;
    case 7u: goto L_089D808C;
    case 8u: goto L_089D80A0;
    case 9u: goto L_089D80BC;
    case 10u: goto L_089D80C8;
    case 11u: goto L_089D80F0;
    case 12u: goto L_089D8104;
    case 13u: goto L_089D8144;
    case 14u: goto L_089D8158;
    case 15u: goto L_089D816C;
    case 16u: goto L_089D8188;
    case 17u: goto L_089D81A0;
    case 18u: goto L_089D81A8;
    case 19u: goto L_089D81C4;
    case 20u: goto L_089D81F8;
    case 21u: goto L_089D8208;
    case 22u: goto L_089D8218;
    case 23u: goto L_089D823C;
    case 24u: goto L_089D8258;
    case 25u: goto L_089D8264;
    case 26u: goto L_089D8288;
    case 27u: goto L_089D82C4;
    case 28u: goto L_089D82D0;
    case 29u: goto L_089D82DC;
    case 30u: goto L_089D82E4;
    case 31u: goto L_089D82EC;
    case 32u: goto L_089D82F4;
    case 33u: goto L_089D82FC;
    case 34u: goto L_089D8304;
    case 35u: goto L_089D8310;
    case 36u: goto L_089D831C;
    case 37u: goto L_089D8334;
    case 38u: goto L_089D833C;
    case 39u: goto L_089D8348;
    case 40u: goto L_089D834C;
    case 41u: goto L_089D8354;
    case 42u: goto L_089D8364;
    case 43u: goto L_089D8370;
    case 44u: goto L_089D8390;
    case 45u: goto L_089D83A8;
    case 46u: goto L_089D83D0;
    case 47u: goto L_089D83DC;
    case 48u: goto L_089D83F4;
    case 49u: goto L_089D852C;
    case 50u: goto L_089D8554;
    case 51u: goto L_089D855C;
    case 52u: goto L_089D856C;
    case 53u: goto L_089D857C;
    case 54u: goto L_089D85AC;
    case 55u: goto L_089D85B4;
    case 56u: goto L_089D85C8;
    case 57u: goto L_089D85F0;
    case 58u: goto L_089D85F8;
    case 59u: goto L_089D8608;
    case 60u: goto L_089D8618;
    case 61u: goto L_089D8640;
    case 62u: goto L_089D8648;
    case 63u: goto L_089D8658;
    case 64u: goto L_089D87EC;
    case 65u: goto L_089D8820;
    case 66u: goto L_089D8828;
    case 67u: goto L_089D8834;
    case 68u: goto L_089D883C;
    case 69u: goto L_089D8850;
    case 70u: goto L_089D8868;
    case 71u: goto L_089D8874;
    case 72u: goto L_089D888C;
    case 73u: goto L_089D8954;
    case 74u: goto L_089D8974;
    case 75u: goto L_089D8980;
    case 76u: goto L_089D8998;
    case 77u: goto L_089D89A4;
    case 78u: goto L_089D89AC;
    case 79u: goto L_089D89BC;
    case 80u: goto L_089D89C4;
    case 81u: goto L_089D89CC;
    case 82u: goto L_089D89DC;
    case 83u: goto L_089D89F0;
    case 84u: goto L_089D89FC;
    case 85u: goto L_089D8A04;
    case 86u: goto L_089D8A18;
    case 87u: goto L_089D8A24;
    case 88u: goto L_089D8A28;
    case 89u: goto L_089D8A3C;
    case 90u: goto L_089D8A5C;
    case 91u: goto L_089D8A64;
    case 92u: goto L_089D8A6C;
    case 93u: goto L_089D8A78;
    case 94u: goto L_089D8A8C;
    case 95u: goto L_089D8AC8;
    case 96u: goto L_089D8AEC;
    case 97u: goto L_089D8AF4;
    case 98u: goto L_089D8B18;
    case 99u: goto L_089D8B1C;
    case 100u: goto L_089D8B30;
    case 101u: goto L_089D8B38;
    case 102u: goto L_089D8B44;
    case 103u: goto L_089D8B4C;
    case 104u: goto L_089D8B58;
    case 105u: goto L_089D8B60;
    case 106u: goto L_089D8B6C;
    case 107u: goto L_089D8B74;
    case 108u: goto L_089D8B80;
    case 109u: goto L_089D8B88;
    case 110u: goto L_089D8B94;
    case 111u: goto L_089D8B9C;
    case 112u: goto L_089D8BA4;
    case 113u: goto L_089D8BCC;
    case 114u: goto L_089D8BD4;
    case 115u: goto L_089D8BDC;
    case 116u: goto L_089D8C10;
    case 117u: goto L_089D8C54;
    case 118u: goto L_089D8C80;
    case 119u: goto L_089D8CB0;
    case 120u: goto L_089D8CC0;
    case 121u: goto L_089D8CF8;
    case 122u: goto L_089D8D00;
    case 123u: goto L_089D8D14;
    case 124u: goto L_089D8D3C;
    case 125u: goto L_089D8D5C;
    case 126u: goto L_089D8D60;
    case 127u: goto L_089D8D68;
    case 128u: goto L_089D8D74;
    case 129u: goto L_089D8D88;
    case 130u: goto L_089D8DD0;
    case 131u: goto L_089D8DDC;
    case 132u: goto L_089D8DE4;
    case 133u: goto L_089D8DEC;
    case 134u: goto L_089D8E0C;
    case 135u: goto L_089D8E10;
    case 136u: goto L_089D8EE0;
    case 137u: goto L_089D8EE4;
    case 138u: goto L_089D8EEC;
    case 139u: goto L_089D8EF8;
    case 140u: goto L_089D8F14;
    case 141u: goto L_089D8F28;
    case 142u: goto L_089D8F38;
    case 143u: goto L_089D8F58;
    case 144u: goto L_089D8F60;
    case 145u: goto L_089D8F80;
    case 146u: goto L_089D8F94;
    case 147u: goto L_089D8FA0;
    case 148u: goto L_089D8FB8;
    case 149u: goto L_089D8FCC;
    case 150u: goto L_089D8FE8;
    case 151u: goto L_089D8FF4;
    case 152u: goto L_089D8FFC;
    case 153u: goto L_089D9004;
    case 154u: goto L_089D904C;
    case 155u: goto L_089D905C;
    case 156u: goto L_089D9090;
    case 157u: goto L_089D909C;
    case 158u: goto L_089D90A4;
    case 159u: goto L_089D90B8;
    case 160u: goto L_089D9100;
    case 161u: goto L_089D9120;
    case 162u: goto L_089D912C;
    case 163u: goto L_089D9134;
    case 164u: goto L_089D9138;
    case 165u: goto L_089D9144;
    case 166u: goto L_089D915C;
    case 167u: goto L_089D9164;
    case 168u: goto L_089D9168;
    case 169u: goto L_089D9178;
    case 170u: goto L_089D9188;
    case 171u: goto L_089D919C;
    case 172u: goto L_089D91C0;
    case 173u: goto L_089D91F4;
    case 174u: goto L_089D9214;
    case 175u: goto L_089D9224;
    case 176u: goto L_089D9238;
    case 177u: goto L_089D9248;
    case 178u: goto L_089D925C;
    case 179u: goto L_089D9280;
    case 180u: goto L_089D9290;
    case 181u: goto L_089D92A8;
    case 182u: goto L_089D92B4;
    case 183u: goto L_089D92BC;
    case 184u: goto L_089D92C8;
    case 185u: goto L_089D92D0;
    case 186u: goto L_089D92E4;
    case 187u: goto L_089D92F4;
    case 188u: goto L_089D9304;
    case 189u: goto L_089D9318;
    case 190u: goto L_089D935C;
    case 191u: goto L_089D9378;
    case 192u: goto L_089D939C;
    case 193u: goto L_089D93A4;
    case 194u: goto L_089D93B8;
    case 195u: goto L_089D93C0;
    case 196u: goto L_089D93E0;
    case 197u: goto L_089D93E8;
    case 198u: goto L_089D9404;
    case 199u: goto L_089D941C;
    case 200u: goto L_089D943C;
    case 201u: goto L_089D9444;
    case 202u: goto L_089D9460;
    case 203u: goto L_089D9470;
    case 204u: goto L_089D9494;
    case 205u: goto L_089D949C;
    case 206u: goto L_089D94B4;
    case 207u: goto L_089D94D4;
    case 208u: goto L_089D94DC;
    case 209u: goto L_089D94E8;
    case 210u: goto L_089D94EC;
    case 211u: goto L_089D94F8;
    case 212u: goto L_089D94FC;
    case 213u: goto L_089D9510;
    case 214u: goto L_089D9518;
    case 215u: goto L_089D952C;
    case 216u: goto L_089D9558;
    case 217u: goto L_089D955C;
    case 218u: goto L_089D9568;
    case 219u: goto L_089D9570;
    case 220u: goto L_089D9578;
    case 221u: goto L_089D9598;
    case 222u: goto L_089D95B4;
    case 223u: goto L_089D95BC;
    case 224u: goto L_089D95C8;
    case 225u: goto L_089D9648;
    case 226u: goto L_089D9660;
    case 227u: goto L_089D9668;
    case 228u: goto L_089D96B0;
    case 229u: goto L_089D9718;
    case 230u: goto L_089D9814;
    case 231u: goto L_089D983C;
    case 232u: goto L_089D9874;
    case 233u: goto L_089D9940;
    case 234u: goto L_089D9974;
    case 235u: goto L_089D99AC;
    case 236u: goto L_089D99B8;
    case 237u: goto L_089D99E0;
    case 238u: goto L_089D99E8;
    case 239u: goto L_089D99F4;
    case 240u: goto L_089D9A1C;
    case 241u: goto L_089D9A24;
    case 242u: goto L_089D9A28;
    case 243u: goto L_089D9A48;
    case 244u: goto L_089D9A60;
    case 245u: goto L_089D9A64;
    case 246u: goto L_089D9A6C;
    case 247u: goto L_089D9A74;
    case 248u: goto L_089D9A90;
    case 249u: goto L_089D9A98;
    case 250u: goto L_089D9AA0;
    case 251u: goto L_089D9AB4;
    case 252u: goto L_089D9ADC;
    case 253u: goto L_089D9B18;
    case 254u: goto L_089D9B24;
    case 255u: goto L_089D9B38;
    case 256u: goto L_089D9B40;
    case 257u: goto L_089D9B4C;
    case 258u: goto L_089D9B50;
    case 259u: goto L_089D9B58;
    case 260u: goto L_089D9B80;
    case 261u: goto L_089D9B98;
    case 262u: goto L_089D9BAC;
    case 263u: goto L_089D9BB8;
    case 264u: goto L_089D9C54;
    case 265u: goto L_089D9C7C;
    case 266u: goto L_089D9CCC;
    case 267u: goto L_089D9CD4;
    case 268u: goto L_089D9D20;
    case 269u: goto L_089D9D2C;
    case 270u: goto L_089D9D54;
    case 271u: goto L_089D9D74;
    case 272u: goto L_089D9D94;
    case 273u: goto L_089D9DB4;
    case 274u: goto L_089D9DBC;
    case 275u: goto L_089D9DC0;
    case 276u: goto L_089D9DCC;
    case 277u: goto L_089D9DF0;
    case 278u: goto L_089D9E04;
    case 279u: goto L_089D9E40;
    case 280u: goto L_089D9E4C;
    case 281u: goto L_089D9EA4;
    case 282u: goto L_089D9EB0;
    case 283u: goto L_089D9EB8;
    case 284u: goto L_089D9EC0;
    case 285u: goto L_089D9ED8;
    case 286u: goto L_089D9EE4;
    case 287u: goto L_089D9F04;
    case 288u: goto L_089D9F0C;
    case 289u: goto L_089D9F38;
    case 290u: goto L_089D9F5C;
    case 291u: goto L_089DA1C8;
    case 292u: goto L_089DA1D8;
    case 293u: goto L_089DA1E0;
    case 294u: goto L_089DA1EC;
    case 295u: goto L_089DA1F0;
    case 296u: goto L_089DA204;
    case 297u: goto L_089DA21C;
    case 298u: goto L_089DA228;
    case 299u: goto L_089DA23C;
    case 300u: goto L_089DA244;
    case 301u: goto L_089DA258;
    case 302u: goto L_089DA260;
    case 303u: goto L_089DA26C;
    case 304u: goto L_089DA270;
    case 305u: goto L_089DA288;
    case 306u: goto L_089DA294;
    case 307u: goto L_089DA2AC;
    case 308u: goto L_089DA2B4;
    case 309u: goto L_089DA2C8;
    case 310u: goto L_089DA2D0;
    case 311u: goto L_089DA2FC;
    case 312u: goto L_089DA320;
    case 313u: goto L_089DA334;
    case 314u: goto L_089DA340;
    case 315u: goto L_089DA368;
    case 316u: goto L_089DA374;
    case 317u: goto L_089DA394;
    case 318u: goto L_089DA3A8;
    case 319u: goto L_089DA3B4;
    case 320u: goto L_089DA3D4;
    case 321u: goto L_089DA44C;
    case 322u: goto L_089DA4A8;
    case 323u: goto L_089DA4B0;
    case 324u: goto L_089DA4B8;
    case 325u: goto L_089DA4C4;
    case 326u: goto L_089DA4C8;
    case 327u: goto L_089DA4D4;
    case 328u: goto L_089DA4DC;
    case 329u: goto L_089DA4E8;
    case 330u: goto L_089DA4FC;
    case 331u: goto L_089DA508;
    case 332u: goto L_089DA53C;
    case 333u: goto L_089DA544;
    case 334u: goto L_089DA550;
    case 335u: goto L_089DA564;
    case 336u: goto L_089DA578;
    case 337u: goto L_089DA588;
    case 338u: goto L_089DA594;
    case 339u: goto L_089DA59C;
    case 340u: goto L_089DA5A8;
    case 341u: goto L_089DA5B0;
    case 342u: goto L_089DA5BC;
    case 343u: goto L_089DA5C8;
    case 344u: goto L_089DA5D4;
    case 345u: goto L_089DA5E8;
    case 346u: goto L_089DA5F4;
    case 347u: goto L_089DA5FC;
    case 348u: goto L_089DA604;
    case 349u: goto L_089DA638;
    case 350u: goto L_089DA654;
    case 351u: goto L_089DA65C;
    case 352u: goto L_089DA668;
    case 353u: goto L_089DA670;
    case 354u: goto L_089DA688;
    case 355u: goto L_089DA6A0;
    case 356u: goto L_089DA6D0;
    case 357u: goto L_089DA6E8;
    case 358u: goto L_089DA6F8;
    case 359u: goto L_089DA70C;
    case 360u: goto L_089DA71C;
    case 361u: goto L_089DA730;
    case 362u: goto L_089DA740;
    case 363u: goto L_089DA74C;
    case 364u: goto L_089DA768;
    case 365u: goto L_089DA76C;
    case 366u: goto L_089DA77C;
    case 367u: goto L_089DA784;
    case 368u: goto L_089DA798;
    case 369u: goto L_089DA7A0;
    case 370u: goto L_089DA7A4;
    case 371u: goto L_089DA7AC;
    case 372u: goto L_089DA7CC;
    case 373u: goto L_089DA7EC;
    case 374u: goto L_089DA7F4;
    case 375u: goto L_089DA814;
    case 376u: goto L_089DA84C;
    case 377u: goto L_089DA868;
    case 378u: goto L_089DA86C;
    case 379u: goto L_089DA87C;
    case 380u: goto L_089DA884;
    case 381u: goto L_089DA88C;
    case 382u: goto L_089DA8A4;
    case 383u: goto L_089DA8AC;
    case 384u: goto L_089DA8B4;
    case 385u: goto L_089DA8C0;
    case 386u: goto L_089DA8E8;
    case 387u: goto L_089DA910;
    case 388u: goto L_089DA938;
    case 389u: goto L_089DA958;
    case 390u: goto L_089DAC48;
    case 391u: goto L_089DAC60;
    case 392u: goto L_089DAC6C;
    case 393u: goto L_089DAC74;
    case 394u: goto L_089DAC80;
    case 395u: goto L_089DAC88;
    case 396u: goto L_089DAC94;
    case 397u: goto L_089DAC9C;
    case 398u: goto L_089DACA4;
    case 399u: goto L_089DACAC;
    case 400u: goto L_089DACB4;
    case 401u: goto L_089DACBC;
    case 402u: goto L_089DACD4;
    case 403u: goto L_089DACDC;
    case 404u: goto L_089DACE4;
    case 405u: goto L_089DACFC;
    case 406u: goto L_089DAD04;
    case 407u: goto L_089DAD0C;
    case 408u: goto L_089DAD24;
    case 409u: goto L_089DAD2C;
    case 410u: goto L_089DADB8;
    case 411u: goto L_089DADF0;
    case 412u: goto L_089DADFC;
    case 413u: goto L_089DAE0C;
    case 414u: goto L_089DAE14;
    case 415u: goto L_089DAE18;
    case 416u: goto L_089DAE44;
    case 417u: goto L_089DAE54;
    case 418u: goto L_089DAE74;
    case 419u: goto L_089DAEA0;
    case 420u: goto L_089DAEFC;
    case 421u: goto L_089DAF08;
    case 422u: goto L_089DAF10;
    case 423u: goto L_089DAF28;
    case 424u: goto L_089DAF34;
    case 425u: goto L_089DAF3C;
    case 426u: goto L_089DAF48;
    case 427u: goto L_089DAF54;
    case 428u: goto L_089DAF5C;
    case 429u: goto L_089DAF60;
    case 430u: goto L_089DAF68;
    case 431u: goto L_089DAF70;
    case 432u: goto L_089DAF80;
    case 433u: goto L_089DAF90;
    case 434u: goto L_089DAFAC;
    case 435u: goto L_089DAFB4;
    case 436u: goto L_089DAFB8;
    case 437u: goto L_089DAFC4;
    case 438u: goto L_089DAFD4;
    case 439u: goto L_089DAFD8;
    case 440u: goto L_089DB018;
    case 441u: goto L_089DB034;
    case 442u: goto L_089DB03C;
    case 443u: goto L_089DB040;
    case 444u: goto L_089DB054;
    case 445u: goto L_089DB060;
    case 446u: goto L_089DB064;
    case 447u: goto L_089DB08C;
    case 448u: goto L_089DB0B0;
    case 449u: goto L_089DB0BC;
    case 450u: goto L_089DB0C4;
    case 451u: goto L_089DB0CC;
    case 452u: goto L_089DB0D8;
    case 453u: goto L_089DB0E0;
    case 454u: goto L_089DB0E4;
    case 455u: goto L_089DB0E8;
    case 456u: goto L_089DB17C;
    case 457u: goto L_089DB19C;
    case 458u: goto L_089DB1AC;
    case 459u: goto L_089DB1B4;
    case 460u: goto L_089DB1E4;
    case 461u: goto L_089DB1EC;
    case 462u: goto L_089DB1F8;
    case 463u: goto L_089DB208;
    case 464u: goto L_089DB214;
    case 465u: goto L_089DB224;
    case 466u: goto L_089DB23C;
    case 467u: goto L_089DB244;
    case 468u: goto L_089DB268;
    case 469u: goto L_089DB278;
    case 470u: goto L_089DB28C;
    case 471u: goto L_089DB29C;
    case 472u: goto L_089DB2A4;
    case 473u: goto L_089DB2B4;
    case 474u: goto L_089DB2C4;
    case 475u: goto L_089DB2C8;
    case 476u: goto L_089DB2D8;
    case 477u: goto L_089DB2DC;
    case 478u: goto L_089DB2E8;
    case 479u: goto L_089DB2FC;
    case 480u: goto L_089DB498;
    case 481u: goto L_089DB4C8;
    case 482u: goto L_089DB4D0;
    case 483u: goto L_089DB4DC;
    case 484u: goto L_089DB4E8;
    case 485u: goto L_089DB4FC;
    case 486u: goto L_089DB500;
    case 487u: goto L_089DB52C;
    case 488u: goto L_089DB53C;
    case 489u: goto L_089DB548;
    case 490u: goto L_089DB56C;
    case 491u: goto L_089DB57C;
    case 492u: goto L_089DB58C;
    case 493u: goto L_089DB590;
    case 494u: goto L_089DB59C;
    case 495u: goto L_089DB5B4;
    case 496u: goto L_089DB5BC;
    case 497u: goto L_089DB5D0;
    case 498u: goto L_089DB5DC;
    case 499u: goto L_089DB600;
    case 500u: goto L_089DB60C;
    case 501u: goto L_089DB618;
    case 502u: goto L_089DB658;
    case 503u: goto L_089DB6D4;
    case 504u: goto L_089DB6EC;
    case 505u: goto L_089DB71C;
    case 506u: goto L_089DB74C;
    case 507u: goto L_089DB77C;
    case 508u: goto L_089DB7D0;
    case 509u: goto L_089DB7F8;
    case 510u: goto L_089DB820;
    case 511u: goto L_089DB844;
    case 512u: goto L_089DB864;
    case 513u: goto L_089DB888;
    case 514u: goto L_089DB8A8;
    case 515u: goto L_089DB8E0;
    case 516u: goto L_089DB904;
    case 517u: goto L_089DB910;
    case 518u: goto L_089DB93C;
    case 519u: goto L_089DB95C;
    case 520u: goto L_089DB98C;
    case 521u: goto L_089DB994;
    case 522u: goto L_089DB9B4;
    case 523u: goto L_089DB9E4;
    case 524u: goto L_089DB9EC;
    case 525u: goto L_089DB9FC;
    case 526u: goto L_089DBA1C;
    case 527u: goto L_089DBA3C;
    case 528u: goto L_089DBA68;
    case 529u: goto L_089DBA78;
    case 530u: goto L_089DBA88;
    case 531u: goto L_089DBA90;
    case 532u: goto L_089DBA94;
    case 533u: goto L_089DBAA4;
    case 534u: goto L_089DBAB0;
    case 535u: goto L_089DBAD0;
    case 536u: goto L_089DBAD8;
    case 537u: goto L_089DBAE4;
    case 538u: goto L_089DBAE8;
    case 539u: goto L_089DBAF0;
    case 540u: goto L_089DBAFC;
    case 541u: goto L_089DBB04;
    case 542u: goto L_089DBB0C;
    case 543u: goto L_089DBB14;
    case 544u: goto L_089DBB24;
    case 545u: goto L_089DBB2C;
    case 546u: goto L_089DBB34;
    case 547u: goto L_089DBB54;
    case 548u: goto L_089DBB5C;
    case 549u: goto L_089DBB60;
    case 550u: goto L_089DBB68;
    case 551u: goto L_089DBB74;
    case 552u: goto L_089DBB7C;
    case 553u: goto L_089DBB84;
    case 554u: goto L_089DBB8C;
    case 555u: goto L_089DBBA0;
    case 556u: goto L_089DBBA8;
    case 557u: goto L_089DBBB4;
    case 558u: goto L_089DBBBC;
    case 559u: goto L_089DBBC4;
    case 560u: goto L_089DBBC8;
    case 561u: goto L_089DBBD8;
    case 562u: goto L_089DBC04;
    case 563u: goto L_089DBC0C;
    case 564u: goto L_089DBC20;
    case 565u: goto L_089DBC40;
    case 566u: goto L_089DBC44;
    case 567u: goto L_089DBC48;
    case 568u: goto L_089DBC60;
    case 569u: goto L_089DBC80;
    case 570u: goto L_089DBC90;
    case 571u: goto L_089DBC9C;
    case 572u: goto L_089DBCBC;
    case 573u: goto L_089DBCF0;
    case 574u: goto L_089DBCF8;
    case 575u: goto L_089DBD08;
    case 576u: goto L_089DBD14;
    case 577u: goto L_089DBD2C;
    case 578u: goto L_089DBD44;
    case 579u: goto L_089DBD78;
    case 580u: goto L_089DBD80;
    case 581u: goto L_089DBD90;
    case 582u: goto L_089DBD9C;
    case 583u: goto L_089DBDB4;
    case 584u: goto L_089DBDCC;
    case 585u: goto L_089DBE18;
    case 586u: goto L_089DBE20;
    case 587u: goto L_089DBE74;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D8004:
    ctx.gpr[6] = (2207u << 16u);
    ctx.gpr[7] = (2207u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] | ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 1042u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24128));
    ctx.gpr[31] = (0x089D8024u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24280));
    goto L_089D83A8;
L_089D8024:
    ctx.gpr[31] = (0x089D802Cu);
    ctx.gpr[16] = (ctx.gpr[16] | ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 504u, 0x089EF1C8u>(ctx, &aot_mem) && ctx.pc == 0x089D802Cu) goto L_089D802C;
    return;
L_089D802C:
    ctx.gpr[6] = (2207u << 16u);
    ctx.gpr[7] = (2207u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] | ctx.gpr[2]);
    ctx.gpr[4] = (0u | 116u);
    ctx.gpr[5] = (0u | 1034u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5548));
    ctx.gpr[31] = (0x089D804Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5664));
    goto L_089D83A8;
L_089D804C:
    ctx.gpr[6] = (2205u << 16u);
    ctx.gpr[7] = (2205u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] | ctx.gpr[2]);
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[5] = (0u | 1035u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5836));
    ctx.gpr[31] = (0x089D806Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5956));
    goto L_089D83A8;
L_089D806C:
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D808C;
      }
      goto L_089D8078;
    }
L_089D8078:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D808C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D80A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D80BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D80BCu) goto L_089D80BC;
    return;
L_089D80BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D80C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D80F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D80F0u) goto L_089D80F0;
    return;
L_089D80F0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23964)));
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D8144u);
    ctx.gpr[5] = (4u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D8144u) goto L_089D8144;
    return;
L_089D8144:
    ctx.gpr[18] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-24200));
      if (branch_taken) {
          goto L_089D823C;
      }
      goto L_089D8158;
    }
L_089D8158:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D816Cu);
    ctx.gpr[6] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089D816Cu) goto L_089D816C;
    return;
L_089D816C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089D8188u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D8188:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D81A0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D81A0:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940), ctx.gpr[18]);
        goto L_089D81F8;
    }
    goto L_089D81A8;
L_089D81A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D81C4u);
    ctx.gpr[8] = (0u | 29u);
    goto L_089D8288;
L_089D81C4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23968)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-23968), ctx.gpr[5]);
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
L_089D81F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D8208u);
    ctx.gpr[6] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089D8208u) goto L_089D8208;
    return;
L_089D8208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D8218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D8218u) goto L_089D8218;
    return;
L_089D8218:
    ctx.gpr[2] = (0u | 0u);
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
L_089D823C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23964)));
    ctx.gpr[31] = (0x089D8258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8258u) goto L_089D8258;
    return;
L_089D8258:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D8264u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D8264u) goto L_089D8264;
    return;
L_089D8264:
    ctx.gpr[2] = (0u | 0u);
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
L_089D8288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089D82C4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D82C4u) goto L_089D82C4;
    return;
L_089D82C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto L_089D8370;
      }
      goto L_089D82D0;
    }
L_089D82D0:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D834C;
      }
      goto L_089D82DC;
    }
L_089D82DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D8304;
      }
      goto L_089D82E4;
    }
L_089D82E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D8310;
      }
      goto L_089D82EC;
    }
L_089D82EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D833C;
      }
      goto L_089D82F4;
    }
L_089D82F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089D8348;
      }
      goto L_089D82FC;
    }
L_089D82FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089D834C;
      }
      goto L_089D8304;
    }
L_089D8304:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089D834C;
      }
      goto L_089D8310;
    }
L_089D8310:
    ctx.gpr[19] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D834C;
      }
      goto L_089D831C;
    }
L_089D831C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2220u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D8334u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30008));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D8334u) goto L_089D8334;
    return;
L_089D8334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D834C;
      }
      goto L_089D833C;
    }
L_089D833C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089D834C;
      }
      goto L_089D8348;
    }
L_089D8348:
    ctx.gpr[19] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089D834C;
L_089D834C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D8370;
      }
      goto L_089D8354;
    }
L_089D8354:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x089D8364u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8364u) goto L_089D8364;
    return;
L_089D8364:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D8370u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D8370u) goto L_089D8370;
    return;
L_089D8370:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8390:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23968)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D83A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D83D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23964));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 586u, 0x089D3428u>(ctx, &aot_mem) && ctx.pc == 0x089D83D0u) goto L_089D83D0;
    return;
L_089D83D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D83DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D83F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23964));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 559u, 0x089D3264u>(ctx, &aot_mem) && ctx.pc == 0x089D83F4u) goto L_089D83F4;
    return;
L_089D83F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D852C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D8554u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D8554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D856C;
      }
      goto L_089D855C;
    }
L_089D855C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D856C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D857C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D85ACu);
    ctx.gpr[7] = (0u | 0u);
    goto L_089D8288;
L_089D85AC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_089D85B4;
    }
    goto L_089D85B4;
L_089D85B4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D85C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D85F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D85F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8608;
      }
      goto L_089D85F8;
    }
L_089D85F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8608:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8618:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D8640u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089D8288;
L_089D8640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8658;
      }
      goto L_089D8648;
    }
L_089D8648:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8658:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D87EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D8820u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D8820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D8850;
      }
      goto L_089D8828;
    }
L_089D8828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[31] = (0x089D8834u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23964));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 565u, 0x089D3298u>(ctx, &aot_mem) && ctx.pc == 0x089D8834u) goto L_089D8834;
    return;
L_089D8834:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D8868;
      }
      goto L_089D883C;
    }
L_089D883C:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D8850u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D8850:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[31] = (0x089D8874u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089DB658;
L_089D8874:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D888Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D8288;
L_089D888C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D8980;
      }
      goto L_089D8974;
    }
L_089D8974:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24200));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940), ctx.gpr[4]);
    goto L_089D8980;
L_089D8980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D8A04;
      }
      goto L_089D8998;
    }
L_089D8998:
    ctx.gpr[2] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089D89DC;
      }
      goto L_089D89A4;
    }
L_089D89A4:
    ctx.gpr[31] = (0x089D89ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 36u, 0x089EC330u>(ctx, &aot_mem) && ctx.pc == 0x089D89ACu) goto L_089D89AC;
    return;
L_089D89AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8A28;
      }
      goto L_089D89BC;
    }
L_089D89BC:
    ctx.gpr[31] = (0x089D89C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D8104;
L_089D89C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8A28;
      }
      goto L_089D89CC;
    }
L_089D89CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D8A28;
      }
      goto L_089D89DC;
    }
L_089D89DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089D89F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D89F0u) goto L_089D89F0;
    return;
L_089D89F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D89FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D89FCu) goto L_089D89FC;
    return;
L_089D89FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D8A28;
      }
      goto L_089D8A04;
    }
L_089D8A04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089D8A18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8A18u) goto L_089D8A18;
    return;
L_089D8A18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D8A24u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D8A24u) goto L_089D8A24;
    return;
L_089D8A24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089D8A28;
L_089D8A28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23968)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8A78;
      }
      goto L_089D8A5C;
    }
L_089D8A5C:
    ctx.gpr[31] = (0x089D8A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 529u, 0x089D30A4u>(ctx, &aot_mem) && ctx.pc == 0x089D8A64u) goto L_089D8A64;
    return;
L_089D8A64:
    ctx.gpr[31] = (0x089D8A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 151u, 0x089D13ACu>(ctx, &aot_mem) && ctx.pc == 0x089D8A6Cu) goto L_089D8A6C;
    return;
L_089D8A6C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), 0u);
    goto L_089D8A78;
L_089D8A78:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24200));
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D8AF4;
      }
      goto L_089D8AC8;
    }
L_089D8AC8:
    ctx.gpr[5] = (2206u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32608));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2206u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    ctx.gpr[31] = (0x089D8AECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 43u, 0x089D09A4u>(ctx, &aot_mem) && ctx.pc == 0x089D8AECu) goto L_089D8AEC;
    return;
L_089D8AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089D8B1C;
      }
      goto L_089D8AF4;
    }
L_089D8AF4:
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5080));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3712));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    ctx.gpr[31] = (0x089D8B18u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 43u, 0x089D09A4u>(ctx, &aot_mem) && ctx.pc == 0x089D8B18u) goto L_089D8B18;
    return;
L_089D8B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    goto L_089D8B1C;
L_089D8B1C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D8BDC;
      }
      goto L_089D8B30;
    }
L_089D8B30:
    ctx.gpr[31] = (0x089D8B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F63F8u>(ctx, &aot_mem) && ctx.pc == 0x089D8B38u) goto L_089D8B38;
    return;
L_089D8B38:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8BDC;
      }
      goto L_089D8B44;
    }
L_089D8B44:
    ctx.gpr[31] = (0x089D8B4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D12FCu>(ctx, &aot_mem) && ctx.pc == 0x089D8B4Cu) goto L_089D8B4C;
    return;
L_089D8B4C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8BD4;
      }
      goto L_089D8B58;
    }
L_089D8B58:
    ctx.gpr[31] = (0x089D8B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 521u, 0x089D2FE8u>(ctx, &aot_mem) && ctx.pc == 0x089D8B60u) goto L_089D8B60;
    return;
L_089D8B60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8BCC;
      }
      goto L_089D8B6C;
    }
L_089D8B6C:
    ctx.gpr[31] = (0x089D8B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 512u, 0x089D7E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8B74u) goto L_089D8B74;
    return;
L_089D8B74:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8B94;
      }
      goto L_089D8B80;
    }
L_089D8B80:
    ctx.gpr[31] = (0x089D8B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 63u, 0x089EC6CCu>(ctx, &aot_mem) && ctx.pc == 0x089D8B88u) goto L_089D8B88;
    return;
L_089D8B88:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
        goto L_089D8BA4;
    }
    goto L_089D8B94;
L_089D8B94:
    ctx.gpr[31] = (0x089D8B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 529u, 0x089D30A4u>(ctx, &aot_mem) && ctx.pc == 0x089D8B9Cu) goto L_089D8B9C;
    return;
L_089D8B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8BCC;
      }
      goto L_089D8BA4;
    }
L_089D8BA4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D8BCC:
    ctx.gpr[31] = (0x089D8BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 151u, 0x089D13ACu>(ctx, &aot_mem) && ctx.pc == 0x089D8BD4u) goto L_089D8BD4;
    return;
L_089D8BD4:
    ctx.gpr[31] = (0x089D8BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 421u, 0x089F6514u>(ctx, &aot_mem) && ctx.pc == 0x089D8BDCu) goto L_089D8BDC;
    return;
L_089D8BDC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D8C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-23900), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23680)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23656)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23652)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[9] = (4u << 16u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-23892));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D8C54u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 78u, 0x089D0D2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8C54u) goto L_089D8C54;
    return;
L_089D8C54:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23900)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D8CB0;
      }
      goto L_089D8C80;
    }
L_089D8C80:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23900));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8CB0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23900));
        goto L_089D8D14;
    }
    goto L_089D8CF8;
L_089D8CF8:
    ctx.gpr[31] = (0x089D8D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089D8D00u) goto L_089D8D00;
    return;
L_089D8D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23900)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23900));
    goto L_089D8D14;
L_089D8D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
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
L_089D8D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D8D74;
      }
      goto L_089D8D5C;
    }
L_089D8D5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D8D60;
L_089D8D60:
    ctx.gpr[31] = (0x089D8D68u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D8D3C;
L_089D8D68:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089D8D60;
      }
      goto L_089D8D74;
    }
L_089D8D74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23900)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D8DD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D8DD0u) goto L_089D8DD0;
    return;
L_089D8DD0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8DEC;
      }
      goto L_089D8DDC;
    }
L_089D8DDC:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
        goto L_089D8E0C;
    }
    goto L_089D8DE4;
L_089D8DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D8E10;
      }
      goto L_089D8DEC;
    }
L_089D8DEC:
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
L_089D8E0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089D8E10;
L_089D8E10:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089D8F14;
      }
      goto L_089D8EE0;
    }
L_089D8EE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089D8EE4;
L_089D8EE4:
    ctx.gpr[31] = (0x089D8EECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D8D88;
L_089D8EEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8F58;
      }
      goto L_089D8EF8;
    }
L_089D8EF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089D8EE4;
      }
      goto L_089D8F14;
    }
L_089D8F14:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D8F28u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 565u, 0x089D3298u>(ctx, &aot_mem) && ctx.pc == 0x089D8F28u) goto L_089D8F28;
    return;
L_089D8F28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D8F38u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 581u, 0x089D33A4u>(ctx, &aot_mem) && ctx.pc == 0x089D8F38u) goto L_089D8F38;
    return;
L_089D8F38:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D8F58:
    ctx.gpr[31] = (0x089D8F60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D92E4;
L_089D8F60:
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
L_089D8F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D8F94u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089D8D88;
L_089D8F94:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8FB8;
      }
      goto L_089D8FA0;
    }
L_089D8FA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089D8FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9304;
L_089D8FB8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_089D8FFC;
    }
    goto L_089D8FE8;
L_089D8FE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x089D8FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D8D3C;
L_089D8FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9004;
      }
      goto L_089D8FFC;
    }
L_089D8FFC:
    ctx.gpr[31] = (0x089D9004u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D8D3C;
L_089D9004:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D904C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D905C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23900)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9090u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9090u) goto L_089D9090;
    return;
L_089D9090:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D90B8;
      }
      goto L_089D909C;
    }
L_089D909C:
    ctx.gpr[31] = (0x089D90A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9874;
L_089D90A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D90B8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D9120u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 576u, 0x089D3344u>(ctx, &aot_mem) && ctx.pc == 0x089D9120u) goto L_089D9120;
    return;
L_089D9120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
        goto L_089D9138;
    }
    goto L_089D912C;
L_089D912C:
    ctx.gpr[31] = (0x089D9134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D94B4;
L_089D9134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    goto L_089D9138;
L_089D9138:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
        goto L_089D915C;
    }
    goto L_089D9144;
L_089D9144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    goto L_089D915C;
L_089D915C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9178;
      }
      goto L_089D9164;
    }
L_089D9164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    goto L_089D9168;
L_089D9168:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
        goto L_089D9168;
    }
    goto L_089D9178;
L_089D9178:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D919Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089D9100;
L_089D919C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23900)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D91C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D91C0u) goto L_089D91C0;
    return;
L_089D91C0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D91F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D9214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 576u, 0x089D3344u>(ctx, &aot_mem) && ctx.pc == 0x089D9214u) goto L_089D9214;
    return;
L_089D9214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9238;
      }
      goto L_089D9224;
    }
L_089D9224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089D9238;
L_089D9238:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D925Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089D91F4;
L_089D925C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23900)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9280u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9280u) goto L_089D9280;
    return;
L_089D9280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D92D0;
      }
      goto L_089D92A8;
    }
L_089D92A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D92C8;
      }
      goto L_089D92B4;
    }
L_089D92B4:
    ctx.gpr[31] = (0x089D92BCu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    goto L_089D9290;
L_089D92BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D92B4;
      }
      goto L_089D92C8;
    }
L_089D92C8:
    ctx.gpr[31] = (0x089D92D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9248;
L_089D92D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D92E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D92F4u);
    // nop
    goto L_089D9290;
L_089D92F4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9304:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D935C;
      }
      goto L_089D9318;
    }
L_089D9318:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(188));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    goto L_089D935C;
L_089D935C:
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 12u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D93A4;
      }
      goto L_089D939C;
    }
L_089D939C:
    ctx.gpr[31] = (0x089D93A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 182u, 0x089DD794u>(ctx, &aot_mem) && ctx.pc == 0x089D93A4u) goto L_089D93A4;
    return;
L_089D93A4:
    ctx.gpr[2] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D93B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D93C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D93E8;
      }
      goto L_089D93E0;
    }
L_089D93E0:
    ctx.gpr[31] = (0x089D93E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D94B4;
L_089D93E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x089D9404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D8D3C;
L_089D9404:
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
L_089D941C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D9444;
      }
      goto L_089D943C;
    }
L_089D943C:
    ctx.gpr[31] = (0x089D9444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D94B4;
L_089D9444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x089D9460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D8D3C;
L_089D9460:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9494;
      }
      goto L_089D9470;
    }
L_089D9470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089D9494;
L_089D9494:
    ctx.gpr[31] = (0x089D949Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9304;
L_089D949C:
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
L_089D94B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_089D94DC;
      }
      goto L_089D94D4;
    }
L_089D94D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D94FC;
      }
      goto L_089D94DC;
    }
L_089D94DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    if (ctx.gpr[6] == ctx.gpr[16]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
        goto L_089D94FC;
    }
    goto L_089D94E8;
L_089D94E8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089D94EC;
L_089D94EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    if (ctx.gpr[6] != ctx.gpr[16]) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_089D94EC;
    }
    goto L_089D94F8;
L_089D94F8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    goto L_089D94FC;
L_089D94FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D9510u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D8D3C;
L_089D9510:
    ctx.gpr[31] = (0x089D9518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9304;
L_089D9518:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D952C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D9578;
      }
      goto L_089D9558;
    }
L_089D9558:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D955C;
L_089D955C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x089D9568u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9568u) goto L_089D9568;
    return;
L_089D9568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9578;
      }
      goto L_089D9570;
    }
L_089D9570:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089D955C;
      }
      goto L_089D9578;
    }
L_089D9578:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089D9598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089D95C8;
      }
      goto L_089D95B4;
    }
L_089D95B4:
    ctx.gpr[31] = (0x089D95BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9598;
L_089D95BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D95B4;
      }
      goto L_089D95C8;
    }
L_089D95C8:
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
L_089D9648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D9660u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 534u, 0x089CF0CCu>(ctx, &aot_mem) && ctx.pc == 0x089D9660u) goto L_089D9660;
    return;
L_089D9660:
    ctx.gpr[31] = (0x089D9668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9304;
L_089D9668:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D96B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D9718u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9304;
L_089D9718:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D983Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 586u, 0x089D3428u>(ctx, &aot_mem) && ctx.pc == 0x089D983Cu) goto L_089D983C;
    return;
L_089D983C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 3u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(156), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D9940u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 565u, 0x089D3298u>(ctx, &aot_mem) && ctx.pc == 0x089D9940u) goto L_089D9940;
    return;
L_089D9940:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_089D99E0;
    }
    goto L_089D99AC;
L_089D99AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D99B8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D99B8u) goto L_089D99B8;
    return;
L_089D99B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(528), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(532), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_089D99E0;
L_089D99E0:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(540)));
        goto L_089D9A1C;
    }
    goto L_089D99E8;
L_089D99E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D99F4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D99F4u) goto L_089D99F4;
    return;
L_089D99F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(540)));
    goto L_089D9A1C;
L_089D9A1C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(536)));
        goto L_089D9A64;
    }
    goto L_089D9A24;
L_089D9A24:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_089D9A28;
L_089D9A28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(540), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9A48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9A48u) goto L_089D9A48;
    return;
L_089D9A48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D9A28;
      }
      goto L_089D9A60;
    }
L_089D9A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(536)));
    goto L_089D9A64;
L_089D9A64:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_089D9A90;
    }
    goto L_089D9A6C;
L_089D9A6C:
    ctx.gpr[31] = (0x089D9A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089D9A74u) goto L_089D9A74;
    return;
L_089D9A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(536), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089D9A90;
L_089D9A90:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23856));
      if (branch_taken) {
          goto L_089D9AB4;
      }
      goto L_089D9A98;
    }
L_089D9A98:
    ctx.gpr[31] = (0x089D9AA0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089D9AA0u) goto L_089D9AA0;
    return;
L_089D9AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23856));
    goto L_089D9AB4;
L_089D9AB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
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
L_089D9ADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          goto L_089D9B80;
      }
      goto L_089D9B18;
    }
L_089D9B18:
    ctx.gpr[5] = (260u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089D9B40;
      }
      goto L_089D9B24;
    }
L_089D9B24:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089D9B38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9B38u) goto L_089D9B38;
    return;
L_089D9B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D9B50;
      }
      goto L_089D9B40;
    }
L_089D9B40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9B4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9B4Cu) goto L_089D9B4C;
    return;
L_089D9B4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089D9B50;
L_089D9B50:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089D9B98;
    }
    goto L_089D9B58;
L_089D9B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(532), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(528)));
    goto L_089D9B80;
L_089D9B80:
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
L_089D9B98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D9BACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9BACu) goto L_089D9BAC;
    return;
L_089D9BAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D9BB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D9BB8u) goto L_089D9BB8;
    return;
L_089D9BB8:
    ctx.gpr[2] = (0u | 0u);
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
L_089D9C54:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089D9CCC;
      }
      goto L_089D9C7C;
    }
L_089D9C7C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089D9C7C;
      }
      goto L_089D9CCC;
    }
L_089D9CCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9D20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9D20u) goto L_089D9D20;
    return;
L_089D9D20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9D74;
      }
      goto L_089D9D2C;
    }
L_089D9D2C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D9D54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23648));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 565u, 0x089D3298u>(ctx, &aot_mem) && ctx.pc == 0x089D9D54u) goto L_089D9D54;
    return;
L_089D9D54:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D9D74:
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
L_089D9D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089D9DC0;
      }
      goto L_089D9DB4;
    }
L_089D9DB4:
    ctx.gpr[31] = (0x089D9DBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9F38;
L_089D9DBC:
    ctx.gpr[4] = (2222u << 16u);
    goto L_089D9DC0;
L_089D9DC0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D9DCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23648));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 576u, 0x089D3344u>(ctx, &aot_mem) && ctx.pc == 0x089D9DCCu) goto L_089D9DCC;
    return;
L_089D9DCC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9DF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9DF0u) goto L_089D9DF0;
    return;
L_089D9DF0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[17] ^ 8u);
    ctx.gpr[18] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D9E4C;
      }
      goto L_089D9E40;
    }
L_089D9E40:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[4] << (ctx.gpr[17] & 31u));
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    goto L_089D9E4C;
L_089D9E4C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089D9EA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9EA4u) goto L_089D9EA4;
    return;
L_089D9EA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D9EC0;
      }
      goto L_089D9EB0;
    }
L_089D9EB0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089D9F04;
      }
      goto L_089D9EB8;
    }
L_089D9EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D9F0C;
      }
      goto L_089D9EC0;
    }
L_089D9EC0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D9ED8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9ED8u) goto L_089D9ED8;
    return;
L_089D9ED8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089D9EE4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089D9EE4u) goto L_089D9EE4;
    return;
L_089D9EE4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9F04:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089D9F0C;
L_089D9F0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089D9F5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9F5Cu) goto L_089D9F5C;
    return;
L_089D9F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA1C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089DA244;
      }
      goto L_089DA1D8;
    }
L_089DA1D8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089DA1F0;
      }
      goto L_089DA1E0;
    }
L_089DA1E0:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DA2C8;
      }
      goto L_089DA1EC;
    }
L_089DA1EC:
    ctx.gpr[5] = (0u | 1u);
    goto L_089DA1F0;
L_089DA1F0:
    ctx.gpr[6] = (ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089DA2C8;
      }
      goto L_089DA204;
    }
L_089DA204:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
        goto L_089DA21C;
    }
    goto L_089DA21C;
L_089DA21C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
        goto L_089DA228;
    }
    goto L_089DA228;
L_089DA228:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DA204;
      }
      goto L_089DA23C;
    }
L_089DA23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA2C8;
      }
      goto L_089DA244;
    }
L_089DA244:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DA2C8;
      }
      goto L_089DA258;
    }
L_089DA258:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    goto L_089DA260;
L_089DA260:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089DA2B4;
    }
    goto L_089DA26C;
L_089DA26C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    goto L_089DA270;
L_089DA270:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[8] = (ctx.gpr[11] | 0u);
        goto L_089DA288;
    }
    goto L_089DA288;
L_089DA288:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
        goto L_089DA294;
    }
    goto L_089DA294;
L_089DA294:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DA270;
      }
      goto L_089DA2AC;
    }
L_089DA2AC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089DA2B4;
L_089DA2B4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089DA260;
      }
      goto L_089DA2C8;
    }
L_089DA2C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089DA2FCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA2FCu) goto L_089DA2FC;
    return;
L_089DA2FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DA368;
      }
      goto L_089DA320;
    }
L_089DA320:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    ctx.gpr[6] = (260u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1030));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089DA334u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA334u) goto L_089DA334;
    return;
L_089DA334:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DA394;
      }
      goto L_089DA340;
    }
L_089DA340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089DA368;
L_089DA368:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DA374u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089DA374u) goto L_089DA374;
    return;
L_089DA374:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA394:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DA3A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA3A8u) goto L_089DA3A8;
    return;
L_089DA3A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DA3B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DA3B4u) goto L_089DA3B4;
    return;
L_089DA3B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA3D4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-23856)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089DA4A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 489u, 0x089F6AE0u>(ctx, &aot_mem) && ctx.pc == 0x089DA4A8u) goto L_089DA4A8;
    return;
L_089DA4A8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
        goto L_089DA4C8;
    }
    goto L_089DA4B0;
L_089DA4B0:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
        goto L_089DA4C8;
    }
    goto L_089DA4B8;
L_089DA4B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DA53C;
      }
      goto L_089DA4C4;
    }
L_089DA4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    goto L_089DA4C8;
L_089DA4C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089DA4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA4D4u) goto L_089DA4D4;
    return;
L_089DA4D4:
    ctx.gpr[31] = (0x089DA4DCu);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_089D9ADC;
L_089DA4DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA604;
      }
      goto L_089DA4E8;
    }
L_089DA4E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA4FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA4FCu) goto L_089DA4FC;
    return;
L_089DA4FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x089DA508u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA508u) goto L_089DA508;
    return;
L_089DA508:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA53C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA508;
      }
      goto L_089DA544;
    }
L_089DA544:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA508;
      }
      goto L_089DA550;
    }
L_089DA550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA564u);
    ctx.gpr[5] = (0u | 59u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA564u) goto L_089DA564;
    return;
L_089DA564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA578u);
    ctx.gpr[5] = (0u | 59u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA578u) goto L_089DA578;
    return;
L_089DA578:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_089DA594;
      }
      goto L_089DA588;
    }
L_089DA588:
    ctx.gpr[30] = (ctx.gpr[23] - ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DA5A8;
      }
      goto L_089DA594;
    }
L_089DA594:
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x089DA59Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA59Cu) goto L_089DA59C;
    return;
L_089DA59C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(244)));
    goto L_089DA5A8;
L_089DA5A8:
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x089DA5B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA5B0u) goto L_089DA5B0;
    return;
L_089DA5B0:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[2]);
    ctx.gpr[31] = (0x089DA5BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089D9ADC;
L_089DA5BC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089DA604;
      }
      goto L_089DA5C8;
    }
L_089DA5C8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089DA5D4u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089DA5D4u) goto L_089DA5D4;
    return;
L_089DA5D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA5E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA5E8u) goto L_089DA5E8;
    return;
L_089DA5E8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x089DA5F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA5F4u) goto L_089DA5F4;
    return;
L_089DA5F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA508;
      }
      goto L_089DA5FC;
    }
L_089DA5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089DA53C;
      }
      goto L_089DA604;
    }
L_089DA604:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089DA654u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 378u, 0x0899F564u>(ctx, &aot_mem) && ctx.pc == 0x089DA654u) goto L_089DA654;
    return;
L_089DA654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA688;
      }
      goto L_089DA65C;
    }
L_089DA65C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089DA668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA668u) goto L_089DA668;
    return;
L_089DA668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089DA688;
      }
      goto L_089DA670;
    }
L_089DA670:
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
L_089DA688:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA6A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA6D0u);
    ctx.gpr[5] = (0u | 58u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA6D0u) goto L_089DA6D0;
    return;
L_089DA6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_089DA6E8;
    }
    goto L_089DA6E8;
L_089DA6E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA6F8u);
    ctx.gpr[5] = (0u | 47u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA6F8u) goto L_089DA6F8;
    return;
L_089DA6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_089DA70C;
    }
    goto L_089DA70C;
L_089DA70C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA71Cu);
    ctx.gpr[5] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA71Cu) goto L_089DA71C;
    return;
L_089DA71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_089DA730;
    }
    goto L_089DA730;
L_089DA730:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA740u);
    ctx.gpr[5] = (0u | 46u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA740u) goto L_089DA740;
    return;
L_089DA740:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA7F4;
      }
      goto L_089DA74C;
    }
L_089DA74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA7F4;
      }
      goto L_089DA768;
    }
L_089DA768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    goto L_089DA76C;
L_089DA76C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA77Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA77Cu) goto L_089DA77C;
    return;
L_089DA77C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
        goto L_089DA7A4;
    }
    goto L_089DA784;
L_089DA784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA798u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA798u) goto L_089DA798;
    return;
L_089DA798:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_089DA7EC;
    }
    goto L_089DA7A0;
L_089DA7A0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_089DA7A4;
L_089DA7A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA7F4;
      }
      goto L_089DA7AC;
    }
L_089DA7AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[6] = (2206u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089DA7CCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22984));
    goto L_089DA44C;
L_089DA7CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA7EC:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
        goto L_089DA76C;
    }
    goto L_089DA7F4;
L_089DA7F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089DA84Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA84Cu) goto L_089DA84C;
    return;
L_089DA84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089DA8C0;
      }
      goto L_089DA868;
    }
L_089DA868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    goto L_089DA86C;
L_089DA86C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA87Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA87Cu) goto L_089DA87C;
    return;
L_089DA87C:
    ctx.gpr[31] = (0x089DA884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 378u, 0x0899F564u>(ctx, &aot_mem) && ctx.pc == 0x089DA884u) goto L_089DA884;
    return;
L_089DA884:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_089DA910;
    }
    goto L_089DA88C;
L_089DA88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DA8A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DA8A4u) goto L_089DA8A4;
    return;
L_089DA8A4:
    ctx.gpr[31] = (0x089DA8ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 378u, 0x0899F564u>(ctx, &aot_mem) && ctx.pc == 0x089DA8ACu) goto L_089DA8AC;
    return;
L_089DA8AC:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_089DA8E8;
    }
    goto L_089DA8B4;
L_089DA8B4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
        goto L_089DA86C;
    }
    goto L_089DA8C0;
L_089DA8C0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089DA8E8:
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
L_089DA910:
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
L_089DA938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2206u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089DA958u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22508));
    goto L_089DA44C;
L_089DA958:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAC48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089DAC60u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_089DA6A0;
L_089DAC60:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAD2C;
      }
      goto L_089DAC6C;
    }
L_089DAC6C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DACBC;
      }
      goto L_089DAC74;
    }
L_089DAC74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DACBC;
      }
      goto L_089DAC80;
    }
L_089DAC80:
    ctx.gpr[31] = (0x089DAC88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089DA6A0;
L_089DAC88:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAD24;
      }
      goto L_089DAC94;
    }
L_089DAC94:
    ctx.gpr[31] = (0x089DAC9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089DA1C8;
L_089DAC9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089DACFC;
      }
      goto L_089DACA4;
    }
L_089DACA4:
    ctx.gpr[31] = (0x089DACACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089DBA3C;
L_089DACAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DACD4;
      }
      goto L_089DACB4;
    }
L_089DACB4:
    ctx.gpr[31] = (0x089DACBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9D94;
L_089DACBC:
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
L_089DACD4:
    ctx.gpr[31] = (0x089DACDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D9D94;
L_089DACDC:
    ctx.gpr[31] = (0x089DACE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9D94;
L_089DACE4:
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
L_089DACFC:
    ctx.gpr[31] = (0x089DAD04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D9D94;
L_089DAD04:
    ctx.gpr[31] = (0x089DAD0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9D94;
L_089DAD0C:
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
L_089DAD24:
    ctx.gpr[31] = (0x089DAD2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D9D94;
L_089DAD2C:
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
L_089DADB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089DAE14;
      }
      goto L_089DADF0;
    }
L_089DADF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089DAE18;
    }
    goto L_089DADFC;
L_089DADFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] << (ctx.gpr[6] & 31u));
      if (branch_taken) {
          goto L_089DAE14;
      }
      goto L_089DAE0C;
    }
L_089DAE0C:
    ctx.gpr[31] = (0x089DAE14u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089DAE14u) goto L_089DAE14;
    return;
L_089DAE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089DAE18;
L_089DAE18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DAE74;
      }
      goto L_089DAE44;
    }
L_089DAE44:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089DAE54u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089DAE54u) goto L_089DAE54;
    return;
L_089DAE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089DAE44;
      }
      goto L_089DAE74;
    }
L_089DAE74:
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
L_089DAEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2057 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DAF3C;
      }
      goto L_089DAEFC;
    }
L_089DAEFC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1057 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1028 ? 1u : 0u);
      if (branch_taken) {
          goto L_089DAF28;
      }
      goto L_089DAF08;
    }
L_089DAF08:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1028));
      if (branch_taken) {
          goto L_089DB03C;
      }
      goto L_089DAF10;
    }
L_089DAF10:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAF28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2056 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB040;
      }
      goto L_089DAF34;
    }
L_089DAF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAF68;
      }
      goto L_089DAF3C;
    }
L_089DAF3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2081 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 8224u);
        goto L_089DAF60;
    }
    goto L_089DAF48;
L_089DAF48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2080 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089DB040;
    }
    goto L_089DAF54;
L_089DAF54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089DAFB8;
      }
      goto L_089DAF5C;
    }
L_089DAF5C:
    ctx.gpr[4] = (0u | 8224u);
    goto L_089DAF60;
L_089DAF60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB040;
      }
      goto L_089DAF68;
    }
L_089DAF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB064;
      }
      goto L_089DAF70;
    }
L_089DAF70:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAFAC;
      }
      goto L_089DAF80;
    }
L_089DAF80:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089DAF90u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089DAF90u) goto L_089DAF90;
    return;
L_089DAF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089DAF80;
      }
      goto L_089DAFAC;
    }
L_089DAFAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB064;
      }
      goto L_089DAFB4;
    }
L_089DAFB4:
    ctx.gpr[5] = (0u | 0u);
    goto L_089DAFB8;
L_089DAFB8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB034;
      }
      goto L_089DAFC4;
    }
L_089DAFC4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089DB018;
      }
      goto L_089DAFD4;
    }
L_089DAFD4:
    ctx.gpr[7] = (ctx.gpr[21] + ctx.gpr[7]);
    goto L_089DAFD8;
L_089DAFD8:
    ctx.gpr[8] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DAFD8;
      }
      goto L_089DB018;
    }
L_089DB018:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089DAFC4;
      }
      goto L_089DB034;
    }
L_089DB034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB064;
      }
      goto L_089DB03C;
    }
L_089DB03C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089DB040;
L_089DB040:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089DB054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB054u) goto L_089DB054;
    return;
L_089DB054:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DB060u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DB060u) goto L_089DB060;
    return;
L_089DB060:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089DB064;
L_089DB064:
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
L_089DB08C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089DB0CC;
      }
      goto L_089DB0B0;
    }
L_089DB0B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DB0BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089DADB8;
L_089DB0BC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089DB0E8;
    }
    goto L_089DB0C4;
L_089DB0C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089DB0E4;
      }
      goto L_089DB0CC;
    }
L_089DB0CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DB0D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089DAEA0;
L_089DB0D8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089DB0E8;
    }
    goto L_089DB0E0;
L_089DB0E0:
    ctx.gpr[17] = (0u | 0u);
    goto L_089DB0E4;
L_089DB0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089DB0E8;
L_089DB0E8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089DB1AC;
      }
      goto L_089DB19C;
    }
L_089DB19C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_089DB1AC;
L_089DB1AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB1B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089DB1E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x089DB1E4u) goto L_089DB1E4;
    return;
L_089DB1E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089DB244;
      }
      goto L_089DB1EC;
    }
L_089DB1EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DB1F8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089DB1F8u) goto L_089DB1F8;
    return;
L_089DB1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089DB208u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D9CD4;
L_089DB208:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DB214u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D9E04;
L_089DB214:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089DB268;
    }
    goto L_089DB224;
L_089DB224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x089DB23Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089DB23Cu) goto L_089DB23C;
    return;
L_089DB23C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DB2DC;
      }
      goto L_089DB244;
    }
L_089DB244:
    ctx.gpr[2] = (0u | 0u);
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
L_089DB268:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089DB2D8;
      }
      goto L_089DB278;
    }
L_089DB278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089DB2A4;
      }
      goto L_089DB28C;
    }
L_089DB28C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089DB29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089DB29Cu) goto L_089DB29C;
    return;
L_089DB29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DB2C8;
      }
      goto L_089DB2A4;
    }
L_089DB2A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DB2B4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089DB2B4u) goto L_089DB2B4;
    return;
L_089DB2B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DB2C4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 328u, 0x089D23E4u>(ctx, &aot_mem) && ctx.pc == 0x089DB2C4u) goto L_089DB2C4;
    return;
L_089DB2C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DB2C8;
L_089DB2C8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089DB278;
      }
      goto L_089DB2D8;
    }
L_089DB2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089DB2DC;
L_089DB2DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB2FC;
      }
      goto L_089DB2E8;
    }
L_089DB2E8:
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x089DB2FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x089DB2FCu) goto L_089DB2FC;
    return;
L_089DB2FC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_089DB498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_089DB56C;
      }
      goto L_089DB4C8;
    }
L_089DB4C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089DB4DC;
      }
      goto L_089DB4D0;
    }
L_089DB4D0:
    ctx.gpr[6] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (32768u << 16u);
        goto L_089DB600;
    }
    goto L_089DB4DC;
L_089DB4DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_089DB52C;
      }
      goto L_089DB4E8;
    }
L_089DB4E8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089DB4FCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_089D9C54;
L_089DB4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DB500;
L_089DB500:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_089DB52C:
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x089DB53Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB53Cu) goto L_089DB53C;
    return;
L_089DB53C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DB548u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DB548u) goto L_089DB548;
    return;
L_089DB548:
    ctx.gpr[2] = (0u | 0u);
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
L_089DB56C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089DB5BC;
      }
      goto L_089DB57C;
    }
L_089DB57C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DB500;
    }
    goto L_089DB58C;
L_089DB58C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089DB590;
L_089DB590:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089DB59Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089D9C54;
L_089DB59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089DB590;
      }
      goto L_089DB5B4;
    }
L_089DB5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DB500;
      }
      goto L_089DB5BC;
    }
L_089DB5BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089DB5D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB5D0u) goto L_089DB5D0;
    return;
L_089DB5D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DB5DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DB5DCu) goto L_089DB5DC;
    return;
L_089DB5DC:
    ctx.gpr[2] = (0u | 0u);
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
L_089DB600:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x089DB60Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB60Cu) goto L_089DB60C;
    return;
L_089DB60C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DB618u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DB618u) goto L_089DB618;
    return;
L_089DB618:
    ctx.gpr[2] = (0u | 0u);
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
L_089DB658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[5] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[26];
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089DB6D4;
L_089DB6D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[28] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DB6ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 519u, 0x08A9690Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB6ECu) goto L_089DB6EC;
    return;
L_089DB6EC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089DB71Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 519u, 0x08A9690Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB71Cu) goto L_089DB71C;
    return;
L_089DB71C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 256 ? 1u : 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_089DB6D4;
      }
      goto L_089DB74C;
    }
L_089DB74C:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23648)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23624)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23620)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[9] = (4u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-23848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089DB7D0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 78u, 0x089D0D2Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB7D0u) goto L_089DB7D0;
    return;
L_089DB7D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089DB9FC;
      }
      goto L_089DB7F8;
    }
L_089DB7F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23624)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23612)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[9] = (4u << 16u);
    ctx.gpr[4] = (0u | 52u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-23812));
    ctx.gpr[31] = (0x089DB820u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1030));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 78u, 0x089D0D2Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB820u) goto L_089DB820;
    return;
L_089DB820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(536), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (0u | 256u);
      if (branch_taken) {
          goto L_089DB9E4;
      }
      goto L_089DB844;
    }
L_089DB844:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (260u << 16u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089DB864u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1030));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DB864u) goto L_089DB864;
    return;
L_089DB864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB98C;
      }
      goto L_089DB888;
    }
L_089DB888:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-23856));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089DB8A8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089DB658;
L_089DB8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(540), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(532), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (260u << 16u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089DB8E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DB8E0u) goto L_089DB8E0;
    return;
L_089DB8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(528), ctx.gpr[2]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA1C;
      }
      goto L_089DB904;
    }
L_089DB904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089DB910u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DB910u) goto L_089DB910;
    return;
L_089DB910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089DB93Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089DB93Cu) goto L_089DB93C;
    return;
L_089DB93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(536), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089DB95Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089DB95Cu) goto L_089DB95C;
    return;
L_089DB95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
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
L_089DB98C:
    ctx.gpr[31] = (0x089DB994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089DB994u) goto L_089DB994;
    return;
L_089DB994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(536), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089DB9B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089DB9B4u) goto L_089DB9B4;
    return;
L_089DB9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
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
L_089DB9E4:
    ctx.gpr[31] = (0x089DB9ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089DB9ECu) goto L_089DB9EC;
    return;
L_089DB9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23856)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_089DB9FC;
L_089DB9FC:
    ctx.gpr[2] = (0u | 0u);
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
L_089DBA1C:
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
L_089DBA3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089DBA90;
      }
      goto L_089DBA68;
    }
L_089DBA68:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[19] != ctx.gpr[5]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089DBA94;
    }
    goto L_089DBA78;
L_089DBA78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 32u);
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_089DBB8C;
    }
    goto L_089DBA88;
L_089DBA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_089DBAD0;
      }
      goto L_089DBA90;
    }
L_089DBA90:
    ctx.gpr[4] = (0u | 1u);
    goto L_089DBA94;
L_089DBA94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089DBAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DBAA4u) goto L_089DBAA4;
    return;
L_089DBAA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DBAB0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DBAB0u) goto L_089DBAB0;
    return;
L_089DBAB0:
    ctx.gpr[2] = (0u | 0u);
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
L_089DBAD0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089DBAE8;
      }
      goto L_089DBAD8;
    }
L_089DBAD8:
    ctx.gpr[6] = (0u | 4u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089DBC80;
    }
    goto L_089DBAE4;
L_089DBAE4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_089DBAE8;
L_089DBAE8:
    ctx.gpr[31] = (0x089DBAF0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089D9CD4;
L_089DBAF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBB34;
      }
      goto L_089DBAFC;
    }
L_089DBAFC:
    ctx.gpr[31] = (0x089DBB04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D9E04;
L_089DBB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089DBB2C;
      }
      goto L_089DBB0C;
    }
L_089DBB0C:
    ctx.gpr[31] = (0x089DBB14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089DB08C;
L_089DBB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DBB54;
      }
      goto L_089DBB24;
    }
L_089DBB24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089DBB60;
      }
      goto L_089DBB2C;
    }
L_089DBB2C:
    ctx.gpr[31] = (0x089DBB34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D9D94;
L_089DBB34:
    ctx.gpr[2] = (0u | 0u);
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
L_089DBB54:
    ctx.gpr[31] = (0x089DBB5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9F38;
L_089DBB5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    goto L_089DBB60;
L_089DBB60:
    ctx.gpr[31] = (0x089DBB68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D9E04;
L_089DBB68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DBB74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089DB08C;
L_089DBB74:
    ctx.gpr[31] = (0x089DBB7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D9F38;
L_089DBB7C:
    ctx.gpr[31] = (0x089DBB84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D9D94;
L_089DBB84:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_089DBB8C;
L_089DBB8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DBC60;
      }
      goto L_089DBBA0;
    }
L_089DBBA0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089DBBA8;
L_089DBBA8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[18];
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089DBC0C;
      }
      goto L_089DBBB4;
    }
L_089DBBB4:
    if (ctx.gpr[11] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089DBBC8;
    }
    goto L_089DBBBC;
L_089DBBBC:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089DBC48;
    }
    goto L_089DBBC4;
L_089DBBC4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089DBBC8;
L_089DBBC8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089DBC44;
      }
      goto L_089DBBD8;
    }
L_089DBBD8:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DBBD8;
      }
      goto L_089DBC04;
    }
L_089DBC04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089DBC44;
      }
      goto L_089DBC0C;
    }
L_089DBC0C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089DBC44;
      }
      goto L_089DBC20;
    }
L_089DBC20:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DBC20;
      }
      goto L_089DBC40;
    }
L_089DBC40:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089DBC44;
L_089DBC44:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089DBC48;
L_089DBC48:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_089DBBA8;
      }
      goto L_089DBC60;
    }
L_089DBC60:
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
L_089DBC80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089DBC90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DBC90u) goto L_089DBC90;
    return;
L_089DBC90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089DBC9Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089DBC9Cu) goto L_089DBC9C;
    return;
L_089DBC9C:
    ctx.gpr[2] = (0u | 0u);
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
L_089DBCBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089DBCF0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBCF0u) goto L_089DBCF0;
    return;
L_089DBCF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBD2C;
      }
      goto L_089DBCF8;
    }
L_089DBCF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBD14;
      }
      goto L_089DBD08;
    }
L_089DBD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089DBD14;
L_089DBD14:
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
L_089DBD2C:
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
L_089DBD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089DBD78u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBD78u) goto L_089DBD78;
    return;
L_089DBD78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBDB4;
      }
      goto L_089DBD80;
    }
L_089DBD80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBD9C;
      }
      goto L_089DBD90;
    }
L_089DBD90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089DBD9C;
L_089DBD9C:
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
L_089DBDB4:
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
L_089DBDCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089DBE18u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBE18u) goto L_089DBE18;
    return;
L_089DBE18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBE74;
      }
      goto L_089DBE20;
    }
L_089DBE20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBE74:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0117(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0117_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_117(Runtime &runtime) {
    runtime.register_generated_unit(117u, 0x089D8000u, 16384u, &recomp_unit_0117, &recomp_unit_0117_entry);
    runtime.register_function(0x089D8004u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8024u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D802Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D804Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D806Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8078u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D808Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8104u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8144u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8158u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D816Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8188u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8208u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8218u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D823Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8258u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8264u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8288u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8304u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8310u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D831Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8334u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D833Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8348u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D834Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8354u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8364u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8370u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8390u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D852Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8554u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D855Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D856Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D857Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8608u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8618u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8640u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8648u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8658u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D87ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8820u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8828u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8834u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D883Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8850u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8868u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8874u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D888Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8954u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8974u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8980u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8998u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A64u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A78u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A8Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8AC8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8AECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8AF4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B30u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B44u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B88u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8BA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8BCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8BD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8BDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8C10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8C54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8C80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8CB0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8CC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8CF8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D00u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D88u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8DD0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8DDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8DE4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8DECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8E0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8E10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8EE0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8EE4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8EECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8EF8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FE8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FF4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9004u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D904Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D905Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9090u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D909Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D90A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D90B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9100u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9120u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D912Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9134u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9138u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9144u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D915Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9164u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9168u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9178u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9188u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D919Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D91C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D91F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9214u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9224u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9238u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9248u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D925Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9280u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9290u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D92F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9304u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9318u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D935Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9378u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D939Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D93A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D93B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D93C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D93E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D93E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9404u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D941Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D943Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9444u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9460u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9470u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9494u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D949Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9510u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9518u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D952Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9558u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D955Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9568u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9570u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9578u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9598u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D95B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D95BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D95C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9648u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9660u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9668u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D96B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9718u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9814u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D983Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9874u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9940u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9974u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A64u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9ADCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B50u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9BACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9BB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C7Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9CCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9CD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DBCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9EA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9EB0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9EB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9EC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9ED8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9EE4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA204u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA21Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA228u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA23Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA244u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA258u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA260u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA26Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA270u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA288u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA294u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA320u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA334u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA340u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA368u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA374u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA394u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA3A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA3B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA3D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA44Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA508u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA53Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA544u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA550u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA564u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA578u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA588u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA594u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA59Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA604u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA638u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA654u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA65Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA668u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA670u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA688u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA70Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA71Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA730u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA740u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA74Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA768u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA76Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA77Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA784u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA798u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA814u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA84Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA868u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA86Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA87Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA884u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA88Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA910u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA938u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA958u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC88u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACBCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACE4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DADB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DADF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DADFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE44u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAEA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAEFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF34u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAF90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAFACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAFB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAFB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAFC4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAFD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAFD8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB018u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB034u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB03Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB040u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB054u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB060u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB064u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB08Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB17Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB19Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB1ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB1B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB1E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB1ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB1F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB208u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB214u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB224u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB23Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB244u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB268u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB278u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB28Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB29Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB498u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB500u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB52Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB53Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB548u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB56Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB57Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB58Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB590u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB59Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB600u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB60Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB618u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB658u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB71Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB74Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB77Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB820u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB844u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB864u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB888u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB8A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB8E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB904u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB910u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB93Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB95Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB98Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB994u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA78u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA88u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAB0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAD0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAD8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAE4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAE8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBAFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB34u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB7Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB84u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB8Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBA8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBBCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBC4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBC8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBD8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC44u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBCBCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBCF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBCF8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD44u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD78u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBDB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBDCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE74u, &recomp_unit_0117, "recomp_unit_0117");
}
} // namespace psprecomp

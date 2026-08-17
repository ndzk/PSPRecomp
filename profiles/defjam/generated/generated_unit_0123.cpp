#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0123[4093] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5,
    0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 18, 0, 19,
    20, 21, 0, 0, 22, 23, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 0, 64, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 84, 0, 0, 85, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 88, 0, 0, 0, 89, 90, 0, 0, 91, 0, 92, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0,
    0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111,
    0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 122, 0,
    0, 123, 0, 0, 124, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 132, 0, 0, 133, 0, 134, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0,
    170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177,
    0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 183, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195,
    0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0,
    210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0,
    0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 235, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 253, 0, 254, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 261, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 270, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 0,
    0, 0, 0, 310, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 321, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325,
    326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 339, 0, 0, 340, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0,
    0, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 367, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0,
    374, 0, 0, 0, 0, 375, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 384, 0, 385, 0, 386,
    0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 392, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0,
    397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 404, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 412,
    0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 437, 438, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0,
    447, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 455, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 465, 0, 0, 466, 0, 467, 468, 0, 0, 469, 0, 470, 0,
    0, 471, 472, 0, 0, 473, 474, 0, 0, 0, 475, 476, 0, 0, 477, 478, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 486, 0, 0, 0, 487, 0, 488,
    489, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0,
    0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500,
    0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0,
    526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 529, 0, 0, 530, 0, 0, 0, 0, 531, 532, 0, 0, 0, 0, 0,
    0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0,
    539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 544, 0, 0, 0, 0, 0, 545, 546, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0,
    557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 562, 0, 0, 0, 0, 0, 0, 563, 564, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 569, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 576,
    577, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 583, 0, 584, 585,
    586, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 592, 593, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0,
    0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0,
    608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0,
    0, 0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 617, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 647,
    0, 0, 0, 0, 0, 648, 0, 649, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 655, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0,
    660, 0, 661, 662, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 665, 0, 0, 0, 666, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0,
    0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 672, 673, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 677,
    0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0,
    0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686,
};
void recomp_unit_0123_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089F0000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0123[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F0000;
    case 2u: goto L_089F0018;
    case 3u: goto L_089F004C;
    case 4u: goto L_089F0070;
    case 5u: goto L_089F007C;
    case 6u: goto L_089F008C;
    case 7u: goto L_089F0098;
    case 8u: goto L_089F00CC;
    case 9u: goto L_089F00F0;
    case 10u: goto L_089F00FC;
    case 11u: goto L_089F010C;
    case 12u: goto L_089F011C;
    case 13u: goto L_089F0130;
    case 14u: goto L_089F0144;
    case 15u: goto L_089F0148;
    case 16u: goto L_089F0160;
    case 17u: goto L_089F0164;
    case 18u: goto L_089F0174;
    case 19u: goto L_089F017C;
    case 20u: goto L_089F0180;
    case 21u: goto L_089F0184;
    case 22u: goto L_089F0190;
    case 23u: goto L_089F0194;
    case 24u: goto L_089F01A0;
    case 25u: goto L_089F01A8;
    case 26u: goto L_089F01B0;
    case 27u: goto L_089F01B8;
    case 28u: goto L_089F01D8;
    case 29u: goto L_089F01E4;
    case 30u: goto L_089F01F4;
    case 31u: goto L_089F01FC;
    case 32u: goto L_089F024C;
    case 33u: goto L_089F0258;
    case 34u: goto L_089F0268;
    case 35u: goto L_089F0284;
    case 36u: goto L_089F029C;
    case 37u: goto L_089F02B0;
    case 38u: goto L_089F02B4;
    case 39u: goto L_089F02C0;
    case 40u: goto L_089F02C8;
    case 41u: goto L_089F02D4;
    case 42u: goto L_089F02DC;
    case 43u: goto L_089F031C;
    case 44u: goto L_089F032C;
    case 45u: goto L_089F033C;
    case 46u: goto L_089F0348;
    case 47u: goto L_089F0354;
    case 48u: goto L_089F0364;
    case 49u: goto L_089F0374;
    case 50u: goto L_089F0380;
    case 51u: goto L_089F0390;
    case 52u: goto L_089F03A8;
    case 53u: goto L_089F03B8;
    case 54u: goto L_089F03C4;
    case 55u: goto L_089F03D0;
    case 56u: goto L_089F03D8;
    case 57u: goto L_089F0428;
    case 58u: goto L_089F0440;
    case 59u: goto L_089F04AC;
    case 60u: goto L_089F04D0;
    case 61u: goto L_089F04E8;
    case 62u: goto L_089F04F4;
    case 63u: goto L_089F0508;
    case 64u: goto L_089F0518;
    case 65u: goto L_089F051C;
    case 66u: goto L_089F0530;
    case 67u: goto L_089F053C;
    case 68u: goto L_089F0548;
    case 69u: goto L_089F0550;
    case 70u: goto L_089F055C;
    case 71u: goto L_089F0588;
    case 72u: goto L_089F0590;
    case 73u: goto L_089F0598;
    case 74u: goto L_089F05A4;
    case 75u: goto L_089F05AC;
    case 76u: goto L_089F05D8;
    case 77u: goto L_089F05E8;
    case 78u: goto L_089F05F0;
    case 79u: goto L_089F05F8;
    case 80u: goto L_089F0614;
    case 81u: goto L_089F063C;
    case 82u: goto L_089F0650;
    case 83u: goto L_089F0658;
    case 84u: goto L_089F065C;
    case 85u: goto L_089F0668;
    case 86u: goto L_089F0674;
    case 87u: goto L_089F0688;
    case 88u: goto L_089F0690;
    case 89u: goto L_089F06A0;
    case 90u: goto L_089F06A4;
    case 91u: goto L_089F06B0;
    case 92u: goto L_089F06B8;
    case 93u: goto L_089F06BC;
    case 94u: goto L_089F06C8;
    case 95u: goto L_089F06D4;
    case 96u: goto L_089F06E8;
    case 97u: goto L_089F06F0;
    case 98u: goto L_089F0704;
    case 99u: goto L_089F0708;
    case 100u: goto L_089F071C;
    case 101u: goto L_089F072C;
    case 102u: goto L_089F0730;
    case 103u: goto L_089F0744;
    case 104u: goto L_089F0750;
    case 105u: goto L_089F075C;
    case 106u: goto L_089F08C0;
    case 107u: goto L_089F08C8;
    case 108u: goto L_089F08D4;
    case 109u: goto L_089F08E4;
    case 110u: goto L_089F08F4;
    case 111u: goto L_089F08FC;
    case 112u: goto L_089F0904;
    case 113u: goto L_089F0910;
    case 114u: goto L_089F0918;
    case 115u: goto L_089F0920;
    case 116u: goto L_089F0938;
    case 117u: goto L_089F0944;
    case 118u: goto L_089F094C;
    case 119u: goto L_089F0958;
    case 120u: goto L_089F0960;
    case 121u: goto L_089F0974;
    case 122u: goto L_089F0978;
    case 123u: goto L_089F0984;
    case 124u: goto L_089F0990;
    case 125u: goto L_089F0994;
    case 126u: goto L_089F09A0;
    case 127u: goto L_089F09AC;
    case 128u: goto L_089F09DC;
    case 129u: goto L_089F0BA4;
    case 130u: goto L_089F0BC8;
    case 131u: goto L_089F0BFC;
    case 132u: goto L_089F0C0C;
    case 133u: goto L_089F0C18;
    case 134u: goto L_089F0C20;
    case 135u: goto L_089F0C24;
    case 136u: goto L_089F0C2C;
    case 137u: goto L_089F0C34;
    case 138u: goto L_089F0C44;
    case 139u: goto L_089F0C4C;
    case 140u: goto L_089F0C6C;
    case 141u: goto L_089F0C80;
    case 142u: goto L_089F0C8C;
    case 143u: goto L_089F0C98;
    case 144u: goto L_089F0CB0;
    case 145u: goto L_089F0CBC;
    case 146u: goto L_089F0CDC;
    case 147u: goto L_089F0CF0;
    case 148u: goto L_089F0D0C;
    case 149u: goto L_089F0D14;
    case 150u: goto L_089F0D20;
    case 151u: goto L_089F0D38;
    case 152u: goto L_089F0D44;
    case 153u: goto L_089F0D4C;
    case 154u: goto L_089F0D54;
    case 155u: goto L_089F0D58;
    case 156u: goto L_089F0D6C;
    case 157u: goto L_089F0F70;
    case 158u: goto L_089F0F78;
    case 159u: goto L_089F0F88;
    case 160u: goto L_089F0F9C;
    case 161u: goto L_089F0FA4;
    case 162u: goto L_089F0FF4;
    case 163u: goto L_089F1000;
    case 164u: goto L_089F1018;
    case 165u: goto L_089F1028;
    case 166u: goto L_089F1030;
    case 167u: goto L_089F1058;
    case 168u: goto L_089F106C;
    case 169u: goto L_089F1074;
    case 170u: goto L_089F1080;
    case 171u: goto L_089F108C;
    case 172u: goto L_089F10C0;
    case 173u: goto L_089F10CC;
    case 174u: goto L_089F10E4;
    case 175u: goto L_089F10EC;
    case 176u: goto L_089F10F4;
    case 177u: goto L_089F10FC;
    case 178u: goto L_089F1108;
    case 179u: goto L_089F1118;
    case 180u: goto L_089F1120;
    case 181u: goto L_089F112C;
    case 182u: goto L_089F1134;
    case 183u: goto L_089F1138;
    case 184u: goto L_089F114C;
    case 185u: goto L_089F1154;
    case 186u: goto L_089F115C;
    case 187u: goto L_089F1190;
    case 188u: goto L_089F119C;
    case 189u: goto L_089F11AC;
    case 190u: goto L_089F11BC;
    case 191u: goto L_089F11D0;
    case 192u: goto L_089F11D8;
    case 193u: goto L_089F11E0;
    case 194u: goto L_089F11F0;
    case 195u: goto L_089F11FC;
    case 196u: goto L_089F1204;
    case 197u: goto L_089F1210;
    case 198u: goto L_089F121C;
    case 199u: goto L_089F154C;
    case 200u: goto L_089F1574;
    case 201u: goto L_089F1580;
    case 202u: goto L_089F1588;
    case 203u: goto L_089F1594;
    case 204u: goto L_089F159C;
    case 205u: goto L_089F15A8;
    case 206u: goto L_089F15B0;
    case 207u: goto L_089F15BC;
    case 208u: goto L_089F15DC;
    case 209u: goto L_089F15F8;
    case 210u: goto L_089F1600;
    case 211u: goto L_089F160C;
    case 212u: goto L_089F1614;
    case 213u: goto L_089F161C;
    case 214u: goto L_089F163C;
    case 215u: goto L_089F1648;
    case 216u: goto L_089F1650;
    case 217u: goto L_089F1690;
    case 218u: goto L_089F169C;
    case 219u: goto L_089F16C0;
    case 220u: goto L_089F16C8;
    case 221u: goto L_089F16D0;
    case 222u: goto L_089F16D4;
    case 223u: goto L_089F16E4;
    case 224u: goto L_089F16F8;
    case 225u: goto L_089F1704;
    case 226u: goto L_089F1710;
    case 227u: goto L_089F171C;
    case 228u: goto L_089F1728;
    case 229u: goto L_089F1734;
    case 230u: goto L_089F1740;
    case 231u: goto L_089F174C;
    case 232u: goto L_089F1758;
    case 233u: goto L_089F1764;
    case 234u: goto L_089F1770;
    case 235u: goto L_089F1774;
    case 236u: goto L_089F1784;
    case 237u: goto L_089F179C;
    case 238u: goto L_089F17B0;
    case 239u: goto L_089F17BC;
    case 240u: goto L_089F17D8;
    case 241u: goto L_089F1824;
    case 242u: goto L_089F1830;
    case 243u: goto L_089F1840;
    case 244u: goto L_089F1854;
    case 245u: goto L_089F1898;
    case 246u: goto L_089F18A8;
    case 247u: goto L_089F18C8;
    case 248u: goto L_089F18E0;
    case 249u: goto L_089F18E8;
    case 250u: goto L_089F18F8;
    case 251u: goto L_089F1904;
    case 252u: goto L_089F1938;
    case 253u: goto L_089F193C;
    case 254u: goto L_089F1944;
    case 255u: goto L_089F1948;
    case 256u: goto L_089F1954;
    case 257u: goto L_089F1984;
    case 258u: goto L_089F1998;
    case 259u: goto L_089F19B8;
    case 260u: goto L_089F19D0;
    case 261u: goto L_089F19D4;
    case 262u: goto L_089F19E0;
    case 263u: goto L_089F19F4;
    case 264u: goto L_089F1A0C;
    case 265u: goto L_089F1A1C;
    case 266u: goto L_089F1A50;
    case 267u: goto L_089F1A84;
    case 268u: goto L_089F1AD0;
    case 269u: goto L_089F1AD8;
    case 270u: goto L_089F1ADC;
    case 271u: goto L_089F1AEC;
    case 272u: goto L_089F1B50;
    case 273u: goto L_089F1B54;
    case 274u: goto L_089F1B64;
    case 275u: goto L_089F1B88;
    case 276u: goto L_089F1B8C;
    case 277u: goto L_089F1BA4;
    case 278u: goto L_089F1BB0;
    case 279u: goto L_089F1BC8;
    case 280u: goto L_089F1BE0;
    case 281u: goto L_089F1C3C;
    case 282u: goto L_089F1C40;
    case 283u: goto L_089F1C9C;
    case 284u: goto L_089F1CA4;
    case 285u: goto L_089F1CD0;
    case 286u: goto L_089F1CEC;
    case 287u: goto L_089F1CF4;
    case 288u: goto L_089F1D10;
    case 289u: goto L_089F1D40;
    case 290u: goto L_089F1D50;
    case 291u: goto L_089F1D6C;
    case 292u: goto L_089F1D94;
    case 293u: goto L_089F1DC8;
    case 294u: goto L_089F1DE0;
    case 295u: goto L_089F1E00;
    case 296u: goto L_089F1E18;
    case 297u: goto L_089F1E38;
    case 298u: goto L_089F1E44;
    case 299u: goto L_089F1E54;
    case 300u: goto L_089F1E58;
    case 301u: goto L_089F1E60;
    case 302u: goto L_089F1E74;
    case 303u: goto L_089F1E80;
    case 304u: goto L_089F1EB4;
    case 305u: goto L_089F1EE8;
    case 306u: goto L_089F1F24;
    case 307u: goto L_089F1F48;
    case 308u: goto L_089F20F0;
    case 309u: goto L_089F20F4;
    case 310u: goto L_089F210C;
    case 311u: goto L_089F2110;
    case 312u: goto L_089F2124;
    case 313u: goto L_089F2130;
    case 314u: goto L_089F2138;
    case 315u: goto L_089F2140;
    case 316u: goto L_089F2144;
    case 317u: goto L_089F2150;
    case 318u: goto L_089F2160;
    case 319u: goto L_089F216C;
    case 320u: goto L_089F2194;
    case 321u: goto L_089F21A0;
    case 322u: goto L_089F21A4;
    case 323u: goto L_089F21B8;
    case 324u: goto L_089F21F4;
    case 325u: goto L_089F21FC;
    case 326u: goto L_089F2200;
    case 327u: goto L_089F2210;
    case 328u: goto L_089F2230;
    case 329u: goto L_089F2264;
    case 330u: goto L_089F2270;
    case 331u: goto L_089F227C;
    case 332u: goto L_089F2298;
    case 333u: goto L_089F22B8;
    case 334u: goto L_089F22C0;
    case 335u: goto L_089F2304;
    case 336u: goto L_089F2348;
    case 337u: goto L_089F2358;
    case 338u: goto L_089F2360;
    case 339u: goto L_089F2364;
    case 340u: goto L_089F2370;
    case 341u: goto L_089F237C;
    case 342u: goto L_089F23B0;
    case 343u: goto L_089F23B4;
    case 344u: goto L_089F23C0;
    case 345u: goto L_089F23C8;
    case 346u: goto L_089F23D0;
    case 347u: goto L_089F23F0;
    case 348u: goto L_089F23F8;
    case 349u: goto L_089F2450;
    case 350u: goto L_089F245C;
    case 351u: goto L_089F246C;
    case 352u: goto L_089F248C;
    case 353u: goto L_089F2494;
    case 354u: goto L_089F24B4;
    case 355u: goto L_089F24B8;
    case 356u: goto L_089F24C8;
    case 357u: goto L_089F24EC;
    case 358u: goto L_089F24F8;
    case 359u: goto L_089F2520;
    case 360u: goto L_089F2534;
    case 361u: goto L_089F254C;
    case 362u: goto L_089F2554;
    case 363u: goto L_089F2568;
    case 364u: goto L_089F2574;
    case 365u: goto L_089F2588;
    case 366u: goto L_089F258C;
    case 367u: goto L_089F25AC;
    case 368u: goto L_089F25B0;
    case 369u: goto L_089F25B8;
    case 370u: goto L_089F25C0;
    case 371u: goto L_089F25E4;
    case 372u: goto L_089F25F0;
    case 373u: goto L_089F25F8;
    case 374u: goto L_089F2600;
    case 375u: goto L_089F2614;
    case 376u: goto L_089F2618;
    case 377u: goto L_089F2620;
    case 378u: goto L_089F2628;
    case 379u: goto L_089F2630;
    case 380u: goto L_089F2640;
    case 381u: goto L_089F264C;
    case 382u: goto L_089F2654;
    case 383u: goto L_089F2668;
    case 384u: goto L_089F266C;
    case 385u: goto L_089F2674;
    case 386u: goto L_089F267C;
    case 387u: goto L_089F268C;
    case 388u: goto L_089F2694;
    case 389u: goto L_089F26AC;
    case 390u: goto L_089F26B8;
    case 391u: goto L_089F26C0;
    case 392u: goto L_089F26CC;
    case 393u: goto L_089F26D0;
    case 394u: goto L_089F26D8;
    case 395u: goto L_089F26E0;
    case 396u: goto L_089F26F4;
    case 397u: goto L_089F2700;
    case 398u: goto L_089F2718;
    case 399u: goto L_089F2720;
    case 400u: goto L_089F2730;
    case 401u: goto L_089F273C;
    case 402u: goto L_089F2744;
    case 403u: goto L_089F2758;
    case 404u: goto L_089F275C;
    case 405u: goto L_089F2764;
    case 406u: goto L_089F2798;
    case 407u: goto L_089F279C;
    case 408u: goto L_089F27D0;
    case 409u: goto L_089F27D8;
    case 410u: goto L_089F27E8;
    case 411u: goto L_089F27F4;
    case 412u: goto L_089F27FC;
    case 413u: goto L_089F2808;
    case 414u: goto L_089F2814;
    case 415u: goto L_089F2C88;
    case 416u: goto L_089F2CA0;
    case 417u: goto L_089F2CAC;
    case 418u: goto L_089F2CCC;
    case 419u: goto L_089F2CE8;
    case 420u: goto L_089F2D04;
    case 421u: goto L_089F2D14;
    case 422u: goto L_089F2D20;
    case 423u: goto L_089F2D34;
    case 424u: goto L_089F2D40;
    case 425u: goto L_089F2D4C;
    case 426u: goto L_089F2D54;
    case 427u: goto L_089F2D5C;
    case 428u: goto L_089F2D90;
    case 429u: goto L_089F2D98;
    case 430u: goto L_089F2DA0;
    case 431u: goto L_089F2DA8;
    case 432u: goto L_089F2DC8;
    case 433u: goto L_089F2E30;
    case 434u: goto L_089F2E54;
    case 435u: goto L_089F2EA4;
    case 436u: goto L_089F2EAC;
    case 437u: goto L_089F2EC0;
    case 438u: goto L_089F2EC4;
    case 439u: goto L_089F2ED0;
    case 440u: goto L_089F2EE0;
    case 441u: goto L_089F2EE8;
    case 442u: goto L_089F2EF0;
    case 443u: goto L_089F2F40;
    case 444u: goto L_089F2F4C;
    case 445u: goto L_089F2F5C;
    case 446u: goto L_089F2F6C;
    case 447u: goto L_089F2F80;
    case 448u: goto L_089F2F88;
    case 449u: goto L_089F2F9C;
    case 450u: goto L_089F2FB4;
    case 451u: goto L_089F2FC0;
    case 452u: goto L_089F2FC8;
    case 453u: goto L_089F2FD4;
    case 454u: goto L_089F2FDC;
    case 455u: goto L_089F3008;
    case 456u: goto L_089F300C;
    case 457u: goto L_089F3020;
    case 458u: goto L_089F3050;
    case 459u: goto L_089F3064;
    case 460u: goto L_089F306C;
    case 461u: goto L_089F3090;
    case 462u: goto L_089F30A0;
    case 463u: goto L_089F30B0;
    case 464u: goto L_089F30C8;
    case 465u: goto L_089F30CC;
    case 466u: goto L_089F30D8;
    case 467u: goto L_089F30E0;
    case 468u: goto L_089F30E4;
    case 469u: goto L_089F30F0;
    case 470u: goto L_089F30F8;
    case 471u: goto L_089F3104;
    case 472u: goto L_089F3108;
    case 473u: goto L_089F3114;
    case 474u: goto L_089F3118;
    case 475u: goto L_089F3128;
    case 476u: goto L_089F312C;
    case 477u: goto L_089F3138;
    case 478u: goto L_089F313C;
    case 479u: goto L_089F3140;
    case 480u: goto L_089F3148;
    case 481u: goto L_089F3188;
    case 482u: goto L_089F31A4;
    case 483u: goto L_089F31B8;
    case 484u: goto L_089F31D8;
    case 485u: goto L_089F31E0;
    case 486u: goto L_089F31E4;
    case 487u: goto L_089F31F4;
    case 488u: goto L_089F31FC;
    case 489u: goto L_089F3200;
    case 490u: goto L_089F320C;
    case 491u: goto L_089F3218;
    case 492u: goto L_089F324C;
    case 493u: goto L_089F3250;
    case 494u: goto L_089F3260;
    case 495u: goto L_089F3270;
    case 496u: goto L_089F3288;
    case 497u: goto L_089F32CC;
    case 498u: goto L_089F32DC;
    case 499u: goto L_089F32F0;
    case 500u: goto L_089F32FC;
    case 501u: goto L_089F3304;
    case 502u: goto L_089F3310;
    case 503u: goto L_089F331C;
    case 504u: goto L_089F3330;
    case 505u: goto L_089F3344;
    case 506u: goto L_089F3350;
    case 507u: goto L_089F3360;
    case 508u: goto L_089F336C;
    case 509u: goto L_089F33A0;
    case 510u: goto L_089F33A8;
    case 511u: goto L_089F33AC;
    case 512u: goto L_089F33B4;
    case 513u: goto L_089F33C4;
    case 514u: goto L_089F33DC;
    case 515u: goto L_089F33E4;
    case 516u: goto L_089F340C;
    case 517u: goto L_089F3420;
    case 518u: goto L_089F3454;
    case 519u: goto L_089F3494;
    case 520u: goto L_089F34B0;
    case 521u: goto L_089F34C4;
    case 522u: goto L_089F34CC;
    case 523u: goto L_089F34D4;
    case 524u: goto L_089F34E0;
    case 525u: goto L_089F34F0;
    case 526u: goto L_089F3500;
    case 527u: goto L_089F350C;
    case 528u: goto L_089F3540;
    case 529u: goto L_089F3544;
    case 530u: goto L_089F3550;
    case 531u: goto L_089F3564;
    case 532u: goto L_089F3568;
    case 533u: goto L_089F3584;
    case 534u: goto L_089F35B8;
    case 535u: goto L_089F35C0;
    case 536u: goto L_089F35D4;
    case 537u: goto L_089F35E4;
    case 538u: goto L_089F35F0;
    case 539u: goto L_089F3600;
    case 540u: goto L_089F360C;
    case 541u: goto L_089F3618;
    case 542u: goto L_089F3624;
    case 543u: goto L_089F3634;
    case 544u: goto L_089F3638;
    case 545u: goto L_089F3650;
    case 546u: goto L_089F3654;
    case 547u: goto L_089F3658;
    case 548u: goto L_089F366C;
    case 549u: goto L_089F3680;
    case 550u: goto L_089F36B4;
    case 551u: goto L_089F36C0;
    case 552u: goto L_089F36C8;
    case 553u: goto L_089F36D0;
    case 554u: goto L_089F36D8;
    case 555u: goto L_089F36EC;
    case 556u: goto L_089F36F4;
    case 557u: goto L_089F3700;
    case 558u: goto L_089F3710;
    case 559u: goto L_089F371C;
    case 560u: goto L_089F3728;
    case 561u: goto L_089F3730;
    case 562u: goto L_089F3734;
    case 563u: goto L_089F3750;
    case 564u: goto L_089F3754;
    case 565u: goto L_089F375C;
    case 566u: goto L_089F3768;
    case 567u: goto L_089F3774;
    case 568u: goto L_089F37A8;
    case 569u: goto L_089F37AC;
    case 570u: goto L_089F37B4;
    case 571u: goto L_089F37C0;
    case 572u: goto L_089F37CC;
    case 573u: goto L_089F37D8;
    case 574u: goto L_089F37E0;
    case 575u: goto L_089F37E8;
    case 576u: goto L_089F37FC;
    case 577u: goto L_089F3800;
    case 578u: goto L_089F3804;
    case 579u: goto L_089F380C;
    case 580u: goto L_089F3830;
    case 581u: goto L_089F3850;
    case 582u: goto L_089F385C;
    case 583u: goto L_089F3870;
    case 584u: goto L_089F3878;
    case 585u: goto L_089F387C;
    case 586u: goto L_089F3880;
    case 587u: goto L_089F388C;
    case 588u: goto L_089F3894;
    case 589u: goto L_089F38C0;
    case 590u: goto L_089F38CC;
    case 591u: goto L_089F38E0;
    case 592u: goto L_089F38E8;
    case 593u: goto L_089F38EC;
    case 594u: goto L_089F3928;
    case 595u: goto L_089F3934;
    case 596u: goto L_089F3954;
    case 597u: goto L_089F3960;
    case 598u: goto L_089F3978;
    case 599u: goto L_089F3990;
    case 600u: goto L_089F39A8;
    case 601u: goto L_089F39C4;
    case 602u: goto L_089F39CC;
    case 603u: goto L_089F39D4;
    case 604u: goto L_089F39DC;
    case 605u: goto L_089F39E8;
    case 606u: goto L_089F39F0;
    case 607u: goto L_089F39F8;
    case 608u: goto L_089F3A00;
    case 609u: goto L_089F3A0C;
    case 610u: goto L_089F3A20;
    case 611u: goto L_089F3A74;
    case 612u: goto L_089F3A8C;
    case 613u: goto L_089F3A94;
    case 614u: goto L_089F3AA0;
    case 615u: goto L_089F3AB4;
    case 616u: goto L_089F3ABC;
    case 617u: goto L_089F3AC0;
    case 618u: goto L_089F3AD4;
    case 619u: goto L_089F3AE0;
    case 620u: goto L_089F3B14;
    case 621u: goto L_089F3B20;
    case 622u: goto L_089F3B2C;
    case 623u: goto L_089F3B38;
    case 624u: goto L_089F3B40;
    case 625u: goto L_089F3B58;
    case 626u: goto L_089F3B64;
    case 627u: goto L_089F3B98;
    case 628u: goto L_089F3BA0;
    case 629u: goto L_089F3BA8;
    case 630u: goto L_089F3BB4;
    case 631u: goto L_089F3BC0;
    case 632u: goto L_089F3BD4;
    case 633u: goto L_089F3BDC;
    case 634u: goto L_089F3BE8;
    case 635u: goto L_089F3BF4;
    case 636u: goto L_089F3C28;
    case 637u: goto L_089F3C38;
    case 638u: goto L_089F3C54;
    case 639u: goto L_089F3C94;
    case 640u: goto L_089F3CA8;
    case 641u: goto L_089F3CB8;
    case 642u: goto L_089F3CC0;
    case 643u: goto L_089F3CD0;
    case 644u: goto L_089F3CD8;
    case 645u: goto L_089F3CF0;
    case 646u: goto L_089F3CF8;
    case 647u: goto L_089F3CFC;
    case 648u: goto L_089F3D14;
    case 649u: goto L_089F3D1C;
    case 650u: goto L_089F3D20;
    case 651u: goto L_089F3D28;
    case 652u: goto L_089F3D34;
    case 653u: goto L_089F3D68;
    case 654u: goto L_089F3D70;
    case 655u: goto L_089F3D78;
    case 656u: goto L_089F3DA8;
    case 657u: goto L_089F3DB4;
    case 658u: goto L_089F3DE8;
    case 659u: goto L_089F3DF0;
    case 660u: goto L_089F3E00;
    case 661u: goto L_089F3E08;
    case 662u: goto L_089F3E0C;
    case 663u: goto L_089F3E10;
    case 664u: goto L_089F3E38;
    case 665u: goto L_089F3E3C;
    case 666u: goto L_089F3E4C;
    case 667u: goto L_089F3E50;
    case 668u: goto L_089F3E64;
    case 669u: goto L_089F3E84;
    case 670u: goto L_089F3E8C;
    case 671u: goto L_089F3EA4;
    case 672u: goto L_089F3EAC;
    case 673u: goto L_089F3EB0;
    case 674u: goto L_089F3EB8;
    case 675u: goto L_089F3EC4;
    case 676u: goto L_089F3EF8;
    case 677u: goto L_089F3EFC;
    case 678u: goto L_089F3F0C;
    case 679u: goto L_089F3F40;
    case 680u: goto L_089F3F64;
    case 681u: goto L_089F3F78;
    case 682u: goto L_089F3F84;
    case 683u: goto L_089F3F90;
    case 684u: goto L_089F3FA0;
    case 685u: goto L_089F3FBC;
    case 686u: goto L_089F3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F0000:
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
L_089F0018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21608)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21608));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-21608), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F008C;
      }
      goto L_089F004C;
    }
L_089F004C:
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-21608), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089F0070u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0070u) goto L_089F0070;
    return;
L_089F0070:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F007Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F007Cu) goto L_089F007C;
    return;
L_089F007C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F008C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21608));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21608)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089F010C;
      }
      goto L_089F00CC;
    }
L_089F00CC:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089F00F0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F00F0u) goto L_089F00F0;
    return;
L_089F00F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F00FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F00FCu) goto L_089F00FC;
    return;
L_089F00FC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F010C:
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F011C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089F0130;
L_089F0130:
    ctx.gpr[12] = (ctx.gpr[7] | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F01A0;
      }
      goto L_089F0144;
    }
L_089F0144:
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    goto L_089F0148;
L_089F0148:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[13] == 0u) {
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089F0194;
    }
    goto L_089F0160;
L_089F0160:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    goto L_089F0164;
L_089F0164:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[12] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[14] = (ctx.gpr[13] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F0180;
      }
      goto L_089F0174;
    }
L_089F0174:
    if (ctx.gpr[14] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089F0184;
    }
    goto L_089F017C;
L_089F017C:
    ctx.gpr[7] = (ctx.gpr[13] | 0u);
    goto L_089F0180;
L_089F0180:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_089F0184;
L_089F0184:
    ctx.gpr[13] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F0164;
      }
      goto L_089F0190;
    }
L_089F0190:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089F0194;
L_089F0194:
    ctx.gpr[8] = (ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F0148;
      }
      goto L_089F01A0;
    }
L_089F01A0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F01B0;
      }
      goto L_089F01A8;
    }
L_089F01A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F0130;
      }
      goto L_089F01B0;
    }
L_089F01B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F01B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F01F4;
      }
      goto L_089F01D8;
    }
L_089F01D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    goto L_089F01E4;
L_089F01E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F01E4;
      }
      goto L_089F01F4;
    }
L_089F01F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F01FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089F0284;
      }
      goto L_089F024C;
    }
L_089F024C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    goto L_089F0258;
L_089F0258:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
        goto L_089F0268;
    }
    goto L_089F0268;
L_089F0268:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F0258;
      }
      goto L_089F0284;
    }
L_089F0284:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F029C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F02D4;
      }
      goto L_089F02B0;
    }
L_089F02B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089F02B4;
L_089F02B4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] != ctx.gpr[5]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089F02C8;
    }
    goto L_089F02C0;
L_089F02C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F02C8:
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F02B4;
      }
      goto L_089F02D4;
    }
L_089F02D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F02DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F031Cu);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089F031Cu) goto L_089F031C;
    return;
L_089F031C:
    ctx.gpr[6] = (ctx.gpr[19] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    ctx.gpr[5] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089F0354;
      }
      goto L_089F032C;
    }
L_089F032C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F033Cu);
    ctx.gpr[4] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F033Cu) goto L_089F033C;
    return;
L_089F033C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F0348u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F0348u) goto L_089F0348;
    return;
L_089F0348:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    goto L_089F0354;
L_089F0354:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
        goto L_089F0390;
    }
    goto L_089F0364;
L_089F0364:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F0374u);
    ctx.gpr[4] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0374u) goto L_089F0374;
    return;
L_089F0374:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F0380u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F0380u) goto L_089F0380;
    return;
L_089F0380:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    goto L_089F0390;
L_089F0390:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F03D0;
      }
      goto L_089F03A8;
    }
L_089F03A8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F03B8u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F03B8u) goto L_089F03B8;
    return;
L_089F03B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F03C4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F03C4u) goto L_089F03C4;
    return;
L_089F03C4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    goto L_089F03D0;
L_089F03D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F04AC;
      }
      goto L_089F03D8;
    }
L_089F03D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F0440;
      }
      goto L_089F0428;
    }
L_089F0428:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[19] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F0428;
      }
      goto L_089F0440;
    }
L_089F0440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089F04AC;
L_089F04AC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_089F04D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F051C;
      }
      goto L_089F04E8;
    }
L_089F04E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089F0508;
    }
    goto L_089F04F4;
L_089F04F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089F0508;
L_089F0508:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F04E8;
      }
      goto L_089F0518;
    }
L_089F0518:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089F051C;
L_089F051C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F05A4;
      }
      goto L_089F0530;
    }
L_089F0530:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089F0598;
    }
    goto L_089F053C;
L_089F053C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089F0598;
    }
    goto L_089F0548;
L_089F0548:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_089F0550;
L_089F0550:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[10] == ctx.gpr[7]) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_089F0588;
    }
    goto L_089F055C;
L_089F055C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[10] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] << 3u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_089F0588;
L_089F0588:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F0550;
      }
      goto L_089F0590;
    }
L_089F0590:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089F0598;
L_089F0598:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F0530;
      }
      goto L_089F05A4;
    }
L_089F05A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[8] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[2] << 5u);
    ctx.gpr[8] = (ctx.gpr[2] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F05E8;
      }
      goto L_089F05D8;
    }
L_089F05D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F05F0;
      }
      goto L_089F05E8;
    }
L_089F05E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F05F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F0614u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_089F04D0;
L_089F0614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089F065C;
    }
    goto L_089F063C;
L_089F063C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0688;
      }
      goto L_089F0650;
    }
L_089F0650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F06E8;
      }
      goto L_089F0658;
    }
L_089F0658:
    ctx.gpr[4] = (0u | 1u);
    goto L_089F065C;
L_089F065C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F0668u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0668u) goto L_089F0668;
    return;
L_089F0668:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F0674u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F0674u) goto L_089F0674;
    return;
L_089F0674:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0688:
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089F06A4;
    }
    goto L_089F0690;
L_089F0690:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089F06BC;
    }
    goto L_089F06A0;
L_089F06A0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089F06A4;
L_089F06A4:
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F0688;
      }
      goto L_089F06B0;
    }
L_089F06B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F06E8;
      }
      goto L_089F06B8;
    }
L_089F06B8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089F06BC;
L_089F06BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F06C8u);
    ctx.gpr[4] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F06C8u) goto L_089F06C8;
    return;
L_089F06C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F06D4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F06D4u) goto L_089F06D4;
    return;
L_089F06D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F06E8:
    ctx.gpr[31] = (0x089F06F0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089F1EB4;
L_089F06F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
        goto L_089F0730;
    }
    goto L_089F0704;
L_089F0704:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089F0708;
L_089F0708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F0744;
      }
      goto L_089F071C;
    }
L_089F071C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F0708;
      }
      goto L_089F072C;
    }
L_089F072C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    goto L_089F0730;
L_089F0730:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0744:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F0750u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0750u) goto L_089F0750;
    return;
L_089F0750:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F075Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F075Cu) goto L_089F075C;
    return;
L_089F075C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F08C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F08F4;
      }
      goto L_089F08C8;
    }
L_089F08C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F08F4;
      }
      goto L_089F08D4;
    }
L_089F08D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F08F4;
      }
      goto L_089F08E4;
    }
L_089F08E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F08F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F08FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0918;
      }
      goto L_089F0904;
    }
L_089F0904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0918;
      }
      goto L_089F0910;
    }
L_089F0910:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0918:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F0938;
    }
L_089F0938:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F0944;
    }
L_089F0944:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F094C;
    }
L_089F094C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F0958;
    }
L_089F0958:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F0960;
    }
L_089F0960:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_089F0994;
    }
    goto L_089F0974;
L_089F0974:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    goto L_089F0978;
L_089F0978:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F0984;
    }
L_089F0984:
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F0978;
      }
      goto L_089F0990;
    }
L_089F0990:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089F0994;
L_089F0994:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089F09A0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089F1A84;
L_089F09A0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F09DC;
      }
      goto L_089F09AC;
    }
L_089F09AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F09DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F0D6C;
      }
      goto L_089F0BC8;
    }
L_089F0BC8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089F0C6C;
      }
      goto L_089F0BFC;
    }
L_089F0BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F0C24;
      }
      goto L_089F0C0C;
    }
L_089F0C0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F0C18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089F1650;
L_089F0C18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0C4C;
      }
      goto L_089F0C20;
    }
L_089F0C20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089F0C24;
L_089F0C24:
    ctx.gpr[31] = (0x089F0C2Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F17D8;
L_089F0C2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0C4C;
      }
      goto L_089F0C34;
    }
L_089F0C34:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F0CDC;
      }
      goto L_089F0C44;
    }
L_089F0C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0D6C;
      }
      goto L_089F0C4C;
    }
L_089F0C4C:
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
L_089F0C6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (259u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1033));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089F0C80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0C80u) goto L_089F0C80;
    return;
L_089F0C80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F0C98;
      }
      goto L_089F0C8C;
    }
L_089F0C8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F0C34;
      }
      goto L_089F0C98;
    }
L_089F0C98:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F0CB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0CB0u) goto L_089F0CB0;
    return;
L_089F0CB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F0CBCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F0CBCu) goto L_089F0CBC;
    return;
L_089F0CBC:
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
L_089F0CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089F0D6C;
      }
      goto L_089F0CF0;
    }
L_089F0CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089F0D20;
    }
    goto L_089F0D0C;
L_089F0D0C:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089F0D14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0D14u) goto L_089F0D14;
    return;
L_089F0D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089F0D20;
L_089F0D20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F0D54;
      }
      goto L_089F0D38;
    }
L_089F0D38:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[19] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
        goto L_089F0D58;
    }
    goto L_089F0D44;
L_089F0D44:
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x089F0D4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0D4Cu) goto L_089F0D4C;
    return;
L_089F0D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_089F0D54;
L_089F0D54:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    goto L_089F0D58;
L_089F0D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F0CF0;
      }
      goto L_089F0D6C;
    }
L_089F0D6C:
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
L_089F0F70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F0F9C;
      }
      goto L_089F0F78;
    }
L_089F0F78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0F9C;
      }
      goto L_089F0F88;
    }
L_089F0F88:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_089F0F9C;
L_089F0F9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0FA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[11]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F11D8;
      }
      goto L_089F0FF4;
    }
L_089F0FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u << 16u);
      if (branch_taken) {
          goto L_089F11D8;
      }
      goto L_089F1000;
    }
L_089F1000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F1028;
      }
      goto L_089F1018;
    }
L_089F1018:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F1018;
      }
      goto L_089F1028;
    }
L_089F1028:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089F121C;
      }
      goto L_089F1030;
    }
L_089F1030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F1074;
      }
      goto L_089F1058;
    }
L_089F1058:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089F10C0;
      }
      goto L_089F106C;
    }
L_089F106C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F114C;
      }
      goto L_089F1074;
    }
L_089F1074:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F1080u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1080u) goto L_089F1080;
    return;
L_089F1080:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F108Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F108Cu) goto L_089F108C;
    return;
L_089F108C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F10C0:
    ctx.gpr[5] = (ctx.gpr[30] << 5u);
    ctx.gpr[30] = (ctx.gpr[30] << 3u);
    ctx.gpr[30] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_089F10CC;
L_089F10CC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F10E4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_089F02DC;
L_089F10E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F114C;
      }
      goto L_089F10EC;
    }
L_089F10EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F1134;
      }
      goto L_089F10F4;
    }
L_089F10F4:
    ctx.gpr[31] = (0x089F10FCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089F08C0;
L_089F10FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089F1108u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089F08FC;
L_089F1108:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089F1118u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089F154C;
L_089F1118:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F1138;
      }
      goto L_089F1120;
    }
L_089F1120:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089F112Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 556u, 0x089EFC88u>(ctx, &aot_mem) && ctx.pc == 0x089F112Cu) goto L_089F112C;
    return;
L_089F112C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F114C;
      }
      goto L_089F1134;
    }
L_089F1134:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_089F1138;
L_089F1138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F10CC;
      }
      goto L_089F114C;
    }
L_089F114C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089F1190;
      }
      goto L_089F1154;
    }
L_089F1154:
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
        goto L_089F115C;
    }
    goto L_089F115C;
L_089F115C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1190:
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F121C;
      }
      goto L_089F119C;
    }
L_089F119C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_089F11AC;
L_089F11AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F11BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 556u, 0x089EFC88u>(ctx, &aot_mem) && ctx.pc == 0x089F11BCu) goto L_089F11BC;
    return;
L_089F11BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089F11AC;
      }
      goto L_089F11D0;
    }
L_089F11D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F121C;
      }
      goto L_089F11D8;
    }
L_089F11D8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F1204;
      }
      goto L_089F11E0;
    }
L_089F11E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089F11F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F11F0u) goto L_089F11F0;
    return;
L_089F11F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F11FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F11FCu) goto L_089F11FC;
    return;
L_089F11FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F121C;
      }
      goto L_089F1204;
    }
L_089F1204:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F1210u);
    ctx.gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1210u) goto L_089F1210;
    return;
L_089F1210:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F121Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F121Cu) goto L_089F121C;
    return;
L_089F121C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F154C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F1574;
    }
L_089F1574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F1580;
    }
L_089F1580:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F1588;
    }
L_089F1588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F1594;
    }
L_089F1594:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F159C;
    }
L_089F159C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F15A8;
    }
L_089F15A8:
    ctx.gpr[31] = (0x089F15B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089F05AC;
L_089F15B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F15DC;
      }
      goto L_089F15BC;
    }
L_089F15BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_089F15DC:
    ctx.gpr[2] = (0u | 0u);
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
L_089F15F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1648;
      }
      goto L_089F1600;
    }
L_089F1600:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1648;
      }
      goto L_089F160C;
    }
L_089F160C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1648;
      }
      goto L_089F1614;
    }
L_089F1614:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1648;
      }
      goto L_089F161C;
    }
L_089F161C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F1648;
      }
      goto L_089F163C;
    }
L_089F163C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1648:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (260u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1033));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089F1690u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1690u) goto L_089F1690;
    return;
L_089F1690:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F179C;
      }
      goto L_089F169C;
    }
L_089F169C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089F16C8;
      }
      goto L_089F16C0;
    }
L_089F16C0:
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_089F16C8;
L_089F16C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F16D4;
      }
      goto L_089F16D0;
    }
L_089F16D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    goto L_089F16D4;
L_089F16D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1784;
      }
      goto L_089F16E4;
    }
L_089F16E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F1704;
      }
      goto L_089F16F8;
    }
L_089F16F8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089F1704;
L_089F1704:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F171C;
      }
      goto L_089F1710;
    }
L_089F1710:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089F171C;
L_089F171C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F1734;
      }
      goto L_089F1728;
    }
L_089F1728:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089F1734;
L_089F1734:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F174C;
      }
      goto L_089F1740;
    }
L_089F1740:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089F174C;
L_089F174C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F1764;
      }
      goto L_089F1758;
    }
L_089F1758:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089F1764;
L_089F1764:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F1774;
      }
      goto L_089F1770;
    }
L_089F1770:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    goto L_089F1774;
L_089F1774:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F16E4;
      }
      goto L_089F1784;
    }
L_089F1784:
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
L_089F179C:
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F17B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F17B0u) goto L_089F17B0;
    return;
L_089F17B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F17BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F17BCu) goto L_089F17BC;
    return;
L_089F17BC:
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
L_089F17D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_089F1954;
      }
      goto L_089F1824;
    }
L_089F1824:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[21] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089F1948;
      }
      goto L_089F1830;
    }
L_089F1830:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (3u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1033));
    goto L_089F1840;
L_089F1840:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.gpr[31] = (0x089F1854u);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F1854u) goto L_089F1854;
    return;
L_089F1854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_089F193C;
    }
    goto L_089F1898;
L_089F1898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089F18A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F18A8u) goto L_089F18A8;
    return;
L_089F18A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
        goto L_089F18E8;
    }
    goto L_089F18C8;
L_089F18C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089F18E0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F18E0u) goto L_089F18E0;
    return;
L_089F18E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F1938;
      }
      goto L_089F18E8;
    }
L_089F18E8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089F18F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F18F8u) goto L_089F18F8;
    return;
L_089F18F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F1904u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F1904u) goto L_089F1904;
    return;
L_089F1904:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1938:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_089F193C;
L_089F193C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089F1840;
      }
      goto L_089F1944;
    }
L_089F1944:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089F1948;
L_089F1948:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_089F1954;
L_089F1954:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089F19F4;
      }
      goto L_089F1984;
    }
L_089F1984:
    ctx.gpr[23] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[22] = (ctx.gpr[4] << 7u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[22]);
    goto L_089F1998;
L_089F1998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
        goto L_089F19D4;
    }
    goto L_089F19B8;
L_089F19B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089F19D0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F19D0u) goto L_089F19D0;
    return;
L_089F19D0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    goto L_089F19D4;
L_089F19D4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-40));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_089F1998;
      }
      goto L_089F19E0;
    }
L_089F19E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    goto L_089F19F4;
L_089F19F4:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F1A50;
      }
      goto L_089F1A0C;
    }
L_089F1A0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_089F1A1C;
L_089F1A1C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F1A1C;
      }
      goto L_089F1A50;
    }
L_089F1A50:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089F1AD8;
      }
      goto L_089F1AD0;
    }
L_089F1AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F1ADC;
      }
      goto L_089F1AD8;
    }
L_089F1AD8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089F1ADC;
L_089F1ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x089F1AECu);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x089F1AECu) goto L_089F1AEC;
    return;
L_089F1AEC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089F1B8C;
      }
      goto L_089F1B50;
    }
L_089F1B50:
    ctx.gpr[16] = (0u | 0u);
    goto L_089F1B54;
L_089F1B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089F1B64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x089F1B64u) goto L_089F1B64;
    return;
L_089F1B64:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F1B54;
      }
      goto L_089F1B88;
    }
L_089F1B88:
    ctx.gpr[4] = (2222u << 16u);
    goto L_089F1B8C;
L_089F1B8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (3u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089F1BA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1033));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1BA4u) goto L_089F1BA4;
    return;
L_089F1BA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089F1E60;
    }
    goto L_089F1BB0;
L_089F1BB0:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089F1BC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x089F1BC8u) goto L_089F1BC8;
    return;
L_089F1BC8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089F1BE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089F1BE0u) goto L_089F1BE0;
    return;
L_089F1BE0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089F1C9C;
      }
      goto L_089F1C3C;
    }
L_089F1C3C:
    ctx.gpr[4] = (0u | 0u);
    goto L_089F1C40;
L_089F1C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F1C40;
      }
      goto L_089F1C9C;
    }
L_089F1C9C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089F1CD0;
      }
      goto L_089F1CA4;
    }
L_089F1CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_089F1CD0;
L_089F1CD0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[22]);
    ctx.gpr[31] = (0x089F1CECu);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F1CECu) goto L_089F1CEC;
    return;
L_089F1CEC:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_089F1D10;
    }
    goto L_089F1CF4;
L_089F1CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    goto L_089F1D10;
L_089F1D10:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089F1E18;
      }
      goto L_089F1D40;
    }
L_089F1D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    goto L_089F1D50;
L_089F1D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089F1D6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x089F1D6Cu) goto L_089F1D6C;
    return;
L_089F1D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089F1D94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089F1D94u) goto L_089F1D94;
    return;
L_089F1D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[22]);
    ctx.gpr[31] = (0x089F1DC8u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F1DC8u) goto L_089F1DC8;
    return;
L_089F1DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F1E00;
      }
      goto L_089F1DE0;
    }
L_089F1DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_089F1E00;
L_089F1E00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F1D50;
      }
      goto L_089F1E18;
    }
L_089F1E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_089F1E58;
    }
    goto L_089F1E38;
L_089F1E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089F1E54;
      }
      goto L_089F1E44;
    }
L_089F1E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089F1E54u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1E54u) goto L_089F1E54;
    return;
L_089F1E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089F1E58;
L_089F1E58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089F1E80;
      }
      goto L_089F1E60;
    }
L_089F1E60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089F1E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1E74u) goto L_089F1E74;
    return;
L_089F1E74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F1E80u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F1E80u) goto L_089F1E80;
    return;
L_089F1E80:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F216C;
      }
      goto L_089F1EE8;
    }
L_089F1EE8:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] << 3u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    goto L_089F1F24;
L_089F1F24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (ctx.gpr[11] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F1F24;
      }
      goto L_089F1F48;
    }
L_089F1F48:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[12]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F216C;
      }
      goto L_089F20F0;
    }
L_089F20F0:
    ctx.gpr[7] = (0u | 0u);
    goto L_089F20F4;
L_089F20F4:
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089F2160;
    }
    goto L_089F210C;
L_089F210C:
    ctx.gpr[11] = (0u | 0u);
    goto L_089F2110;
L_089F2110:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F2130;
      }
      goto L_089F2124;
    }
L_089F2124:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F2140;
      }
      goto L_089F2130;
    }
L_089F2130:
    if (ctx.gpr[3] != ctx.gpr[4]) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_089F2144;
    }
    goto L_089F2138;
L_089F2138:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    goto L_089F2140;
L_089F2140:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089F2144;
L_089F2144:
    ctx.gpr[2] = (ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F2110;
      }
      goto L_089F2150;
    }
L_089F2150:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089F2160;
L_089F2160:
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F20F4;
      }
      goto L_089F216C;
    }
L_089F216C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F2210;
      }
      goto L_089F2194;
    }
L_089F2194:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F2210;
      }
      goto L_089F21A0;
    }
L_089F21A0:
    ctx.gpr[19] = (0u | 0u);
    goto L_089F21A4;
L_089F21A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089F2200;
    }
    goto L_089F21B8;
L_089F21B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F21FC;
      }
      goto L_089F21F4;
    }
L_089F21F4:
    ctx.gpr[31] = (0x089F21FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089F1EB4;
L_089F21FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089F2200;
L_089F2200:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F21A4;
      }
      goto L_089F2210;
    }
L_089F2210:
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
L_089F2230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F27D0;
      }
      goto L_089F2264;
    }
L_089F2264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F27D0;
      }
      goto L_089F2270;
    }
L_089F2270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2798;
      }
      goto L_089F227C;
    }
L_089F227C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089F2360;
      }
      goto L_089F2298;
    }
L_089F2298:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F2364;
      }
      goto L_089F22B8;
    }
L_089F22B8:
    ctx.gpr[31] = (0x089F22C0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089F011C;
L_089F22C0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089F2304u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089F01B8;
L_089F2304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089F2348u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089F01FC;
L_089F2348:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_089F23B0;
    }
    goto L_089F2358;
L_089F2358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089F23B4;
      }
      goto L_089F2360;
    }
L_089F2360:
    ctx.gpr[4] = (0u | 1u);
    goto L_089F2364;
L_089F2364:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F2370u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2370u) goto L_089F2370;
    return;
L_089F2370:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F237Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F237Cu) goto L_089F237C;
    return;
L_089F237C:
    ctx.gpr[2] = (0u | 0u);
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
L_089F23B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    goto L_089F23B4;
L_089F23B4:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089F23D0;
      }
      goto L_089F23C0;
    }
L_089F23C0:
    ctx.gpr[31] = (0x089F23C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089F1650;
L_089F23C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2814;
      }
      goto L_089F23D0;
    }
L_089F23D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(-21608));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-21608), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089F23F0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089F05F8;
L_089F23F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F2814;
      }
      goto L_089F23F8;
    }
L_089F23F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14400)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_089F2494;
      }
      goto L_089F2450;
    }
L_089F2450:
    ctx.gpr[16] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_089F245C;
L_089F245C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089F246Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F246Cu) goto L_089F246C;
    return;
L_089F246C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089F245C;
      }
      goto L_089F248C;
    }
L_089F248C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    goto L_089F2494;
L_089F2494:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089F2534;
      }
      goto L_089F24B4;
    }
L_089F24B4:
    ctx.gpr[16] = (0u | 0u);
    goto L_089F24B8;
L_089F24B8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_089F24EC;
      }
      goto L_089F24C8;
    }
L_089F24C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089F2520;
      }
      goto L_089F24EC;
    }
L_089F24EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089F24F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089F24F8u) goto L_089F24F8;
    return;
L_089F24F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
    goto L_089F2520;
L_089F2520:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F24B8;
      }
      goto L_089F2534;
    }
L_089F2534:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-21608), ctx.gpr[21]);
    ctx.gpr[31] = (0x089F254Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089F39A8;
L_089F254C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2814;
      }
      goto L_089F2554;
    }
L_089F2554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089F2568u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_089F1650;
L_089F2568:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089F2758;
      }
      goto L_089F2574;
    }
L_089F2574:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F25B0;
      }
      goto L_089F2588;
    }
L_089F2588:
    ctx.gpr[4] = (0u | 0u);
    goto L_089F258C;
L_089F258C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F258C;
      }
      goto L_089F25AC;
    }
L_089F25AC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089F25B0;
L_089F25B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[18] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_089F2674;
      }
      goto L_089F25B8;
    }
L_089F25B8:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_089F25C0;
L_089F25C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089F2614;
      }
      goto L_089F25E4;
    }
L_089F25E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2614;
      }
      goto L_089F25F0;
    }
L_089F25F0:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089F25F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F25F8u) goto L_089F25F8;
    return;
L_089F25F8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089F2618;
    }
    goto L_089F2600;
L_089F2600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F2674;
      }
      goto L_089F2614;
    }
L_089F2614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089F2618;
L_089F2618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2668;
      }
      goto L_089F2620;
    }
L_089F2620:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089F2628u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2628u) goto L_089F2628;
    return;
L_089F2628:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
        goto L_089F266C;
    }
    goto L_089F2630;
L_089F2630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F2654;
      }
      goto L_089F2640;
    }
L_089F2640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2654;
      }
      goto L_089F264C;
    }
L_089F264C:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089F2654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2654u) goto L_089F2654;
    return;
L_089F2654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F2674;
      }
      goto L_089F2668;
    }
L_089F2668:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089F266C;
L_089F266C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089F25C0;
      }
      goto L_089F2674;
    }
L_089F2674:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F26D8;
      }
      goto L_089F267C;
    }
L_089F267C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[16] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_089F26D8;
      }
      goto L_089F268C;
    }
L_089F268C:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_089F2694;
L_089F2694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_089F26CC;
      }
      goto L_089F26AC;
    }
L_089F26AC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089F26B8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F26B8u) goto L_089F26B8;
    return;
L_089F26B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F26D0;
      }
      goto L_089F26C0;
    }
L_089F26C0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089F26D8;
      }
      goto L_089F26CC;
    }
L_089F26CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089F26D0;
L_089F26D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089F2694;
      }
      goto L_089F26D8;
    }
L_089F26D8:
    if (ctx.gpr[20] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
        goto L_089F279C;
    }
    goto L_089F26E0;
L_089F26E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089F275C;
      }
      goto L_089F26F4;
    }
L_089F26F4:
    ctx.gpr[17] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_089F2700;
L_089F2700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089F2720;
      }
      goto L_089F2718;
    }
L_089F2718:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089F2720u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2720u) goto L_089F2720;
    return;
L_089F2720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F2744;
      }
      goto L_089F2730;
    }
L_089F2730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2744;
      }
      goto L_089F273C;
    }
L_089F273C:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089F2744u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2744u) goto L_089F2744;
    return;
L_089F2744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089F2700;
      }
      goto L_089F2758;
    }
L_089F2758:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089F275C;
L_089F275C:
    ctx.gpr[31] = (0x089F2764u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_089F17D8;
L_089F2764:
    ctx.gpr[2] = (0u | 0u);
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
L_089F2798:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    goto L_089F279C;
L_089F279C:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_089F27D0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F27FC;
      }
      goto L_089F27D8;
    }
L_089F27D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089F27E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F27E8u) goto L_089F27E8;
    return;
L_089F27E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F27F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F27F4u) goto L_089F27F4;
    return;
L_089F27F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2814;
      }
      goto L_089F27FC;
    }
L_089F27FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F2808u);
    ctx.gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2808u) goto L_089F2808;
    return;
L_089F2808:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F2814u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F2814u) goto L_089F2814;
    return;
L_089F2814:
    ctx.gpr[2] = (0u | 0u);
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
L_089F2C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F2CA0u);
    ctx.gpr[4] = (0u | 20u);
    goto L_089F0018;
L_089F2CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089F2D04;
      }
      goto L_089F2CAC;
    }
L_089F2CAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F2CCCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089F0018;
L_089F2CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089F2D04;
      }
      goto L_089F2CE8;
    }
L_089F2CE8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2D04:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2D14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2D4C;
      }
      goto L_089F2D20;
    }
L_089F2D20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2D4C;
      }
      goto L_089F2D34;
    }
L_089F2D34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F2D54;
      }
      goto L_089F2D40;
    }
L_089F2D40:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F2D34;
      }
      goto L_089F2D4C;
    }
L_089F2D4C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2D54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2D5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F2D90u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_089F2D14;
L_089F2D90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F2DC8;
      }
      goto L_089F2D98;
    }
L_089F2D98:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F2DA8;
      }
      goto L_089F2DA0;
    }
L_089F2DA0:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    goto L_089F2DA8;
L_089F2DA8:
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
L_089F2DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
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
L_089F2E30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089F2EA4;
      }
      goto L_089F2E54;
    }
L_089F2E54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_089F2EA4;
L_089F2EA4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2EAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2EE0;
      }
      goto L_089F2EC0;
    }
L_089F2EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089F2EC4;
L_089F2EC4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F2EE8;
      }
      goto L_089F2ED0;
    }
L_089F2ED0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F2EC4;
      }
      goto L_089F2EE0;
    }
L_089F2EE0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F2F40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089F2D14;
L_089F2F40:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3020;
      }
      goto L_089F2F4C;
    }
L_089F2F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F3020;
      }
      goto L_089F2F5C;
    }
L_089F2F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089F2F6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089F2E30;
L_089F2F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F3020;
      }
      goto L_089F2F80;
    }
L_089F2F80:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    goto L_089F2F88;
L_089F2F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089F300C;
    }
    goto L_089F2F9C;
L_089F2F9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089F2FB4u);
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[23]);
    goto L_089F2EAC;
L_089F2FB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
        goto L_089F2FC8;
    }
    goto L_089F2FC0;
L_089F2FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F2FD4;
      }
      goto L_089F2FC8;
    }
L_089F2FC8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089F2FD4;
L_089F2FD4:
    if (ctx.gpr[30] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089F300C;
    }
    goto L_089F2FDC;
L_089F2FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089F3008u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089F2EF0;
L_089F3008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089F300C;
L_089F300C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F2F88;
      }
      goto L_089F3020;
    }
L_089F3020:
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
L_089F3050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F3064u);
    ctx.gpr[4] = (0u | 16u);
    goto L_089F0018;
L_089F3064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089F3090;
      }
      goto L_089F306C;
    }
L_089F306C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3090:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30B0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089F30D8;
      }
      goto L_089F30C8;
    }
L_089F30C8:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_089F30CC;
L_089F30CC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_089F30CC;
    }
    goto L_089F30D8;
L_089F30D8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F30F0;
      }
      goto L_089F30E0;
    }
L_089F30E0:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_089F30E4;
L_089F30E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
        goto L_089F30E4;
    }
    goto L_089F30F0;
L_089F30F0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F3140;
      }
      goto L_089F30F8;
    }
L_089F30F8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_089F3118;
    }
    goto L_089F3104;
L_089F3104:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_089F3108;
L_089F3108:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
        goto L_089F3108;
    }
    goto L_089F3114;
L_089F3114:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089F3118;
L_089F3118:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_089F313C;
    }
    goto L_089F3128;
L_089F3128:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_089F312C;
L_089F312C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
        goto L_089F312C;
    }
    goto L_089F3138;
L_089F3138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_089F313C;
L_089F313C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089F3140;
L_089F3140:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    goto L_089F3188;
L_089F3188:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089F324C;
      }
      goto L_089F31A4;
    }
L_089F31A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_089F31E4;
    }
    goto L_089F31B8;
L_089F31B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089F31D8u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_089F2D5C;
L_089F31D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F3200;
      }
      goto L_089F31E0;
    }
L_089F31E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089F31E4;
L_089F31E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F31A4;
      }
      goto L_089F31F4;
    }
L_089F31F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F3250;
      }
      goto L_089F31FC;
    }
L_089F31FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089F3200;
L_089F3200:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F320Cu);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F320Cu) goto L_089F320C;
    return;
L_089F320C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3218u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3218u) goto L_089F3218;
    return;
L_089F3218:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F324C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089F3250;
L_089F3250:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089F340C;
      }
      goto L_089F3260;
    }
L_089F3260:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_089F3270;
L_089F3270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[22] == ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089F33E4;
    }
    goto L_089F3288;
L_089F3288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[22] << 3u);
    ctx.gpr[22] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089F33E4;
    }
    goto L_089F32CC;
L_089F32CC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] << (ctx.gpr[21] & 31u));
    ctx.gpr[17] = (0u | 0u);
    goto L_089F32DC;
L_089F32DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089F32F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F2EAC;
L_089F32F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089F3304;
    }
    goto L_089F32FC;
L_089F32FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F3310;
      }
      goto L_089F3304;
    }
L_089F3304:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089F3310;
L_089F3310:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
        goto L_089F33C4;
    }
    goto L_089F331C;
L_089F331C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F33A0;
      }
      goto L_089F3330;
    }
L_089F3330:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089F3344u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_089F2D5C;
L_089F3344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F33AC;
      }
      goto L_089F3350;
    }
L_089F3350:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F3360u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3360u) goto L_089F3360;
    return;
L_089F3360:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F336Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F336Cu) goto L_089F336C;
    return;
L_089F336C:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F33A0:
    ctx.gpr[31] = (0x089F33A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F2D14;
L_089F33A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089F33AC;
L_089F33AC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
        goto L_089F33C4;
    }
    goto L_089F33B4;
L_089F33B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    goto L_089F33C4;
L_089F33C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F32DC;
      }
      goto L_089F33DC;
    }
L_089F33DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089F33E4;
L_089F33E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089F3270;
      }
      goto L_089F340C;
    }
L_089F340C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F3188;
      }
      goto L_089F3420;
    }
L_089F3420:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_089F3494;
L_089F3494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3550;
      }
      goto L_089F34B0;
    }
L_089F34B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089F3544;
    }
    goto L_089F34C4;
L_089F34C4:
    ctx.gpr[31] = (0x089F34CCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089F3050;
L_089F34CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F34F0;
      }
      goto L_089F34D4;
    }
L_089F34D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x089F34E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089F30A0;
L_089F34E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F3540;
      }
      goto L_089F34F0;
    }
L_089F34F0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089F3500u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3500u) goto L_089F3500;
    return;
L_089F3500:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F350Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F350Cu) goto L_089F350C;
    return;
L_089F350C:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3540:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F3544;
L_089F3544:
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F34B0;
      }
      goto L_089F3550;
    }
L_089F3550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089F366C;
      }
      goto L_089F3564;
    }
L_089F3564:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_089F3568;
L_089F3568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089F3658;
    }
    goto L_089F3584;
L_089F3584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089F3654;
      }
      goto L_089F35B8;
    }
L_089F35B8:
    ctx.gpr[20] = (ctx.gpr[20] << (ctx.gpr[30] & 31u));
    ctx.gpr[18] = (0u | 0u);
    goto L_089F35C0;
L_089F35C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
        goto L_089F3638;
    }
    goto L_089F35D4;
L_089F35D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089F35E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089F2D14;
L_089F35E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
        goto L_089F3638;
    }
    goto L_089F35F0;
L_089F35F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
        goto L_089F3638;
    }
    goto L_089F3600;
L_089F3600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089F3624;
      }
      goto L_089F360C;
    }
L_089F360C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089F3618u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089F30A0;
L_089F3618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F3634;
      }
      goto L_089F3624;
    }
L_089F3624:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089F3634u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089F30B0;
L_089F3634:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    goto L_089F3638;
L_089F3638:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F35C0;
      }
      goto L_089F3650;
    }
L_089F3650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_089F3654;
L_089F3654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089F3658;
L_089F3658:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089F3568;
      }
      goto L_089F366C;
    }
L_089F366C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F3494;
      }
      goto L_089F3680;
    }
L_089F3680:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F36B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3768;
      }
      goto L_089F36C0;
    }
L_089F36C0:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089F36C8;
L_089F36C8:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_089F36D0;
L_089F36D0:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F36EC;
      }
      goto L_089F36D8;
    }
L_089F36D8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
      if (branch_taken) {
          goto L_089F36D8;
      }
      goto L_089F36EC;
    }
L_089F36EC:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_089F36D0;
    }
    goto L_089F36F4;
L_089F36F4:
    ctx.gpr[8] = (ctx.gpr[10] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3710;
      }
      goto L_089F3700;
    }
L_089F3700:
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[8] = (ctx.gpr[10] & 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F3700;
      }
      goto L_089F3710;
    }
L_089F3710:
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_089F371C;
    }
    goto L_089F371C;
L_089F371C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[7] << (ctx.gpr[9] & 31u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_089F3728;
L_089F3728:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
        goto L_089F3754;
    }
    goto L_089F3730;
L_089F3730:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(20)));
    goto L_089F3734;
L_089F3734:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(20)));
        goto L_089F3734;
    }
    goto L_089F3750;
L_089F3750:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    goto L_089F3754;
L_089F3754:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_089F3728;
    }
    goto L_089F375C;
L_089F375C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089F36C8;
      }
      goto L_089F3768;
    }
L_089F3768:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F380C;
      }
      goto L_089F37A8;
    }
L_089F37A8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089F37AC;
L_089F37AC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F37D8;
      }
      goto L_089F37B4;
    }
L_089F37B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089F37C0;
L_089F37C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F37D8;
      }
      goto L_089F37CC;
    }
L_089F37CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] != ctx.gpr[19]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089F37C0;
    }
    goto L_089F37D8;
L_089F37D8:
    if (ctx.gpr[5] != ctx.gpr[19]) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_089F3804;
    }
    goto L_089F37E0;
L_089F37E0:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_089F3800;
    }
    goto L_089F37E8;
L_089F37E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x089F37FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F37FCu) goto L_089F37FC;
    return;
L_089F37FC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089F3800;
L_089F3800:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_089F3804;
L_089F3804:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F37AC;
      }
      goto L_089F380C;
    }
L_089F380C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_089F3830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F388C;
      }
      goto L_089F3850;
    }
L_089F3850:
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089F385C;
L_089F385C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[9] == ctx.gpr[8]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_089F387C;
    }
    goto L_089F3870;
L_089F3870:
    if (ctx.gpr[9] != ctx.gpr[7]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089F3880;
    }
    goto L_089F3878;
L_089F3878:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089F387C;
L_089F387C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089F3880;
L_089F3880:
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F385C;
      }
      goto L_089F388C;
    }
L_089F388C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089F3934;
      }
      goto L_089F38C0;
    }
L_089F38C0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[13] = (0u | 0u);
    goto L_089F38CC;
L_089F38CC:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[9]);
        goto L_089F38EC;
    }
    goto L_089F38E0;
L_089F38E0:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089F3928;
    }
    goto L_089F38E8;
L_089F38E8:
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[9]);
    goto L_089F38EC;
L_089F38EC:
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089F3928;
L_089F3928:
    ctx.gpr[3] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F38CC;
      }
      goto L_089F3934;
    }
L_089F3934:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089F3954u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 270u, 0x089F56E4u>(ctx, &aot_mem) && ctx.pc == 0x089F3954u) goto L_089F3954;
    return;
L_089F3954:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F3978u);
    ctx.gpr[4] = (0u | 8u);
    goto L_089F0098;
L_089F3978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_089F3990;
    }
    goto L_089F3990;
L_089F3990:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F39A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F39C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_089F3A20;
L_089F39C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3A0C;
      }
      goto L_089F39CC;
    }
L_089F39CC:
    ctx.gpr[31] = (0x089F39D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089F3148;
L_089F39D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089F3A0C;
      }
      goto L_089F39DC;
    }
L_089F39DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F39E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089F3454;
L_089F39E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F3A0C;
      }
      goto L_089F39F0;
    }
L_089F39F0:
    ctx.gpr[31] = (0x089F39F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089F36B4;
L_089F39F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3A0C;
      }
      goto L_089F3A00;
    }
L_089F3A00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089F3A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089F3F40;
L_089F3A0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    goto L_089F3A74;
L_089F3A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F3BA0;
      }
      goto L_089F3A8C;
    }
L_089F3A8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_089F3A94;
L_089F3A94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
        goto L_089F3AC0;
    }
    goto L_089F3AA0;
L_089F3AA0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089F3B14;
      }
      goto L_089F3AB4;
    }
L_089F3AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F3B98;
      }
      goto L_089F3ABC;
    }
L_089F3ABC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    goto L_089F3AC0;
L_089F3AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089F3AD4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3AD4u) goto L_089F3AD4;
    return;
L_089F3AD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3AE0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3AE0u) goto L_089F3AE0;
    return;
L_089F3AE0:
    ctx.gpr[2] = (0u | 31u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3B14:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    goto L_089F3B20;
L_089F3B20:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F3B40;
      }
      goto L_089F3B2C;
    }
L_089F3B2C:
    ctx.gpr[10] = (ctx.gpr[11] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F3B20;
      }
      goto L_089F3B38;
    }
L_089F3B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F3B98;
      }
      goto L_089F3B40;
    }
L_089F3B40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089F3B58u);
    ctx.gpr[4] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3B58u) goto L_089F3B58;
    return;
L_089F3B58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3B64u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3B64u) goto L_089F3B64;
    return;
L_089F3B64:
    ctx.gpr[2] = (0u | 30u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3B98:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F3A94;
      }
      goto L_089F3BA0;
    }
L_089F3BA0:
    ctx.gpr[31] = (0x089F3BA8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_089F011C;
L_089F3BA8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089F3BB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089F2C88;
L_089F3BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F3BDC;
      }
      goto L_089F3BC0;
    }
L_089F3BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089F3C28;
      }
      goto L_089F3BD4;
    }
L_089F3BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F3E3C;
      }
      goto L_089F3BDC;
    }
L_089F3BDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[31] = (0x089F3BE8u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3BE8u) goto L_089F3BE8;
    return;
L_089F3BE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3BF4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3BF4u) goto L_089F3BF4;
    return;
L_089F3BF4:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C28:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    goto L_089F3C38;
L_089F3C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089F3E10;
    }
    goto L_089F3C54;
L_089F3C54:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3E0C;
      }
      goto L_089F3C94;
    }
L_089F3C94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089F3CA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F2EAC;
L_089F3CA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F3CC0;
      }
      goto L_089F3CB8;
    }
L_089F3CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F3CD0;
      }
      goto L_089F3CC0;
    }
L_089F3CC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089F3CD0;
L_089F3CD0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F3D68;
      }
      goto L_089F3CD8;
    }
L_089F3CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089F3CF0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089F2D5C;
L_089F3CF0:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
        goto L_089F3D20;
    }
    goto L_089F3CF8;
L_089F3CF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_089F3CFC;
L_089F3CFC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089F3C94;
      }
      goto L_089F3D14;
    }
L_089F3D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F3E0C;
      }
      goto L_089F3D1C;
    }
L_089F3D1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    goto L_089F3D20;
L_089F3D20:
    ctx.gpr[31] = (0x089F3D28u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3D28u) goto L_089F3D28;
    return;
L_089F3D28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3D34u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3D34u) goto L_089F3D34;
    return;
L_089F3D34:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3D68:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089F3DE8;
      }
      goto L_089F3D70;
    }
L_089F3D70:
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
        goto L_089F3CFC;
    }
    goto L_089F3D78;
L_089F3D78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[31] = (0x089F3DA8u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3DA8u) goto L_089F3DA8;
    return;
L_089F3DA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3DB4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3DB4u) goto L_089F3DB4;
    return;
L_089F3DB4:
    ctx.gpr[2] = (0u | 29u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3DE8:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
        goto L_089F3CFC;
    }
    goto L_089F3DF0;
L_089F3DF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089F3E00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089F2EF0;
L_089F3E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089F3CFC;
      }
      goto L_089F3E08;
    }
L_089F3E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_089F3E0C;
L_089F3E0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089F3E10;
L_089F3E10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089F3C38;
      }
      goto L_089F3E38;
    }
L_089F3E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089F3E3C;
L_089F3E3C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3EF8;
      }
      goto L_089F3E4C;
    }
L_089F3E4C:
    ctx.gpr[16] = (0u | 0u);
    goto L_089F3E50;
L_089F3E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F3E8C;
      }
      goto L_089F3E64;
    }
L_089F3E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089F3E84u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    goto L_089F2D5C;
L_089F3E84:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
        goto L_089F3EB0;
    }
    goto L_089F3E8C;
L_089F3E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F3E50;
      }
      goto L_089F3EA4;
    }
L_089F3EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_089F3EFC;
      }
      goto L_089F3EAC;
    }
L_089F3EAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    goto L_089F3EB0;
L_089F3EB0:
    ctx.gpr[31] = (0x089F3EB8u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3EB8u) goto L_089F3EB8;
    return;
L_089F3EB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3EC4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089F3EC4u) goto L_089F3EC4;
    return;
L_089F3EC4:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_089F3EFC;
L_089F3EFC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089F3A74;
      }
      goto L_089F3F0C;
    }
L_089F3F0C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089F3F64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_089F3830;
L_089F3F64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089F3F78u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089F3774;
L_089F3F78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x089F3F84u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089F0018;
L_089F3F84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089F3F90u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089F0098;
L_089F3F90:
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089F3FA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089F3FA0u) goto L_089F3FA0;
    return;
L_089F3FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x089F3FBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_089F0098;
L_089F3FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2207u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089F3FF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14688));
    goto L_089F3774;
L_089F3FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x089F4000u; return;
}

void recomp_unit_0123(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0123_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_123(Runtime &runtime) {
    runtime.register_generated_unit(123u, 0x089F0000u, 16384u, &recomp_unit_0123, &recomp_unit_0123_entry);
    runtime.register_function(0x089F0000u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0018u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F004Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0070u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F007Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F008Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0098u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F010Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F011Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0130u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0144u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0148u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0160u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0164u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0174u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F017Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0180u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0184u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0190u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0194u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F024Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0258u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0268u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0284u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F029Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F031Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F032Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F033Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0348u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0354u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0364u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0374u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0380u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0390u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0428u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0440u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0508u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0518u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F051Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0530u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F053Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0548u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0550u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F055Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0590u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0598u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0614u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F063Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0650u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0658u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F065Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0668u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0674u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0688u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0690u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0704u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0708u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F071Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F072Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0730u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0744u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0750u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F075Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0904u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0910u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0918u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0920u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0938u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0944u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F094Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0958u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0960u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0974u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0978u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0984u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0990u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0994u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1000u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1018u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1028u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1030u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1058u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F106Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1074u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1080u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F108Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1108u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1118u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1120u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F112Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1134u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1138u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F114Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1154u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F115Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1190u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F119Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1204u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1210u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F121Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F154Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1574u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1580u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1594u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F159Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1600u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F160Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1614u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F161Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F163Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1648u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1650u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1690u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F169Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1704u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1710u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F171Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1728u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1734u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1740u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F174Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1758u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1764u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1770u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1774u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1784u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F179Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F17B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F17BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F17D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1824u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1830u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1840u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1854u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1898u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1904u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1938u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F193Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1944u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1948u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1954u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1984u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1998u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1AD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1AD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1ADCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1AECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1EB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1EE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1F24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1F48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F20F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F20F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F210Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2110u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2124u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2130u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2138u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2140u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2144u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2150u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2160u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F216Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2194u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2200u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2210u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2230u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2264u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2270u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F227Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2298u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F22B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F22C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2304u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2348u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2358u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2360u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2364u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2370u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F237Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2450u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F245Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F246Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F248Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2494u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2520u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2534u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F254Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2554u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2568u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2574u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F258Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2600u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2614u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2618u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2620u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2628u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2630u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2640u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F264Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2654u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2668u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F266Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2674u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F267Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F268Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2694u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2700u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2718u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2720u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2730u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F273Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2744u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2758u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F275Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2764u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2798u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F279Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2808u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2814u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CCCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2ED0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3008u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F300Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3020u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3050u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3064u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F306Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3090u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3104u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3108u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3114u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3118u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3128u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F312Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3138u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F313Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3140u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3148u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3188u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3200u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F320Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3218u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F324Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3250u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3260u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3270u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3288u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3304u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3310u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F331Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3330u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3344u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3350u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3360u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F336Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F340Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3420u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3454u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3494u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3500u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F350Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3540u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3544u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3550u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3564u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3568u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3584u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3600u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F360Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3618u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3624u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3634u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3638u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3650u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3654u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3658u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F366Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3680u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3700u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3710u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F371Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3728u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3730u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3734u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3750u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3754u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F375Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3768u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3774u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3800u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3804u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F380Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3830u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3850u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F385Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3870u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3878u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F387Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3880u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F388Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3894u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3928u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3934u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3954u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3960u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3978u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3990u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3ABCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FF0u, &recomp_unit_0123, "recomp_unit_0123");
}
} // namespace psprecomp

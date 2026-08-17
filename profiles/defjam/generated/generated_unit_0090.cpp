#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0090[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0,
    0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 27, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 33,
    0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0,
    0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 103, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0,
    0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163,
    0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0,
    192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203,
    0, 204, 0, 205, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 224, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0,
    239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323,
    0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 346,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 386, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0,
    399, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 412,
    0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0,
    0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0,
    0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0,
    0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 457, 0, 0, 0, 458, 459, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0,
    469, 0, 0, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0,
    0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0,
    0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 504, 0, 505,
    0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0,
    0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    520, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0,
    528, 529, 0, 0, 530, 0, 531, 0, 0, 0, 532, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0,
    0, 559, 560, 0, 0, 561, 0, 562, 0, 0, 0, 563, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 568, 0, 569, 570, 0, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577,
    0, 0, 0, 0, 578, 579, 580, 0, 581, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 591, 592, 593, 0, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0,
    0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 602, 603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0,
    0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 611, 612, 613, 0, 614, 0, 615, 0, 0, 616, 0, 0, 617, 0,
    0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 622, 623, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 631, 632, 633, 0, 634, 0, 635, 0, 0, 636, 0, 0,
    637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 641, 642, 643, 0, 644, 0, 645, 0, 0, 646, 0,
    0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 651, 652, 653, 0, 654, 0, 655, 0, 0, 656,
    0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 662, 663, 0, 664, 0, 665, 0, 0,
    666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 671, 672, 673, 0, 674, 0, 675, 0,
    0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 682, 683, 0, 684, 0, 685,
    0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 692, 693, 0, 694,
    0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701, 702, 703, 0,
    704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 711, 712, 713,
    0, 714, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 721, 722,
    723, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 731,
    732, 733, 0, 734, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0,
    741, 742, 743, 0, 744, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0,
    0, 751, 752, 753, 0, 754, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0,
    0, 0, 761, 762, 763, 0, 764, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0,
    0, 0, 0, 771, 772, 773, 0, 774, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 782,
    0, 783, 0, 784, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 790, 791, 792,
};
void recomp_unit_0090_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0896C004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0090[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896C004;
    case 2u: goto L_0896C01C;
    case 3u: goto L_0896C034;
    case 4u: goto L_0896C03C;
    case 5u: goto L_0896C044;
    case 6u: goto L_0896C05C;
    case 7u: goto L_0896C084;
    case 8u: goto L_0896C098;
    case 9u: goto L_0896C0A8;
    case 10u: goto L_0896C0B8;
    case 11u: goto L_0896C0BC;
    case 12u: goto L_0896C0CC;
    case 13u: goto L_0896C0F4;
    case 14u: goto L_0896C114;
    case 15u: goto L_0896C124;
    case 16u: goto L_0896C130;
    case 17u: goto L_0896C140;
    case 18u: goto L_0896C148;
    case 19u: goto L_0896C150;
    case 20u: goto L_0896C158;
    case 21u: goto L_0896C16C;
    case 22u: goto L_0896C174;
    case 23u: goto L_0896C188;
    case 24u: goto L_0896C190;
    case 25u: goto L_0896C198;
    case 26u: goto L_0896C1A8;
    case 27u: goto L_0896C1AC;
    case 28u: goto L_0896C1B0;
    case 29u: goto L_0896C1B8;
    case 30u: goto L_0896C1D8;
    case 31u: goto L_0896C1EC;
    case 32u: goto L_0896C1FC;
    case 33u: goto L_0896C200;
    case 34u: goto L_0896C208;
    case 35u: goto L_0896C210;
    case 36u: goto L_0896C22C;
    case 37u: goto L_0896C23C;
    case 38u: goto L_0896C248;
    case 39u: goto L_0896C260;
    case 40u: goto L_0896C284;
    case 41u: goto L_0896C290;
    case 42u: goto L_0896C298;
    case 43u: goto L_0896C2A4;
    case 44u: goto L_0896C2CC;
    case 45u: goto L_0896C2D8;
    case 46u: goto L_0896C300;
    case 47u: goto L_0896C30C;
    case 48u: goto L_0896C31C;
    case 49u: goto L_0896C324;
    case 50u: goto L_0896C330;
    case 51u: goto L_0896C354;
    case 52u: goto L_0896C360;
    case 53u: goto L_0896C370;
    case 54u: goto L_0896C3CC;
    case 55u: goto L_0896C3E8;
    case 56u: goto L_0896C404;
    case 57u: goto L_0896C424;
    case 58u: goto L_0896C44C;
    case 59u: goto L_0896C458;
    case 60u: goto L_0896C468;
    case 61u: goto L_0896C474;
    case 62u: goto L_0896C484;
    case 63u: goto L_0896C498;
    case 64u: goto L_0896C4A4;
    case 65u: goto L_0896C4B4;
    case 66u: goto L_0896C4E4;
    case 67u: goto L_0896C4EC;
    case 68u: goto L_0896C504;
    case 69u: goto L_0896C548;
    case 70u: goto L_0896C56C;
    case 71u: goto L_0896C580;
    case 72u: goto L_0896C5A8;
    case 73u: goto L_0896C5D8;
    case 74u: goto L_0896C71C;
    case 75u: goto L_0896C754;
    case 76u: goto L_0896C770;
    case 77u: goto L_0896C778;
    case 78u: goto L_0896C784;
    case 79u: goto L_0896C7D0;
    case 80u: goto L_0896C7DC;
    case 81u: goto L_0896C7E4;
    case 82u: goto L_0896C830;
    case 83u: goto L_0896C870;
    case 84u: goto L_0896C8FC;
    case 85u: goto L_0896C928;
    case 86u: goto L_0896C940;
    case 87u: goto L_0896C950;
    case 88u: goto L_0896C970;
    case 89u: goto L_0896C97C;
    case 90u: goto L_0896C990;
    case 91u: goto L_0896C9A0;
    case 92u: goto L_0896C9A8;
    case 93u: goto L_0896C9B0;
    case 94u: goto L_0896C9B8;
    case 95u: goto L_0896C9C0;
    case 96u: goto L_0896C9C8;
    case 97u: goto L_0896C9D4;
    case 98u: goto L_0896C9DC;
    case 99u: goto L_0896C9F8;
    case 100u: goto L_0896CA00;
    case 101u: goto L_0896CA08;
    case 102u: goto L_0896CA10;
    case 103u: goto L_0896CA18;
    case 104u: goto L_0896CA1C;
    case 105u: goto L_0896CA30;
    case 106u: goto L_0896CA80;
    case 107u: goto L_0896CA8C;
    case 108u: goto L_0896CAC0;
    case 109u: goto L_0896CACC;
    case 110u: goto L_0896CAEC;
    case 111u: goto L_0896CB10;
    case 112u: goto L_0896CB30;
    case 113u: goto L_0896CB58;
    case 114u: goto L_0896CB6C;
    case 115u: goto L_0896CB84;
    case 116u: goto L_0896CBA0;
    case 117u: goto L_0896CBBC;
    case 118u: goto L_0896CBD4;
    case 119u: goto L_0896CBEC;
    case 120u: goto L_0896CBFC;
    case 121u: goto L_0896CC08;
    case 122u: goto L_0896CC10;
    case 123u: goto L_0896CC20;
    case 124u: goto L_0896CC2C;
    case 125u: goto L_0896CC34;
    case 126u: goto L_0896CC60;
    case 127u: goto L_0896CC90;
    case 128u: goto L_0896CCE0;
    case 129u: goto L_0896CCEC;
    case 130u: goto L_0896CD20;
    case 131u: goto L_0896CD2C;
    case 132u: goto L_0896CD4C;
    case 133u: goto L_0896CD70;
    case 134u: goto L_0896CD90;
    case 135u: goto L_0896CDB8;
    case 136u: goto L_0896CDC8;
    case 137u: goto L_0896CDE0;
    case 138u: goto L_0896CDFC;
    case 139u: goto L_0896CE14;
    case 140u: goto L_0896CE2C;
    case 141u: goto L_0896CE44;
    case 142u: goto L_0896CE50;
    case 143u: goto L_0896CE5C;
    case 144u: goto L_0896CE64;
    case 145u: goto L_0896CE90;
    case 146u: goto L_0896CEC0;
    case 147u: goto L_0896CF08;
    case 148u: goto L_0896CF14;
    case 149u: goto L_0896CF48;
    case 150u: goto L_0896CF54;
    case 151u: goto L_0896CF74;
    case 152u: goto L_0896CF98;
    case 153u: goto L_0896CFB8;
    case 154u: goto L_0896CFDC;
    case 155u: goto L_0896CFEC;
    case 156u: goto L_0896D004;
    case 157u: goto L_0896D01C;
    case 158u: goto L_0896D034;
    case 159u: goto L_0896D04C;
    case 160u: goto L_0896D060;
    case 161u: goto L_0896D068;
    case 162u: goto L_0896D078;
    case 163u: goto L_0896D080;
    case 164u: goto L_0896D088;
    case 165u: goto L_0896D094;
    case 166u: goto L_0896D09C;
    case 167u: goto L_0896D0C0;
    case 168u: goto L_0896D0E8;
    case 169u: goto L_0896D12C;
    case 170u: goto L_0896D138;
    case 171u: goto L_0896D16C;
    case 172u: goto L_0896D178;
    case 173u: goto L_0896D198;
    case 174u: goto L_0896D1BC;
    case 175u: goto L_0896D1DC;
    case 176u: goto L_0896D208;
    case 177u: goto L_0896D228;
    case 178u: goto L_0896D244;
    case 179u: goto L_0896D250;
    case 180u: goto L_0896D258;
    case 181u: goto L_0896D27C;
    case 182u: goto L_0896D29C;
    case 183u: goto L_0896D2CC;
    case 184u: goto L_0896D2D8;
    case 185u: goto L_0896D2F4;
    case 186u: goto L_0896D2FC;
    case 187u: goto L_0896D314;
    case 188u: goto L_0896D328;
    case 189u: goto L_0896D354;
    case 190u: goto L_0896D360;
    case 191u: goto L_0896D37C;
    case 192u: goto L_0896D384;
    case 193u: goto L_0896D38C;
    case 194u: goto L_0896D398;
    case 195u: goto L_0896D3B0;
    case 196u: goto L_0896D3C8;
    case 197u: goto L_0896D3D0;
    case 198u: goto L_0896D3D8;
    case 199u: goto L_0896D3E0;
    case 200u: goto L_0896D3E8;
    case 201u: goto L_0896D3F0;
    case 202u: goto L_0896D3F8;
    case 203u: goto L_0896D400;
    case 204u: goto L_0896D408;
    case 205u: goto L_0896D410;
    case 206u: goto L_0896D414;
    case 207u: goto L_0896D41C;
    case 208u: goto L_0896D440;
    case 209u: goto L_0896D54C;
    case 210u: goto L_0896D554;
    case 211u: goto L_0896D584;
    case 212u: goto L_0896D5B4;
    case 213u: goto L_0896D5C8;
    case 214u: goto L_0896D5E4;
    case 215u: goto L_0896D5EC;
    case 216u: goto L_0896D620;
    case 217u: goto L_0896D638;
    case 218u: goto L_0896D64C;
    case 219u: goto L_0896D66C;
    case 220u: goto L_0896D694;
    case 221u: goto L_0896D6B8;
    case 222u: goto L_0896D6D0;
    case 223u: goto L_0896D6EC;
    case 224u: goto L_0896D6F0;
    case 225u: goto L_0896D708;
    case 226u: goto L_0896D72C;
    case 227u: goto L_0896D770;
    case 228u: goto L_0896D798;
    case 229u: goto L_0896D7AC;
    case 230u: goto L_0896D7BC;
    case 231u: goto L_0896D7D0;
    case 232u: goto L_0896D7E0;
    case 233u: goto L_0896D7F4;
    case 234u: goto L_0896D81C;
    case 235u: goto L_0896D83C;
    case 236u: goto L_0896D848;
    case 237u: goto L_0896D860;
    case 238u: goto L_0896D878;
    case 239u: goto L_0896D884;
    case 240u: goto L_0896D88C;
    case 241u: goto L_0896D8A8;
    case 242u: goto L_0896D8BC;
    case 243u: goto L_0896D8D8;
    case 244u: goto L_0896D8F0;
    case 245u: goto L_0896D90C;
    case 246u: goto L_0896D92C;
    case 247u: goto L_0896D958;
    case 248u: goto L_0896D988;
    case 249u: goto L_0896D9E0;
    case 250u: goto L_0896D9EC;
    case 251u: goto L_0896DA1C;
    case 252u: goto L_0896DA3C;
    case 253u: goto L_0896DA60;
    case 254u: goto L_0896DA80;
    case 255u: goto L_0896DAAC;
    case 256u: goto L_0896DAC8;
    case 257u: goto L_0896DAFC;
    case 258u: goto L_0896DB34;
    case 259u: goto L_0896DB4C;
    case 260u: goto L_0896DB84;
    case 261u: goto L_0896DBB4;
    case 262u: goto L_0896DBE0;
    case 263u: goto L_0896DBF4;
    case 264u: goto L_0896DC14;
    case 265u: goto L_0896DC50;
    case 266u: goto L_0896DC78;
    case 267u: goto L_0896DC8C;
    case 268u: goto L_0896DCAC;
    case 269u: goto L_0896DCE8;
    case 270u: goto L_0896DCF8;
    case 271u: goto L_0896DD18;
    case 272u: goto L_0896DD60;
    case 273u: goto L_0896DD84;
    case 274u: goto L_0896DD9C;
    case 275u: goto L_0896DDA8;
    case 276u: goto L_0896DDB0;
    case 277u: goto L_0896DDC0;
    case 278u: goto L_0896DDCC;
    case 279u: goto L_0896DDD4;
    case 280u: goto L_0896DE04;
    case 281u: goto L_0896DE38;
    case 282u: goto L_0896DE74;
    case 283u: goto L_0896DE7C;
    case 284u: goto L_0896DE8C;
    case 285u: goto L_0896DEF8;
    case 286u: goto L_0896DF10;
    case 287u: goto L_0896DF1C;
    case 288u: goto L_0896DF24;
    case 289u: goto L_0896DF2C;
    case 290u: goto L_0896DF34;
    case 291u: goto L_0896DF40;
    case 292u: goto L_0896DF54;
    case 293u: goto L_0896DF68;
    case 294u: goto L_0896DF7C;
    case 295u: goto L_0896DFB8;
    case 296u: goto L_0896DFD4;
    case 297u: goto L_0896DFEC;
    case 298u: goto L_0896DFFC;
    case 299u: goto L_0896E00C;
    case 300u: goto L_0896E044;
    case 301u: goto L_0896E060;
    case 302u: goto L_0896E07C;
    case 303u: goto L_0896E090;
    case 304u: goto L_0896E0A8;
    case 305u: goto L_0896E0CC;
    case 306u: goto L_0896E0E0;
    case 307u: goto L_0896E100;
    case 308u: goto L_0896E118;
    case 309u: goto L_0896E124;
    case 310u: goto L_0896E144;
    case 311u: goto L_0896E150;
    case 312u: goto L_0896E184;
    case 313u: goto L_0896E194;
    case 314u: goto L_0896E1F4;
    case 315u: goto L_0896E218;
    case 316u: goto L_0896E234;
    case 317u: goto L_0896E248;
    case 318u: goto L_0896E258;
    case 319u: goto L_0896E260;
    case 320u: goto L_0896E268;
    case 321u: goto L_0896E270;
    case 322u: goto L_0896E278;
    case 323u: goto L_0896E280;
    case 324u: goto L_0896E28C;
    case 325u: goto L_0896E294;
    case 326u: goto L_0896E2B0;
    case 327u: goto L_0896E2B8;
    case 328u: goto L_0896E2C0;
    case 329u: goto L_0896E2C8;
    case 330u: goto L_0896E2D0;
    case 331u: goto L_0896E2E8;
    case 332u: goto L_0896E2F0;
    case 333u: goto L_0896E2F8;
    case 334u: goto L_0896E30C;
    case 335u: goto L_0896E320;
    case 336u: goto L_0896E344;
    case 337u: goto L_0896E368;
    case 338u: goto L_0896E380;
    case 339u: goto L_0896E394;
    case 340u: goto L_0896E3B4;
    case 341u: goto L_0896E3C8;
    case 342u: goto L_0896E3DC;
    case 343u: goto L_0896E3E4;
    case 344u: goto L_0896E3F0;
    case 345u: goto L_0896E3F8;
    case 346u: goto L_0896E400;
    case 347u: goto L_0896E414;
    case 348u: goto L_0896E43C;
    case 349u: goto L_0896E44C;
    case 350u: goto L_0896E458;
    case 351u: goto L_0896E478;
    case 352u: goto L_0896E488;
    case 353u: goto L_0896E494;
    case 354u: goto L_0896E4A8;
    case 355u: goto L_0896E4B8;
    case 356u: goto L_0896E4C0;
    case 357u: goto L_0896E4C4;
    case 358u: goto L_0896E4D4;
    case 359u: goto L_0896E4E4;
    case 360u: goto L_0896E4F0;
    case 361u: goto L_0896E4F8;
    case 362u: goto L_0896E59C;
    case 363u: goto L_0896E5A4;
    case 364u: goto L_0896E5AC;
    case 365u: goto L_0896E5B8;
    case 366u: goto L_0896E5C0;
    case 367u: goto L_0896E5C8;
    case 368u: goto L_0896E5F4;
    case 369u: goto L_0896E610;
    case 370u: goto L_0896E61C;
    case 371u: goto L_0896E624;
    case 372u: goto L_0896E630;
    case 373u: goto L_0896E638;
    case 374u: goto L_0896E650;
    case 375u: goto L_0896E658;
    case 376u: goto L_0896E674;
    case 377u: goto L_0896E688;
    case 378u: goto L_0896E6B8;
    case 379u: goto L_0896E6DC;
    case 380u: goto L_0896E6EC;
    case 381u: goto L_0896E6FC;
    case 382u: goto L_0896E714;
    case 383u: goto L_0896E72C;
    case 384u: goto L_0896E734;
    case 385u: goto L_0896E744;
    case 386u: goto L_0896E74C;
    case 387u: goto L_0896E750;
    case 388u: goto L_0896E758;
    case 389u: goto L_0896E760;
    case 390u: goto L_0896E768;
    case 391u: goto L_0896E770;
    case 392u: goto L_0896E794;
    case 393u: goto L_0896E7A8;
    case 394u: goto L_0896E7C8;
    case 395u: goto L_0896E7D4;
    case 396u: goto L_0896E7DC;
    case 397u: goto L_0896E7E4;
    case 398u: goto L_0896E7FC;
    case 399u: goto L_0896E804;
    case 400u: goto L_0896E80C;
    case 401u: goto L_0896E814;
    case 402u: goto L_0896E81C;
    case 403u: goto L_0896E830;
    case 404u: goto L_0896E85C;
    case 405u: goto L_0896E8A4;
    case 406u: goto L_0896E8B0;
    case 407u: goto L_0896E8C0;
    case 408u: goto L_0896E8D4;
    case 409u: goto L_0896E8DC;
    case 410u: goto L_0896E8E4;
    case 411u: goto L_0896E8F0;
    case 412u: goto L_0896E900;
    case 413u: goto L_0896E90C;
    case 414u: goto L_0896E91C;
    case 415u: goto L_0896E928;
    case 416u: goto L_0896E938;
    case 417u: goto L_0896E944;
    case 418u: goto L_0896E954;
    case 419u: goto L_0896E960;
    case 420u: goto L_0896E970;
    case 421u: goto L_0896E97C;
    case 422u: goto L_0896E98C;
    case 423u: goto L_0896E998;
    case 424u: goto L_0896E9A8;
    case 425u: goto L_0896E9B4;
    case 426u: goto L_0896E9C4;
    case 427u: goto L_0896E9D0;
    case 428u: goto L_0896EA00;
    case 429u: goto L_0896EA1C;
    case 430u: goto L_0896EA24;
    case 431u: goto L_0896EA88;
    case 432u: goto L_0896EA94;
    case 433u: goto L_0896EAB8;
    case 434u: goto L_0896EAEC;
    case 435u: goto L_0896EAF4;
    case 436u: goto L_0896EB08;
    case 437u: goto L_0896EB10;
    case 438u: goto L_0896EB18;
    case 439u: goto L_0896EB30;
    case 440u: goto L_0896EB44;
    case 441u: goto L_0896EB58;
    case 442u: goto L_0896EB60;
    case 443u: goto L_0896EB8C;
    case 444u: goto L_0896EB94;
    case 445u: goto L_0896EBA8;
    case 446u: goto L_0896EBB0;
    case 447u: goto L_0896EBB8;
    case 448u: goto L_0896EBC8;
    case 449u: goto L_0896EBDC;
    case 450u: goto L_0896EBF4;
    case 451u: goto L_0896EBFC;
    case 452u: goto L_0896EC08;
    case 453u: goto L_0896EC10;
    case 454u: goto L_0896EC20;
    case 455u: goto L_0896EC5C;
    case 456u: goto L_0896EC84;
    case 457u: goto L_0896EC8C;
    case 458u: goto L_0896EC9C;
    case 459u: goto L_0896ECA0;
    case 460u: goto L_0896ECAC;
    case 461u: goto L_0896ECB4;
    case 462u: goto L_0896ECC4;
    case 463u: goto L_0896ECCC;
    case 464u: goto L_0896ECD4;
    case 465u: goto L_0896ECDC;
    case 466u: goto L_0896ECEC;
    case 467u: goto L_0896ECF4;
    case 468u: goto L_0896ECFC;
    case 469u: goto L_0896ED04;
    case 470u: goto L_0896ED14;
    case 471u: goto L_0896ED1C;
    case 472u: goto L_0896ED24;
    case 473u: goto L_0896ED2C;
    case 474u: goto L_0896ED3C;
    case 475u: goto L_0896ED44;
    case 476u: goto L_0896ED4C;
    case 477u: goto L_0896ED54;
    case 478u: goto L_0896ED64;
    case 479u: goto L_0896ED6C;
    case 480u: goto L_0896ED74;
    case 481u: goto L_0896ED7C;
    case 482u: goto L_0896ED8C;
    case 483u: goto L_0896ED94;
    case 484u: goto L_0896ED9C;
    case 485u: goto L_0896EDA4;
    case 486u: goto L_0896EDB4;
    case 487u: goto L_0896EDBC;
    case 488u: goto L_0896EDC8;
    case 489u: goto L_0896EDD0;
    case 490u: goto L_0896EDE0;
    case 491u: goto L_0896EDE8;
    case 492u: goto L_0896EDF4;
    case 493u: goto L_0896EDFC;
    case 494u: goto L_0896EE0C;
    case 495u: goto L_0896EE14;
    case 496u: goto L_0896EE20;
    case 497u: goto L_0896EE28;
    case 498u: goto L_0896EE38;
    case 499u: goto L_0896EE40;
    case 500u: goto L_0896EE4C;
    case 501u: goto L_0896EE54;
    case 502u: goto L_0896EE64;
    case 503u: goto L_0896EE6C;
    case 504u: goto L_0896EE78;
    case 505u: goto L_0896EE80;
    case 506u: goto L_0896EE90;
    case 507u: goto L_0896EE98;
    case 508u: goto L_0896EEA4;
    case 509u: goto L_0896EEAC;
    case 510u: goto L_0896EEBC;
    case 511u: goto L_0896EEC0;
    case 512u: goto L_0896EEF0;
    case 513u: goto L_0896EF08;
    case 514u: goto L_0896EF20;
    case 515u: goto L_0896EF38;
    case 516u: goto L_0896EF44;
    case 517u: goto L_0896EF4C;
    case 518u: goto L_0896EF58;
    case 519u: goto L_0896EF6C;
    case 520u: goto L_0896EF84;
    case 521u: goto L_0896EF8C;
    case 522u: goto L_0896EF98;
    case 523u: goto L_0896EFA0;
    case 524u: goto L_0896EFB8;
    case 525u: goto L_0896EFDC;
    case 526u: goto L_0896EFEC;
    case 527u: goto L_0896EFF4;
    case 528u: goto L_0896F004;
    case 529u: goto L_0896F008;
    case 530u: goto L_0896F014;
    case 531u: goto L_0896F01C;
    case 532u: goto L_0896F02C;
    case 533u: goto L_0896F030;
    case 534u: goto L_0896F048;
    case 535u: goto L_0896F068;
    case 536u: goto L_0896F09C;
    case 537u: goto L_0896F0A4;
    case 538u: goto L_0896F0B8;
    case 539u: goto L_0896F0C0;
    case 540u: goto L_0896F0C8;
    case 541u: goto L_0896F0D8;
    case 542u: goto L_0896F0EC;
    case 543u: goto L_0896F100;
    case 544u: goto L_0896F108;
    case 545u: goto L_0896F134;
    case 546u: goto L_0896F13C;
    case 547u: goto L_0896F150;
    case 548u: goto L_0896F158;
    case 549u: goto L_0896F160;
    case 550u: goto L_0896F170;
    case 551u: goto L_0896F184;
    case 552u: goto L_0896F19C;
    case 553u: goto L_0896F1A4;
    case 554u: goto L_0896F1B0;
    case 555u: goto L_0896F1B8;
    case 556u: goto L_0896F1C8;
    case 557u: goto L_0896F1F0;
    case 558u: goto L_0896F1F8;
    case 559u: goto L_0896F208;
    case 560u: goto L_0896F20C;
    case 561u: goto L_0896F218;
    case 562u: goto L_0896F220;
    case 563u: goto L_0896F230;
    case 564u: goto L_0896F234;
    case 565u: goto L_0896F24C;
    case 566u: goto L_0896F278;
    case 567u: goto L_0896F280;
    case 568u: goto L_0896F28C;
    case 569u: goto L_0896F294;
    case 570u: goto L_0896F298;
    case 571u: goto L_0896F2A0;
    case 572u: goto L_0896F2A8;
    case 573u: goto L_0896F2B4;
    case 574u: goto L_0896F2C0;
    case 575u: goto L_0896F2D4;
    case 576u: goto L_0896F2F8;
    case 577u: goto L_0896F300;
    case 578u: goto L_0896F314;
    case 579u: goto L_0896F318;
    case 580u: goto L_0896F31C;
    case 581u: goto L_0896F324;
    case 582u: goto L_0896F32C;
    case 583u: goto L_0896F338;
    case 584u: goto L_0896F344;
    case 585u: goto L_0896F358;
    case 586u: goto L_0896F36C;
    case 587u: goto L_0896F374;
    case 588u: goto L_0896F384;
    case 589u: goto L_0896F3A8;
    case 590u: goto L_0896F3B0;
    case 591u: goto L_0896F3C4;
    case 592u: goto L_0896F3C8;
    case 593u: goto L_0896F3CC;
    case 594u: goto L_0896F3D4;
    case 595u: goto L_0896F3DC;
    case 596u: goto L_0896F3E8;
    case 597u: goto L_0896F3F4;
    case 598u: goto L_0896F408;
    case 599u: goto L_0896F42C;
    case 600u: goto L_0896F434;
    case 601u: goto L_0896F448;
    case 602u: goto L_0896F44C;
    case 603u: goto L_0896F450;
    case 604u: goto L_0896F458;
    case 605u: goto L_0896F460;
    case 606u: goto L_0896F46C;
    case 607u: goto L_0896F478;
    case 608u: goto L_0896F48C;
    case 609u: goto L_0896F4B0;
    case 610u: goto L_0896F4B8;
    case 611u: goto L_0896F4CC;
    case 612u: goto L_0896F4D0;
    case 613u: goto L_0896F4D4;
    case 614u: goto L_0896F4DC;
    case 615u: goto L_0896F4E4;
    case 616u: goto L_0896F4F0;
    case 617u: goto L_0896F4FC;
    case 618u: goto L_0896F510;
    case 619u: goto L_0896F534;
    case 620u: goto L_0896F53C;
    case 621u: goto L_0896F550;
    case 622u: goto L_0896F554;
    case 623u: goto L_0896F558;
    case 624u: goto L_0896F560;
    case 625u: goto L_0896F568;
    case 626u: goto L_0896F574;
    case 627u: goto L_0896F580;
    case 628u: goto L_0896F614;
    case 629u: goto L_0896F638;
    case 630u: goto L_0896F640;
    case 631u: goto L_0896F654;
    case 632u: goto L_0896F658;
    case 633u: goto L_0896F65C;
    case 634u: goto L_0896F664;
    case 635u: goto L_0896F66C;
    case 636u: goto L_0896F678;
    case 637u: goto L_0896F684;
    case 638u: goto L_0896F698;
    case 639u: goto L_0896F6BC;
    case 640u: goto L_0896F6C4;
    case 641u: goto L_0896F6D8;
    case 642u: goto L_0896F6DC;
    case 643u: goto L_0896F6E0;
    case 644u: goto L_0896F6E8;
    case 645u: goto L_0896F6F0;
    case 646u: goto L_0896F6FC;
    case 647u: goto L_0896F708;
    case 648u: goto L_0896F71C;
    case 649u: goto L_0896F740;
    case 650u: goto L_0896F748;
    case 651u: goto L_0896F75C;
    case 652u: goto L_0896F760;
    case 653u: goto L_0896F764;
    case 654u: goto L_0896F76C;
    case 655u: goto L_0896F774;
    case 656u: goto L_0896F780;
    case 657u: goto L_0896F78C;
    case 658u: goto L_0896F7A0;
    case 659u: goto L_0896F7C4;
    case 660u: goto L_0896F7CC;
    case 661u: goto L_0896F7E0;
    case 662u: goto L_0896F7E4;
    case 663u: goto L_0896F7E8;
    case 664u: goto L_0896F7F0;
    case 665u: goto L_0896F7F8;
    case 666u: goto L_0896F804;
    case 667u: goto L_0896F810;
    case 668u: goto L_0896F924;
    case 669u: goto L_0896F948;
    case 670u: goto L_0896F950;
    case 671u: goto L_0896F964;
    case 672u: goto L_0896F968;
    case 673u: goto L_0896F96C;
    case 674u: goto L_0896F974;
    case 675u: goto L_0896F97C;
    case 676u: goto L_0896F988;
    case 677u: goto L_0896F994;
    case 678u: goto L_0896F9A8;
    case 679u: goto L_0896F9CC;
    case 680u: goto L_0896F9D4;
    case 681u: goto L_0896F9E8;
    case 682u: goto L_0896F9EC;
    case 683u: goto L_0896F9F0;
    case 684u: goto L_0896F9F8;
    case 685u: goto L_0896FA00;
    case 686u: goto L_0896FA0C;
    case 687u: goto L_0896FA18;
    case 688u: goto L_0896FAB0;
    case 689u: goto L_0896FAD4;
    case 690u: goto L_0896FADC;
    case 691u: goto L_0896FAF0;
    case 692u: goto L_0896FAF4;
    case 693u: goto L_0896FAF8;
    case 694u: goto L_0896FB00;
    case 695u: goto L_0896FB08;
    case 696u: goto L_0896FB14;
    case 697u: goto L_0896FB20;
    case 698u: goto L_0896FB34;
    case 699u: goto L_0896FB58;
    case 700u: goto L_0896FB60;
    case 701u: goto L_0896FB74;
    case 702u: goto L_0896FB78;
    case 703u: goto L_0896FB7C;
    case 704u: goto L_0896FB84;
    case 705u: goto L_0896FB8C;
    case 706u: goto L_0896FB98;
    case 707u: goto L_0896FBA4;
    case 708u: goto L_0896FBB8;
    case 709u: goto L_0896FBDC;
    case 710u: goto L_0896FBE4;
    case 711u: goto L_0896FBF8;
    case 712u: goto L_0896FBFC;
    case 713u: goto L_0896FC00;
    case 714u: goto L_0896FC08;
    case 715u: goto L_0896FC10;
    case 716u: goto L_0896FC1C;
    case 717u: goto L_0896FC28;
    case 718u: goto L_0896FC3C;
    case 719u: goto L_0896FC60;
    case 720u: goto L_0896FC68;
    case 721u: goto L_0896FC7C;
    case 722u: goto L_0896FC80;
    case 723u: goto L_0896FC84;
    case 724u: goto L_0896FC8C;
    case 725u: goto L_0896FC94;
    case 726u: goto L_0896FCA0;
    case 727u: goto L_0896FCAC;
    case 728u: goto L_0896FCC0;
    case 729u: goto L_0896FCE4;
    case 730u: goto L_0896FCEC;
    case 731u: goto L_0896FD00;
    case 732u: goto L_0896FD04;
    case 733u: goto L_0896FD08;
    case 734u: goto L_0896FD10;
    case 735u: goto L_0896FD18;
    case 736u: goto L_0896FD24;
    case 737u: goto L_0896FD30;
    case 738u: goto L_0896FD44;
    case 739u: goto L_0896FD68;
    case 740u: goto L_0896FD70;
    case 741u: goto L_0896FD84;
    case 742u: goto L_0896FD88;
    case 743u: goto L_0896FD8C;
    case 744u: goto L_0896FD94;
    case 745u: goto L_0896FD9C;
    case 746u: goto L_0896FDA8;
    case 747u: goto L_0896FDB4;
    case 748u: goto L_0896FDC8;
    case 749u: goto L_0896FDEC;
    case 750u: goto L_0896FDF4;
    case 751u: goto L_0896FE08;
    case 752u: goto L_0896FE0C;
    case 753u: goto L_0896FE10;
    case 754u: goto L_0896FE18;
    case 755u: goto L_0896FE20;
    case 756u: goto L_0896FE2C;
    case 757u: goto L_0896FE38;
    case 758u: goto L_0896FE4C;
    case 759u: goto L_0896FE70;
    case 760u: goto L_0896FE78;
    case 761u: goto L_0896FE8C;
    case 762u: goto L_0896FE90;
    case 763u: goto L_0896FE94;
    case 764u: goto L_0896FE9C;
    case 765u: goto L_0896FEA4;
    case 766u: goto L_0896FEB0;
    case 767u: goto L_0896FEBC;
    case 768u: goto L_0896FED0;
    case 769u: goto L_0896FEF4;
    case 770u: goto L_0896FEFC;
    case 771u: goto L_0896FF10;
    case 772u: goto L_0896FF14;
    case 773u: goto L_0896FF18;
    case 774u: goto L_0896FF20;
    case 775u: goto L_0896FF28;
    case 776u: goto L_0896FF34;
    case 777u: goto L_0896FF40;
    case 778u: goto L_0896FF54;
    case 779u: goto L_0896FF68;
    case 780u: goto L_0896FF70;
    case 781u: goto L_0896FF78;
    case 782u: goto L_0896FF80;
    case 783u: goto L_0896FF88;
    case 784u: goto L_0896FF90;
    case 785u: goto L_0896FF98;
    case 786u: goto L_0896FFA0;
    case 787u: goto L_0896FFB0;
    case 788u: goto L_0896FFD4;
    case 789u: goto L_0896FFDC;
    case 790u: goto L_0896FFF0;
    case 791u: goto L_0896FFF4;
    case 792u: goto L_0896FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896C004:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896C01Cu);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C01Cu) goto L_0896C01C;
    return;
L_0896C01C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29568), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896C034u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C034u) goto L_0896C034;
    return;
L_0896C034:
    ctx.gpr[31] = (0x0896C03Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C03Cu) goto L_0896C03C;
    return;
L_0896C03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0896C05C;
      }
      goto L_0896C044;
    }
L_0896C044:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x0896C05Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C05Cu) goto L_0896C05C;
    return;
L_0896C05C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0896C084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 544u, 0x08932B90u>(ctx, &aot_mem) && ctx.pc == 0x0896C098u) goto L_0896C098;
    return;
L_0896C098:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896C0BC;
      }
      goto L_0896C0A8;
    }
L_0896C0A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896C0B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C0B8u) goto L_0896C0B8;
    return;
L_0896C0B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29568), 0u);
    goto L_0896C0BC;
L_0896C0BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C0CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896C210;
      }
      goto L_0896C0F4;
    }
L_0896C0F4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
    ctx.gpr[18] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896C1AC;
      }
      goto L_0896C114;
    }
L_0896C114:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896C148;
      }
      goto L_0896C124;
    }
L_0896C124:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0896C190;
      }
      goto L_0896C130;
    }
L_0896C130:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0896C140u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C140u) goto L_0896C140;
    return;
L_0896C140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
      if (branch_taken) {
          goto L_0896C1AC;
      }
      goto L_0896C148;
    }
L_0896C148:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896C174;
      }
      goto L_0896C150;
    }
L_0896C150:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0896C190;
      }
      goto L_0896C158;
    }
L_0896C158:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896C16Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C16Cu) goto L_0896C16C;
    return;
L_0896C16C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
      if (branch_taken) {
          goto L_0896C1AC;
      }
      goto L_0896C174;
    }
L_0896C174:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896C188u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C188u) goto L_0896C188;
    return;
L_0896C188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
      if (branch_taken) {
          goto L_0896C1AC;
      }
      goto L_0896C190;
    }
L_0896C190:
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0896C1B0;
    }
    goto L_0896C198;
L_0896C198:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[31] = (0x0896C1A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C1A8u) goto L_0896C1A8;
    return;
L_0896C1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
    goto L_0896C1AC;
L_0896C1AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0896C1B0;
L_0896C1B0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896C200;
      }
      goto L_0896C1B8;
    }
L_0896C1B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896C200;
      }
      goto L_0896C1D8;
    }
L_0896C1D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0896C200;
      }
      goto L_0896C1EC;
    }
L_0896C1EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896C1FCu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C1FCu) goto L_0896C1FC;
    return;
L_0896C1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
    goto L_0896C200;
L_0896C200:
    ctx.gpr[31] = (0x0896C208u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 549u, 0x08932BDCu>(ctx, &aot_mem) && ctx.pc == 0x0896C208u) goto L_0896C208;
    return;
L_0896C208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0896C210;
L_0896C210:
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
L_0896C22C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 551u, 0x08932BF8u>(ctx, &aot_mem) && ctx.pc == 0x0896C23Cu) goto L_0896C23C;
    return;
L_0896C23C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0896C290;
      }
      goto L_0896C260;
    }
L_0896C260:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0896C284u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C284u) goto L_0896C284;
    return;
L_0896C284:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C290:
    ctx.gpr[31] = (0x0896C298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 681u, 0x0896BFC4u>(ctx, &aot_mem) && ctx.pc == 0x0896C298u) goto L_0896C298;
    return;
L_0896C298:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29568)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C2CCu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C2CCu) goto L_0896C2CC;
    return;
L_0896C2CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C2D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29568)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C300u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 553u, 0x08932C14u>(ctx, &aot_mem) && ctx.pc == 0x0896C300u) goto L_0896C300;
    return;
L_0896C300:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C30C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C31Cu);
    // nop
    goto L_0896C2D8;
L_0896C31C:
    ctx.gpr[31] = (0x0896C324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 604u, 0x08932FE8u>(ctx, &aot_mem) && ctx.pc == 0x0896C324u) goto L_0896C324;
    return;
L_0896C324:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x0896C354u) goto L_0896C354;
    return;
L_0896C354:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896C360u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 523u, 0x08813268u>(ctx, &aot_mem) && ctx.pc == 0x0896C360u) goto L_0896C360;
    return;
L_0896C360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896C370u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 484u, 0x08812F14u>(ctx, &aot_mem) && ctx.pc == 0x0896C370u) goto L_0896C370;
    return;
L_0896C370:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[7] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C3CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 168u, 0x0893D1F8u>(ctx, &aot_mem) && ctx.pc == 0x0896C3CCu) goto L_0896C3CC;
    return;
L_0896C3CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x0896C3E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 161u, 0x08A28EB8u>(ctx, &aot_mem) && ctx.pc == 0x0896C3E8u) goto L_0896C3E8;
    return;
L_0896C3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x0896C404u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20036));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 149u, 0x08950D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C404u) goto L_0896C404;
    return;
L_0896C404:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C44Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x0896C44Cu) goto L_0896C44C;
    return;
L_0896C44C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896C458u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 523u, 0x08813268u>(ctx, &aot_mem) && ctx.pc == 0x0896C458u) goto L_0896C458;
    return;
L_0896C458:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896C468u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 484u, 0x08812F14u>(ctx, &aot_mem) && ctx.pc == 0x0896C468u) goto L_0896C468;
    return;
L_0896C468:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0896C474u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 523u, 0x08813268u>(ctx, &aot_mem) && ctx.pc == 0x0896C474u) goto L_0896C474;
    return;
L_0896C474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0896C484u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 484u, 0x08812F14u>(ctx, &aot_mem) && ctx.pc == 0x0896C484u) goto L_0896C484;
    return;
L_0896C484:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x0896C498u);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x0896C498u) goto L_0896C498;
    return;
L_0896C498:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896C4A4u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 523u, 0x08813268u>(ctx, &aot_mem) && ctx.pc == 0x0896C4A4u) goto L_0896C4A4;
    return;
L_0896C4A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0896C4B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 484u, 0x08812F14u>(ctx, &aot_mem) && ctx.pc == 0x0896C4B4u) goto L_0896C4B4;
    return;
L_0896C4B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896C4E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 656u, 0x089D3B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C4E4u) goto L_0896C4E4;
    return;
L_0896C4E4:
    ctx.gpr[31] = (0x0896C4ECu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 453u, 0x08A96538u>(ctx, &aot_mem) && ctx.pc == 0x0896C4ECu) goto L_0896C4EC;
    return;
L_0896C4EC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0896C504;
    }
    goto L_0896C504;
L_0896C504:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896C548u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 179u, 0x0893D348u>(ctx, &aot_mem) && ctx.pc == 0x0896C548u) goto L_0896C548;
    return;
L_0896C548:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C56C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29560)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29564), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C580:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(23856), ctx.gpr[4]);
    ctx.gpr[8] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(29576), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23856));
    ctx.gpr[5] = (27656u << 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30363));
    goto L_0896C5A8;
L_0896C5A8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] >> 30u);
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(624) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896C5A8;
      }
      goto L_0896C5D8;
    }
L_0896C5D8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(29576), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C71C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29576)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(624) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(23856));
      if (branch_taken) {
          goto L_0896C870;
      }
      goto L_0896C754;
    }
L_0896C754:
    ctx.gpr[20] = (32768u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[5] = (0u | 625u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(29580));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (32768u << 16u);
      if (branch_taken) {
          goto L_0896C778;
      }
      goto L_0896C770;
    }
L_0896C770:
    ctx.gpr[31] = (0x0896C778u);
    ctx.gpr[4] = (0u | 5489u);
    goto L_0896C580;
L_0896C778:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1588));
    goto L_0896C784;
L_0896C784:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[19]);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[21]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(227) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896C784;
      }
      goto L_0896C7D0;
    }
L_0896C7D0:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(623) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-227));
      if (branch_taken) {
          goto L_0896C830;
      }
      goto L_0896C7DC;
    }
L_0896C7DC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    goto L_0896C7E4;
L_0896C7E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[19]);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[21]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(623) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896C7E4;
      }
      goto L_0896C830;
    }
L_0896C830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23856)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29576), 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2492), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896C870;
L_0896C870:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (40236u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] >> 11u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22144));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29576), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[7] = (61382u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 15u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] >> 18u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
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
L_0896C8FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30120));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896C928u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C928u) goto L_0896C928;
    return;
L_0896C928:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26352), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896C940u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896C940u) goto L_0896C940;
    return;
L_0896C940:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896C970u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26352)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C970u) goto L_0896C970;
    return;
L_0896C970:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C97C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896C990u);
    ctx.gpr[16] = (0u | 0u);
    ctx.pc = 0x08AB414Cu;
    return;
L_0896C990:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA1C;
      }
      goto L_0896C9A0;
    }
L_0896C9A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896CA18;
      }
      goto L_0896C9A8;
    }
L_0896C9A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896C9D4;
      }
      goto L_0896C9B0;
    }
L_0896C9B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896CA08;
      }
      goto L_0896C9B8;
    }
L_0896C9B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896CA10;
      }
      goto L_0896C9C0;
    }
L_0896C9C0:
    ctx.gpr[31] = (0x0896C9C8u);
    // nop
    ctx.pc = 0x08AB44B4u;
    return;
L_0896C9C8:
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26360), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0896CA1C;
      }
      goto L_0896C9D4;
    }
L_0896C9D4:
    ctx.gpr[31] = (0x0896C9DCu);
    // nop
    ctx.pc = 0x08AB44B4u;
    return;
L_0896C9DC:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26360)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0896C9F8;
    }
    goto L_0896C9F8;
L_0896C9F8:
    ctx.gpr[31] = (0x0896CA00u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26360), ctx.gpr[5]);
    ctx.pc = 0x08AB416Cu;
    return;
L_0896CA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA1C;
      }
      goto L_0896CA08;
    }
L_0896CA08:
    ctx.gpr[31] = (0x0896CA10u);
    // nop
    ctx.pc = 0x08AB415Cu;
    return;
L_0896CA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA1C;
      }
      goto L_0896CA18;
    }
L_0896CA18:
    ctx.gpr[16] = (0u | 1u);
    goto L_0896CA1C;
L_0896CA1C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CA30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[18] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896CA80u);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896CA80u) goto L_0896CA80;
    return;
L_0896CA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896CA8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0896D708;
L_0896CA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32716), ctx.gpr[5]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31244), ctx.gpr[17]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31264));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896CAC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896D5B4;
L_0896CAC0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[31] = (0x0896CACCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29592)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CACCu) goto L_0896CACC;
    return;
L_0896CACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29592)));
    ctx.gpr[31] = (0x0896CAECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CAECu) goto L_0896CAEC;
    return;
L_0896CAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32704), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20488));
    ctx.gpr[31] = (0x0896CB10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CB10u) goto L_0896CB10;
    return;
L_0896CB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CB30u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CB30u) goto L_0896CB30;
    return;
L_0896CB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (10u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32688), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-32664));
    ctx.gpr[20] = (10u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (10u << 16u);
      if (branch_taken) {
          goto L_0896CBA0;
      }
      goto L_0896CB58;
    }
L_0896CB58:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20492));
    ctx.gpr[31] = (0x0896CB6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CB6Cu) goto L_0896CB6C;
    return;
L_0896CB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CB84u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CB84u) goto L_0896CB84;
    return;
L_0896CB84:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[21] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0896CBEC;
      }
      goto L_0896CBA0;
    }
L_0896CBA0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29604));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CBBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CBBCu) goto L_0896CBBC;
    return;
L_0896CBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0896CBD4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CBD4u) goto L_0896CBD4;
    return;
L_0896CBD4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[21] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[23]);
    goto L_0896CBEC;
L_0896CBEC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-32708), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CBFCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0896D92C;
L_0896CBFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CC08u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0896D958;
L_0896CC08:
    ctx.gpr[31] = (0x0896CC10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896D770;
L_0896CC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CC20u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0896D81C;
L_0896CC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896CC2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.pc = 0x08AB4134u;
    return;
L_0896CC2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC60;
      }
      goto L_0896CC34;
    }
L_0896CC34:
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
L_0896CC60:
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
L_0896CC90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[17] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896CCE0u);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896CCE0u) goto L_0896CCE0;
    return;
L_0896CCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896CCECu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0896D708;
L_0896CCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32716), ctx.gpr[5]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31244), ctx.gpr[19]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31264));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896CD20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896D5B4;
L_0896CD20:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[31] = (0x0896CD2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29592)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CD2Cu) goto L_0896CD2C;
    return;
L_0896CD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29592)));
    ctx.gpr[31] = (0x0896CD4Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CD4Cu) goto L_0896CD4C;
    return;
L_0896CD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32704), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(20488));
    ctx.gpr[31] = (0x0896CD70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CD70u) goto L_0896CD70;
    return;
L_0896CD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896CD90u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CD90u) goto L_0896CD90;
    return;
L_0896CD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (10u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32688), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-32664));
    ctx.gpr[20] = (10u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (10u << 16u);
      if (branch_taken) {
          goto L_0896CDFC;
      }
      goto L_0896CDB8;
    }
L_0896CDB8:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(20492));
    ctx.gpr[31] = (0x0896CDC8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CDC8u) goto L_0896CDC8;
    return;
L_0896CDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CDE0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CDE0u) goto L_0896CDE0;
    return;
L_0896CDE0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0896CE44;
      }
      goto L_0896CDFC;
    }
L_0896CDFC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29604));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896CE14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CE14u) goto L_0896CE14;
    return;
L_0896CE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0896CE2Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CE2Cu) goto L_0896CE2C;
    return;
L_0896CE2C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_0896CE44;
L_0896CE44:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-32708), 0u);
    ctx.gpr[31] = (0x0896CE50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896D81C;
L_0896CE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896CE5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.pc = 0x08AB4134u;
    return;
L_0896CE5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CE90;
      }
      goto L_0896CE64;
    }
L_0896CE64:
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
L_0896CE90:
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
L_0896CEC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[16] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896CF08u);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896CF08u) goto L_0896CF08;
    return;
L_0896CF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896CF14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0896D708;
L_0896CF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32716), ctx.gpr[5]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31244), ctx.gpr[19]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31264));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896CF48u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0896D5B4;
L_0896CF48:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[31] = (0x0896CF54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29592)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CF54u) goto L_0896CF54;
    return;
L_0896CF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29592)));
    ctx.gpr[31] = (0x0896CF74u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CF74u) goto L_0896CF74;
    return;
L_0896CF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32704), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(20488));
    ctx.gpr[31] = (0x0896CF98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CF98u) goto L_0896CF98;
    return;
L_0896CF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896CFB8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CFB8u) goto L_0896CFB8;
    return;
L_0896CFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (10u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32688), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-32664));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[19] = (10u << 16u);
      if (branch_taken) {
          goto L_0896D01C;
      }
      goto L_0896CFDC;
    }
L_0896CFDC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(20492));
    ctx.gpr[31] = (0x0896CFECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896CFECu) goto L_0896CFEC;
    return;
L_0896CFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896D004u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D004u) goto L_0896D004;
    return;
L_0896D004:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0896D060;
      }
      goto L_0896D01C;
    }
L_0896D01C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29604));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896D034u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D034u) goto L_0896D034;
    return;
L_0896D034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0896D04Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D04Cu) goto L_0896D04C;
    return;
L_0896D04C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[16]);
    goto L_0896D060;
L_0896D060:
    ctx.gpr[31] = (0x0896D068u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0896D8D8;
L_0896D068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0896D078u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0896D8F0;
L_0896D078:
    ctx.gpr[31] = (0x0896D080u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0896D90C;
L_0896D080:
    ctx.gpr[31] = (0x0896D088u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0896D770;
L_0896D088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896D094u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.pc = 0x08AB4134u;
    return;
L_0896D094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D0C0;
      }
      goto L_0896D09C;
    }
L_0896D09C:
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
L_0896D0C0:
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
L_0896D0E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896D12Cu);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896D12Cu) goto L_0896D12C;
    return;
L_0896D12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896D138u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0896D708;
L_0896D138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32716), ctx.gpr[5]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31244), ctx.gpr[17]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31264));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896D16Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896D5B4;
L_0896D16C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[31] = (0x0896D178u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29592)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D178u) goto L_0896D178;
    return;
L_0896D178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29592)));
    ctx.gpr[31] = (0x0896D198u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D198u) goto L_0896D198;
    return;
L_0896D198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32704), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20488));
    ctx.gpr[31] = (0x0896D1BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D1BCu) goto L_0896D1BC;
    return;
L_0896D1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896D1DCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D1DCu) goto L_0896D1DC;
    return;
L_0896D1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32688), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29604));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0896D208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D208u) goto L_0896D208;
    return;
L_0896D208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32664));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x0896D228u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D228u) goto L_0896D228;
    return;
L_0896D228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0896D244u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-32664), static_cast<std::uint8_t>(0u));
    goto L_0896D770;
L_0896D244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896D250u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.pc = 0x08AB4134u;
    return;
L_0896D250:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D27C;
      }
      goto L_0896D258;
    }
L_0896D258:
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
L_0896D27C:
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
L_0896D29C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896D2CCu);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896D2CCu) goto L_0896D2CC;
    return;
L_0896D2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896D2D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0896D708;
L_0896D2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32716), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896D2F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.pc = 0x08AB4134u;
    return;
L_0896D2F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D314;
      }
      goto L_0896D2FC;
    }
L_0896D2FC:
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
L_0896D314:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[7] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-32736)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896D38C;
      }
      goto L_0896D354;
    }
L_0896D354:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896D384;
      }
      goto L_0896D360;
    }
L_0896D360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31280)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[2] = (0u | 0u);
        goto L_0896D37C;
    }
    goto L_0896D37C;
L_0896D37C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D38C;
      }
      goto L_0896D384;
    }
L_0896D384:
    ctx.gpr[31] = (0x0896D38Cu);
    // nop
    goto L_0896D398;
L_0896D38C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D398:
    ctx.gpr[5] = (32751u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-801));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_0896D414;
      }
      goto L_0896D3B0;
    }
L_0896D3B0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20504)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 6u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 7u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D400:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 8u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D408:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 9u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D410:
    ctx.gpr[2] = (0u | 10u);
    goto L_0896D414;
L_0896D414:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D41C:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26352)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D440:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30216)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10747));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(3631));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(23052));
    ctx.gpr[9] = (3u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-15873));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 10u));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[10] >> 22u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 10u));
    ctx.gpr[11] = (16259u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (14976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4911));
    ctx.gpr[11] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1023));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 1969 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[2] = (0u | 1968u);
        goto L_0896D54C;
    }
    goto L_0896D54C;
L_0896D54C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D554:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30196)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D584:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30184)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D5B4:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29656));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0896D5C8;
L_0896D5C8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896D5C8;
      }
      goto L_0896D5E4;
    }
L_0896D5E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (5u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32756));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896D620u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D620u) goto L_0896D620;
    return;
L_0896D620:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26356), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896D638u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896D638u) goto L_0896D638;
    return;
L_0896D638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896D64Cu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D64Cu) goto L_0896D64C;
    return;
L_0896D64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[16] = (5u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896D66Cu);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896D66Cu) goto L_0896D66C;
    return;
L_0896D66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
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
L_0896D694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26356)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (5u << 16u);
      if (branch_taken) {
          goto L_0896D6F0;
      }
      goto L_0896D6B8;
    }
L_0896D6B8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896D6D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D6D0u) goto L_0896D6D0;
    return;
L_0896D6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32760), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896D6ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D6ECu) goto L_0896D6EC;
    return;
L_0896D6EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26356), 0u);
    goto L_0896D6F0;
L_0896D6F0:
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
L_0896D708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1536u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896D72Cu);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896D72Cu) goto L_0896D72C;
    return;
L_0896D72C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(29644));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896D798u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D798u) goto L_0896D798;
    return;
L_0896D798:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896D7ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896D7ACu) goto L_0896D7AC;
    return;
L_0896D7AC:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0896D7BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D7BCu) goto L_0896D7BC;
    return;
L_0896D7BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0896D7D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896D7D0u) goto L_0896D7D0;
    return;
L_0896D7D0:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0896D7E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896D7E0u) goto L_0896D7E0;
    return;
L_0896D7E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x0896D7F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896D7F4u) goto L_0896D7F4;
    return;
L_0896D7F4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_0896D81C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-3664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3632), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3636), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3640), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3644), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3648), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896D878;
      }
      goto L_0896D83C;
    }
L_0896D83C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896D848u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 492u, 0x088426B0u>(ctx, &aot_mem) && ctx.pc == 0x0896D848u) goto L_0896D848;
    return;
L_0896D848:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[19] = (0u | 3616u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896D860u);
    ctx.gpr[6] = (0u | 3616u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896D860u) goto L_0896D860;
    return;
L_0896D860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (5u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0896D8BC;
      }
      goto L_0896D878;
    }
L_0896D878:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D8BC;
      }
      goto L_0896D884;
    }
L_0896D884:
    ctx.gpr[31] = (0x0896D88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 523u, 0x0883276Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D88Cu) goto L_0896D88C;
    return;
L_0896D88C:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896D8A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896D8A8u) goto L_0896D8A8;
    return;
L_0896D8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (5u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    goto L_0896D8BC;
L_0896D8BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3632)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3636)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3640)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3644)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3648)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(3664));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D8D8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (5u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D8F0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (0u | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1412), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D90C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (0u | 32776u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1444), ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1448), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D92C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1412), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1420), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D958:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[7] = (0u | 32776u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1444), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1448), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1452), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[18] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896D9E0u);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896D9E0u) goto L_0896D9E0;
    return;
L_0896D9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896D9ECu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0896D708;
L_0896D9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-32716), ctx.gpr[5]);
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29592)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31244), ctx.gpr[19]);
    ctx.gpr[31] = (0x0896DA1Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896DA1Cu) goto L_0896DA1C;
    return;
L_0896DA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29592)));
    ctx.gpr[31] = (0x0896DA3Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DA3Cu) goto L_0896DA3C;
    return;
L_0896DA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-32704), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(20488));
    ctx.gpr[31] = (0x0896DA60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896DA60u) goto L_0896DA60;
    return;
L_0896DA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896DA80u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DA80u) goto L_0896DA80;
    return;
L_0896DA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (10u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-32688), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-30232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DAACu);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DAACu) goto L_0896DAAC;
    return;
L_0896DAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[19] = (10u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-30168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DAC8u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DAC8u) goto L_0896DAC8;
    return;
L_0896DAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[2] = (10u << 16u);
    ctx.gpr[9] = (10u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-30160));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-30147));
    ctx.gpr[11] = (10u << 16u);
    ctx.gpr[10] = (10u << 16u);
    ctx.gpr[7] = (10u << 16u);
    ctx.gpr[30] = (10u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[23] = (10u << 16u);
      if (branch_taken) {
          goto L_0896DBB4;
      }
      goto L_0896DAFC;
    }
L_0896DAFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30232), ctx.gpr[5]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(20492));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[31] = (0x0896DB34u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896DB34u) goto L_0896DB34;
    return;
L_0896DB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0896DB4Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DB4Cu) goto L_0896DB4C;
    return;
L_0896DB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30160), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29832)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30164), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30168), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DB84u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DB84u) goto L_0896DB84;
    return;
L_0896DB84:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[22] = (ctx.gpr[8] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0896DD84;
      }
      goto L_0896DBB4;
    }
L_0896DBB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29604));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(29844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(29840)));
      if (branch_taken) {
          goto L_0896DC78;
      }
      goto L_0896DBE0;
    }
L_0896DBE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30232), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896DBF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896DBF4u) goto L_0896DBF4;
    return;
L_0896DBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30160));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x0896DC14u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DC14u) goto L_0896DC14;
    return;
L_0896DC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30160), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30147));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30168), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DC50u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DC50u) goto L_0896DC50;
    return;
L_0896DC50:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[22] = (ctx.gpr[8] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0896DD84;
      }
      goto L_0896DC78;
    }
L_0896DC78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30232), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896DC8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896DC8Cu) goto L_0896DC8C;
    return;
L_0896DC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30160));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x0896DCACu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DCACu) goto L_0896DCAC;
    return;
L_0896DCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30160), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30147));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30168), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DCE8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DCE8u) goto L_0896DCE8;
    return;
L_0896DCE8:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20492));
    ctx.gpr[31] = (0x0896DCF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0896DCF8u) goto L_0896DCF8;
    return;
L_0896DCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30136));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896DD18u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DD18u) goto L_0896DD18;
    return;
L_0896DD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30136), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29836)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29832)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30140), ctx.gpr[7]);
    ctx.gpr[8] = (10u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30144), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-30123));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DD60u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DD60u) goto L_0896DD60;
    return;
L_0896DD60:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (10u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[22] = (ctx.gpr[8] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_0896DD84;
L_0896DD84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-31232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-32708), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896DD9Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0896D92C;
L_0896DD9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896DDA8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0896D958;
L_0896DDA8:
    ctx.gpr[31] = (0x0896DDB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896D770;
L_0896DDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0896DDC0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0896D81C;
L_0896DDC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26352)));
    ctx.gpr[31] = (0x0896DDCCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.pc = 0x08AB4134u;
    return;
L_0896DDCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DE04;
      }
      goto L_0896DDD4;
    }
L_0896DDD4:
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
L_0896DE04:
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
L_0896DE38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0896DF10;
      }
      goto L_0896DE74;
    }
L_0896DE74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896E0A8;
      }
      goto L_0896DE7C;
    }
L_0896DE7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DE8Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DE8Cu) goto L_0896DE8C;
    return;
L_0896DE8C:
    ctx.gpr[4] = (29537u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12078));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (29556u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25971));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (28015u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25391));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12142u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28525));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (28265u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29549));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (26414u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28518));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (0u | 122u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x0896DEF8u);
    ctx.gpr[6] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0896DEF8u) goto L_0896DEF8;
    return;
L_0896DEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896E0A8;
      }
      goto L_0896DF10;
    }
L_0896DF10:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896DF2C;
      }
      goto L_0896DF1C;
    }
L_0896DF1C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0896E0A8;
    }
    goto L_0896DF24;
L_0896DF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E0A8;
      }
      goto L_0896DF2C;
    }
L_0896DF2C:
    ctx.gpr[31] = (0x0896DF34u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0896DF34u) goto L_0896DF34;
    return;
L_0896DF34:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896E0A8;
      }
      goto L_0896DF40;
    }
L_0896DF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[31] = (0x0896DF54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0896DF54u) goto L_0896DF54;
    return;
L_0896DF54:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DF68u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DF68u) goto L_0896DF68;
    return;
L_0896DF68:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DF7Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DF7Cu) goto L_0896DF7C;
    return;
L_0896DF7C:
    ctx.gpr[4] = (17225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12078));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (11824u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20047));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (103u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28272));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896DFB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0896DFB8u) goto L_0896DFB8;
    return;
L_0896DFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896DFD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0896DFD4u) goto L_0896DFD4;
    return;
L_0896DFD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0896DFECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896DFECu) goto L_0896DFEC;
    return;
L_0896DFEC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896DFFCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896DFFCu) goto L_0896DFFC;
    return;
L_0896DFFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896E00Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896E00Cu) goto L_0896E00C;
    return;
L_0896E00C:
    ctx.gpr[4] = (18768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12078));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (28718u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12611));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (0u | 26478u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896E044u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0896E044u) goto L_0896E044;
    return;
L_0896E044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896E060u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0896E060u) goto L_0896E060;
    return;
L_0896E060:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (0u | 32776u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896E07Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0896E07Cu) goto L_0896E07C;
    return;
L_0896E07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    ctx.gpr[31] = (0x0896E090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896E090u) goto L_0896E090;
    return;
L_0896E090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26356)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32760)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896E0A8;
      }
      goto L_0896E0A8;
    }
L_0896E0A8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E0CC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29596)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29600), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E0E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 584u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896E100u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E100u) goto L_0896E100;
    return;
L_0896E100:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26364), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896E118u);
    ctx.gpr[6] = (0u | 584u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896E118u) goto L_0896E118;
    return;
L_0896E118:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896E144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26364)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E144u) goto L_0896E144;
    return;
L_0896E144:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896E218;
      }
      goto L_0896E184;
    }
L_0896E184:
    ctx.gpr[19] = (0u | 580u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896E194u);
    ctx.gpr[6] = (0u | 580u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896E194u) goto L_0896E194;
    return;
L_0896E194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[6] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[5] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[6] = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[31] = (0x0896E1F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0896E1F4u) goto L_0896E1F4;
    return;
L_0896E1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[31] = (0x0896E218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB4124u;
    return;
L_0896E218:
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
L_0896E234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E248u);
    ctx.gpr[16] = (0u | 10u);
    ctx.pc = 0x08AB4164u;
    return;
L_0896E248:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2F8;
      }
      goto L_0896E258;
    }
L_0896E258:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896E2D0;
      }
      goto L_0896E260;
    }
L_0896E260:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896E28C;
      }
      goto L_0896E268;
    }
L_0896E268:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896E2C0;
      }
      goto L_0896E270;
    }
L_0896E270:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896E2C8;
      }
      goto L_0896E278;
    }
L_0896E278:
    ctx.gpr[31] = (0x0896E280u);
    // nop
    ctx.pc = 0x08AB44B4u;
    return;
L_0896E280:
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0896E2F8;
      }
      goto L_0896E28C;
    }
L_0896E28C:
    ctx.gpr[31] = (0x0896E294u);
    // nop
    ctx.pc = 0x08AB44B4u;
    return;
L_0896E294:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26368)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0896E2B0;
    }
    goto L_0896E2B0;
L_0896E2B0:
    ctx.gpr[31] = (0x0896E2B8u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26368), ctx.gpr[5]);
    ctx.pc = 0x08AB4154u;
    return;
L_0896E2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2F8;
      }
      goto L_0896E2C0;
    }
L_0896E2C0:
    ctx.gpr[31] = (0x0896E2C8u);
    // nop
    ctx.pc = 0x08AB4144u;
    return;
L_0896E2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2F8;
      }
      goto L_0896E2D0;
    }
L_0896E2D0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26364)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E2F0;
      }
      goto L_0896E2E8;
    }
L_0896E2E8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
        goto L_0896E2F8;
    }
    goto L_0896E2F0;
L_0896E2F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0896E2F8;
      }
      goto L_0896E2F8;
    }
L_0896E2F8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E30C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29848)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29852), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E344u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1315u, 0x08977CA4u>(ctx, &aot_mem) && ctx.pc == 0x0896E344u) goto L_0896E344;
    return;
L_0896E344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0896E368u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E368u) goto L_0896E368;
    return;
L_0896E368:
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
L_0896E380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E394u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1315u, 0x08977CA4u>(ctx, &aot_mem) && ctx.pc == 0x0896E394u) goto L_0896E394;
    return;
L_0896E394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896E3B4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E3B4u) goto L_0896E3B4;
    return;
L_0896E3B4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E3C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 359u, 0x08A8617Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E3DCu) goto L_0896E3DC;
    return;
L_0896E3DC:
    ctx.gpr[31] = (0x0896E3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 257u, 0x08A8581Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E3E4u) goto L_0896E3E4;
    return;
L_0896E3E4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[31] = (0x0896E3F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11660)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 248u, 0x08A856D0u>(ctx, &aot_mem) && ctx.pc == 0x0896E3F0u) goto L_0896E3F0;
    return;
L_0896E3F0:
    ctx.gpr[31] = (0x0896E3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 303u, 0x08A85DE4u>(ctx, &aot_mem) && ctx.pc == 0x0896E3F8u) goto L_0896E3F8;
    return;
L_0896E3F8:
    ctx.gpr[31] = (0x0896E400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 443u, 0x08A86B70u>(ctx, &aot_mem) && ctx.pc == 0x0896E400u) goto L_0896E400;
    return;
L_0896E400:
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896E414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 284u, 0x08A89674u>(ctx, &aot_mem) && ctx.pc == 0x0896E414u) goto L_0896E414;
    return;
L_0896E414:
    ctx.gpr[4] = (2199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7392));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7296));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0896E43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 289u, 0x08A896F4u>(ctx, &aot_mem) && ctx.pc == 0x0896E43Cu) goto L_0896E43C;
    return;
L_0896E43C:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (0u | 30000u);
    ctx.gpr[31] = (0x0896E44Cu);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 444u, 0x08A86B78u>(ctx, &aot_mem) && ctx.pc == 0x0896E44Cu) goto L_0896E44C;
    return;
L_0896E44C:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x0896E458u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 384u, 0x08A89DACu>(ctx, &aot_mem) && ctx.pc == 0x0896E458u) goto L_0896E458;
    return;
L_0896E458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E488u);
    // nop
    goto L_0896E4F8;
L_0896E488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 463u, 0x08A72508u>(ctx, &aot_mem) && ctx.pc == 0x0896E4A8u) goto L_0896E4A8;
    return;
L_0896E4A8:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4C4;
      }
      goto L_0896E4B8;
    }
L_0896E4B8:
    ctx.gpr[31] = (0x0896E4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 520u, 0x0894B8ECu>(ctx, &aot_mem) && ctx.pc == 0x0896E4C0u) goto L_0896E4C0;
    return;
L_0896E4C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29216), 0u);
    goto L_0896E4C4;
L_0896E4C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E4E4u);
    // nop
    goto L_0896E7A8;
L_0896E4E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E4F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-20452), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-20268), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-20084), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19900), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19716), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19532), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19348), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19164), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18980), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18796), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18612), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18428), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18244), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18060), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17876), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17692), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17508), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E59Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17324), ctx.gpr[4]);
    goto L_0896E3C8;
L_0896E59C:
    ctx.gpr[31] = (0x0896E5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 105u, 0x08A74F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E5A4u) goto L_0896E5A4;
    return;
L_0896E5A4:
    ctx.gpr[31] = (0x0896E5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1315u, 0x08977CA4u>(ctx, &aot_mem) && ctx.pc == 0x0896E5ACu) goto L_0896E5AC;
    return;
L_0896E5AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896E5B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 26u, 0x08A84208u>(ctx, &aot_mem) && ctx.pc == 0x0896E5B8u) goto L_0896E5B8;
    return;
L_0896E5B8:
    ctx.gpr[31] = (0x0896E5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 30u, 0x08A84250u>(ctx, &aot_mem) && ctx.pc == 0x0896E5C0u) goto L_0896E5C0;
    return;
L_0896E5C0:
    ctx.gpr[31] = (0x0896E5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 684u, 0x08A73CA0u>(ctx, &aot_mem) && ctx.pc == 0x0896E5C8u) goto L_0896E5C8;
    return;
L_0896E5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25332));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0896E5F4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E5F4u) goto L_0896E5F4;
    return;
L_0896E5F4:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29216), ctx.gpr[2]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896E610u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 571u, 0x08A7327Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E610u) goto L_0896E610;
    return;
L_0896E610:
    ctx.gpr[4] = (9u << 16u);
    ctx.gpr[31] = (0x0896E61Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2307));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 415u, 0x08A72124u>(ctx, &aot_mem) && ctx.pc == 0x0896E61Cu) goto L_0896E61C;
    return;
L_0896E61C:
    ctx.gpr[31] = (0x0896E624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 42u, 0x08A703ECu>(ctx, &aot_mem) && ctx.pc == 0x0896E624u) goto L_0896E624;
    return;
L_0896E624:
    ctx.gpr[16] = (2224u << 16u);
    ctx.gpr[31] = (0x0896E630u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2372));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 709u, 0x08A6F02Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E630u) goto L_0896E630;
    return;
L_0896E630:
    ctx.gpr[31] = (0x0896E638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x0896E638u) goto L_0896E638;
    return;
L_0896E638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2372)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29196)));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[31] = (0x0896E650u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 717u, 0x08A6F140u>(ctx, &aot_mem) && ctx.pc == 0x0896E650u) goto L_0896E650;
    return;
L_0896E650:
    ctx.gpr[31] = (0x0896E658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x0896E658u) goto L_0896E658;
    return;
L_0896E658:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20816));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29856));
    ctx.gpr[31] = (0x0896E674u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6420));
    goto L_0896E688;
L_0896E674:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-28696), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29192), ctx.gpr[4]);
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29188), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E6B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0896E6B8u) goto L_0896E6B8;
    return;
L_0896E6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29192)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x0896E6DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0896E6DCu) goto L_0896E6DC;
    return;
L_0896E6DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E6FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 64u, 0x08A84588u>(ctx, &aot_mem) && ctx.pc == 0x0896E6FCu) goto L_0896E6FC;
    return;
L_0896E6FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29200), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E72Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29200), static_cast<std::uint8_t>(0u));
    goto L_0896EC20;
L_0896E72C:
    ctx.gpr[31] = (0x0896E734u);
    // nop
    goto L_0896EFB8;
L_0896E734:
    ctx.gpr[16] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20816)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20816));
        goto L_0896E750;
    }
    goto L_0896E744;
L_0896E744:
    ctx.gpr[31] = (0x0896E74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 79u, 0x08A84730u>(ctx, &aot_mem) && ctx.pc == 0x0896E74Cu) goto L_0896E74C;
    return;
L_0896E74C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20816));
    goto L_0896E750;
L_0896E750:
    ctx.gpr[31] = (0x0896E758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896E758u) goto L_0896E758;
    return;
L_0896E758:
    ctx.gpr[31] = (0x0896E760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 463u, 0x08A72508u>(ctx, &aot_mem) && ctx.pc == 0x0896E760u) goto L_0896E760;
    return;
L_0896E760:
    ctx.gpr[31] = (0x0896E768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 43u, 0x08A843A0u>(ctx, &aot_mem) && ctx.pc == 0x0896E768u) goto L_0896E768;
    return;
L_0896E768:
    ctx.gpr[31] = (0x0896E770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1315u, 0x08977CA4u>(ctx, &aot_mem) && ctx.pc == 0x0896E770u) goto L_0896E770;
    return;
L_0896E770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29216)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896E794u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E794u) goto L_0896E794;
    return;
L_0896E794:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29216), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-28696)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896E7FC;
      }
      goto L_0896E7C8;
    }
L_0896E7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E7FC;
      }
      goto L_0896E7D4;
    }
L_0896E7D4:
    ctx.gpr[31] = (0x0896E7DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0896E7DCu) goto L_0896E7DC;
    return;
L_0896E7DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E7FC;
      }
      goto L_0896E7E4;
    }
L_0896E7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29192)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-28696), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29188)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896E7FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E7FCu) goto L_0896E7FC;
    return;
L_0896E7FC:
    ctx.gpr[31] = (0x0896E804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 807u, 0x08976440u>(ctx, &aot_mem) && ctx.pc == 0x0896E804u) goto L_0896E804;
    return;
L_0896E804:
    ctx.gpr[31] = (0x0896E80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 879u, 0x08976898u>(ctx, &aot_mem) && ctx.pc == 0x0896E80Cu) goto L_0896E80C;
    return;
L_0896E80C:
    ctx.gpr[31] = (0x0896E814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 679u, 0x08A73C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E814u) goto L_0896E814;
    return;
L_0896E814:
    ctx.gpr[31] = (0x0896E81Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 413u, 0x08A86790u>(ctx, &aot_mem) && ctx.pc == 0x0896E81Cu) goto L_0896E81C;
    return;
L_0896E81C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0896E8A4;
      }
      goto L_0896E85C;
    }
L_0896E85C:
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28692), ctx.gpr[7]);
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28688), ctx.gpr[6]);
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28684), ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(30484));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29136), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20632));
    ctx.gpr[31] = (0x0896E8A4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5968));
    goto L_0896E688;
L_0896E8A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E8B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (2199u << 16u);
      if (branch_taken) {
          goto L_0896E8DC;
      }
      goto L_0896E8C0;
    }
L_0896E8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896E8D4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896E8D4u) goto L_0896E8D4;
    return;
L_0896E8D4:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20452), ctx.gpr[2]);
    goto L_0896E8DC;
L_0896E8DC:
    ctx.gpr[31] = (0x0896E8E4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E8F0;
L_0896E8E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E8F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E900u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E90C;
L_0896E900:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E90C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E91Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E928;
L_0896E91C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E938u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E944;
L_0896E938:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E954u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E960;
L_0896E954:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E970u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E97C;
L_0896E970:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E97C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E98Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E998;
L_0896E98C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E9A8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E9B4;
L_0896E9A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E9B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E9C4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896E9D0;
L_0896E9C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E9D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28688)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 81 ? 1u : 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(30840));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28684)));
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28688), 0u);
        goto L_0896EA00;
    }
    goto L_0896EA00;
L_0896EA00:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28688)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 81 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29208), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0896EA24;
      }
      goto L_0896EA1C;
    }
L_0896EA1C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28684), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896EA24;
L_0896EA24:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29208)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(30084));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29204), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20080));
    ctx.gpr[31] = (0x0896EA88u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5484));
    goto L_0896E688;
L_0896EA88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EA94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2199u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EAB8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896EAB8u) goto L_0896EAB8;
    return;
L_0896EAB8:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19900), ctx.gpr[2]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28688)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(30840));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896EAECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30580));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896EAECu) goto L_0896EAEC;
    return;
L_0896EAEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896EB10;
      }
      goto L_0896EAF4;
    }
L_0896EAF4:
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19712));
    ctx.gpr[31] = (0x0896EB08u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5328));
    goto L_0896E688;
L_0896EB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB18;
      }
      goto L_0896EB10;
    }
L_0896EB10:
    ctx.gpr[31] = (0x0896EB18u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896EB30;
L_0896EB18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EB30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (2199u << 16u);
      if (branch_taken) {
          goto L_0896EB60;
      }
      goto L_0896EB44;
    }
L_0896EB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896EB58u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896EB58u) goto L_0896EB58;
    return;
L_0896EB58:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19532), ctx.gpr[2]);
    goto L_0896EB60;
L_0896EB60:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28684)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(30840));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896EB8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30580));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896EB8Cu) goto L_0896EB8C;
    return;
L_0896EB8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896EBB0;
      }
      goto L_0896EB94;
    }
L_0896EB94:
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19528));
    ctx.gpr[31] = (0x0896EBA8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5176));
    goto L_0896E688;
L_0896EBA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EBB8;
      }
      goto L_0896EBB0;
    }
L_0896EBB0:
    ctx.gpr[31] = (0x0896EBB8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896EBC8;
L_0896EBB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EBC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896EBFC;
      }
      goto L_0896EBDC;
    }
L_0896EBDC:
    ctx.gpr[7] = (2199u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896EBF4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896EBF4u) goto L_0896EBF4;
    return;
L_0896EBF4:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19348), ctx.gpr[2]);
    goto L_0896EBFC;
L_0896EBFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0896EC10;
      }
      goto L_0896EC08;
    }
L_0896EC08:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29136), 0u);
    goto L_0896EC10;
L_0896EC10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EC20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896EEC0;
      }
      goto L_0896EC5C;
    }
L_0896EC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20452)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (2224u << 16u);
    ctx.gpr[19] = (2224u << 16u);
    ctx.gpr[20] = (2224u << 16u);
    ctx.gpr[21] = (2224u << 16u);
    ctx.gpr[22] = (2224u << 16u);
    ctx.gpr[23] = (2224u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[30] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896ECA0;
      }
      goto L_0896EC84;
    }
L_0896EC84:
    ctx.gpr[31] = (0x0896EC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EC8Cu) goto L_0896EC8C;
    return;
L_0896EC8C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20632));
    ctx.gpr[31] = (0x0896EC9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EC9Cu) goto L_0896EC9C;
    return;
L_0896EC9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20452), ctx.gpr[17]);
    goto L_0896ECA0;
L_0896ECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20268)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20084)));
        goto L_0896ECCC;
    }
    goto L_0896ECAC;
L_0896ECAC:
    ctx.gpr[31] = (0x0896ECB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896ECB4u) goto L_0896ECB4;
    return;
L_0896ECB4:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20448));
    ctx.gpr[31] = (0x0896ECC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896ECC4u) goto L_0896ECC4;
    return;
L_0896ECC4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-20268), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20084)));
    goto L_0896ECCC;
L_0896ECCC:
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19900)));
        goto L_0896ECF4;
    }
    goto L_0896ECD4;
L_0896ECD4:
    ctx.gpr[31] = (0x0896ECDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896ECDCu) goto L_0896ECDC;
    return;
L_0896ECDC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20264));
    ctx.gpr[31] = (0x0896ECECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896ECECu) goto L_0896ECEC;
    return;
L_0896ECEC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-20084), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19900)));
    goto L_0896ECF4;
L_0896ECF4:
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-19716)));
        goto L_0896ED1C;
    }
    goto L_0896ECFC;
L_0896ECFC:
    ctx.gpr[31] = (0x0896ED04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896ED04u) goto L_0896ED04;
    return;
L_0896ED04:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20080));
    ctx.gpr[31] = (0x0896ED14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896ED14u) goto L_0896ED14;
    return;
L_0896ED14:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-19900), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-19716)));
    goto L_0896ED1C;
L_0896ED1C:
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-19532)));
        goto L_0896ED44;
    }
    goto L_0896ED24;
L_0896ED24:
    ctx.gpr[31] = (0x0896ED2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896ED2Cu) goto L_0896ED2C;
    return;
L_0896ED2C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19896));
    ctx.gpr[31] = (0x0896ED3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896ED3Cu) goto L_0896ED3C;
    return;
L_0896ED3C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-19716), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-19532)));
    goto L_0896ED44;
L_0896ED44:
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-19348)));
        goto L_0896ED6C;
    }
    goto L_0896ED4C;
L_0896ED4C:
    ctx.gpr[31] = (0x0896ED54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896ED54u) goto L_0896ED54;
    return;
L_0896ED54:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19712));
    ctx.gpr[31] = (0x0896ED64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896ED64u) goto L_0896ED64;
    return;
L_0896ED64:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-19532), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-19348)));
    goto L_0896ED6C;
L_0896ED6C:
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-19164)));
        goto L_0896ED94;
    }
    goto L_0896ED74;
L_0896ED74:
    ctx.gpr[31] = (0x0896ED7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896ED7Cu) goto L_0896ED7C;
    return;
L_0896ED7C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19528));
    ctx.gpr[31] = (0x0896ED8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896ED8Cu) goto L_0896ED8C;
    return;
L_0896ED8C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-19348), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-19164)));
    goto L_0896ED94;
L_0896ED94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896EDBC;
      }
      goto L_0896ED9C;
    }
L_0896ED9C:
    ctx.gpr[31] = (0x0896EDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EDA4u) goto L_0896EDA4;
    return;
L_0896EDA4:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19344));
    ctx.gpr[31] = (0x0896EDB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EDB4u) goto L_0896EDB4;
    return;
L_0896EDB4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-19164), ctx.gpr[17]);
    ctx.gpr[5] = (2224u << 16u);
    goto L_0896EDBC;
L_0896EDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18980)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[5] = (2224u << 16u);
        goto L_0896EDE8;
    }
    goto L_0896EDC8;
L_0896EDC8:
    ctx.gpr[31] = (0x0896EDD0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EDD0u) goto L_0896EDD0;
    return;
L_0896EDD0:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19160));
    ctx.gpr[31] = (0x0896EDE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EDE0u) goto L_0896EDE0;
    return;
L_0896EDE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18980), ctx.gpr[17]);
    ctx.gpr[5] = (2224u << 16u);
    goto L_0896EDE8;
L_0896EDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18796)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[5] = (2224u << 16u);
        goto L_0896EE14;
    }
    goto L_0896EDF4;
L_0896EDF4:
    ctx.gpr[31] = (0x0896EDFCu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EDFCu) goto L_0896EDFC;
    return;
L_0896EDFC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18976));
    ctx.gpr[31] = (0x0896EE0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EE0Cu) goto L_0896EE0C;
    return;
L_0896EE0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18796), ctx.gpr[17]);
    ctx.gpr[5] = (2224u << 16u);
    goto L_0896EE14;
L_0896EE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18612)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[5] = (2224u << 16u);
        goto L_0896EE40;
    }
    goto L_0896EE20;
L_0896EE20:
    ctx.gpr[31] = (0x0896EE28u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EE28u) goto L_0896EE28;
    return;
L_0896EE28:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18792));
    ctx.gpr[31] = (0x0896EE38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EE38u) goto L_0896EE38;
    return;
L_0896EE38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18612), ctx.gpr[17]);
    ctx.gpr[5] = (2224u << 16u);
    goto L_0896EE40;
L_0896EE40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18428)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[5] = (2224u << 16u);
        goto L_0896EE6C;
    }
    goto L_0896EE4C;
L_0896EE4C:
    ctx.gpr[31] = (0x0896EE54u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EE54u) goto L_0896EE54;
    return;
L_0896EE54:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18608));
    ctx.gpr[31] = (0x0896EE64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EE64u) goto L_0896EE64;
    return;
L_0896EE64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18428), ctx.gpr[17]);
    ctx.gpr[5] = (2224u << 16u);
    goto L_0896EE6C;
L_0896EE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18244)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[5] = (2224u << 16u);
        goto L_0896EE98;
    }
    goto L_0896EE78;
L_0896EE78:
    ctx.gpr[31] = (0x0896EE80u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EE80u) goto L_0896EE80;
    return;
L_0896EE80:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18424));
    ctx.gpr[31] = (0x0896EE90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EE90u) goto L_0896EE90;
    return;
L_0896EE90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18244), ctx.gpr[17]);
    ctx.gpr[5] = (2224u << 16u);
    goto L_0896EE98;
L_0896EE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-18060)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0896EEC0;
      }
      goto L_0896EEA4;
    }
L_0896EEA4:
    ctx.gpr[31] = (0x0896EEACu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EEACu) goto L_0896EEAC;
    return;
L_0896EEAC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18240));
    ctx.gpr[31] = (0x0896EEBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896EEBCu) goto L_0896EEBC;
    return;
L_0896EEBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-18060), ctx.gpr[17]);
    goto L_0896EEC0;
L_0896EEC0:
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
L_0896EEF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896EF4C;
      }
      goto L_0896EF08;
    }
L_0896EF08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29132), ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17876)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896EF44;
      }
      goto L_0896EF20;
    }
L_0896EF20:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18056));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29880));
    ctx.gpr[31] = (0x0896EF38u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4264));
    goto L_0896E688;
L_0896EF38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EF44:
    ctx.gpr[31] = (0x0896EF4Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896EF58;
L_0896EF4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EF58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896EF8C;
      }
      goto L_0896EF6C;
    }
L_0896EF6C:
    ctx.gpr[7] = (2199u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896EF84u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896EF84u) goto L_0896EF84;
    return;
L_0896EF84:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17876), ctx.gpr[2]);
    goto L_0896EF8C;
L_0896EF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0896EFA0;
      }
      goto L_0896EF98;
    }
L_0896EF98:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29132), 0u);
    goto L_0896EFA0;
L_0896EFA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EFB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896F030;
      }
      goto L_0896EFDC;
    }
L_0896EFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-17876)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896F008;
      }
      goto L_0896EFEC;
    }
L_0896EFEC:
    ctx.gpr[31] = (0x0896EFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896EFF4u) goto L_0896EFF4;
    return;
L_0896EFF4:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18056));
    ctx.gpr[31] = (0x0896F004u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896F004u) goto L_0896F004;
    return;
L_0896F004:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-17876), ctx.gpr[17]);
    goto L_0896F008;
L_0896F008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-17692)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0896F030;
      }
      goto L_0896F014;
    }
L_0896F014:
    ctx.gpr[31] = (0x0896F01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896F01Cu) goto L_0896F01C;
    return;
L_0896F01C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17872));
    ctx.gpr[31] = (0x0896F02Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896F02Cu) goto L_0896F02C;
    return;
L_0896F02C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-17692), ctx.gpr[17]);
    goto L_0896F030;
L_0896F030:
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
L_0896F048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896F0C8;
      }
      goto L_0896F068;
    }
L_0896F068:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(30768));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28676), ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29128), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896F09Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30580));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896F09Cu) goto L_0896F09C;
    return;
L_0896F09C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896F0C0;
      }
      goto L_0896F0A4;
    }
L_0896F0A4:
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17688));
    ctx.gpr[31] = (0x0896F0B8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3880));
    goto L_0896E688;
L_0896F0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F0C8;
      }
      goto L_0896F0C0;
    }
L_0896F0C0:
    ctx.gpr[31] = (0x0896F0C8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896F0D8;
L_0896F0C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F0D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (2199u << 16u);
      if (branch_taken) {
          goto L_0896F108;
      }
      goto L_0896F0EC;
    }
L_0896F0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896F100u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896F100u) goto L_0896F100;
    return;
L_0896F100:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17508), ctx.gpr[2]);
    goto L_0896F108;
L_0896F108:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28676)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30768));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30580));
    ctx.gpr[31] = (0x0896F134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896F134u) goto L_0896F134;
    return;
L_0896F134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896F158;
      }
      goto L_0896F13C;
    }
L_0896F13C:
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17504));
    ctx.gpr[31] = (0x0896F150u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3728));
    goto L_0896E688;
L_0896F150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F160;
      }
      goto L_0896F158;
    }
L_0896F158:
    ctx.gpr[31] = (0x0896F160u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896F170;
L_0896F160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F1A4;
      }
      goto L_0896F184;
    }
L_0896F184:
    ctx.gpr[7] = (2199u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896F19Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6928));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 479u, 0x08A6DFC8u>(ctx, &aot_mem) && ctx.pc == 0x0896F19Cu) goto L_0896F19C;
    return;
L_0896F19C:
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17324), ctx.gpr[2]);
    goto L_0896F1A4;
L_0896F1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0896F1B8;
      }
      goto L_0896F1B0;
    }
L_0896F1B0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29128), 0u);
    goto L_0896F1B8;
L_0896F1B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F1C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-17508)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (2224u << 16u);
      if (branch_taken) {
          goto L_0896F20C;
      }
      goto L_0896F1F0;
    }
L_0896F1F0:
    ctx.gpr[31] = (0x0896F1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896F1F8u) goto L_0896F1F8;
    return;
L_0896F1F8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17688));
    ctx.gpr[31] = (0x0896F208u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896F208u) goto L_0896F208;
    return;
L_0896F208:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-17508), ctx.gpr[17]);
    goto L_0896F20C;
L_0896F20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-17324)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0896F234;
      }
      goto L_0896F218;
    }
L_0896F218:
    ctx.gpr[31] = (0x0896F220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 310u, 0x08A6D484u>(ctx, &aot_mem) && ctx.pc == 0x0896F220u) goto L_0896F220;
    return;
L_0896F220:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17504));
    ctx.gpr[31] = (0x0896F230u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0896F230u) goto L_0896F230;
    return;
L_0896F230:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-17324), ctx.gpr[17]);
    goto L_0896F234;
L_0896F234:
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
L_0896F24C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28672), ctx.gpr[4]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F280;
      }
      goto L_0896F278;
    }
L_0896F278:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F294;
      }
      goto L_0896F280;
    }
L_0896F280:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0896F298;
      }
      goto L_0896F28C;
    }
L_0896F28C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F294;
L_0896F294:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F298;
L_0896F298:
    ctx.gpr[31] = (0x0896F2A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F2A0u) goto L_0896F2A0;
    return;
L_0896F2A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F2C0;
      }
      goto L_0896F2A8;
    }
L_0896F2A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F2B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26808));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F2B4u) goto L_0896F2B4;
    return;
L_0896F2B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F2C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F2C0u) goto L_0896F2C0;
    return;
L_0896F2C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F2D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F300;
      }
      goto L_0896F2F8;
    }
L_0896F2F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F318;
      }
      goto L_0896F300;
    }
L_0896F300:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F31C;
    }
    goto L_0896F314;
L_0896F314:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F318;
L_0896F318:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F31C;
L_0896F31C:
    ctx.gpr[31] = (0x0896F324u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F324u) goto L_0896F324;
    return;
L_0896F324:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F344;
      }
      goto L_0896F32C;
    }
L_0896F32C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F338u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27280));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F338u) goto L_0896F338;
    return;
L_0896F338:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F344u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F344u) goto L_0896F344;
    return;
L_0896F344:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F36Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0896F384;
L_0896F36C:
    ctx.gpr[31] = (0x0896F374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896F408;
L_0896F374:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F3B0;
      }
      goto L_0896F3A8;
    }
L_0896F3A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F3C8;
      }
      goto L_0896F3B0;
    }
L_0896F3B0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F3CC;
    }
    goto L_0896F3C4;
L_0896F3C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F3C8;
L_0896F3C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F3CC;
L_0896F3CC:
    ctx.gpr[31] = (0x0896F3D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F3D4u) goto L_0896F3D4;
    return;
L_0896F3D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F3F4;
      }
      goto L_0896F3DC;
    }
L_0896F3DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F3E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27656));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F3E8u) goto L_0896F3E8;
    return;
L_0896F3E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F3F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F3F4u) goto L_0896F3F4;
    return;
L_0896F3F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F434;
      }
      goto L_0896F42C;
    }
L_0896F42C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F44C;
      }
      goto L_0896F434;
    }
L_0896F434:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F450;
    }
    goto L_0896F448;
L_0896F448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F44C;
L_0896F44C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F450;
L_0896F450:
    ctx.gpr[31] = (0x0896F458u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F458u) goto L_0896F458;
    return;
L_0896F458:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F478;
      }
      goto L_0896F460;
    }
L_0896F460:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F46Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27664));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F46Cu) goto L_0896F46C;
    return;
L_0896F46C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F478u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F478u) goto L_0896F478;
    return;
L_0896F478:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F48C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F4B8;
      }
      goto L_0896F4B0;
    }
L_0896F4B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F4D0;
      }
      goto L_0896F4B8;
    }
L_0896F4B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F4D4;
    }
    goto L_0896F4CC;
L_0896F4CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F4D0;
L_0896F4D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F4D4;
L_0896F4D4:
    ctx.gpr[31] = (0x0896F4DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F4DCu) goto L_0896F4DC;
    return;
L_0896F4DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F4FC;
      }
      goto L_0896F4E4;
    }
L_0896F4E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F4F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27136));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F4F0u) goto L_0896F4F0;
    return;
L_0896F4F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F4FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F4FCu) goto L_0896F4FC;
    return;
L_0896F4FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F53C;
      }
      goto L_0896F534;
    }
L_0896F534:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F554;
      }
      goto L_0896F53C;
    }
L_0896F53C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F558;
    }
    goto L_0896F550;
L_0896F550:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F554;
L_0896F554:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F558;
L_0896F558:
    ctx.gpr[31] = (0x0896F560u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F560u) goto L_0896F560;
    return;
L_0896F560:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F580;
      }
      goto L_0896F568;
    }
L_0896F568:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F574u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27016));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F574u) goto L_0896F574;
    return;
L_0896F574:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F580u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F580u) goto L_0896F580;
    return;
L_0896F580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25184));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F640;
      }
      goto L_0896F638;
    }
L_0896F638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F658;
      }
      goto L_0896F640;
    }
L_0896F640:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F65C;
    }
    goto L_0896F654;
L_0896F654:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F658;
L_0896F658:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F65C;
L_0896F65C:
    ctx.gpr[31] = (0x0896F664u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F664u) goto L_0896F664;
    return;
L_0896F664:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F684;
      }
      goto L_0896F66C;
    }
L_0896F66C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F678u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27480));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F678u) goto L_0896F678;
    return;
L_0896F678:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F684u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F684u) goto L_0896F684;
    return;
L_0896F684:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F6C4;
      }
      goto L_0896F6BC;
    }
L_0896F6BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F6DC;
      }
      goto L_0896F6C4;
    }
L_0896F6C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F6E0;
    }
    goto L_0896F6D8;
L_0896F6D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F6DC;
L_0896F6DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F6E0;
L_0896F6E0:
    ctx.gpr[31] = (0x0896F6E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F6E8u) goto L_0896F6E8;
    return;
L_0896F6E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F708;
      }
      goto L_0896F6F0;
    }
L_0896F6F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F6FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27544));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F6FCu) goto L_0896F6FC;
    return;
L_0896F6FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F708u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F708u) goto L_0896F708;
    return;
L_0896F708:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F71C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F748;
      }
      goto L_0896F740;
    }
L_0896F740:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F760;
      }
      goto L_0896F748;
    }
L_0896F748:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F764;
    }
    goto L_0896F75C;
L_0896F75C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F760;
L_0896F760:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F764;
L_0896F764:
    ctx.gpr[31] = (0x0896F76Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F76Cu) goto L_0896F76C;
    return;
L_0896F76C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F78C;
      }
      goto L_0896F774;
    }
L_0896F774:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F780u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27584));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F780u) goto L_0896F780;
    return;
L_0896F780:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F78Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F78Cu) goto L_0896F78C;
    return;
L_0896F78C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F7A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F7CC;
      }
      goto L_0896F7C4;
    }
L_0896F7C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F7E4;
      }
      goto L_0896F7CC;
    }
L_0896F7CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F7E8;
    }
    goto L_0896F7E0;
L_0896F7E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F7E4;
L_0896F7E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F7E8;
L_0896F7E8:
    ctx.gpr[31] = (0x0896F7F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F7F0u) goto L_0896F7F0;
    return;
L_0896F7F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F810;
      }
      goto L_0896F7F8;
    }
L_0896F7F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F804u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27568));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F804u) goto L_0896F804;
    return;
L_0896F804:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F810u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F810u) goto L_0896F810;
    return;
L_0896F810:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F950;
      }
      goto L_0896F948;
    }
L_0896F948:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F968;
      }
      goto L_0896F950;
    }
L_0896F950:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F96C;
    }
    goto L_0896F964;
L_0896F964:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F968;
L_0896F968:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F96C;
L_0896F96C:
    ctx.gpr[31] = (0x0896F974u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F974u) goto L_0896F974;
    return;
L_0896F974:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896F994;
      }
      goto L_0896F97C;
    }
L_0896F97C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F988u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27216));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896F988u) goto L_0896F988;
    return;
L_0896F988:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F994u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F994u) goto L_0896F994;
    return;
L_0896F994:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F9A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896F9D4;
      }
      goto L_0896F9CC;
    }
L_0896F9CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896F9EC;
      }
      goto L_0896F9D4;
    }
L_0896F9D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896F9F0;
    }
    goto L_0896F9E8;
L_0896F9E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896F9EC;
L_0896F9EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F9F0;
L_0896F9F0:
    ctx.gpr[31] = (0x0896F9F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896F9F8u) goto L_0896F9F8;
    return;
L_0896F9F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FA18;
      }
      goto L_0896FA00;
    }
L_0896FA00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FA0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27296));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FA0Cu) goto L_0896FA0C;
    return;
L_0896FA0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FA18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FA18u) goto L_0896FA18;
    return;
L_0896FA18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FAB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FADC;
      }
      goto L_0896FAD4;
    }
L_0896FAD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FAF4;
      }
      goto L_0896FADC;
    }
L_0896FADC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FAF8;
    }
    goto L_0896FAF0;
L_0896FAF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FAF4;
L_0896FAF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FAF8;
L_0896FAF8:
    ctx.gpr[31] = (0x0896FB00u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FB00u) goto L_0896FB00;
    return;
L_0896FB00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FB20;
      }
      goto L_0896FB08;
    }
L_0896FB08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FB14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27448));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FB14u) goto L_0896FB14;
    return;
L_0896FB14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FB20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FB20u) goto L_0896FB20;
    return;
L_0896FB20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FB60;
      }
      goto L_0896FB58;
    }
L_0896FB58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FB78;
      }
      goto L_0896FB60;
    }
L_0896FB60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FB7C;
    }
    goto L_0896FB74;
L_0896FB74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FB78;
L_0896FB78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FB7C;
L_0896FB7C:
    ctx.gpr[31] = (0x0896FB84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FB84u) goto L_0896FB84;
    return;
L_0896FB84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FBA4;
      }
      goto L_0896FB8C;
    }
L_0896FB8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FB98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27440));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FB98u) goto L_0896FB98;
    return;
L_0896FB98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FBA4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FBA4u) goto L_0896FBA4;
    return;
L_0896FBA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FBB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FBE4;
      }
      goto L_0896FBDC;
    }
L_0896FBDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FBFC;
      }
      goto L_0896FBE4;
    }
L_0896FBE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FC00;
    }
    goto L_0896FBF8;
L_0896FBF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FBFC;
L_0896FBFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FC00;
L_0896FC00:
    ctx.gpr[31] = (0x0896FC08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FC08u) goto L_0896FC08;
    return;
L_0896FC08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FC28;
      }
      goto L_0896FC10;
    }
L_0896FC10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FC1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27592));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FC1Cu) goto L_0896FC1C;
    return;
L_0896FC1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FC28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FC28u) goto L_0896FC28;
    return;
L_0896FC28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FC68;
      }
      goto L_0896FC60;
    }
L_0896FC60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FC80;
      }
      goto L_0896FC68;
    }
L_0896FC68:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FC84;
    }
    goto L_0896FC7C;
L_0896FC7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FC80;
L_0896FC80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FC84;
L_0896FC84:
    ctx.gpr[31] = (0x0896FC8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FC8Cu) goto L_0896FC8C;
    return;
L_0896FC8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FCAC;
      }
      goto L_0896FC94;
    }
L_0896FC94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FCA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27608));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FCA0u) goto L_0896FCA0;
    return;
L_0896FCA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FCACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FCACu) goto L_0896FCAC;
    return;
L_0896FCAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FCC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FCEC;
      }
      goto L_0896FCE4;
    }
L_0896FCE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FD04;
      }
      goto L_0896FCEC;
    }
L_0896FCEC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FD08;
    }
    goto L_0896FD00;
L_0896FD00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FD04;
L_0896FD04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FD08;
L_0896FD08:
    ctx.gpr[31] = (0x0896FD10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FD10u) goto L_0896FD10;
    return;
L_0896FD10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FD30;
      }
      goto L_0896FD18;
    }
L_0896FD18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FD24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27304));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FD24u) goto L_0896FD24;
    return;
L_0896FD24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FD30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FD30u) goto L_0896FD30;
    return;
L_0896FD30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FD70;
      }
      goto L_0896FD68;
    }
L_0896FD68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FD88;
      }
      goto L_0896FD70;
    }
L_0896FD70:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FD8C;
    }
    goto L_0896FD84;
L_0896FD84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FD88;
L_0896FD88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FD8C;
L_0896FD8C:
    ctx.gpr[31] = (0x0896FD94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FD94u) goto L_0896FD94;
    return;
L_0896FD94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FDB4;
      }
      goto L_0896FD9C;
    }
L_0896FD9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FDA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27312));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FDA8u) goto L_0896FDA8;
    return;
L_0896FDA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FDB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FDB4u) goto L_0896FDB4;
    return;
L_0896FDB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FDC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FDF4;
      }
      goto L_0896FDEC;
    }
L_0896FDEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FE0C;
      }
      goto L_0896FDF4;
    }
L_0896FDF4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FE10;
    }
    goto L_0896FE08;
L_0896FE08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FE0C;
L_0896FE0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FE10;
L_0896FE10:
    ctx.gpr[31] = (0x0896FE18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FE18u) goto L_0896FE18;
    return;
L_0896FE18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FE38;
      }
      goto L_0896FE20;
    }
L_0896FE20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FE2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27336));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FE2Cu) goto L_0896FE2C;
    return;
L_0896FE2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FE38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FE38u) goto L_0896FE38;
    return;
L_0896FE38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FE4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FE78;
      }
      goto L_0896FE70;
    }
L_0896FE70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FE90;
      }
      goto L_0896FE78;
    }
L_0896FE78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FE94;
    }
    goto L_0896FE8C;
L_0896FE8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FE90;
L_0896FE90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FE94;
L_0896FE94:
    ctx.gpr[31] = (0x0896FE9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FE9Cu) goto L_0896FE9C;
    return;
L_0896FE9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FEBC;
      }
      goto L_0896FEA4;
    }
L_0896FEA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FEB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27600));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FEB0u) goto L_0896FEB0;
    return;
L_0896FEB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FEBCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FEBCu) goto L_0896FEBC;
    return;
L_0896FEBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FEFC;
      }
      goto L_0896FEF4;
    }
L_0896FEF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FF14;
      }
      goto L_0896FEFC;
    }
L_0896FEFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FF18;
    }
    goto L_0896FF10;
L_0896FF10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FF14;
L_0896FF14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FF18;
L_0896FF18:
    ctx.gpr[31] = (0x0896FF20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FF20u) goto L_0896FF20;
    return;
L_0896FF20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0896FF40;
      }
      goto L_0896FF28;
    }
L_0896FF28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FF34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27320));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 689u, 0x08A83F90u>(ctx, &aot_mem) && ctx.pc == 0x0896FF34u) goto L_0896FF34;
    return;
L_0896FF34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896FF40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem) && ctx.pc == 0x0896FF40u) goto L_0896FF40;
    return;
L_0896FF40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FF54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896FF68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 51u, 0x08970288u>(ctx, &aot_mem) && ctx.pc == 0x0896FF68u) goto L_0896FF68;
    return;
L_0896FF68:
    ctx.gpr[31] = (0x0896FF70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 61u, 0x0897030Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FF70u) goto L_0896FF70;
    return;
L_0896FF70:
    ctx.gpr[31] = (0x0896FF78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 71u, 0x08970390u>(ctx, &aot_mem) && ctx.pc == 0x0896FF78u) goto L_0896FF78;
    return;
L_0896FF78:
    ctx.gpr[31] = (0x0896FF80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 81u, 0x08970414u>(ctx, &aot_mem) && ctx.pc == 0x0896FF80u) goto L_0896FF80;
    return;
L_0896FF80:
    ctx.gpr[31] = (0x0896FF88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 91u, 0x08970498u>(ctx, &aot_mem) && ctx.pc == 0x0896FF88u) goto L_0896FF88;
    return;
L_0896FF88:
    ctx.gpr[31] = (0x0896FF90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 101u, 0x0897051Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FF90u) goto L_0896FF90;
    return;
L_0896FF90:
    ctx.gpr[31] = (0x0896FF98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 111u, 0x089705A0u>(ctx, &aot_mem) && ctx.pc == 0x0896FF98u) goto L_0896FF98;
    return;
L_0896FF98:
    ctx.gpr[31] = (0x0896FFA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 121u, 0x08970624u>(ctx, &aot_mem) && ctx.pc == 0x0896FFA0u) goto L_0896FFA0;
    return;
L_0896FFA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896FFDC;
      }
      goto L_0896FFD4;
    }
L_0896FFD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0896FFF4;
      }
      goto L_0896FFDC;
    }
L_0896FFDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0896FFF8;
    }
    goto L_0896FFF0;
L_0896FFF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0896FFF4;
L_0896FFF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896FFF8;
L_0896FFF8:
    ctx.gpr[31] = (0x08970000u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 209u, 0x08A853D0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0090(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0090_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_90(Runtime &runtime) {
    runtime.register_generated_unit(90u, 0x0896C000u, 16384u, &recomp_unit_0090, &recomp_unit_0090_entry);
    runtime.register_function(0x0896C004u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C01Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C034u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C03Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C044u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C05Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C084u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C098u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C114u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C124u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C130u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C140u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C148u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C150u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C158u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C16Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C174u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C188u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C190u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C198u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C200u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C208u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C210u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C22Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C23Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C248u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C260u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C284u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C290u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C298u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C300u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C30Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C31Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C324u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C330u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C354u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C360u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C370u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C424u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C44Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C458u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C468u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C484u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C498u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C504u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C548u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C56Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C580u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C754u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C770u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C778u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C784u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C870u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C928u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C940u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C970u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C990u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CACCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D004u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D01Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D034u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D04Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D060u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D068u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D078u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D080u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D088u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D094u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D09Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D12Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D138u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D16Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D178u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D198u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D208u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D228u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D244u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D250u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D258u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D27Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D29Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D314u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D328u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D354u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D360u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D37Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D384u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D38Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D398u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D400u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D408u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D410u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D414u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D41Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D440u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D54Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D554u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D584u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D620u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D64Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D66Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D694u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D708u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D72Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D770u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D798u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D83Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D848u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D878u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D884u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D88Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D90Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D92Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D958u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D988u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E00Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E044u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E060u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E07Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E090u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E100u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E118u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E124u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E144u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E150u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E184u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E194u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E218u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E234u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E248u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E258u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E260u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E268u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E270u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E278u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E280u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E28Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E294u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E30Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E320u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E344u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E368u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E380u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E394u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E400u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E414u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E43Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E44Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E458u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E478u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E488u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E494u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E59Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E610u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E61Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E624u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E630u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E650u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E658u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E674u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E688u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E714u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E72Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E734u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E744u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E74Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E750u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E758u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E760u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E768u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E770u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E794u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E804u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E80Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E814u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E85Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E90Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E91Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E928u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E944u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E954u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E960u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E970u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E98Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F004u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F008u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F014u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F01Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F02Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F030u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F048u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F068u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F09Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F100u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F108u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F134u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F13Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F150u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F158u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F160u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F170u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F184u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F19Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F208u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F20Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F218u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F220u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F230u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F234u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F24Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F278u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F280u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F28Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F294u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F298u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F300u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F314u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F318u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F31Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F324u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F32Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F338u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F344u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F36Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F374u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F384u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F408u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F434u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F448u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F44Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F450u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F458u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F460u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F46Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F478u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F48Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F510u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F534u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F53Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F550u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F554u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F558u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F560u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F568u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F580u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F614u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F640u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F654u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F658u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F65Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F664u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F66Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F678u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F684u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F698u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F708u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F740u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F748u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F75Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F760u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F764u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F76Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F780u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F804u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F810u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F924u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F948u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F964u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F968u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F96Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F974u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F988u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F994u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FADCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FED0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFF8u, &recomp_unit_0090, "recomp_unit_0090");
}
} // namespace psprecomp

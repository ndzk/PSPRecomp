#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0034[4081] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 23, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0,
    56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0,
    101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 118, 0, 119, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0,
    139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0,
    162, 0, 163, 0, 0, 0, 164, 0, 0, 165, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0,
    236, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 265, 0, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0,
    0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 289, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0,
    0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0,
    0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 318, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0,
    0, 0, 345, 0, 0, 346, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373,
    0, 0, 0, 374, 0, 0, 375, 376, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430,
    0, 0, 0, 431, 0, 0, 432, 433, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 0, 457, 458, 0, 0, 459, 0, 460, 0, 461, 0,
    0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0,
    467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0,
    480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0,
    502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0,
    511, 0, 512, 0, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0,
    523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0,
    0, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 553, 554, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558,
    0, 559, 0, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 568, 569, 0, 570, 0, 571, 0, 0,
    0, 572, 0, 573, 0, 574, 0, 0, 0, 575, 0, 576, 577, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0,
    0, 0, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 0, 598, 0,
    599, 0, 600, 0, 601, 0, 602, 0, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0,
    0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0,
    0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 630,
    0, 631, 0, 632, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643,
    0, 644, 0, 645, 0, 0, 0, 646, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 654, 0,
    655, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 0, 0,
    668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0,
    681, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0,
    0, 701, 0, 702, 0, 0, 703, 0, 0, 704, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714,
    0, 715, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0,
    731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0,
    738, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0,
    744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761,
};
void recomp_unit_0034_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0888C000u;
        entry_id = (entry_delta < 16324u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0034[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888C000;
    case 2u: goto L_0888C014;
    case 3u: goto L_0888C020;
    case 4u: goto L_0888C0B4;
    case 5u: goto L_0888C0D4;
    case 6u: goto L_0888C10C;
    case 7u: goto L_0888C118;
    case 8u: goto L_0888C13C;
    case 9u: goto L_0888C158;
    case 10u: goto L_0888C18C;
    case 11u: goto L_0888C1A4;
    case 12u: goto L_0888C1D0;
    case 13u: goto L_0888C1E4;
    case 14u: goto L_0888C22C;
    case 15u: goto L_0888C254;
    case 16u: goto L_0888C25C;
    case 17u: goto L_0888C274;
    case 18u: goto L_0888C288;
    case 19u: goto L_0888C2A8;
    case 20u: goto L_0888C2CC;
    case 21u: goto L_0888C2DC;
    case 22u: goto L_0888C2F0;
    case 23u: goto L_0888C2F4;
    case 24u: goto L_0888C304;
    case 25u: goto L_0888C314;
    case 26u: goto L_0888C32C;
    case 27u: goto L_0888C354;
    case 28u: goto L_0888C370;
    case 29u: goto L_0888C388;
    case 30u: goto L_0888C3B0;
    case 31u: goto L_0888C3C8;
    case 32u: goto L_0888C3D0;
    case 33u: goto L_0888C3FC;
    case 34u: goto L_0888C410;
    case 35u: goto L_0888C42C;
    case 36u: goto L_0888C43C;
    case 37u: goto L_0888C454;
    case 38u: goto L_0888C46C;
    case 39u: goto L_0888C488;
    case 40u: goto L_0888C49C;
    case 41u: goto L_0888C4A8;
    case 42u: goto L_0888C4B8;
    case 43u: goto L_0888C510;
    case 44u: goto L_0888C524;
    case 45u: goto L_0888C538;
    case 46u: goto L_0888C550;
    case 47u: goto L_0888C56C;
    case 48u: goto L_0888C5BC;
    case 49u: goto L_0888C5CC;
    case 50u: goto L_0888C5E8;
    case 51u: goto L_0888C600;
    case 52u: goto L_0888C614;
    case 53u: goto L_0888C640;
    case 54u: goto L_0888C664;
    case 55u: goto L_0888C674;
    case 56u: goto L_0888C680;
    case 57u: goto L_0888C698;
    case 58u: goto L_0888C6A8;
    case 59u: goto L_0888C6D8;
    case 60u: goto L_0888C6E0;
    case 61u: goto L_0888C710;
    case 62u: goto L_0888C718;
    case 63u: goto L_0888C744;
    case 64u: goto L_0888C74C;
    case 65u: goto L_0888C768;
    case 66u: goto L_0888C7B0;
    case 67u: goto L_0888C7D8;
    case 68u: goto L_0888C7E0;
    case 69u: goto L_0888C7F8;
    case 70u: goto L_0888C80C;
    case 71u: goto L_0888C82C;
    case 72u: goto L_0888C854;
    case 73u: goto L_0888C85C;
    case 74u: goto L_0888C86C;
    case 75u: goto L_0888C87C;
    case 76u: goto L_0888C894;
    case 77u: goto L_0888C8BC;
    case 78u: goto L_0888C8C4;
    case 79u: goto L_0888C8DC;
    case 80u: goto L_0888C8F0;
    case 81u: goto L_0888C910;
    case 82u: goto L_0888C978;
    case 83u: goto L_0888C9E4;
    case 84u: goto L_0888CA18;
    case 85u: goto L_0888CA40;
    case 86u: goto L_0888CA50;
    case 87u: goto L_0888CA80;
    case 88u: goto L_0888CA9C;
    case 89u: goto L_0888CABC;
    case 90u: goto L_0888CAC4;
    case 91u: goto L_0888CACC;
    case 92u: goto L_0888CAD4;
    case 93u: goto L_0888CAE4;
    case 94u: goto L_0888CAF4;
    case 95u: goto L_0888CB04;
    case 96u: goto L_0888CB34;
    case 97u: goto L_0888CB3C;
    case 98u: goto L_0888CB54;
    case 99u: goto L_0888CB64;
    case 100u: goto L_0888CB78;
    case 101u: goto L_0888CB80;
    case 102u: goto L_0888CB98;
    case 103u: goto L_0888CBA8;
    case 104u: goto L_0888CBCC;
    case 105u: goto L_0888CC08;
    case 106u: goto L_0888CC24;
    case 107u: goto L_0888CC3C;
    case 108u: goto L_0888CC44;
    case 109u: goto L_0888CC54;
    case 110u: goto L_0888CC74;
    case 111u: goto L_0888CC80;
    case 112u: goto L_0888CC88;
    case 113u: goto L_0888CCA0;
    case 114u: goto L_0888CCC4;
    case 115u: goto L_0888CCEC;
    case 116u: goto L_0888CCF4;
    case 117u: goto L_0888CD04;
    case 118u: goto L_0888CD14;
    case 119u: goto L_0888CD1C;
    case 120u: goto L_0888CD20;
    case 121u: goto L_0888CD30;
    case 122u: goto L_0888CD40;
    case 123u: goto L_0888CD58;
    case 124u: goto L_0888CD7C;
    case 125u: goto L_0888CD98;
    case 126u: goto L_0888CDA8;
    case 127u: goto L_0888CE04;
    case 128u: goto L_0888CE5C;
    case 129u: goto L_0888CEB0;
    case 130u: goto L_0888CEC0;
    case 131u: goto L_0888CEDC;
    case 132u: goto L_0888CEF4;
    case 133u: goto L_0888CF0C;
    case 134u: goto L_0888CF28;
    case 135u: goto L_0888CF7C;
    case 136u: goto L_0888CFCC;
    case 137u: goto L_0888CFDC;
    case 138u: goto L_0888CFE8;
    case 139u: goto L_0888D000;
    case 140u: goto L_0888D00C;
    case 141u: goto L_0888D034;
    case 142u: goto L_0888D04C;
    case 143u: goto L_0888D060;
    case 144u: goto L_0888D068;
    case 145u: goto L_0888D080;
    case 146u: goto L_0888D090;
    case 147u: goto L_0888D0A4;
    case 148u: goto L_0888D0AC;
    case 149u: goto L_0888D0C4;
    case 150u: goto L_0888D0D4;
    case 151u: goto L_0888D0F8;
    case 152u: goto L_0888D178;
    case 153u: goto L_0888D18C;
    case 154u: goto L_0888D210;
    case 155u: goto L_0888D25C;
    case 156u: goto L_0888D26C;
    case 157u: goto L_0888D27C;
    case 158u: goto L_0888D2B4;
    case 159u: goto L_0888D2D8;
    case 160u: goto L_0888D2E0;
    case 161u: goto L_0888D2F0;
    case 162u: goto L_0888D300;
    case 163u: goto L_0888D308;
    case 164u: goto L_0888D318;
    case 165u: goto L_0888D324;
    case 166u: goto L_0888D328;
    case 167u: goto L_0888D334;
    case 168u: goto L_0888D34C;
    case 169u: goto L_0888D3A0;
    case 170u: goto L_0888D3BC;
    case 171u: goto L_0888D3CC;
    case 172u: goto L_0888D448;
    case 173u: goto L_0888D4BC;
    case 174u: goto L_0888D4D4;
    case 175u: goto L_0888D500;
    case 176u: goto L_0888D510;
    case 177u: goto L_0888D528;
    case 178u: goto L_0888D540;
    case 179u: goto L_0888D58C;
    case 180u: goto L_0888D5A0;
    case 181u: goto L_0888D5C8;
    case 182u: goto L_0888D5E0;
    case 183u: goto L_0888D618;
    case 184u: goto L_0888D64C;
    case 185u: goto L_0888D654;
    case 186u: goto L_0888D694;
    case 187u: goto L_0888D6BC;
    case 188u: goto L_0888D6C4;
    case 189u: goto L_0888D6DC;
    case 190u: goto L_0888D6F0;
    case 191u: goto L_0888D704;
    case 192u: goto L_0888D718;
    case 193u: goto L_0888D738;
    case 194u: goto L_0888D770;
    case 195u: goto L_0888D788;
    case 196u: goto L_0888D7B8;
    case 197u: goto L_0888D7C8;
    case 198u: goto L_0888D7DC;
    case 199u: goto L_0888D7EC;
    case 200u: goto L_0888D828;
    case 201u: goto L_0888D860;
    case 202u: goto L_0888D86C;
    case 203u: goto L_0888D894;
    case 204u: goto L_0888D8A0;
    case 205u: goto L_0888D8C0;
    case 206u: goto L_0888D8E4;
    case 207u: goto L_0888D8F0;
    case 208u: goto L_0888D904;
    case 209u: goto L_0888D90C;
    case 210u: goto L_0888D924;
    case 211u: goto L_0888D954;
    case 212u: goto L_0888D95C;
    case 213u: goto L_0888D974;
    case 214u: goto L_0888D984;
    case 215u: goto L_0888D998;
    case 216u: goto L_0888D9A0;
    case 217u: goto L_0888D9B8;
    case 218u: goto L_0888D9C8;
    case 219u: goto L_0888D9DC;
    case 220u: goto L_0888D9E4;
    case 221u: goto L_0888D9FC;
    case 222u: goto L_0888DA0C;
    case 223u: goto L_0888DA20;
    case 224u: goto L_0888DA28;
    case 225u: goto L_0888DA40;
    case 226u: goto L_0888DA50;
    case 227u: goto L_0888DA74;
    case 228u: goto L_0888DA94;
    case 229u: goto L_0888DAA4;
    case 230u: goto L_0888DAB4;
    case 231u: goto L_0888DABC;
    case 232u: goto L_0888DACC;
    case 233u: goto L_0888DADC;
    case 234u: goto L_0888DAE4;
    case 235u: goto L_0888DAF4;
    case 236u: goto L_0888DB00;
    case 237u: goto L_0888DB04;
    case 238u: goto L_0888DB10;
    case 239u: goto L_0888DB18;
    case 240u: goto L_0888DB28;
    case 241u: goto L_0888DB38;
    case 242u: goto L_0888DB50;
    case 243u: goto L_0888DB80;
    case 244u: goto L_0888DB88;
    case 245u: goto L_0888DBA0;
    case 246u: goto L_0888DBB0;
    case 247u: goto L_0888DBC4;
    case 248u: goto L_0888DBCC;
    case 249u: goto L_0888DBE4;
    case 250u: goto L_0888DBF4;
    case 251u: goto L_0888DC08;
    case 252u: goto L_0888DC10;
    case 253u: goto L_0888DC28;
    case 254u: goto L_0888DC38;
    case 255u: goto L_0888DC5C;
    case 256u: goto L_0888DC7C;
    case 257u: goto L_0888DC8C;
    case 258u: goto L_0888DC9C;
    case 259u: goto L_0888DCA4;
    case 260u: goto L_0888DCB4;
    case 261u: goto L_0888DCC4;
    case 262u: goto L_0888DCCC;
    case 263u: goto L_0888DCDC;
    case 264u: goto L_0888DCE8;
    case 265u: goto L_0888DCEC;
    case 266u: goto L_0888DCF8;
    case 267u: goto L_0888DD10;
    case 268u: goto L_0888DD40;
    case 269u: goto L_0888DD48;
    case 270u: goto L_0888DD60;
    case 271u: goto L_0888DD70;
    case 272u: goto L_0888DD84;
    case 273u: goto L_0888DD8C;
    case 274u: goto L_0888DDA4;
    case 275u: goto L_0888DDB4;
    case 276u: goto L_0888DDC8;
    case 277u: goto L_0888DDD0;
    case 278u: goto L_0888DDE8;
    case 279u: goto L_0888DDF8;
    case 280u: goto L_0888DE1C;
    case 281u: goto L_0888DE3C;
    case 282u: goto L_0888DE4C;
    case 283u: goto L_0888DE5C;
    case 284u: goto L_0888DE64;
    case 285u: goto L_0888DE74;
    case 286u: goto L_0888DE84;
    case 287u: goto L_0888DE8C;
    case 288u: goto L_0888DE9C;
    case 289u: goto L_0888DEA8;
    case 290u: goto L_0888DEAC;
    case 291u: goto L_0888DEB8;
    case 292u: goto L_0888DED0;
    case 293u: goto L_0888DF00;
    case 294u: goto L_0888DF08;
    case 295u: goto L_0888DF20;
    case 296u: goto L_0888DF30;
    case 297u: goto L_0888DF44;
    case 298u: goto L_0888DF4C;
    case 299u: goto L_0888DF64;
    case 300u: goto L_0888DF74;
    case 301u: goto L_0888DF88;
    case 302u: goto L_0888DF90;
    case 303u: goto L_0888DFA8;
    case 304u: goto L_0888DFB8;
    case 305u: goto L_0888DFCC;
    case 306u: goto L_0888DFD4;
    case 307u: goto L_0888DFEC;
    case 308u: goto L_0888DFFC;
    case 309u: goto L_0888E020;
    case 310u: goto L_0888E040;
    case 311u: goto L_0888E050;
    case 312u: goto L_0888E060;
    case 313u: goto L_0888E068;
    case 314u: goto L_0888E078;
    case 315u: goto L_0888E088;
    case 316u: goto L_0888E090;
    case 317u: goto L_0888E0A0;
    case 318u: goto L_0888E0AC;
    case 319u: goto L_0888E0B0;
    case 320u: goto L_0888E0BC;
    case 321u: goto L_0888E0C4;
    case 322u: goto L_0888E0D4;
    case 323u: goto L_0888E0E4;
    case 324u: goto L_0888E0FC;
    case 325u: goto L_0888E12C;
    case 326u: goto L_0888E134;
    case 327u: goto L_0888E14C;
    case 328u: goto L_0888E15C;
    case 329u: goto L_0888E170;
    case 330u: goto L_0888E178;
    case 331u: goto L_0888E190;
    case 332u: goto L_0888E1A0;
    case 333u: goto L_0888E1B4;
    case 334u: goto L_0888E1BC;
    case 335u: goto L_0888E1D4;
    case 336u: goto L_0888E1E4;
    case 337u: goto L_0888E208;
    case 338u: goto L_0888E228;
    case 339u: goto L_0888E238;
    case 340u: goto L_0888E248;
    case 341u: goto L_0888E250;
    case 342u: goto L_0888E260;
    case 343u: goto L_0888E270;
    case 344u: goto L_0888E278;
    case 345u: goto L_0888E288;
    case 346u: goto L_0888E294;
    case 347u: goto L_0888E298;
    case 348u: goto L_0888E2A4;
    case 349u: goto L_0888E2BC;
    case 350u: goto L_0888E2EC;
    case 351u: goto L_0888E2F4;
    case 352u: goto L_0888E30C;
    case 353u: goto L_0888E31C;
    case 354u: goto L_0888E330;
    case 355u: goto L_0888E338;
    case 356u: goto L_0888E350;
    case 357u: goto L_0888E360;
    case 358u: goto L_0888E374;
    case 359u: goto L_0888E37C;
    case 360u: goto L_0888E394;
    case 361u: goto L_0888E3A4;
    case 362u: goto L_0888E3B8;
    case 363u: goto L_0888E3C0;
    case 364u: goto L_0888E3D8;
    case 365u: goto L_0888E3E8;
    case 366u: goto L_0888E40C;
    case 367u: goto L_0888E42C;
    case 368u: goto L_0888E43C;
    case 369u: goto L_0888E44C;
    case 370u: goto L_0888E454;
    case 371u: goto L_0888E464;
    case 372u: goto L_0888E474;
    case 373u: goto L_0888E47C;
    case 374u: goto L_0888E48C;
    case 375u: goto L_0888E498;
    case 376u: goto L_0888E49C;
    case 377u: goto L_0888E4A8;
    case 378u: goto L_0888E4B0;
    case 379u: goto L_0888E4C0;
    case 380u: goto L_0888E4D0;
    case 381u: goto L_0888E4E8;
    case 382u: goto L_0888E518;
    case 383u: goto L_0888E520;
    case 384u: goto L_0888E538;
    case 385u: goto L_0888E548;
    case 386u: goto L_0888E55C;
    case 387u: goto L_0888E564;
    case 388u: goto L_0888E57C;
    case 389u: goto L_0888E58C;
    case 390u: goto L_0888E5A0;
    case 391u: goto L_0888E5A8;
    case 392u: goto L_0888E5C0;
    case 393u: goto L_0888E5D0;
    case 394u: goto L_0888E5E4;
    case 395u: goto L_0888E5EC;
    case 396u: goto L_0888E604;
    case 397u: goto L_0888E614;
    case 398u: goto L_0888E638;
    case 399u: goto L_0888E698;
    case 400u: goto L_0888E6B8;
    case 401u: goto L_0888E6C4;
    case 402u: goto L_0888E6EC;
    case 403u: goto L_0888E6FC;
    case 404u: goto L_0888E728;
    case 405u: goto L_0888E734;
    case 406u: goto L_0888E744;
    case 407u: goto L_0888E754;
    case 408u: goto L_0888E768;
    case 409u: goto L_0888E778;
    case 410u: goto L_0888E784;
    case 411u: goto L_0888E7A4;
    case 412u: goto L_0888E7B8;
    case 413u: goto L_0888E7DC;
    case 414u: goto L_0888E7EC;
    case 415u: goto L_0888E7F8;
    case 416u: goto L_0888E810;
    case 417u: goto L_0888E820;
    case 418u: goto L_0888E830;
    case 419u: goto L_0888E860;
    case 420u: goto L_0888E880;
    case 421u: goto L_0888E890;
    case 422u: goto L_0888E8A0;
    case 423u: goto L_0888E8A8;
    case 424u: goto L_0888E8B8;
    case 425u: goto L_0888E8C8;
    case 426u: goto L_0888E8D0;
    case 427u: goto L_0888E8DC;
    case 428u: goto L_0888E8E8;
    case 429u: goto L_0888E8F4;
    case 430u: goto L_0888E8FC;
    case 431u: goto L_0888E90C;
    case 432u: goto L_0888E918;
    case 433u: goto L_0888E91C;
    case 434u: goto L_0888E928;
    case 435u: goto L_0888E930;
    case 436u: goto L_0888E940;
    case 437u: goto L_0888E950;
    case 438u: goto L_0888E968;
    case 439u: goto L_0888E998;
    case 440u: goto L_0888E9A0;
    case 441u: goto L_0888E9B8;
    case 442u: goto L_0888E9C8;
    case 443u: goto L_0888E9DC;
    case 444u: goto L_0888E9E4;
    case 445u: goto L_0888E9FC;
    case 446u: goto L_0888EA0C;
    case 447u: goto L_0888EA20;
    case 448u: goto L_0888EA28;
    case 449u: goto L_0888EA40;
    case 450u: goto L_0888EA50;
    case 451u: goto L_0888EA74;
    case 452u: goto L_0888EA94;
    case 453u: goto L_0888EAA4;
    case 454u: goto L_0888EAB4;
    case 455u: goto L_0888EABC;
    case 456u: goto L_0888EACC;
    case 457u: goto L_0888EAD8;
    case 458u: goto L_0888EADC;
    case 459u: goto L_0888EAE8;
    case 460u: goto L_0888EAF0;
    case 461u: goto L_0888EAF8;
    case 462u: goto L_0888EB08;
    case 463u: goto L_0888EB18;
    case 464u: goto L_0888EB30;
    case 465u: goto L_0888EB60;
    case 466u: goto L_0888EB68;
    case 467u: goto L_0888EB80;
    case 468u: goto L_0888EB90;
    case 469u: goto L_0888EBA4;
    case 470u: goto L_0888EBAC;
    case 471u: goto L_0888EBC4;
    case 472u: goto L_0888EBD4;
    case 473u: goto L_0888EBE8;
    case 474u: goto L_0888EBF0;
    case 475u: goto L_0888EC08;
    case 476u: goto L_0888EC18;
    case 477u: goto L_0888EC3C;
    case 478u: goto L_0888EC60;
    case 479u: goto L_0888EC6C;
    case 480u: goto L_0888EC80;
    case 481u: goto L_0888EC88;
    case 482u: goto L_0888EC94;
    case 483u: goto L_0888ECA0;
    case 484u: goto L_0888ECA8;
    case 485u: goto L_0888ECB4;
    case 486u: goto L_0888ECBC;
    case 487u: goto L_0888ECC8;
    case 488u: goto L_0888ECDC;
    case 489u: goto L_0888ECE8;
    case 490u: goto L_0888ED00;
    case 491u: goto L_0888ED14;
    case 492u: goto L_0888ED2C;
    case 493u: goto L_0888ED48;
    case 494u: goto L_0888ED60;
    case 495u: goto L_0888ED70;
    case 496u: goto L_0888ED8C;
    case 497u: goto L_0888EDA4;
    case 498u: goto L_0888EDB4;
    case 499u: goto L_0888EDC4;
    case 500u: goto L_0888EDDC;
    case 501u: goto L_0888EDE8;
    case 502u: goto L_0888EE00;
    case 503u: goto L_0888EE0C;
    case 504u: goto L_0888EE30;
    case 505u: goto L_0888EE3C;
    case 506u: goto L_0888EE4C;
    case 507u: goto L_0888EE54;
    case 508u: goto L_0888EE5C;
    case 509u: goto L_0888EE6C;
    case 510u: goto L_0888EE74;
    case 511u: goto L_0888EE80;
    case 512u: goto L_0888EE88;
    case 513u: goto L_0888EE9C;
    case 514u: goto L_0888EEA4;
    case 515u: goto L_0888EEB0;
    case 516u: goto L_0888EEB8;
    case 517u: goto L_0888EECC;
    case 518u: goto L_0888EED4;
    case 519u: goto L_0888EEDC;
    case 520u: goto L_0888EEE4;
    case 521u: goto L_0888EEEC;
    case 522u: goto L_0888EEF4;
    case 523u: goto L_0888EF00;
    case 524u: goto L_0888EF08;
    case 525u: goto L_0888EF14;
    case 526u: goto L_0888EF1C;
    case 527u: goto L_0888EF3C;
    case 528u: goto L_0888F02C;
    case 529u: goto L_0888F03C;
    case 530u: goto L_0888F0C0;
    case 531u: goto L_0888F0C8;
    case 532u: goto L_0888F0D0;
    case 533u: goto L_0888F134;
    case 534u: goto L_0888F190;
    case 535u: goto L_0888F198;
    case 536u: goto L_0888F1A0;
    case 537u: goto L_0888F1A8;
    case 538u: goto L_0888F1B8;
    case 539u: goto L_0888F268;
    case 540u: goto L_0888F288;
    case 541u: goto L_0888F298;
    case 542u: goto L_0888F2A4;
    case 543u: goto L_0888F2B0;
    case 544u: goto L_0888F308;
    case 545u: goto L_0888F324;
    case 546u: goto L_0888F32C;
    case 547u: goto L_0888F338;
    case 548u: goto L_0888F398;
    case 549u: goto L_0888F3A4;
    case 550u: goto L_0888F3B4;
    case 551u: goto L_0888F3C0;
    case 552u: goto L_0888F3C8;
    case 553u: goto L_0888F3D0;
    case 554u: goto L_0888F3D4;
    case 555u: goto L_0888F3DC;
    case 556u: goto L_0888F3E4;
    case 557u: goto L_0888F3F4;
    case 558u: goto L_0888F3FC;
    case 559u: goto L_0888F404;
    case 560u: goto L_0888F414;
    case 561u: goto L_0888F41C;
    case 562u: goto L_0888F424;
    case 563u: goto L_0888F42C;
    case 564u: goto L_0888F43C;
    case 565u: goto L_0888F448;
    case 566u: goto L_0888F450;
    case 567u: goto L_0888F45C;
    case 568u: goto L_0888F460;
    case 569u: goto L_0888F464;
    case 570u: goto L_0888F46C;
    case 571u: goto L_0888F474;
    case 572u: goto L_0888F484;
    case 573u: goto L_0888F48C;
    case 574u: goto L_0888F494;
    case 575u: goto L_0888F4A4;
    case 576u: goto L_0888F4AC;
    case 577u: goto L_0888F4B0;
    case 578u: goto L_0888F4B4;
    case 579u: goto L_0888F4BC;
    case 580u: goto L_0888F4C4;
    case 581u: goto L_0888F4CC;
    case 582u: goto L_0888F4D4;
    case 583u: goto L_0888F4E0;
    case 584u: goto L_0888F4E8;
    case 585u: goto L_0888F4F0;
    case 586u: goto L_0888F50C;
    case 587u: goto L_0888F514;
    case 588u: goto L_0888F51C;
    case 589u: goto L_0888F524;
    case 590u: goto L_0888F52C;
    case 591u: goto L_0888F534;
    case 592u: goto L_0888F53C;
    case 593u: goto L_0888F544;
    case 594u: goto L_0888F550;
    case 595u: goto L_0888F558;
    case 596u: goto L_0888F560;
    case 597u: goto L_0888F56C;
    case 598u: goto L_0888F578;
    case 599u: goto L_0888F580;
    case 600u: goto L_0888F588;
    case 601u: goto L_0888F590;
    case 602u: goto L_0888F598;
    case 603u: goto L_0888F5A4;
    case 604u: goto L_0888F5B0;
    case 605u: goto L_0888F5B8;
    case 606u: goto L_0888F5C0;
    case 607u: goto L_0888F5C8;
    case 608u: goto L_0888F5D0;
    case 609u: goto L_0888F5D8;
    case 610u: goto L_0888F5E0;
    case 611u: goto L_0888F5E8;
    case 612u: goto L_0888F5F0;
    case 613u: goto L_0888F5F8;
    case 614u: goto L_0888F604;
    case 615u: goto L_0888F660;
    case 616u: goto L_0888F670;
    case 617u: goto L_0888F690;
    case 618u: goto L_0888F6A0;
    case 619u: goto L_0888F6A8;
    case 620u: goto L_0888F6B8;
    case 621u: goto L_0888F6C0;
    case 622u: goto L_0888F6C8;
    case 623u: goto L_0888F728;
    case 624u: goto L_0888F730;
    case 625u: goto L_0888F73C;
    case 626u: goto L_0888F74C;
    case 627u: goto L_0888F758;
    case 628u: goto L_0888F768;
    case 629u: goto L_0888F770;
    case 630u: goto L_0888F77C;
    case 631u: goto L_0888F784;
    case 632u: goto L_0888F78C;
    case 633u: goto L_0888F794;
    case 634u: goto L_0888F7A0;
    case 635u: goto L_0888F7AC;
    case 636u: goto L_0888F7B8;
    case 637u: goto L_0888F7C0;
    case 638u: goto L_0888F7C8;
    case 639u: goto L_0888F7D0;
    case 640u: goto L_0888F7D8;
    case 641u: goto L_0888F7E4;
    case 642u: goto L_0888F7EC;
    case 643u: goto L_0888F7FC;
    case 644u: goto L_0888F804;
    case 645u: goto L_0888F80C;
    case 646u: goto L_0888F81C;
    case 647u: goto L_0888F824;
    case 648u: goto L_0888F830;
    case 649u: goto L_0888F840;
    case 650u: goto L_0888F84C;
    case 651u: goto L_0888F85C;
    case 652u: goto L_0888F864;
    case 653u: goto L_0888F870;
    case 654u: goto L_0888F878;
    case 655u: goto L_0888F880;
    case 656u: goto L_0888F888;
    case 657u: goto L_0888F894;
    case 658u: goto L_0888F8A0;
    case 659u: goto L_0888F8AC;
    case 660u: goto L_0888F8B4;
    case 661u: goto L_0888F8BC;
    case 662u: goto L_0888F8C4;
    case 663u: goto L_0888F8CC;
    case 664u: goto L_0888F8D4;
    case 665u: goto L_0888F8DC;
    case 666u: goto L_0888F8E4;
    case 667u: goto L_0888F8EC;
    case 668u: goto L_0888F900;
    case 669u: goto L_0888F908;
    case 670u: goto L_0888F910;
    case 671u: goto L_0888F918;
    case 672u: goto L_0888F920;
    case 673u: goto L_0888F928;
    case 674u: goto L_0888F938;
    case 675u: goto L_0888F940;
    case 676u: goto L_0888F94C;
    case 677u: goto L_0888F95C;
    case 678u: goto L_0888F968;
    case 679u: goto L_0888F970;
    case 680u: goto L_0888F978;
    case 681u: goto L_0888F980;
    case 682u: goto L_0888F988;
    case 683u: goto L_0888F994;
    case 684u: goto L_0888F9A0;
    case 685u: goto L_0888F9A8;
    case 686u: goto L_0888F9B0;
    case 687u: goto L_0888F9B8;
    case 688u: goto L_0888F9C0;
    case 689u: goto L_0888F9C8;
    case 690u: goto L_0888F9D0;
    case 691u: goto L_0888F9D8;
    case 692u: goto L_0888F9E4;
    case 693u: goto L_0888FA40;
    case 694u: goto L_0888FA50;
    case 695u: goto L_0888FA90;
    case 696u: goto L_0888FAD0;
    case 697u: goto L_0888FADC;
    case 698u: goto L_0888FAE4;
    case 699u: goto L_0888FAEC;
    case 700u: goto L_0888FAF4;
    case 701u: goto L_0888FB04;
    case 702u: goto L_0888FB0C;
    case 703u: goto L_0888FB18;
    case 704u: goto L_0888FB24;
    case 705u: goto L_0888FB28;
    case 706u: goto L_0888FB30;
    case 707u: goto L_0888FB58;
    case 708u: goto L_0888FB60;
    case 709u: goto L_0888FBC0;
    case 710u: goto L_0888FBC8;
    case 711u: goto L_0888FBD4;
    case 712u: goto L_0888FBE8;
    case 713u: goto L_0888FBF4;
    case 714u: goto L_0888FBFC;
    case 715u: goto L_0888FC04;
    case 716u: goto L_0888FC0C;
    case 717u: goto L_0888FC14;
    case 718u: goto L_0888FC24;
    case 719u: goto L_0888FC30;
    case 720u: goto L_0888FC38;
    case 721u: goto L_0888FC40;
    case 722u: goto L_0888FC48;
    case 723u: goto L_0888FC5C;
    case 724u: goto L_0888FC8C;
    case 725u: goto L_0888FC98;
    case 726u: goto L_0888FCB8;
    case 727u: goto L_0888FCD0;
    case 728u: goto L_0888FCDC;
    case 729u: goto L_0888FD5C;
    case 730u: goto L_0888FD6C;
    case 731u: goto L_0888FD80;
    case 732u: goto L_0888FDC4;
    case 733u: goto L_0888FDCC;
    case 734u: goto L_0888FDD4;
    case 735u: goto L_0888FDDC;
    case 736u: goto L_0888FDE8;
    case 737u: goto L_0888FDF8;
    case 738u: goto L_0888FE00;
    case 739u: goto L_0888FE0C;
    case 740u: goto L_0888FE24;
    case 741u: goto L_0888FE2C;
    case 742u: goto L_0888FE3C;
    case 743u: goto L_0888FE70;
    case 744u: goto L_0888FE80;
    case 745u: goto L_0888FE90;
    case 746u: goto L_0888FE98;
    case 747u: goto L_0888FEA8;
    case 748u: goto L_0888FEC0;
    case 749u: goto L_0888FEC8;
    case 750u: goto L_0888FEEC;
    case 751u: goto L_0888FF28;
    case 752u: goto L_0888FF38;
    case 753u: goto L_0888FF4C;
    case 754u: goto L_0888FF68;
    case 755u: goto L_0888FF90;
    case 756u: goto L_0888FF98;
    case 757u: goto L_0888FFA0;
    case 758u: goto L_0888FFA8;
    case 759u: goto L_0888FFB0;
    case 760u: goto L_0888FFB8;
    case 761u: goto L_0888FFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0888C000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24728), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888C014u);
    ctx.gpr[6] = (0u | 540u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888C014u) goto L_0888C014;
    return;
L_0888C014:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x0888C020u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20456));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0888C020u) goto L_0888C020;
    return;
L_0888C020:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12604));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (17060u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17074u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17000u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (17056u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (17054u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 24u);
    ctx.gpr[21] = (ctx.gpr[6] << 24u);
    ctx.gpr[20] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (16688u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20440));
    goto L_0888C0B4;
L_0888C0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888C10C;
      }
      goto L_0888C0D4;
    }
L_0888C0D4:
    ctx.gpr[5] = (17078u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16808u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888C158;
      }
      goto L_0888C10C;
    }
L_0888C10C:
    ctx.gpr[7] = (0u | 8u);
    if (ctx.gpr[5] != ctx.gpr[7]) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_0888C13C;
    }
    goto L_0888C118;
L_0888C118:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888C158;
      }
      goto L_0888C13C;
    }
L_0888C13C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_0888C158;
L_0888C158:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0888C18Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888C18Cu) goto L_0888C18C;
    return;
L_0888C18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0888C1A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888C1A4u) goto L_0888C1A4;
    return;
L_0888C1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[31] = (0x0888C1D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0888C1D0u) goto L_0888C1D0;
    return;
L_0888C1D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888C0B4;
      }
      goto L_0888C1E4;
    }
L_0888C1E4:
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
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888C22C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888C254;
L_0888C254:
    ctx.gpr[31] = (0x0888C25Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888C25Cu) goto L_0888C25C;
    return;
L_0888C25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
      if (branch_taken) {
          goto L_0888C254;
      }
      goto L_0888C274;
    }
L_0888C274:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888C288u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888C288u) goto L_0888C288;
    return;
L_0888C288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24728), 0u);
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
L_0888C2A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888C2CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888C2CCu) goto L_0888C2CC;
    return;
L_0888C2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[31] = (0x0888C2DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888C2DCu) goto L_0888C2DC;
    return;
L_0888C2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0888C314;
      }
      goto L_0888C2F0;
    }
L_0888C2F0:
    ctx.gpr[16] = (0u | 0u);
    goto L_0888C2F4;
L_0888C2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24728)));
    ctx.gpr[31] = (0x0888C304u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888C304u) goto L_0888C304;
    return;
L_0888C304:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888C2F4;
      }
      goto L_0888C314;
    }
L_0888C314:
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
L_0888C32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888C354u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888C354u) goto L_0888C354;
    return;
L_0888C354:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24732), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888C370u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888C370u) goto L_0888C370;
    return;
L_0888C370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (17258u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24732)));
      if (branch_taken) {
          goto L_0888C3B0;
      }
      goto L_0888C388;
    }
L_0888C388:
    ctx.gpr[6] = (17326u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24732)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24732)));
      if (branch_taken) {
          goto L_0888C3C8;
      }
      goto L_0888C3B0;
    }
L_0888C3B0:
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24732)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24732)));
    goto L_0888C3C8;
L_0888C3C8:
    ctx.gpr[31] = (0x0888C3D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0888C3D0u) goto L_0888C3D0;
    return;
L_0888C3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (17106u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    ctx.gpr[31] = (0x0888C3FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0888C3FCu) goto L_0888C3FC;
    return;
L_0888C3FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888C410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888C42Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0888C42Cu) goto L_0888C42C;
    return;
L_0888C42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    ctx.gpr[31] = (0x0888C43Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0888C43Cu) goto L_0888C43C;
    return;
L_0888C43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888C454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888C454u) goto L_0888C454;
    return;
L_0888C454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24732), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888C46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888C488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0888C488u) goto L_0888C488;
    return;
L_0888C488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888C4A8;
      }
      goto L_0888C49C;
    }
L_0888C49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24732)));
    ctx.gpr[31] = (0x0888C4A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0888C4A8u) goto L_0888C4A8;
    return;
L_0888C4A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888C4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888C510u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13228));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0888C510u) goto L_0888C510;
    return;
L_0888C510:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x0888C524u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13264));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0888C524u) goto L_0888C524;
    return;
L_0888C524:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x0888C538u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13300));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0888C538u) goto L_0888C538;
    return;
L_0888C538:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 828u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888C550u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888C550u) goto L_0888C550;
    return;
L_0888C550:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24724), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888C56Cu);
    ctx.gpr[6] = (0u | 828u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888C56Cu) goto L_0888C56C;
    return;
L_0888C56C:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17088u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17200u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16736u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16656u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0888C5BC;
L_0888C5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888C640;
      }
      goto L_0888C5CC;
    }
L_0888C5CC:
    ctx.gpr[6] = (17086u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888C600;
      }
      goto L_0888C5E8;
    }
L_0888C5E8:
    ctx.gpr[6] = (17233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888C614;
      }
      goto L_0888C600;
    }
L_0888C600:
    ctx.gpr[6] = (17199u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_0888C614;
L_0888C614:
    ctx.gpr[6] = (17138u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[6] = (16688u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888C698;
      }
      goto L_0888C640;
    }
L_0888C640:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888C674;
      }
      goto L_0888C664;
    }
L_0888C664:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888C680;
      }
      goto L_0888C674;
    }
L_0888C674:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_0888C680;
L_0888C680:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_0888C698;
L_0888C698:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
      if (branch_taken) {
          goto L_0888C6D8;
      }
      goto L_0888C6A8;
    }
L_0888C6A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0888C6D8;
L_0888C6D8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888C710;
      }
      goto L_0888C6E0;
    }
L_0888C6E0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0888C710;
L_0888C710:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888C744;
      }
      goto L_0888C718;
    }
L_0888C718:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    goto L_0888C744;
L_0888C744:
    ctx.gpr[31] = (0x0888C74Cu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0888C74Cu) goto L_0888C74C;
    return;
L_0888C74C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888C5BC;
      }
      goto L_0888C768;
    }
L_0888C768:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888C7B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888C7D8;
L_0888C7D8:
    ctx.gpr[31] = (0x0888C7E0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888C7E0u) goto L_0888C7E0;
    return;
L_0888C7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
      if (branch_taken) {
          goto L_0888C7D8;
      }
      goto L_0888C7F8;
    }
L_0888C7F8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888C80Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888C80Cu) goto L_0888C80C;
    return;
L_0888C80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24724), 0u);
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
L_0888C82C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888C854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888C854u) goto L_0888C854;
    return;
L_0888C854:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0888C85C;
L_0888C85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24724)));
    ctx.gpr[31] = (0x0888C86Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888C86Cu) goto L_0888C86C;
    return;
L_0888C86C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888C85C;
      }
      goto L_0888C87C;
    }
L_0888C87C:
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
L_0888C894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888C8BC;
L_0888C8BC:
    ctx.gpr[31] = (0x0888C8C4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888C8C4u) goto L_0888C8C4;
    return;
L_0888C8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
      if (branch_taken) {
          goto L_0888C8BC;
      }
      goto L_0888C8DC;
    }
L_0888C8DC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888C8F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888C8F0u) goto L_0888C8F0;
    return;
L_0888C8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24780), 0u);
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
L_0888C910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(12488));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(12512));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888C978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0888C978u) goto L_0888C978;
    return;
L_0888C978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12536));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
      if (branch_taken) {
          goto L_0888CA18;
      }
      goto L_0888C9E4;
    }
L_0888C9E4:
    ctx.gpr[4] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17060u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888CA40;
      }
      goto L_0888CA18;
    }
L_0888CA18:
    ctx.gpr[4] = (16992u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0888CA40;
L_0888CA40:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[31] = (0x0888CA50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0888CA50u) goto L_0888CA50;
    return;
L_0888CA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[31] = (0x0888CA80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0888CA80u) goto L_0888CA80;
    return;
L_0888CA80:
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
L_0888CA9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
      if (branch_taken) {
          goto L_0888CACC;
      }
      goto L_0888CABC;
    }
L_0888CABC:
    ctx.gpr[31] = (0x0888CAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888CAC4u) goto L_0888CAC4;
    return;
L_0888CAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888CAF4;
      }
      goto L_0888CACC;
    }
L_0888CACC:
    ctx.gpr[31] = (0x0888CAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888CAD4u) goto L_0888CAD4;
    return;
L_0888CAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[31] = (0x0888CAE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888CAE4u) goto L_0888CAE4;
    return;
L_0888CAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24780)));
    ctx.gpr[31] = (0x0888CAF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888CAF4u) goto L_0888CAF4;
    return;
L_0888CAF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888CB04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24788)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888CB34;
L_0888CB34:
    ctx.gpr[31] = (0x0888CB3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888CB3Cu) goto L_0888CB3C;
    return;
L_0888CB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24788)));
      if (branch_taken) {
          goto L_0888CB34;
      }
      goto L_0888CB54;
    }
L_0888CB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888CB64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888CB64u) goto L_0888CB64;
    return;
L_0888CB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24788), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888CB78;
L_0888CB78:
    ctx.gpr[31] = (0x0888CB80u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888CB80u) goto L_0888CB80;
    return;
L_0888CB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24792)));
      if (branch_taken) {
          goto L_0888CB78;
      }
      goto L_0888CB98;
    }
L_0888CB98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888CBA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888CBA8u) goto L_0888CBA8;
    return;
L_0888CBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24792), 0u);
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
L_0888CBCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12204));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_0888CC08;
L_0888CC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24788)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0888CC24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888CC24u) goto L_0888CC24;
    return;
L_0888CC24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24788)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0888CC54;
      }
      goto L_0888CC3C;
    }
L_0888CC3C:
    ctx.gpr[31] = (0x0888CC44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888CC44u) goto L_0888CC44;
    return;
L_0888CC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24788)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888CC80;
      }
      goto L_0888CC54;
    }
L_0888CC54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0888CC74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888CC74u) goto L_0888CC74;
    return;
L_0888CC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24788)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0888CC80;
L_0888CC80:
    ctx.gpr[31] = (0x0888CC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0888CC88u) goto L_0888CC88;
    return;
L_0888CC88:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888CC08;
      }
      goto L_0888CCA0;
    }
L_0888CCA0:
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
L_0888CCC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888CD1C;
      }
      goto L_0888CCEC;
    }
L_0888CCEC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888CCF4;
L_0888CCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[31] = (0x0888CD04u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888CD04u) goto L_0888CD04;
    return;
L_0888CD04:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888CCF4;
      }
      goto L_0888CD14;
    }
L_0888CD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888CD40;
      }
      goto L_0888CD1C;
    }
L_0888CD1C:
    ctx.gpr[17] = (0u | 0u);
    goto L_0888CD20;
L_0888CD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24788)));
    ctx.gpr[31] = (0x0888CD30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888CD30u) goto L_0888CD30;
    return;
L_0888CD30:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888CD20;
      }
      goto L_0888CD40;
    }
L_0888CD40:
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
L_0888CD58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888CD7Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888CD7Cu) goto L_0888CD7C;
    return;
L_0888CD7C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24784), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888CD98u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888CD98u) goto L_0888CD98;
    return;
L_0888CD98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
      if (branch_taken) {
          goto L_0888CE04;
      }
      goto L_0888CDA8;
    }
L_0888CDA8:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16920u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17191u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888CE5C;
      }
      goto L_0888CE04;
    }
L_0888CE04:
    ctx.gpr[4] = (17275u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16940u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17186u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17212u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0888CE5C;
L_0888CE5C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0888CEB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24784)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0888CEB0u) goto L_0888CEB0;
    return;
L_0888CEB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888CEC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888CEDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24784)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888CEDCu) goto L_0888CEDC;
    return;
L_0888CEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888CEF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24784)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888CEF4u) goto L_0888CEF4;
    return;
L_0888CEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24784), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888CF0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
      if (branch_taken) {
          goto L_0888CF7C;
      }
      goto L_0888CF28;
    }
L_0888CF28:
    ctx.gpr[6] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16920u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17191u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
      if (branch_taken) {
          goto L_0888CFCC;
      }
      goto L_0888CF7C;
    }
L_0888CF7C:
    ctx.gpr[6] = (17275u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16940u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17186u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17212u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    goto L_0888CFCC;
L_0888CFCC:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x0888CFDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24784)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0888CFDCu) goto L_0888CFDC;
    return;
L_0888CFDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888CFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888D000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24784)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888D000u) goto L_0888D000;
    return;
L_0888D000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D00C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888D034u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24804)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888D034u) goto L_0888D034;
    return;
L_0888D034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D04Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24804)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D04Cu) goto L_0888D04C;
    return;
L_0888D04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24804), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888D060;
L_0888D060:
    ctx.gpr[31] = (0x0888D068u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888D068u) goto L_0888D068;
    return;
L_0888D068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
      if (branch_taken) {
          goto L_0888D060;
      }
      goto L_0888D080;
    }
L_0888D080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D090u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D090u) goto L_0888D090;
    return;
L_0888D090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24808), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888D0A4;
L_0888D0A4:
    ctx.gpr[31] = (0x0888D0ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888D0ACu) goto L_0888D0AC;
    return;
L_0888D0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888D0A4;
      }
      goto L_0888D0C4;
    }
L_0888D0C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D0D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D0D4u) goto L_0888D0D4;
    return;
L_0888D0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
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
L_0888D0F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (17296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (16936u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17064u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (17028u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (17184u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12828));
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_0888D178;
L_0888D178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0888D210;
      }
      goto L_0888D18C;
    }
L_0888D18C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17078u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17153u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0888D25C;
      }
      goto L_0888D210;
    }
L_0888D210:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_0888D25C;
L_0888D25C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[31] = (0x0888D26Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0888D26Cu) goto L_0888D26C;
    return;
L_0888D26C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888D178;
      }
      goto L_0888D27C;
    }
L_0888D27C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_0888D2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888D2D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24804)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888D2D8u) goto L_0888D2D8;
    return;
L_0888D2D8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888D2E0;
L_0888D2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24808)));
    ctx.gpr[31] = (0x0888D2F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888D2F0u) goto L_0888D2F0;
    return;
L_0888D2F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888D2E0;
      }
      goto L_0888D300;
    }
L_0888D300:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888D308;
L_0888D308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888D328;
    }
    goto L_0888D318;
L_0888D318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888D324u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888D324u) goto L_0888D324;
    return;
L_0888D324:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888D328;
L_0888D328:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888D308;
      }
      goto L_0888D334;
    }
L_0888D334:
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
L_0888D34C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 540u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888D3A0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D3A0u) goto L_0888D3A0;
    return;
L_0888D3A0:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24816), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888D3BCu);
    ctx.gpr[6] = (0u | 540u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888D3BCu) goto L_0888D3BC;
    return;
L_0888D3BC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20456));
    ctx.gpr[31] = (0x0888D3CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0888D3CCu) goto L_0888D3CC;
    return;
L_0888D3CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (16944u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (17132u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (17134u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[5] << 24u);
    ctx.gpr[20] = (ctx.gpr[6] << 24u);
    ctx.gpr[19] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (16688u << 16u);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12804));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20440));
    goto L_0888D448;
L_0888D448:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0888D4BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888D4BCu) goto L_0888D4BC;
    return;
L_0888D4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0888D4D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888D4D4u) goto L_0888D4D4;
    return;
L_0888D4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[31] = (0x0888D500u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0888D500u) goto L_0888D500;
    return;
L_0888D500:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888D448;
      }
      goto L_0888D510;
    }
L_0888D510:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 180u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888D528u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D528u) goto L_0888D528;
    return;
L_0888D528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24812), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888D540u);
    ctx.gpr[6] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888D540u) goto L_0888D540;
    return;
L_0888D540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[7] = (17213u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[6] = (17058u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0888D58Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0888D58Cu) goto L_0888D58C;
    return;
L_0888D58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[31] = (0x0888D5A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888D5A0u) goto L_0888D5A0;
    return;
L_0888D5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12160));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0888D5C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888D5C8u) goto L_0888D5C8;
    return;
L_0888D5C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0888D618;
      }
      goto L_0888D5E0;
    }
L_0888D5E0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24812)));
      if (branch_taken) {
          goto L_0888D64C;
      }
      goto L_0888D618;
    }
L_0888D618:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24812)));
    goto L_0888D64C;
L_0888D64C:
    ctx.gpr[31] = (0x0888D654u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0888D654u) goto L_0888D654;
    return;
L_0888D654:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_0888D694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888D6BC;
L_0888D6BC:
    ctx.gpr[31] = (0x0888D6C4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D6C4u) goto L_0888D6C4;
    return;
L_0888D6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
      if (branch_taken) {
          goto L_0888D6BC;
      }
      goto L_0888D6DC;
    }
L_0888D6DC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D6F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D6F0u) goto L_0888D6F0;
    return;
L_0888D6F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24816), 0u);
    ctx.gpr[31] = (0x0888D704u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D704u) goto L_0888D704;
    return;
L_0888D704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D718u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D718u) goto L_0888D718;
    return;
L_0888D718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24812), 0u);
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
L_0888D738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12804));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_0888D770;
L_0888D770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0888D788u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888D788u) goto L_0888D788;
    return;
L_0888D788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0888D7B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888D7B8u) goto L_0888D7B8;
    return;
L_0888D7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[31] = (0x0888D7C8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0888D7C8u) goto L_0888D7C8;
    return;
L_0888D7C8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888D770;
      }
      goto L_0888D7DC;
    }
L_0888D7DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0888D828;
      }
      goto L_0888D7EC;
    }
L_0888D7EC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0888D860;
      }
      goto L_0888D828;
    }
L_0888D828:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_0888D860;
L_0888D860:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888D86Cu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888D86Cu) goto L_0888D86C;
    return;
L_0888D86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12160));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0888D894u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888D894u) goto L_0888D894;
    return;
L_0888D894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[31] = (0x0888D8A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0888D8A0u) goto L_0888D8A0;
    return;
L_0888D8A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D8C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888D8E4;
L_0888D8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24816)));
    ctx.gpr[31] = (0x0888D8F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888D8F0u) goto L_0888D8F0;
    return;
L_0888D8F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888D8E4;
      }
      goto L_0888D904;
    }
L_0888D904:
    ctx.gpr[31] = (0x0888D90Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24812)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888D90Cu) goto L_0888D90C;
    return;
L_0888D90C:
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
L_0888D924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888D954;
L_0888D954:
    ctx.gpr[31] = (0x0888D95Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888D95Cu) goto L_0888D95C;
    return;
L_0888D95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24820)));
      if (branch_taken) {
          goto L_0888D954;
      }
      goto L_0888D974;
    }
L_0888D974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D984u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D984u) goto L_0888D984;
    return;
L_0888D984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24820), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24824)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888D998;
L_0888D998:
    ctx.gpr[31] = (0x0888D9A0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888D9A0u) goto L_0888D9A0;
    return;
L_0888D9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24824)));
      if (branch_taken) {
          goto L_0888D998;
      }
      goto L_0888D9B8;
    }
L_0888D9B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888D9C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D9C8u) goto L_0888D9C8;
    return;
L_0888D9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24824), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888D9DC;
L_0888D9DC:
    ctx.gpr[31] = (0x0888D9E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888D9E4u) goto L_0888D9E4;
    return;
L_0888D9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888D9DC;
      }
      goto L_0888D9FC;
    }
L_0888D9FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DA0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DA0Cu) goto L_0888DA0C;
    return;
L_0888DA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24828)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DA20;
L_0888DA20:
    ctx.gpr[31] = (0x0888DA28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DA28u) goto L_0888DA28;
    return;
L_0888DA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24828)));
      if (branch_taken) {
          goto L_0888DA20;
      }
      goto L_0888DA40;
    }
L_0888DA40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DA50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DA50u) goto L_0888DA50;
    return;
L_0888DA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24828), 0u);
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
L_0888DA74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888DA94;
L_0888DA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24820)));
    ctx.gpr[31] = (0x0888DAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DAA4u) goto L_0888DAA4;
    return;
L_0888DAA4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DA94;
      }
      goto L_0888DAB4;
    }
L_0888DAB4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DABC;
L_0888DABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24824)));
    ctx.gpr[31] = (0x0888DACCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DACCu) goto L_0888DACC;
    return;
L_0888DACC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DABC;
      }
      goto L_0888DADC;
    }
L_0888DADC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DAE4;
L_0888DAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[16] == ctx.gpr[5]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0888DB04;
    }
    goto L_0888DAF4;
L_0888DAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888DB00u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DB00u) goto L_0888DB00;
    return;
L_0888DB00:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0888DB04;
L_0888DB04:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DAE4;
      }
      goto L_0888DB10;
    }
L_0888DB10:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DB18;
L_0888DB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24828)));
    ctx.gpr[31] = (0x0888DB28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888DB28u) goto L_0888DB28;
    return;
L_0888DB28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888DB18;
      }
      goto L_0888DB38;
    }
L_0888DB38:
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
L_0888DB50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24832)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888DB80;
L_0888DB80:
    ctx.gpr[31] = (0x0888DB88u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DB88u) goto L_0888DB88;
    return;
L_0888DB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24832)));
      if (branch_taken) {
          goto L_0888DB80;
      }
      goto L_0888DBA0;
    }
L_0888DBA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DBB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DBB0u) goto L_0888DBB0;
    return;
L_0888DBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24832), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24836)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DBC4;
L_0888DBC4:
    ctx.gpr[31] = (0x0888DBCCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DBCCu) goto L_0888DBCC;
    return;
L_0888DBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24836)));
      if (branch_taken) {
          goto L_0888DBC4;
      }
      goto L_0888DBE4;
    }
L_0888DBE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DBF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DBF4u) goto L_0888DBF4;
    return;
L_0888DBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24836), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DC08;
L_0888DC08:
    ctx.gpr[31] = (0x0888DC10u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DC10u) goto L_0888DC10;
    return;
L_0888DC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888DC08;
      }
      goto L_0888DC28;
    }
L_0888DC28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DC38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DC38u) goto L_0888DC38;
    return;
L_0888DC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
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
L_0888DC5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888DC7C;
L_0888DC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24832)));
    ctx.gpr[31] = (0x0888DC8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DC8Cu) goto L_0888DC8C;
    return;
L_0888DC8C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DC7C;
      }
      goto L_0888DC9C;
    }
L_0888DC9C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888DCA4;
L_0888DCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24836)));
    ctx.gpr[31] = (0x0888DCB4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DCB4u) goto L_0888DCB4;
    return;
L_0888DCB4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DCA4;
      }
      goto L_0888DCC4;
    }
L_0888DCC4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888DCCC;
L_0888DCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888DCEC;
    }
    goto L_0888DCDC;
L_0888DCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888DCE8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DCE8u) goto L_0888DCE8;
    return;
L_0888DCE8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888DCEC;
L_0888DCEC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DCCC;
      }
      goto L_0888DCF8;
    }
L_0888DCF8:
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
L_0888DD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24840)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888DD40;
L_0888DD40:
    ctx.gpr[31] = (0x0888DD48u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DD48u) goto L_0888DD48;
    return;
L_0888DD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24840)));
      if (branch_taken) {
          goto L_0888DD40;
      }
      goto L_0888DD60;
    }
L_0888DD60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DD70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DD70u) goto L_0888DD70;
    return;
L_0888DD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24840), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24844)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DD84;
L_0888DD84:
    ctx.gpr[31] = (0x0888DD8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DD8Cu) goto L_0888DD8C;
    return;
L_0888DD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24844)));
      if (branch_taken) {
          goto L_0888DD84;
      }
      goto L_0888DDA4;
    }
L_0888DDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DDB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DDB4u) goto L_0888DDB4;
    return;
L_0888DDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24844), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DDC8;
L_0888DDC8:
    ctx.gpr[31] = (0x0888DDD0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DDD0u) goto L_0888DDD0;
    return;
L_0888DDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888DDC8;
      }
      goto L_0888DDE8;
    }
L_0888DDE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DDF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DDF8u) goto L_0888DDF8;
    return;
L_0888DDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
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
L_0888DE1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888DE3C;
L_0888DE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24840)));
    ctx.gpr[31] = (0x0888DE4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DE4Cu) goto L_0888DE4C;
    return;
L_0888DE4C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DE3C;
      }
      goto L_0888DE5C;
    }
L_0888DE5C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 92u);
    goto L_0888DE64;
L_0888DE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24844)));
    ctx.gpr[31] = (0x0888DE74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DE74u) goto L_0888DE74;
    return;
L_0888DE74:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DE64;
      }
      goto L_0888DE84;
    }
L_0888DE84:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888DE8C;
L_0888DE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888DEAC;
    }
    goto L_0888DE9C;
L_0888DE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888DEA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888DEA8u) goto L_0888DEA8;
    return;
L_0888DEA8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888DEAC;
L_0888DEAC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888DE8C;
      }
      goto L_0888DEB8;
    }
L_0888DEB8:
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
L_0888DED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888DF00;
L_0888DF00:
    ctx.gpr[31] = (0x0888DF08u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DF08u) goto L_0888DF08;
    return;
L_0888DF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24848)));
      if (branch_taken) {
          goto L_0888DF00;
      }
      goto L_0888DF20;
    }
L_0888DF20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DF30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DF30u) goto L_0888DF30;
    return;
L_0888DF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24848), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24852)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DF44;
L_0888DF44:
    ctx.gpr[31] = (0x0888DF4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DF4Cu) goto L_0888DF4C;
    return;
L_0888DF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24852)));
      if (branch_taken) {
          goto L_0888DF44;
      }
      goto L_0888DF64;
    }
L_0888DF64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DF74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DF74u) goto L_0888DF74;
    return;
L_0888DF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24852), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DF88;
L_0888DF88:
    ctx.gpr[31] = (0x0888DF90u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888DF90u) goto L_0888DF90;
    return;
L_0888DF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888DF88;
      }
      goto L_0888DFA8;
    }
L_0888DFA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DFB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DFB8u) goto L_0888DFB8;
    return;
L_0888DFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24856)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888DFCC;
L_0888DFCC:
    ctx.gpr[31] = (0x0888DFD4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DFD4u) goto L_0888DFD4;
    return;
L_0888DFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24856)));
      if (branch_taken) {
          goto L_0888DFCC;
      }
      goto L_0888DFEC;
    }
L_0888DFEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888DFFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DFFCu) goto L_0888DFFC;
    return;
L_0888DFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24856), 0u);
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
L_0888E020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888E040;
L_0888E040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24848)));
    ctx.gpr[31] = (0x0888E050u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E050u) goto L_0888E050;
    return;
L_0888E050:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E040;
      }
      goto L_0888E060;
    }
L_0888E060:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E068;
L_0888E068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24852)));
    ctx.gpr[31] = (0x0888E078u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E078u) goto L_0888E078;
    return;
L_0888E078:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E068;
      }
      goto L_0888E088;
    }
L_0888E088:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E090;
L_0888E090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[16] == ctx.gpr[5]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0888E0B0;
    }
    goto L_0888E0A0;
L_0888E0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888E0ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E0ACu) goto L_0888E0AC;
    return;
L_0888E0AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0888E0B0;
L_0888E0B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E090;
      }
      goto L_0888E0BC;
    }
L_0888E0BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E0C4;
L_0888E0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24856)));
    ctx.gpr[31] = (0x0888E0D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888E0D4u) goto L_0888E0D4;
    return;
L_0888E0D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888E0C4;
      }
      goto L_0888E0E4;
    }
L_0888E0E4:
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
L_0888E0FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24860)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888E12C;
L_0888E12C:
    ctx.gpr[31] = (0x0888E134u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E134u) goto L_0888E134;
    return;
L_0888E134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24860)));
      if (branch_taken) {
          goto L_0888E12C;
      }
      goto L_0888E14C;
    }
L_0888E14C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E15Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E15Cu) goto L_0888E15C;
    return;
L_0888E15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24860), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24864)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E170;
L_0888E170:
    ctx.gpr[31] = (0x0888E178u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E178u) goto L_0888E178;
    return;
L_0888E178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24864)));
      if (branch_taken) {
          goto L_0888E170;
      }
      goto L_0888E190;
    }
L_0888E190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E1A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E1A0u) goto L_0888E1A0;
    return;
L_0888E1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24864), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E1B4;
L_0888E1B4:
    ctx.gpr[31] = (0x0888E1BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E1BCu) goto L_0888E1BC;
    return;
L_0888E1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888E1B4;
      }
      goto L_0888E1D4;
    }
L_0888E1D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E1E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E1E4u) goto L_0888E1E4;
    return;
L_0888E1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
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
L_0888E208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888E228;
L_0888E228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24860)));
    ctx.gpr[31] = (0x0888E238u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E238u) goto L_0888E238;
    return;
L_0888E238:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E228;
      }
      goto L_0888E248;
    }
L_0888E248:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888E250;
L_0888E250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24864)));
    ctx.gpr[31] = (0x0888E260u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E260u) goto L_0888E260;
    return;
L_0888E260:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E250;
      }
      goto L_0888E270;
    }
L_0888E270:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888E278;
L_0888E278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888E298;
    }
    goto L_0888E288;
L_0888E288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888E294u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E294u) goto L_0888E294;
    return;
L_0888E294:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888E298;
L_0888E298:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E278;
      }
      goto L_0888E2A4;
    }
L_0888E2A4:
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
L_0888E2BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888E2EC;
L_0888E2EC:
    ctx.gpr[31] = (0x0888E2F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E2F4u) goto L_0888E2F4;
    return;
L_0888E2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24868)));
      if (branch_taken) {
          goto L_0888E2EC;
      }
      goto L_0888E30C;
    }
L_0888E30C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E31Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E31Cu) goto L_0888E31C;
    return;
L_0888E31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24868), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24872)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E330;
L_0888E330:
    ctx.gpr[31] = (0x0888E338u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E338u) goto L_0888E338;
    return;
L_0888E338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24872)));
      if (branch_taken) {
          goto L_0888E330;
      }
      goto L_0888E350;
    }
L_0888E350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E360u) goto L_0888E360;
    return;
L_0888E360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24872), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E374;
L_0888E374:
    ctx.gpr[31] = (0x0888E37Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E37Cu) goto L_0888E37C;
    return;
L_0888E37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888E374;
      }
      goto L_0888E394;
    }
L_0888E394:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E3A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E3A4u) goto L_0888E3A4;
    return;
L_0888E3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24876)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E3B8;
L_0888E3B8:
    ctx.gpr[31] = (0x0888E3C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E3C0u) goto L_0888E3C0;
    return;
L_0888E3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24876)));
      if (branch_taken) {
          goto L_0888E3B8;
      }
      goto L_0888E3D8;
    }
L_0888E3D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E3E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E3E8u) goto L_0888E3E8;
    return;
L_0888E3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24876), 0u);
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
L_0888E40C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888E42C;
L_0888E42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24868)));
    ctx.gpr[31] = (0x0888E43Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E43Cu) goto L_0888E43C;
    return;
L_0888E43C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E42C;
      }
      goto L_0888E44C;
    }
L_0888E44C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E454;
L_0888E454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24872)));
    ctx.gpr[31] = (0x0888E464u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E464u) goto L_0888E464;
    return;
L_0888E464:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E454;
      }
      goto L_0888E474;
    }
L_0888E474:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E47C;
L_0888E47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[16] == ctx.gpr[5]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0888E49C;
    }
    goto L_0888E48C;
L_0888E48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888E498u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E498u) goto L_0888E498;
    return;
L_0888E498:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0888E49C;
L_0888E49C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E47C;
      }
      goto L_0888E4A8;
    }
L_0888E4A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E4B0;
L_0888E4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24876)));
    ctx.gpr[31] = (0x0888E4C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888E4C0u) goto L_0888E4C0;
    return;
L_0888E4C0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888E4B0;
      }
      goto L_0888E4D0;
    }
L_0888E4D0:
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
L_0888E4E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24880)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888E518;
L_0888E518:
    ctx.gpr[31] = (0x0888E520u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E520u) goto L_0888E520;
    return;
L_0888E520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24880)));
      if (branch_taken) {
          goto L_0888E518;
      }
      goto L_0888E538;
    }
L_0888E538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E548u) goto L_0888E548;
    return;
L_0888E548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24880), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24884)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E55C;
L_0888E55C:
    ctx.gpr[31] = (0x0888E564u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E564u) goto L_0888E564;
    return;
L_0888E564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24884)));
      if (branch_taken) {
          goto L_0888E55C;
      }
      goto L_0888E57C;
    }
L_0888E57C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E58Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E58Cu) goto L_0888E58C;
    return;
L_0888E58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24884), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E5A0;
L_0888E5A0:
    ctx.gpr[31] = (0x0888E5A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E5A8u) goto L_0888E5A8;
    return;
L_0888E5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888E5A0;
      }
      goto L_0888E5C0;
    }
L_0888E5C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E5D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E5D0u) goto L_0888E5D0;
    return;
L_0888E5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E5E4;
L_0888E5E4:
    ctx.gpr[31] = (0x0888E5ECu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E5ECu) goto L_0888E5EC;
    return;
L_0888E5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
      if (branch_taken) {
          goto L_0888E5E4;
      }
      goto L_0888E604;
    }
L_0888E604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E614u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E614u) goto L_0888E614;
    return;
L_0888E614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24888), 0u);
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
L_0888E638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[30] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20128));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12852));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-20104));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(12884));
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    goto L_0888E698;
L_0888E698:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24884)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[31] = (0x0888E6B8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888E6B8u) goto L_0888E6B8;
    return;
L_0888E6B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888E6FC;
      }
      goto L_0888E6C4;
    }
L_0888E6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0888E6ECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888E6ECu) goto L_0888E6EC;
    return;
L_0888E6EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24884)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888E734;
      }
      goto L_0888E6FC;
    }
L_0888E6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0888E728u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888E728u) goto L_0888E728;
    return;
L_0888E728:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24884)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0888E734;
L_0888E734:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24884)));
    ctx.gpr[31] = (0x0888E744u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0888E744u) goto L_0888E744;
    return;
L_0888E744:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E698;
      }
      goto L_0888E754;
    }
L_0888E754:
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20080));
    goto L_0888E768;
L_0888E768:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888E778u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888E778u) goto L_0888E778;
    return;
L_0888E778:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888E7B8;
      }
      goto L_0888E784;
    }
L_0888E784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0888E7A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888E7A4u) goto L_0888E7A4;
    return;
L_0888E7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0888E7EC;
      }
      goto L_0888E7B8;
    }
L_0888E7B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888E7DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888E7DCu) goto L_0888E7DC;
    return;
L_0888E7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_0888E7EC;
L_0888E7EC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888E7F8u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888E7F8u) goto L_0888E7F8;
    return;
L_0888E7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0888E810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0888E810u) goto L_0888E810;
    return;
L_0888E810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.gpr[31] = (0x0888E820u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0888E820u) goto L_0888E820;
    return;
L_0888E820:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888E768;
      }
      goto L_0888E830;
    }
L_0888E830:
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
L_0888E860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888E880;
L_0888E880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24880)));
    ctx.gpr[31] = (0x0888E890u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E890u) goto L_0888E890;
    return;
L_0888E890:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E880;
      }
      goto L_0888E8A0;
    }
L_0888E8A0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E8A8;
L_0888E8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24884)));
    ctx.gpr[31] = (0x0888E8B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E8B8u) goto L_0888E8B8;
    return;
L_0888E8B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E8A8;
      }
      goto L_0888E8C8;
    }
L_0888E8C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E8D0;
L_0888E8D0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888E8FC;
      }
      goto L_0888E8DC;
    }
L_0888E8DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[16] == ctx.gpr[5]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0888E91C;
    }
    goto L_0888E8E8;
L_0888E8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888E8F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E8F4u) goto L_0888E8F4;
    return;
L_0888E8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888E91C;
      }
      goto L_0888E8FC;
    }
L_0888E8FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0888E91C;
    }
    goto L_0888E90C;
L_0888E90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888E918u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888E918u) goto L_0888E918;
    return;
L_0888E918:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0888E91C;
L_0888E91C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888E8D0;
      }
      goto L_0888E928;
    }
L_0888E928:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E930;
L_0888E930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.gpr[31] = (0x0888E940u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888E940u) goto L_0888E940;
    return;
L_0888E940:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888E930;
      }
      goto L_0888E950;
    }
L_0888E950:
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
L_0888E968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888E998;
L_0888E998:
    ctx.gpr[31] = (0x0888E9A0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E9A0u) goto L_0888E9A0;
    return;
L_0888E9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24892)));
      if (branch_taken) {
          goto L_0888E998;
      }
      goto L_0888E9B8;
    }
L_0888E9B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888E9C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E9C8u) goto L_0888E9C8;
    return;
L_0888E9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24892), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888E9DC;
L_0888E9DC:
    ctx.gpr[31] = (0x0888E9E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E9E4u) goto L_0888E9E4;
    return;
L_0888E9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888E9DC;
      }
      goto L_0888E9FC;
    }
L_0888E9FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888EA0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EA0Cu) goto L_0888EA0C;
    return;
L_0888EA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24896)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888EA20;
L_0888EA20:
    ctx.gpr[31] = (0x0888EA28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EA28u) goto L_0888EA28;
    return;
L_0888EA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24896)));
      if (branch_taken) {
          goto L_0888EA20;
      }
      goto L_0888EA40;
    }
L_0888EA40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888EA50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EA50u) goto L_0888EA50;
    return;
L_0888EA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24896), 0u);
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
L_0888EA74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888EA94;
L_0888EA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24892)));
    ctx.gpr[31] = (0x0888EAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888EAA4u) goto L_0888EAA4;
    return;
L_0888EAA4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888EA94;
      }
      goto L_0888EAB4;
    }
L_0888EAB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888EABC;
L_0888EABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888EADC;
    }
    goto L_0888EACC;
L_0888EACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888EAD8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888EAD8u) goto L_0888EAD8;
    return;
L_0888EAD8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888EADC;
L_0888EADC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888EABC;
      }
      goto L_0888EAE8;
    }
L_0888EAE8:
    ctx.gpr[31] = (0x0888EAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 604u, 0x0888BF78u>(ctx, &aot_mem) && ctx.pc == 0x0888EAF0u) goto L_0888EAF0;
    return;
L_0888EAF0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888EAF8;
L_0888EAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24896)));
    ctx.gpr[31] = (0x0888EB08u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888EB08u) goto L_0888EB08;
    return;
L_0888EB08:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888EAF8;
      }
      goto L_0888EB18;
    }
L_0888EB18:
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
L_0888EB30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24916)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0888EB60;
L_0888EB60:
    ctx.gpr[31] = (0x0888EB68u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888EB68u) goto L_0888EB68;
    return;
L_0888EB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24916)));
      if (branch_taken) {
          goto L_0888EB60;
      }
      goto L_0888EB80;
    }
L_0888EB80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888EB90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EB90u) goto L_0888EB90;
    return;
L_0888EB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24916), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888EBA4;
L_0888EBA4:
    ctx.gpr[31] = (0x0888EBACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888EBACu) goto L_0888EBAC;
    return;
L_0888EBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
      if (branch_taken) {
          goto L_0888EBA4;
      }
      goto L_0888EBC4;
    }
L_0888EBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888EBD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EBD4u) goto L_0888EBD4;
    return;
L_0888EBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24720), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24920)));
    ctx.gpr[18] = (0u | 0u);
    goto L_0888EBE8;
L_0888EBE8:
    ctx.gpr[31] = (0x0888EBF0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EBF0u) goto L_0888EBF0;
    return;
L_0888EBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24920)));
      if (branch_taken) {
          goto L_0888EBE8;
      }
      goto L_0888EC08;
    }
L_0888EC08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888EC18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EC18u) goto L_0888EC18;
    return;
L_0888EC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24920), 0u);
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
L_0888EC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0888EC60;
L_0888EC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24916)));
    ctx.gpr[31] = (0x0888EC6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888EC6Cu) goto L_0888EC6C;
    return;
L_0888EC6C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888EC60;
      }
      goto L_0888EC80;
    }
L_0888EC80:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888EC88;
L_0888EC88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888ECA8;
    }
    goto L_0888EC94;
L_0888EC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24720)));
    ctx.gpr[31] = (0x0888ECA0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888ECA0u) goto L_0888ECA0;
    return;
L_0888ECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888ECA8;
L_0888ECA8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0888EC88;
      }
      goto L_0888ECB4;
    }
L_0888ECB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0888ECBC;
L_0888ECBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24920)));
    ctx.gpr[31] = (0x0888ECC8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888ECC8u) goto L_0888ECC8;
    return;
L_0888ECC8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
      if (branch_taken) {
          goto L_0888ECBC;
      }
      goto L_0888ECDC;
    }
L_0888ECDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24916)));
    ctx.gpr[31] = (0x0888ECE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888ECE8u) goto L_0888ECE8;
    return;
L_0888ECE8:
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
L_0888ED00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888ED14u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x0888ED14u) goto L_0888ED14;
    return;
L_0888ED14:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 52u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888ED2Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888ED2Cu) goto L_0888ED2C;
    return;
L_0888ED2C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24904), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888ED48u);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888ED48u) goto L_0888ED48;
    return;
L_0888ED48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0888ED60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 747u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x0888ED60u) goto L_0888ED60;
    return;
L_0888ED60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888ED70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888ED8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 751u, 0x08847D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888ED8Cu) goto L_0888ED8C;
    return;
L_0888ED8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888EDA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EDA4u) goto L_0888EDA4;
    return;
L_0888EDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888EDB4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24904), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EDB4u) goto L_0888EDB4;
    return;
L_0888EDB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888EDC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888EDDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 753u, 0x08847D68u>(ctx, &aot_mem) && ctx.pc == 0x0888EDDCu) goto L_0888EDDC;
    return;
L_0888EDDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888EDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888EE00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x0888EE00u) goto L_0888EE00;
    return;
L_0888EE00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888EE0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888EE30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x0888EE30u) goto L_0888EE30;
    return;
L_0888EE30:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0888EF1C;
      }
      goto L_0888EE3C;
    }
L_0888EE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24908)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888EE6C;
      }
      goto L_0888EE4C;
    }
L_0888EE4C:
    ctx.gpr[31] = (0x0888EE54u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 141u, 0x0884C934u>(ctx, &aot_mem) && ctx.pc == 0x0888EE54u) goto L_0888EE54;
    return;
L_0888EE54:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888EF1C;
      }
      goto L_0888EE5C;
    }
L_0888EE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24908), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0888EF1C;
      }
      goto L_0888EE6C;
    }
L_0888EE6C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888EF1C;
      }
      goto L_0888EE74;
    }
L_0888EE74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24904)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_0888EE9C;
    }
    goto L_0888EE80;
L_0888EE80:
    ctx.gpr[31] = (0x0888EE88u);
    // nop
    goto L_0888ED00;
L_0888EE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24900), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24912), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888EF14;
      }
      goto L_0888EE9C;
    }
L_0888EE9C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24912)));
      if (branch_taken) {
          goto L_0888EED4;
      }
      goto L_0888EEA4;
    }
L_0888EEA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_0888EED4;
      }
      goto L_0888EEB0;
    }
L_0888EEB0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0888EED4;
      }
      goto L_0888EEB8;
    }
L_0888EEB8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24900), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x0888EECCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0888EECCu) goto L_0888EECC;
    return;
L_0888EECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EF14;
      }
      goto L_0888EED4;
    }
L_0888EED4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_0888EF00;
      }
      goto L_0888EEDC;
    }
L_0888EEDC:
    ctx.gpr[31] = (0x0888EEE4u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    goto L_0888EDC4;
L_0888EEE4:
    ctx.gpr[31] = (0x0888EEECu);
    // nop
    goto L_0888ED70;
L_0888EEEC:
    ctx.gpr[31] = (0x0888EEF4u);
    // nop
    goto L_0888ED00;
L_0888EEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24912), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888EF14;
      }
      goto L_0888EF00;
    }
L_0888EF00:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0888EF14;
      }
      goto L_0888EF08;
    }
L_0888EF08:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24912), ctx.gpr[5]);
    goto L_0888EF14;
L_0888EF14:
    ctx.gpr[31] = (0x0888EF1Cu);
    // nop
    goto L_0888EDC4;
L_0888EF1C:
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
L_0888EF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13188));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[30]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    goto L_0888F02C;
L_0888F02C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888F03Cu);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888F03Cu) goto L_0888F03C;
    return;
L_0888F03C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17050u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888F0C8;
      }
      goto L_0888F0C0;
    }
L_0888F0C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F0C8;
      }
      goto L_0888F0C8;
    }
L_0888F0C8:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0888F134;
    }
    goto L_0888F0D0;
L_0888F0D0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888F190;
      }
      goto L_0888F134;
    }
L_0888F134:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0888F190;
L_0888F190:
    ctx.gpr[31] = (0x0888F198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0888F198u) goto L_0888F198;
    return;
L_0888F198:
    ctx.gpr[31] = (0x0888F1A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888F1A0u) goto L_0888F1A0;
    return;
L_0888F1A0:
    ctx.gpr[31] = (0x0888F1A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0888F1A8u) goto L_0888F1A8;
    return;
L_0888F1A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888F02C;
      }
      goto L_0888F1B8;
    }
L_0888F1B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5F0;
      }
      goto L_0888F288;
    }
L_0888F288:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (0u | 128u);
      if (branch_taken) {
          goto L_0888F4CC;
      }
      goto L_0888F298;
    }
L_0888F298:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F32C;
      }
      goto L_0888F2A4;
    }
L_0888F2A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0888F308;
      }
      goto L_0888F2B0;
    }
L_0888F2B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888F324;
      }
      goto L_0888F308;
    }
L_0888F308:
    ctx.gpr[6] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0888F324;
L_0888F324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0888F4B0;
      }
      goto L_0888F32C;
    }
L_0888F32C:
    ctx.gpr[8] = (0u | 64u);
    if (ctx.gpr[6] != ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0888F398;
    }
    goto L_0888F338;
L_0888F338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888F4B0;
      }
      goto L_0888F398;
    }
L_0888F398:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_0888F3DC;
      }
      goto L_0888F3A4;
    }
L_0888F3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888F3C0;
      }
      goto L_0888F3B4;
    }
L_0888F3B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F3D4;
      }
      goto L_0888F3C0;
    }
L_0888F3C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_0888F3D0;
      }
      goto L_0888F3C8;
    }
L_0888F3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F3D0;
      }
      goto L_0888F3D0;
    }
L_0888F3D0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0888F3D4;
L_0888F3D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 8u);
      if (branch_taken) {
          goto L_0888F4B0;
      }
      goto L_0888F3DC;
    }
L_0888F3DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_0888F424;
      }
      goto L_0888F3E4;
    }
L_0888F3E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_0888F3FC;
      }
      goto L_0888F3F4;
    }
L_0888F3F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F3FC;
      }
      goto L_0888F3FC;
    }
L_0888F3FC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0888F414;
    }
    goto L_0888F404;
L_0888F404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F41C;
      }
      goto L_0888F414;
    }
L_0888F414:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0888F41C;
L_0888F41C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 21u);
      if (branch_taken) {
          goto L_0888F4B0;
      }
      goto L_0888F424;
    }
L_0888F424:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0888F46C;
      }
      goto L_0888F42C;
    }
L_0888F42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888F448;
      }
      goto L_0888F43C;
    }
L_0888F43C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F464;
      }
      goto L_0888F448;
    }
L_0888F448:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_0888F45C;
      }
      goto L_0888F450;
    }
L_0888F450:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888F460;
      }
      goto L_0888F45C;
    }
L_0888F45C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0888F460;
L_0888F460:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0888F464;
L_0888F464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 8u);
      if (branch_taken) {
          goto L_0888F4B0;
      }
      goto L_0888F46C;
    }
L_0888F46C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F4B4;
      }
      goto L_0888F474;
    }
L_0888F474:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_0888F48C;
      }
      goto L_0888F484;
    }
L_0888F484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F48C;
      }
      goto L_0888F48C;
    }
L_0888F48C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0888F4A4;
    }
    goto L_0888F494;
L_0888F494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F4AC;
      }
      goto L_0888F4A4;
    }
L_0888F4A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0888F4AC;
L_0888F4AC:
    ctx.gpr[7] = (0u | 21u);
    goto L_0888F4B0;
L_0888F4B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0888F4B4;
L_0888F4B4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888F5C8;
      }
      goto L_0888F4BC;
    }
L_0888F4BC:
    ctx.gpr[31] = (0x0888F4C4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F4C4u) goto L_0888F4C4;
    return;
L_0888F4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C8;
      }
      goto L_0888F4CC;
    }
L_0888F4CC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 64u);
      if (branch_taken) {
          goto L_0888F53C;
      }
      goto L_0888F4D4;
    }
L_0888F4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
        goto L_0888F52C;
    }
    goto L_0888F4E0;
L_0888F4E0:
    ctx.gpr[31] = (0x0888F4E8u);
    // nop
    goto L_0888FEEC;
L_0888F4E8:
    ctx.gpr[31] = (0x0888F4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 163u, 0x08888D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888F4F0u) goto L_0888F4F0;
    return;
L_0888F4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0888F50Cu);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 119u, 0x0884C7BCu>(ctx, &aot_mem) && ctx.pc == 0x0888F50Cu) goto L_0888F50C;
    return;
L_0888F50C:
    ctx.gpr[31] = (0x0888F514u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 930u, 0x0881F9B4u>(ctx, &aot_mem) && ctx.pc == 0x0888F514u) goto L_0888F514;
    return;
L_0888F514:
    ctx.gpr[31] = (0x0888F51Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F51Cu) goto L_0888F51C;
    return;
L_0888F51C:
    ctx.gpr[31] = (0x0888F524u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0888F524u) goto L_0888F524;
    return;
L_0888F524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F52C;
    }
L_0888F52C:
    ctx.gpr[31] = (0x0888F534u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F534u) goto L_0888F534;
    return;
L_0888F534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F53C;
    }
L_0888F53C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_0888F558;
      }
      goto L_0888F544;
    }
L_0888F544:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0888F550u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F550u) goto L_0888F550;
    return;
L_0888F550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F558;
    }
L_0888F558:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0888F590;
      }
      goto L_0888F560;
    }
L_0888F560:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888F580;
      }
      goto L_0888F56C;
    }
L_0888F56C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F578u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F578u) goto L_0888F578;
    return;
L_0888F578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F580;
    }
L_0888F580:
    ctx.gpr[31] = (0x0888F588u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F588u) goto L_0888F588;
    return;
L_0888F588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F590;
    }
L_0888F590:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F598;
    }
L_0888F598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5B8;
      }
      goto L_0888F5A4;
    }
L_0888F5A4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0888F5B0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F5B0u) goto L_0888F5B0;
    return;
L_0888F5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F5C0;
      }
      goto L_0888F5B8;
    }
L_0888F5B8:
    ctx.gpr[31] = (0x0888F5C0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F5C0u) goto L_0888F5C0;
    return;
L_0888F5C0:
    ctx.gpr[31] = (0x0888F5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 495u, 0x0888B2A4u>(ctx, &aot_mem) && ctx.pc == 0x0888F5C8u) goto L_0888F5C8;
    return;
L_0888F5C8:
    ctx.gpr[31] = (0x0888F5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 513u, 0x0888B4D0u>(ctx, &aot_mem) && ctx.pc == 0x0888F5D0u) goto L_0888F5D0;
    return;
L_0888F5D0:
    ctx.gpr[31] = (0x0888F5D8u);
    // nop
    goto L_0888C910;
L_0888F5D8:
    ctx.gpr[31] = (0x0888F5E0u);
    // nop
    goto L_0888CF0C;
L_0888F5E0:
    ctx.gpr[31] = (0x0888F5E8u);
    // nop
    goto L_0888CBCC;
L_0888F5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F660;
      }
      goto L_0888F5F0;
    }
L_0888F5F0:
    ctx.gpr[31] = (0x0888F5F8u);
    // nop
    goto L_0888EE0C;
L_0888F5F8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888F660;
      }
      goto L_0888F604;
    }
L_0888F604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0888F660;
L_0888F660:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9D0;
      }
      goto L_0888F690;
    }
L_0888F690:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (0u | 128u);
      if (branch_taken) {
          goto L_0888F7D8;
      }
      goto L_0888F6A0;
    }
L_0888F6A0:
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[6] = (0u | 64u);
        goto L_0888F6C0;
    }
    goto L_0888F6A8;
L_0888F6A8:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F6B8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F6B8u) goto L_0888F6B8;
    return;
L_0888F6B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F6C0;
    }
L_0888F6C0:
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0888F730;
    }
    goto L_0888F6C8;
L_0888F6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0888F728u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F728u) goto L_0888F728;
    return;
L_0888F728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F730;
    }
L_0888F730:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0888F78C;
      }
      goto L_0888F73C;
    }
L_0888F73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F768;
      }
      goto L_0888F74C;
    }
L_0888F74C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F758u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F758u) goto L_0888F758;
    return;
L_0888F758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F77C;
      }
      goto L_0888F768;
    }
L_0888F768:
    ctx.gpr[31] = (0x0888F770u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F770u) goto L_0888F770;
    return;
L_0888F770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_0888F77C;
L_0888F77C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F784;
    }
L_0888F784:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F78C;
    }
L_0888F78C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F794;
    }
L_0888F794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F7B8;
      }
      goto L_0888F7A0;
    }
L_0888F7A0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F7ACu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F7ACu) goto L_0888F7AC;
    return;
L_0888F7AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0888F7C8;
      }
      goto L_0888F7B8;
    }
L_0888F7B8:
    ctx.gpr[31] = (0x0888F7C0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F7C0u) goto L_0888F7C0;
    return;
L_0888F7C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_0888F7C8;
L_0888F7C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F7D0;
    }
L_0888F7D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F7D8;
    }
L_0888F7D8:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0888F8CC;
      }
      goto L_0888F7E4;
    }
L_0888F7E4:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 64u);
      if (branch_taken) {
          goto L_0888F804;
      }
      goto L_0888F7EC;
    }
L_0888F7EC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F7FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F7FCu) goto L_0888F7FC;
    return;
L_0888F7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F804;
    }
L_0888F804:
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0888F824;
    }
    goto L_0888F80C;
L_0888F80C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F81Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F81Cu) goto L_0888F81C;
    return;
L_0888F81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F824;
    }
L_0888F824:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888F880;
      }
      goto L_0888F830;
    }
L_0888F830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F85C;
      }
      goto L_0888F840;
    }
L_0888F840:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F84Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F84Cu) goto L_0888F84C;
    return;
L_0888F84C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F870;
      }
      goto L_0888F85C;
    }
L_0888F85C:
    ctx.gpr[31] = (0x0888F864u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F864u) goto L_0888F864;
    return;
L_0888F864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_0888F870;
L_0888F870:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F878;
    }
L_0888F878:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F880;
    }
L_0888F880:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F888;
    }
L_0888F888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F8AC;
      }
      goto L_0888F894;
    }
L_0888F894:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F8A0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F8A0u) goto L_0888F8A0;
    return;
L_0888F8A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0888F8BC;
      }
      goto L_0888F8AC;
    }
L_0888F8AC:
    ctx.gpr[31] = (0x0888F8B4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F8B4u) goto L_0888F8B4;
    return;
L_0888F8B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_0888F8BC;
L_0888F8BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F8C4;
    }
L_0888F8C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F8CC;
    }
L_0888F8CC:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 64u);
      if (branch_taken) {
          goto L_0888F920;
      }
      goto L_0888F8D4;
    }
L_0888F8D4:
    ctx.gpr[31] = (0x0888F8DCu);
    // nop
    goto L_0888FC5C;
L_0888F8DC:
    ctx.gpr[31] = (0x0888F8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 350u, 0x088159DCu>(ctx, &aot_mem) && ctx.pc == 0x0888F8E4u) goto L_0888F8E4;
    return;
L_0888F8E4:
    ctx.gpr[31] = (0x0888F8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 163u, 0x08888D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888F8ECu) goto L_0888F8EC;
    return;
L_0888F8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0888F900u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 119u, 0x0884C7BCu>(ctx, &aot_mem) && ctx.pc == 0x0888F900u) goto L_0888F900;
    return;
L_0888F900:
    ctx.gpr[31] = (0x0888F908u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 930u, 0x0881F9B4u>(ctx, &aot_mem) && ctx.pc == 0x0888F908u) goto L_0888F908;
    return;
L_0888F908:
    ctx.gpr[31] = (0x0888F910u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F910u) goto L_0888F910;
    return;
L_0888F910:
    ctx.gpr[31] = (0x0888F918u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0888F918u) goto L_0888F918;
    return;
L_0888F918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F920;
    }
L_0888F920:
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0888F940;
    }
    goto L_0888F928;
L_0888F928:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F938u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F938u) goto L_0888F938;
    return;
L_0888F938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F940;
    }
L_0888F940:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888F980;
      }
      goto L_0888F94C;
    }
L_0888F94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F970;
      }
      goto L_0888F95C;
    }
L_0888F95C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F968u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F968u) goto L_0888F968;
    return;
L_0888F968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F970;
    }
L_0888F970:
    ctx.gpr[31] = (0x0888F978u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F978u) goto L_0888F978;
    return;
L_0888F978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F980;
    }
L_0888F980:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F988;
    }
L_0888F988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888F9A8;
      }
      goto L_0888F994;
    }
L_0888F994:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888F9A0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F9A0u) goto L_0888F9A0;
    return;
L_0888F9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888F9B0;
      }
      goto L_0888F9A8;
    }
L_0888F9A8:
    ctx.gpr[31] = (0x0888F9B0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888F9B0u) goto L_0888F9B0;
    return;
L_0888F9B0:
    ctx.gpr[31] = (0x0888F9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 591u, 0x0888BDA4u>(ctx, &aot_mem) && ctx.pc == 0x0888F9B8u) goto L_0888F9B8;
    return;
L_0888F9B8:
    ctx.gpr[31] = (0x0888F9C0u);
    // nop
    goto L_0888E638;
L_0888F9C0:
    ctx.gpr[31] = (0x0888F9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x0888F9C8u) goto L_0888F9C8;
    return;
L_0888F9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FA40;
      }
      goto L_0888F9D0;
    }
L_0888F9D0:
    ctx.gpr[31] = (0x0888F9D8u);
    // nop
    goto L_0888EE0C;
L_0888F9D8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888FA40;
      }
      goto L_0888F9E4;
    }
L_0888F9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0888FA40;
L_0888FA40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888FA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24904)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24904)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 64u);
      if (branch_taken) {
          goto L_0888FB58;
      }
      goto L_0888FA90;
    }
L_0888FA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0888FB28;
      }
      goto L_0888FAD0;
    }
L_0888FAD0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888FB04;
      }
      goto L_0888FADC;
    }
L_0888FADC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0888FB0C;
      }
      goto L_0888FAE4;
    }
L_0888FAE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888FB18;
      }
      goto L_0888FAEC;
    }
L_0888FAEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0888FB24;
      }
      goto L_0888FAF4;
    }
L_0888FAF4:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_0888FB28;
      }
      goto L_0888FB04;
    }
L_0888FB04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0888FB28;
      }
      goto L_0888FB0C;
    }
L_0888FB0C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888FB28;
      }
      goto L_0888FB18;
    }
L_0888FB18:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888FB28;
      }
      goto L_0888FB24;
    }
L_0888FB24:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0888FB28;
L_0888FB28:
    ctx.gpr[31] = (0x0888FB30u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888FB30u) goto L_0888FB30;
    return;
L_0888FB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888FC40;
      }
      goto L_0888FB58;
    }
L_0888FB58:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0888FBC8;
      }
      goto L_0888FB60;
    }
L_0888FB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0888FBC0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888FBC0u) goto L_0888FBC0;
    return;
L_0888FBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FC40;
      }
      goto L_0888FBC8;
    }
L_0888FBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0888FC0C;
      }
      goto L_0888FBD4;
    }
L_0888FBD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FBFC;
      }
      goto L_0888FBE8;
    }
L_0888FBE8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888FBF4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888FBF4u) goto L_0888FBF4;
    return;
L_0888FBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FC40;
      }
      goto L_0888FBFC;
    }
L_0888FBFC:
    ctx.gpr[31] = (0x0888FC04u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888FC04u) goto L_0888FC04;
    return;
L_0888FC04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FC40;
      }
      goto L_0888FC0C;
    }
L_0888FC0C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888FC40;
      }
      goto L_0888FC14;
    }
L_0888FC14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888FC38;
      }
      goto L_0888FC24;
    }
L_0888FC24:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888FC30u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888FC30u) goto L_0888FC30;
    return;
L_0888FC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FC40;
      }
      goto L_0888FC38;
    }
L_0888FC38:
    ctx.gpr[31] = (0x0888FC40u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0888FC40u) goto L_0888FC40;
    return;
L_0888FC40:
    ctx.gpr[31] = (0x0888FC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x0888FC48u) goto L_0888FC48;
    return;
L_0888FC48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888FC5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888FC8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 528u, 0x088327D8u>(ctx, &aot_mem) && ctx.pc == 0x0888FC8Cu) goto L_0888FC8C;
    return;
L_0888FC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[31] = (0x0888FC98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 530u, 0x088327F8u>(ctx, &aot_mem) && ctx.pc == 0x0888FC98u) goto L_0888FC98;
    return;
L_0888FC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13336));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0888FCB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 709u, 0x088335C4u>(ctx, &aot_mem) && ctx.pc == 0x0888FCB8u) goto L_0888FCB8;
    return;
L_0888FCB8:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 10u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888FCD0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888FCD0u) goto L_0888FCD0;
    return;
L_0888FCD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888FCDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 710u, 0x088335D4u>(ctx, &aot_mem) && ctx.pc == 0x0888FCDCu) goto L_0888FCDC;
    return;
L_0888FCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x0888FD5Cu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 713u, 0x08833600u>(ctx, &aot_mem) && ctx.pc == 0x0888FD5Cu) goto L_0888FD5C;
    return;
L_0888FD5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888FD6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888FD6Cu) goto L_0888FD6C;
    return;
L_0888FD6C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888FD80u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888FD80u) goto L_0888FD80;
    return;
L_0888FD80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12852));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(69));
      if (branch_taken) {
          goto L_0888FDCC;
      }
      goto L_0888FDC4;
    }
L_0888FDC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888FDD4;
      }
      goto L_0888FDCC;
    }
L_0888FDCC:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0888FDD4;
L_0888FDD4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FE00;
      }
      goto L_0888FDDC;
    }
L_0888FDDC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x0888FDE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20076));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FDE8u) goto L_0888FDE8;
    return;
L_0888FDE8:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0888FDF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FDF8u) goto L_0888FDF8;
    return;
L_0888FDF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FE24;
      }
      goto L_0888FE00;
    }
L_0888FE00:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x0888FE0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20048));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FE0Cu) goto L_0888FE0C;
    return;
L_0888FE0C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0888FE24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20036));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FE24u) goto L_0888FE24;
    return;
L_0888FE24:
    ctx.gpr[31] = (0x0888FE2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 719u, 0x0883365Cu>(ctx, &aot_mem) && ctx.pc == 0x0888FE2Cu) goto L_0888FE2C;
    return;
L_0888FE2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888FE3Cu);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888FE3Cu) goto L_0888FE3C;
    return;
L_0888FE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12884));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0888FE98;
      }
      goto L_0888FE70;
    }
L_0888FE70:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888FE80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20076));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FE80u) goto L_0888FE80;
    return;
L_0888FE80:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888FE90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FE90u) goto L_0888FE90;
    return;
L_0888FE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888FEC0;
      }
      goto L_0888FE98;
    }
L_0888FE98:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888FEA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20020));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FEA8u) goto L_0888FEA8;
    return;
L_0888FEA8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0888FEC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20008));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888FEC0u) goto L_0888FEC0;
    return;
L_0888FEC0:
    ctx.gpr[31] = (0x0888FEC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 725u, 0x088336B8u>(ctx, &aot_mem) && ctx.pc == 0x0888FEC8u) goto L_0888FEC8;
    return;
L_0888FEC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888FEEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
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
    ctx.gpr[31] = (0x0888FF28u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888FF28u) goto L_0888FF28;
    return;
L_0888FF28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888FF38u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888FF38u) goto L_0888FF38;
    return;
L_0888FF38:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888FF4Cu);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888FF4Cu) goto L_0888FF4C;
    return;
L_0888FF4C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 4u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 18u, 0x08890458u>(ctx, &aot_mem); return;
      }
      goto L_0888FF68;
    }
L_0888FF68:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(45));
    ctx.gpr[19] = (0u | 50u);
    ctx.gpr[18] = (0u | 49u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(81));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 2u, 0x08890094u>(ctx, &aot_mem); return;
      }
      goto L_0888FF90;
    }
L_0888FF90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 6u, 0x08890180u>(ctx, &aot_mem); return;
      }
      goto L_0888FF98;
    }
L_0888FF98:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 10u, 0x08890270u>(ctx, &aot_mem); return;
      }
      goto L_0888FFA0;
    }
L_0888FFA0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 14u, 0x08890368u>(ctx, &aot_mem); return;
      }
      goto L_0888FFA8;
    }
L_0888FFA8:
    ctx.gpr[31] = (0x0888FFB0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 528u, 0x088327D8u>(ctx, &aot_mem) && ctx.pc == 0x0888FFB0u) goto L_0888FFB0;
    return;
L_0888FFB0:
    ctx.gpr[31] = (0x0888FFB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 530u, 0x088327F8u>(ctx, &aot_mem) && ctx.pc == 0x0888FFB8u) goto L_0888FFB8;
    return;
L_0888FFB8:
    ctx.gpr[31] = (0x0888FFC0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 709u, 0x088335C4u>(ctx, &aot_mem) && ctx.pc == 0x0888FFC0u) goto L_0888FFC0;
    return;
L_0888FFC0:
    ctx.gpr[4] = (24368u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12594));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (13616u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12336));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12337u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (12336u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12383));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[4] = (12353u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24373));
    ctx.pc = 0x08890000u; return;
}

void recomp_unit_0034(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0034_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_34(Runtime &runtime) {
    runtime.register_generated_unit(34u, 0x0888C000u, 16384u, &recomp_unit_0034, &recomp_unit_0034_entry);
    runtime.register_function(0x0888C000u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C014u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C020u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C0B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C0D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C10Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C118u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C13Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C158u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C18Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C1A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C1D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C1E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C22Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C254u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C25Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C274u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C288u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C2A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C2CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C2DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C2F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C2F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C304u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C314u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C32Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C354u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C370u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C388u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C3B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C3C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C3D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C3FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C410u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C42Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C43Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C454u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C46Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C488u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C49Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C4A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C4B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C510u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C524u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C538u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C550u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C56Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C600u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C614u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C640u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C664u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C674u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C680u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C698u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C6A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C6D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C6E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C710u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C718u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C744u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C74Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C768u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C80Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C82Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C854u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C85Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C86Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C87Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C894u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C8BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C8C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C8DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C8F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C910u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C9E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CABCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CACCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB34u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB54u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB78u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC44u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC54u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CDA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEC0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D000u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D00Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D034u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D04Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D060u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D068u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D080u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D090u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D178u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D18Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D210u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D25Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D26Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D27Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D300u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D308u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D318u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D324u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D328u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D334u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D34Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D448u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D500u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D510u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D528u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D540u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D58Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D618u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D64Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D654u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D694u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D704u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D718u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D738u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D770u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D788u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D828u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D860u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D86Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D894u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D904u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D90Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D924u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D954u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D95Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D974u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D984u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D998u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DABCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DACCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DADCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE4Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DED0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF44u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF4Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E020u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E040u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E050u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E060u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E068u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E078u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E088u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E090u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E12Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E134u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E14Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E15Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E170u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E178u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E190u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E1A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E1B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E1BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E1D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E1E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E208u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E228u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E238u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E248u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E250u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E260u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E270u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E278u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E288u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E294u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E298u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E2A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E2BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E2ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E2F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E30Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E31Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E330u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E338u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E350u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E360u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E374u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E37Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E394u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E40Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E42Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E43Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E44Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E454u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E464u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E474u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E47Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E48Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E498u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E49Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E518u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E520u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E538u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E548u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E55Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E564u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E57Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E58Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E604u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E614u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E638u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E698u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E728u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E734u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E744u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E754u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E768u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E778u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E784u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E810u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E820u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E830u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E860u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E880u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E890u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E90Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E918u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E91Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E928u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E930u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E940u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E950u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E968u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E998u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EABCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EACCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EADCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAF0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB68u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBF0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE4Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE54u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EECCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EED4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F02Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F03Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F134u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F190u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F198u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F268u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F288u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F298u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F308u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F324u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F32Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F338u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F398u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F404u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F414u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F41Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F424u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F42Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F43Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F448u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F450u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F45Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F460u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F464u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F46Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F474u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F484u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F48Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F494u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F50Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F514u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F51Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F524u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F52Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F534u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F53Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F544u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F550u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F558u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F560u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F56Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F578u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F580u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F588u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F590u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F598u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F604u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F660u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F670u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F690u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F728u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F730u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F73Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F74Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F758u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F768u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F770u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F77Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F784u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F78Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F794u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F804u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F80Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F81Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F824u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F830u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F840u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F84Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F85Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F864u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F870u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F878u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F880u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F888u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F894u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F900u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F908u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F910u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F918u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F920u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F928u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F938u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F940u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F94Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F95Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F968u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F970u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F980u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F988u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F994u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FADCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBC0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FE98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FEA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FEC0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FEC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FEECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FF28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FF38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FF4Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FF68u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FF90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FF98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FFA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FFA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FFB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FFB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FFC0u, &recomp_unit_0034, "recomp_unit_0034");
}
} // namespace psprecomp

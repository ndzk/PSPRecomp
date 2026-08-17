#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0105[4091] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6,
    0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 35,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    55, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0,
    0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0,
    0, 101, 0, 102, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 111, 112, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 121, 0, 0, 122, 123,
    0, 0, 0, 124, 0, 0, 125, 126, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 141, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156,
    0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0,
    186, 0, 187, 0, 188, 0, 189, 0, 190, 191, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 258, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0,
    269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    278, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    282, 0, 283, 0, 284, 285, 0, 286, 0, 287, 0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290,
    291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 297, 0, 0, 0, 298, 0, 299, 300, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 306, 0, 0, 307, 308, 0, 0, 0, 309, 0, 310, 311, 0, 312, 0,
    0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 346, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0,
    0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 0, 396, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0,
    416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 424, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 428, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0,
    432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0,
    0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0,
    531, 0, 532, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 535, 0, 536, 0, 0, 0, 0, 0, 537,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 539, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 550, 0,
    551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0,
    563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566,
};
void recomp_unit_0105_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A8000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0105[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A8000;
    case 2u: goto L_089A800C;
    case 3u: goto L_089A8028;
    case 4u: goto L_089A8034;
    case 5u: goto L_089A806C;
    case 6u: goto L_089A807C;
    case 7u: goto L_089A8088;
    case 8u: goto L_089A8098;
    case 9u: goto L_089A80A4;
    case 10u: goto L_089A80EC;
    case 11u: goto L_089A8124;
    case 12u: goto L_089A8130;
    case 13u: goto L_089A815C;
    case 14u: goto L_089A8168;
    case 15u: goto L_089A8174;
    case 16u: goto L_089A8180;
    case 17u: goto L_089A8198;
    case 18u: goto L_089A81F0;
    case 19u: goto L_089A8214;
    case 20u: goto L_089A8228;
    case 21u: goto L_089A825C;
    case 22u: goto L_089A8264;
    case 23u: goto L_089A82AC;
    case 24u: goto L_089A82E0;
    case 25u: goto L_089A82EC;
    case 26u: goto L_089A8300;
    case 27u: goto L_089A8310;
    case 28u: goto L_089A831C;
    case 29u: goto L_089A8374;
    case 30u: goto L_089A837C;
    case 31u: goto L_089A83B4;
    case 32u: goto L_089A83C0;
    case 33u: goto L_089A83EC;
    case 34u: goto L_089A83F8;
    case 35u: goto L_089A83FC;
    case 36u: goto L_089A8410;
    case 37u: goto L_089A8418;
    case 38u: goto L_089A8438;
    case 39u: goto L_089A8448;
    case 40u: goto L_089A8450;
    case 41u: goto L_089A8464;
    case 42u: goto L_089A8514;
    case 43u: goto L_089A85A0;
    case 44u: goto L_089A85C0;
    case 45u: goto L_089A85C8;
    case 46u: goto L_089A8630;
    case 47u: goto L_089A8638;
    case 48u: goto L_089A8670;
    case 49u: goto L_089A86B8;
    case 50u: goto L_089A86C4;
    case 51u: goto L_089A86CC;
    case 52u: goto L_089A86D4;
    case 53u: goto L_089A86E4;
    case 54u: goto L_089A86F8;
    case 55u: goto L_089A8700;
    case 56u: goto L_089A870C;
    case 57u: goto L_089A871C;
    case 58u: goto L_089A8724;
    case 59u: goto L_089A8730;
    case 60u: goto L_089A8738;
    case 61u: goto L_089A8740;
    case 62u: goto L_089A8748;
    case 63u: goto L_089A8750;
    case 64u: goto L_089A8754;
    case 65u: goto L_089A8764;
    case 66u: goto L_089A8784;
    case 67u: goto L_089A87A8;
    case 68u: goto L_089A87F8;
    case 69u: goto L_089A881C;
    case 70u: goto L_089A8830;
    case 71u: goto L_089A8864;
    case 72u: goto L_089A88A8;
    case 73u: goto L_089A88C8;
    case 74u: goto L_089A88E0;
    case 75u: goto L_089A88EC;
    case 76u: goto L_089A8904;
    case 77u: goto L_089A890C;
    case 78u: goto L_089A892C;
    case 79u: goto L_089A894C;
    case 80u: goto L_089A8950;
    case 81u: goto L_089A8988;
    case 82u: goto L_089A899C;
    case 83u: goto L_089A89D0;
    case 84u: goto L_089A8A30;
    case 85u: goto L_089A8A40;
    case 86u: goto L_089A8A64;
    case 87u: goto L_089A8A78;
    case 88u: goto L_089A8A88;
    case 89u: goto L_089A8AB0;
    case 90u: goto L_089A8AC4;
    case 91u: goto L_089A8AE0;
    case 92u: goto L_089A8AF8;
    case 93u: goto L_089A8B14;
    case 94u: goto L_089A8B1C;
    case 95u: goto L_089A8B28;
    case 96u: goto L_089A8B38;
    case 97u: goto L_089A8B40;
    case 98u: goto L_089A8B68;
    case 99u: goto L_089A8B70;
    case 100u: goto L_089A8B78;
    case 101u: goto L_089A8B84;
    case 102u: goto L_089A8B8C;
    case 103u: goto L_089A8B94;
    case 104u: goto L_089A8B98;
    case 105u: goto L_089A8C44;
    case 106u: goto L_089A8C48;
    case 107u: goto L_089A8C58;
    case 108u: goto L_089A8C64;
    case 109u: goto L_089A8C74;
    case 110u: goto L_089A8C80;
    case 111u: goto L_089A8C8C;
    case 112u: goto L_089A8C90;
    case 113u: goto L_089A8CA0;
    case 114u: goto L_089A8CA8;
    case 115u: goto L_089A8CAC;
    case 116u: goto L_089A8D28;
    case 117u: goto L_089A8D38;
    case 118u: goto L_089A8D4C;
    case 119u: goto L_089A8D5C;
    case 120u: goto L_089A8D68;
    case 121u: goto L_089A8D6C;
    case 122u: goto L_089A8D78;
    case 123u: goto L_089A8D7C;
    case 124u: goto L_089A8D8C;
    case 125u: goto L_089A8D98;
    case 126u: goto L_089A8D9C;
    case 127u: goto L_089A8DA0;
    case 128u: goto L_089A8DAC;
    case 129u: goto L_089A8DC8;
    case 130u: goto L_089A8DD8;
    case 131u: goto L_089A8DE0;
    case 132u: goto L_089A8DFC;
    case 133u: goto L_089A8E0C;
    case 134u: goto L_089A8E14;
    case 135u: goto L_089A8E2C;
    case 136u: goto L_089A8E38;
    case 137u: goto L_089A8E50;
    case 138u: goto L_089A8E64;
    case 139u: goto L_089A8E6C;
    case 140u: goto L_089A8E80;
    case 141u: goto L_089A8E98;
    case 142u: goto L_089A8E9C;
    case 143u: goto L_089A8EAC;
    case 144u: goto L_089A8EC0;
    case 145u: goto L_089A8ED0;
    case 146u: goto L_089A8EE4;
    case 147u: goto L_089A8EEC;
    case 148u: goto L_089A8F24;
    case 149u: goto L_089A8F78;
    case 150u: goto L_089A8F98;
    case 151u: goto L_089A8FAC;
    case 152u: goto L_089A8FBC;
    case 153u: goto L_089A8FDC;
    case 154u: goto L_089A8FE4;
    case 155u: goto L_089A8FF0;
    case 156u: goto L_089A8FFC;
    case 157u: goto L_089A9008;
    case 158u: goto L_089A9014;
    case 159u: goto L_089A9020;
    case 160u: goto L_089A902C;
    case 161u: goto L_089A9034;
    case 162u: goto L_089A9038;
    case 163u: goto L_089A9044;
    case 164u: goto L_089A9090;
    case 165u: goto L_089A909C;
    case 166u: goto L_089A90C0;
    case 167u: goto L_089A90C8;
    case 168u: goto L_089A9108;
    case 169u: goto L_089A9118;
    case 170u: goto L_089A9124;
    case 171u: goto L_089A912C;
    case 172u: goto L_089A916C;
    case 173u: goto L_089A917C;
    case 174u: goto L_089A9184;
    case 175u: goto L_089A918C;
    case 176u: goto L_089A91D8;
    case 177u: goto L_089A91E8;
    case 178u: goto L_089A9200;
    case 179u: goto L_089A921C;
    case 180u: goto L_089A922C;
    case 181u: goto L_089A9250;
    case 182u: goto L_089A9260;
    case 183u: goto L_089A9268;
    case 184u: goto L_089A9270;
    case 185u: goto L_089A9278;
    case 186u: goto L_089A9280;
    case 187u: goto L_089A9288;
    case 188u: goto L_089A9290;
    case 189u: goto L_089A9298;
    case 190u: goto L_089A92A0;
    case 191u: goto L_089A92A4;
    case 192u: goto L_089A92A8;
    case 193u: goto L_089A92B8;
    case 194u: goto L_089A92D4;
    case 195u: goto L_089A92E4;
    case 196u: goto L_089A92F4;
    case 197u: goto L_089A930C;
    case 198u: goto L_089A9314;
    case 199u: goto L_089A931C;
    case 200u: goto L_089A9324;
    case 201u: goto L_089A9334;
    case 202u: goto L_089A938C;
    case 203u: goto L_089A9450;
    case 204u: goto L_089A9460;
    case 205u: goto L_089A947C;
    case 206u: goto L_089A9488;
    case 207u: goto L_089A94A4;
    case 208u: goto L_089A94BC;
    case 209u: goto L_089A94D8;
    case 210u: goto L_089A94EC;
    case 211u: goto L_089A9504;
    case 212u: goto L_089A9510;
    case 213u: goto L_089A9524;
    case 214u: goto L_089A9530;
    case 215u: goto L_089A9548;
    case 216u: goto L_089A957C;
    case 217u: goto L_089A9590;
    case 218u: goto L_089A95A4;
    case 219u: goto L_089A95BC;
    case 220u: goto L_089A95C8;
    case 221u: goto L_089A95D4;
    case 222u: goto L_089A95D8;
    case 223u: goto L_089A9610;
    case 224u: goto L_089A9620;
    case 225u: goto L_089A965C;
    case 226u: goto L_089A9664;
    case 227u: goto L_089A966C;
    case 228u: goto L_089A96A8;
    case 229u: goto L_089A96D8;
    case 230u: goto L_089A96E8;
    case 231u: goto L_089A9704;
    case 232u: goto L_089A971C;
    case 233u: goto L_089A9744;
    case 234u: goto L_089A97C0;
    case 235u: goto L_089A97F8;
    case 236u: goto L_089A9834;
    case 237u: goto L_089A9848;
    case 238u: goto L_089A988C;
    case 239u: goto L_089A989C;
    case 240u: goto L_089A98B4;
    case 241u: goto L_089A98BC;
    case 242u: goto L_089A98C8;
    case 243u: goto L_089A98D0;
    case 244u: goto L_089A98D8;
    case 245u: goto L_089A990C;
    case 246u: goto L_089A9914;
    case 247u: goto L_089A9928;
    case 248u: goto L_089A9934;
    case 249u: goto L_089A9948;
    case 250u: goto L_089A9950;
    case 251u: goto L_089A9978;
    case 252u: goto L_089A9980;
    case 253u: goto L_089A9988;
    case 254u: goto L_089A99BC;
    case 255u: goto L_089A99F0;
    case 256u: goto L_089A99F8;
    case 257u: goto L_089A9A24;
    case 258u: goto L_089A9A28;
    case 259u: goto L_089A9A38;
    case 260u: goto L_089A9A40;
    case 261u: goto L_089A9A4C;
    case 262u: goto L_089A9A54;
    case 263u: goto L_089A9A5C;
    case 264u: goto L_089A9A68;
    case 265u: goto L_089A9A9C;
    case 266u: goto L_089A9AE0;
    case 267u: goto L_089A9AEC;
    case 268u: goto L_089A9AF4;
    case 269u: goto L_089A9B00;
    case 270u: goto L_089A9B0C;
    case 271u: goto L_089A9B20;
    case 272u: goto L_089A9B58;
    case 273u: goto L_089A9B64;
    case 274u: goto L_089A9B94;
    case 275u: goto L_089A9B9C;
    case 276u: goto L_089A9BD8;
    case 277u: goto L_089A9BE0;
    case 278u: goto L_089A9C00;
    case 279u: goto L_089A9C04;
    case 280u: goto L_089A9C44;
    case 281u: goto L_089A9C68;
    case 282u: goto L_089A9C80;
    case 283u: goto L_089A9C88;
    case 284u: goto L_089A9C90;
    case 285u: goto L_089A9C94;
    case 286u: goto L_089A9C9C;
    case 287u: goto L_089A9CA4;
    case 288u: goto L_089A9CAC;
    case 289u: goto L_089A9CB0;
    case 290u: goto L_089A9D7C;
    case 291u: goto L_089A9D80;
    case 292u: goto L_089A9D90;
    case 293u: goto L_089A9D9C;
    case 294u: goto L_089A9DAC;
    case 295u: goto L_089A9DB8;
    case 296u: goto L_089A9DC4;
    case 297u: goto L_089A9DC8;
    case 298u: goto L_089A9DD8;
    case 299u: goto L_089A9DE0;
    case 300u: goto L_089A9DE4;
    case 301u: goto L_089A9E80;
    case 302u: goto L_089A9E90;
    case 303u: goto L_089A9EA4;
    case 304u: goto L_089A9EB4;
    case 305u: goto L_089A9EC0;
    case 306u: goto L_089A9EC4;
    case 307u: goto L_089A9ED0;
    case 308u: goto L_089A9ED4;
    case 309u: goto L_089A9EE4;
    case 310u: goto L_089A9EEC;
    case 311u: goto L_089A9EF0;
    case 312u: goto L_089A9EF8;
    case 313u: goto L_089A9F14;
    case 314u: goto L_089A9F1C;
    case 315u: goto L_089A9F28;
    case 316u: goto L_089A9F44;
    case 317u: goto L_089A9F50;
    case 318u: goto L_089A9F60;
    case 319u: goto L_089A9F78;
    case 320u: goto L_089A9F8C;
    case 321u: goto L_089A9FA8;
    case 322u: goto L_089A9FC4;
    case 323u: goto L_089A9FCC;
    case 324u: goto L_089AA008;
    case 325u: goto L_089AA040;
    case 326u: goto L_089AA044;
    case 327u: goto L_089AA04C;
    case 328u: goto L_089AA060;
    case 329u: goto L_089AA074;
    case 330u: goto L_089AA07C;
    case 331u: goto L_089AA090;
    case 332u: goto L_089AA0B4;
    case 333u: goto L_089AA0E0;
    case 334u: goto L_089AA0EC;
    case 335u: goto L_089AA100;
    case 336u: goto L_089AA118;
    case 337u: goto L_089AA12C;
    case 338u: goto L_089AA134;
    case 339u: goto L_089AA148;
    case 340u: goto L_089AA17C;
    case 341u: goto L_089AA1B8;
    case 342u: goto L_089AA1CC;
    case 343u: goto L_089AA24C;
    case 344u: goto L_089AA260;
    case 345u: goto L_089AA288;
    case 346u: goto L_089AA290;
    case 347u: goto L_089AA294;
    case 348u: goto L_089AA2AC;
    case 349u: goto L_089AA2CC;
    case 350u: goto L_089AA2F4;
    case 351u: goto L_089AA308;
    case 352u: goto L_089AA328;
    case 353u: goto L_089AA334;
    case 354u: goto L_089AA33C;
    case 355u: goto L_089AA340;
    case 356u: goto L_089AA360;
    case 357u: goto L_089AA398;
    case 358u: goto L_089AA3A8;
    case 359u: goto L_089AA3C4;
    case 360u: goto L_089AA3DC;
    case 361u: goto L_089AA444;
    case 362u: goto L_089AA44C;
    case 363u: goto L_089AA468;
    case 364u: goto L_089AA4A0;
    case 365u: goto L_089AA4A8;
    case 366u: goto L_089AA4C0;
    case 367u: goto L_089AA4C8;
    case 368u: goto L_089AA4D4;
    case 369u: goto L_089AA4E4;
    case 370u: goto L_089AA4F0;
    case 371u: goto L_089AA4F8;
    case 372u: goto L_089AA504;
    case 373u: goto L_089AA50C;
    case 374u: goto L_089AA520;
    case 375u: goto L_089AA528;
    case 376u: goto L_089AA53C;
    case 377u: goto L_089AA54C;
    case 378u: goto L_089AA554;
    case 379u: goto L_089AA560;
    case 380u: goto L_089AA568;
    case 381u: goto L_089AA574;
    case 382u: goto L_089AA57C;
    case 383u: goto L_089AA590;
    case 384u: goto L_089AA5B0;
    case 385u: goto L_089AA5B4;
    case 386u: goto L_089AA5C4;
    case 387u: goto L_089AA5CC;
    case 388u: goto L_089AA5EC;
    case 389u: goto L_089AA62C;
    case 390u: goto L_089AA634;
    case 391u: goto L_089AA644;
    case 392u: goto L_089AA650;
    case 393u: goto L_089AA658;
    case 394u: goto L_089AA664;
    case 395u: goto L_089AA66C;
    case 396u: goto L_089AA678;
    case 397u: goto L_089AA680;
    case 398u: goto L_089AA6A8;
    case 399u: goto L_089AA6B4;
    case 400u: goto L_089AA6BC;
    case 401u: goto L_089AA6C8;
    case 402u: goto L_089AA6D0;
    case 403u: goto L_089AA6F0;
    case 404u: goto L_089AA704;
    case 405u: goto L_089AA70C;
    case 406u: goto L_089AA714;
    case 407u: goto L_089AA73C;
    case 408u: goto L_089AA744;
    case 409u: goto L_089AA76C;
    case 410u: goto L_089AA788;
    case 411u: goto L_089AA7A4;
    case 412u: goto L_089AA7C8;
    case 413u: goto L_089AA7D0;
    case 414u: goto L_089AA7E8;
    case 415u: goto L_089AA7F8;
    case 416u: goto L_089AA800;
    case 417u: goto L_089AA80C;
    case 418u: goto L_089AA814;
    case 419u: goto L_089AA820;
    case 420u: goto L_089AA828;
    case 421u: goto L_089AA840;
    case 422u: goto L_089AA848;
    case 423u: goto L_089AA870;
    case 424u: goto L_089AA874;
    case 425u: goto L_089AA89C;
    case 426u: goto L_089AA8B8;
    case 427u: goto L_089AA8C4;
    case 428u: goto L_089AA8C8;
    case 429u: goto L_089AA8D0;
    case 430u: goto L_089AA8DC;
    case 431u: goto L_089AA8EC;
    case 432u: goto L_089AA900;
    case 433u: goto L_089AA908;
    case 434u: goto L_089AA910;
    case 435u: goto L_089AA938;
    case 436u: goto L_089AA940;
    case 437u: goto L_089AA960;
    case 438u: goto L_089AA988;
    case 439u: goto L_089AA9A8;
    case 440u: goto L_089AA9BC;
    case 441u: goto L_089AAA20;
    case 442u: goto L_089AAA30;
    case 443u: goto L_089AAA48;
    case 444u: goto L_089AAA60;
    case 445u: goto L_089AAA80;
    case 446u: goto L_089AAA90;
    case 447u: goto L_089AAA9C;
    case 448u: goto L_089AAAAC;
    case 449u: goto L_089AAAB8;
    case 450u: goto L_089AAAD0;
    case 451u: goto L_089AAAE0;
    case 452u: goto L_089AAAE8;
    case 453u: goto L_089AAAF8;
    case 454u: goto L_089AAB10;
    case 455u: goto L_089AAB44;
    case 456u: goto L_089AAB78;
    case 457u: goto L_089AAB88;
    case 458u: goto L_089AAB94;
    case 459u: goto L_089AAB9C;
    case 460u: goto L_089AABA8;
    case 461u: goto L_089AABBC;
    case 462u: goto L_089AABD4;
    case 463u: goto L_089AABDC;
    case 464u: goto L_089AABE8;
    case 465u: goto L_089AAE80;
    case 466u: goto L_089AAE9C;
    case 467u: goto L_089AAF50;
    case 468u: goto L_089AAF84;
    case 469u: goto L_089AAFB0;
    case 470u: goto L_089AB008;
    case 471u: goto L_089AB058;
    case 472u: goto L_089AB060;
    case 473u: goto L_089AB068;
    case 474u: goto L_089AB070;
    case 475u: goto L_089AB0F4;
    case 476u: goto L_089AB180;
    case 477u: goto L_089AB188;
    case 478u: goto L_089AB214;
    case 479u: goto L_089AB220;
    case 480u: goto L_089AB228;
    case 481u: goto L_089AB278;
    case 482u: goto L_089AB280;
    case 483u: goto L_089AB298;
    case 484u: goto L_089AB2F8;
    case 485u: goto L_089AB2FC;
    case 486u: goto L_089AB324;
    case 487u: goto L_089AB350;
    case 488u: goto L_089AB35C;
    case 489u: goto L_089AB438;
    case 490u: goto L_089AB440;
    case 491u: goto L_089AB450;
    case 492u: goto L_089AB45C;
    case 493u: goto L_089AB468;
    case 494u: goto L_089AB4F0;
    case 495u: goto L_089AB4F8;
    case 496u: goto L_089AB500;
    case 497u: goto L_089AB59C;
    case 498u: goto L_089AB5AC;
    case 499u: goto L_089AB5B4;
    case 500u: goto L_089AB5BC;
    case 501u: goto L_089AB640;
    case 502u: goto L_089AB648;
    case 503u: goto L_089AB650;
    case 504u: goto L_089AB6D4;
    case 505u: goto L_089AB7DC;
    case 506u: goto L_089AB7F4;
    case 507u: goto L_089AB834;
    case 508u: goto L_089AB884;
    case 509u: goto L_089AB890;
    case 510u: goto L_089AB898;
    case 511u: goto L_089AB8A0;
    case 512u: goto L_089AB8DC;
    case 513u: goto L_089AB8EC;
    case 514u: goto L_089AB904;
    case 515u: goto L_089AB910;
    case 516u: goto L_089AB920;
    case 517u: goto L_089AB928;
    case 518u: goto L_089AB984;
    case 519u: goto L_089AB990;
    case 520u: goto L_089AB99C;
    case 521u: goto L_089AB9A4;
    case 522u: goto L_089AB9AC;
    case 523u: goto L_089AB9B8;
    case 524u: goto L_089AB9C0;
    case 525u: goto L_089AB9C8;
    case 526u: goto L_089AB9D0;
    case 527u: goto L_089ABA54;
    case 528u: goto L_089ABAE0;
    case 529u: goto L_089ABAE8;
    case 530u: goto L_089ABB74;
    case 531u: goto L_089ABB80;
    case 532u: goto L_089ABB88;
    case 533u: goto L_089ABB8C;
    case 534u: goto L_089ABBD8;
    case 535u: goto L_089ABBDC;
    case 536u: goto L_089ABBE4;
    case 537u: goto L_089ABBFC;
    case 538u: goto L_089ABC5C;
    case 539u: goto L_089ABC60;
    case 540u: goto L_089ABC90;
    case 541u: goto L_089ABCC8;
    case 542u: goto L_089ABCD4;
    case 543u: goto L_089ABDB0;
    case 544u: goto L_089ABDB8;
    case 545u: goto L_089ABDC8;
    case 546u: goto L_089ABDD4;
    case 547u: goto L_089ABDE0;
    case 548u: goto L_089ABE6C;
    case 549u: goto L_089ABE74;
    case 550u: goto L_089ABE78;
    case 551u: goto L_089ABE80;
    case 552u: goto L_089ABE8C;
    case 553u: goto L_089ABE98;
    case 554u: goto L_089ABEA8;
    case 555u: goto L_089ABF34;
    case 556u: goto L_089ABF3C;
    case 557u: goto L_089ABF4C;
    case 558u: goto L_089ABF54;
    case 559u: goto L_089ABF5C;
    case 560u: goto L_089ABF64;
    case 561u: goto L_089ABF70;
    case 562u: goto L_089ABF78;
    case 563u: goto L_089ABF80;
    case 564u: goto L_089ABF8C;
    case 565u: goto L_089ABFA8;
    case 566u: goto L_089ABFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A8000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A800C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089A8028u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_089A825C;
L_089A8028:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-15112)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] >> 28u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089A8088;
      }
      goto L_089A806C;
    }
L_089A806C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089A807Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_089A8864;
L_089A807C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8088:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089A8098u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_089A8264;
L_089A8098:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A80A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[12] = (ctx.gpr[10] | 0u);
    ctx.gpr[13] = (ctx.gpr[9] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[14] = (ctx.gpr[8] | 0u);
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[24] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[14] | 0u);
    ctx.gpr[6] = (ctx.gpr[13] | 0u);
    ctx.gpr[5] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_089A8124;
      }
      goto L_089A80EC;
    }
L_089A80EC:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[12] = (ctx.gpr[6] | 0u);
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    ctx.gpr[14] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    ctx.gpr[10] = (ctx.gpr[13] | 0u);
    ctx.gpr[11] = (ctx.gpr[14] | 0u);
    ctx.gpr[31] = (0x089A8124u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 69u, 0x089C8570u>(ctx, &aot_mem) && ctx.pc == 0x089A8124u) goto L_089A8124;
    return;
L_089A8124:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A815Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 201u, 0x089C4F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A815Cu) goto L_089A815C;
    return;
L_089A815C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A8168u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 199u, 0x089C4F3Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8168u) goto L_089A8168;
    return;
L_089A8168:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A8174u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 200u, 0x089C4F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8174u) goto L_089A8174;
    return;
L_089A8174:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A8180u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 198u, 0x089C4F10u>(ctx, &aot_mem) && ctx.pc == 0x089A8180u) goto L_089A8180;
    return;
L_089A8180:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25312));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A8198u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8198u) goto L_089A8198;
    return;
L_089A8198:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_089A81F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] & 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089A8228;
      }
      goto L_089A8214;
    }
L_089A8214:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    goto L_089A8228;
L_089A8228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24768));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A825C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A82ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x089A82ACu) goto L_089A82AC;
    return;
L_089A82AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25312));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089A82E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A82E0u) goto L_089A82E0;
    return;
L_089A82E0:
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A837C;
      }
      goto L_089A82EC;
    }
L_089A82EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A8300u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8300u) goto L_089A8300;
    return;
L_089A8300:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A8310u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 283u, 0x089A5A28u>(ctx, &aot_mem) && ctx.pc == 0x089A8310u) goto L_089A8310;
    return;
L_089A8310:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A831Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 282u, 0x089A5A20u>(ctx, &aot_mem) && ctx.pc == 0x089A831Cu) goto L_089A831C;
    return;
L_089A831C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[8] = (2222u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24768));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089A83B4;
      }
      goto L_089A8374;
    }
L_089A8374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089A83C0;
      }
      goto L_089A837C;
    }
L_089A837C:
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A83B4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089A83C0;
L_089A83C0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
        goto L_089A83F8;
    }
    goto L_089A83EC;
L_089A83EC:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A83FC;
      }
      goto L_089A83F8;
    }
L_089A83F8:
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089A83FC;
L_089A83FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089A8630;
      }
      goto L_089A8410;
    }
L_089A8410:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A8418;
L_089A8418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089A8450;
      }
      goto L_089A8438;
    }
L_089A8438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A8448u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089A8448u) goto L_089A8448;
    return;
L_089A8448:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[23]);
    goto L_089A8450;
L_089A8450:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A8464u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089A8464u) goto L_089A8464;
    return;
L_089A8464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word(ctx.fpr[12], 4u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word(ctx.fpr[13], 4u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word(ctx.fpr[12], 4u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word(ctx.fpr[13], 4u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-2)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-3)));
        goto L_089A85A0;
    }
    goto L_089A8514;
L_089A8514:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-3)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-2)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-1)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-3)));
    goto L_089A85A0;
L_089A85A0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-2)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A85C8;
      }
      goto L_089A85C0;
    }
L_089A85C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A85C8;
L_089A85C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089A8418;
      }
      goto L_089A8630;
    }
L_089A8630:
    ctx.gpr[31] = (0x089A8638u);
    // nop
    ctx.pc = 0x08AB4514u;
    return;
L_089A8638:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(278));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A86B8u);
    ctx.gpr[4] = (2u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A86B8u) goto L_089A86B8;
    return;
L_089A86B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8764;
      }
      goto L_089A86C4;
    }
L_089A86C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089A8748;
      }
      goto L_089A86CC;
    }
L_089A86CC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_089A86D4;
L_089A86D4:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
        goto L_089A86E4;
    }
    goto L_089A86E4;
L_089A86E4:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A871C;
      }
      goto L_089A86F8;
    }
L_089A86F8:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    goto L_089A8700;
L_089A8700:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089A871C;
      }
      goto L_089A870C;
    }
L_089A870C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A8700;
      }
      goto L_089A871C;
    }
L_089A871C:
    if (ctx.gpr[9] != ctx.gpr[5]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_089A8730;
    }
    goto L_089A8724;
L_089A8724:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089A8730;
L_089A8730:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A86D4;
      }
      goto L_089A8738;
    }
L_089A8738:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A8754;
      }
      goto L_089A8740;
    }
L_089A8740:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089A8754;
      }
      goto L_089A8748;
    }
L_089A8748:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089A8754;
      }
      goto L_089A8750;
    }
L_089A8750:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_089A8754;
L_089A8754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089A8764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8764u) goto L_089A8764;
    return;
L_089A8764:
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
L_089A8784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25312));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A87A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A87A8u) goto L_089A87A8;
    return;
L_089A87A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A87F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] & 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089A8830;
      }
      goto L_089A881C;
    }
L_089A881C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    goto L_089A8830;
L_089A8830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24768));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A88A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x089A88A8u) goto L_089A88A8;
    return;
L_089A88A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A899C;
      }
      goto L_089A88C8;
    }
L_089A88C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089A88E0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 283u, 0x089A5A28u>(ctx, &aot_mem) && ctx.pc == 0x089A88E0u) goto L_089A88E0;
    return;
L_089A88E0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A88ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 282u, 0x089A5A20u>(ctx, &aot_mem) && ctx.pc == 0x089A88ECu) goto L_089A88EC;
    return;
L_089A88EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_089A892C;
      }
      goto L_089A8904;
    }
L_089A8904:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_089A890C;
L_089A890C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A890C;
      }
      goto L_089A892C;
    }
L_089A892C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089A899C;
      }
      goto L_089A894C;
    }
L_089A894C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089A8950;
L_089A8950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089A8988u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_089A89D0;
L_089A8988:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089A8950;
      }
      goto L_089A899C;
    }
L_089A899C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A89D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[11]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A8A30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x089A8A30u) goto L_089A8A30;
    return;
L_089A8A30:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A8A40u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 315u, 0x089A5E3Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8A40u) goto L_089A8A40;
    return;
L_089A8A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x089A8A64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 550u, 0x089CF344u>(ctx, &aot_mem) && ctx.pc == 0x089A8A64u) goto L_089A8A64;
    return;
L_089A8A64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089A8EEC;
      }
      goto L_089A8A78;
    }
L_089A8A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[31] = (0x089A8A88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 527u, 0x089CEFC4u>(ctx, &aot_mem) && ctx.pc == 0x089A8A88u) goto L_089A8A88;
    return;
L_089A8A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 1u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A8AB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(278));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8AB0u) goto L_089A8AB0;
    return;
L_089A8AB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089A8EE4;
      }
      goto L_089A8AC4;
    }
L_089A8AC4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089A8EC0;
      }
      goto L_089A8AE0;
    }
L_089A8AE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17152u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A8AF8;
L_089A8AF8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8B38;
      }
      goto L_089A8B14;
    }
L_089A8B14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089A8B1C;
L_089A8B1C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089A8B38;
      }
      goto L_089A8B28;
    }
L_089A8B28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A8B1C;
      }
      goto L_089A8B38;
    }
L_089A8B38:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089A8EAC;
    }
    goto L_089A8B40;
L_089A8B40:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[5] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_089A8B78;
      }
      goto L_089A8B68;
    }
L_089A8B68:
    if (static_cast<std::int32_t>(ctx.gpr[6]) <= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
        goto L_089A8DA0;
    }
    goto L_089A8B70;
L_089A8B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_089A8B98;
      }
      goto L_089A8B78;
    }
L_089A8B78:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A8D9C;
      }
      goto L_089A8B84;
    }
L_089A8B84:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_089A8CAC;
    }
    goto L_089A8B8C;
L_089A8B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A8DA0;
      }
      goto L_089A8B94;
    }
L_089A8B94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_089A8B98;
L_089A8B98:
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[18] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (ctx.gpr[6] >> 8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[9] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] >> 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[9] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] >> 24u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[19] + ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089A8D9C;
      }
      goto L_089A8C44;
    }
L_089A8C44:
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
    goto L_089A8C48;
L_089A8C48:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    goto L_089A8C58;
L_089A8C58:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089A8C80;
    }
    goto L_089A8C64;
L_089A8C64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[11];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A8C80;
      }
      goto L_089A8C74;
    }
L_089A8C74:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089A8C90;
      }
      goto L_089A8C80;
    }
L_089A8C80:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A8C58;
      }
      goto L_089A8C8C;
    }
L_089A8C8C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089A8C90;
L_089A8C90:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089A8C48;
      }
      goto L_089A8CA0;
    }
L_089A8CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089A8D98;
      }
      goto L_089A8CA8;
    }
L_089A8CA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_089A8CAC;
L_089A8CAC:
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (ctx.gpr[6] >> 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] >> 24u);
    ctx.gpr[9] = (ctx.gpr[18] << 4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A8D9C;
      }
      goto L_089A8D28;
    }
L_089A8D28:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089A8D38;
L_089A8D38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A8D68;
      }
      goto L_089A8D4C;
    }
L_089A8D4C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(56)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A8D6C;
      }
      goto L_089A8D5C;
    }
L_089A8D5C:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089A8D7C;
      }
      goto L_089A8D68;
    }
L_089A8D68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089A8D6C;
L_089A8D6C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A8D38;
      }
      goto L_089A8D78;
    }
L_089A8D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089A8D7C;
L_089A8D7C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A8D28;
      }
      goto L_089A8D8C;
    }
L_089A8D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089A8D9C;
      }
      goto L_089A8D98;
    }
L_089A8D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_089A8D9C;
L_089A8D9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    goto L_089A8DA0;
L_089A8DA0:
    ctx.gpr[7] = (ctx.gpr[6] & 132u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 8u);
      if (branch_taken) {
          goto L_089A8DD8;
      }
      goto L_089A8DAC;
    }
L_089A8DAC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089A8DC8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 287u, 0x089C5654u>(ctx, &aot_mem) && ctx.pc == 0x089A8DC8u) goto L_089A8DC8;
    return;
L_089A8DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & 8u);
    goto L_089A8DD8;
L_089A8DD8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
      if (branch_taken) {
          goto L_089A8E0C;
      }
      goto L_089A8DE0;
    }
L_089A8DE0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089A8DFCu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 296u, 0x089C5718u>(ctx, &aot_mem) && ctx.pc == 0x089A8DFCu) goto L_089A8DFC;
    return;
L_089A8DFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    goto L_089A8E0C;
L_089A8E0C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A8E38;
      }
      goto L_089A8E14;
    }
L_089A8E14:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x089A8E2Cu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 307u, 0x089C5834u>(ctx, &aot_mem) && ctx.pc == 0x089A8E2Cu) goto L_089A8E2C;
    return;
L_089A8E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_089A8E38;
L_089A8E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089A8E50u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 274u, 0x089C5538u>(ctx, &aot_mem) && ctx.pc == 0x089A8E50u) goto L_089A8E50;
    return;
L_089A8E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_089A8E9C;
    }
    goto L_089A8E64;
L_089A8E64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (0u | 0u);
    goto L_089A8E6C;
L_089A8E6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == ctx.gpr[18]) {
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
        goto L_089A8E80;
    }
    goto L_089A8E80;
L_089A8E80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A8E6C;
      }
      goto L_089A8E98;
    }
L_089A8E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_089A8E9C;
L_089A8E9C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089A8EAC;
L_089A8EAC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089A8AF8;
      }
      goto L_089A8EC0;
    }
L_089A8EC0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x089A8ED0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089A8ED0u) goto L_089A8ED0;
    return;
L_089A8ED0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089A8EE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8EE4u) goto L_089A8EE4;
    return;
L_089A8EE4:
    ctx.gpr[31] = (0x089A8EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 548u, 0x089CF308u>(ctx, &aot_mem) && ctx.pc == 0x089A8EECu) goto L_089A8EEC;
    return;
L_089A8EEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A8F78u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089A8F78u) goto L_089A8F78;
    return;
L_089A8F78:
    ctx.gpr[5] = (ctx.gpr[21] >> 16u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24768));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24640));
      if (branch_taken) {
          goto L_089A8FAC;
      }
      goto L_089A8F98;
    }
L_089A8F98:
    ctx.gpr[5] = (65521u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
    goto L_089A8FAC;
L_089A8FAC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (ctx.gpr[21] >> 16u);
      if (branch_taken) {
          goto L_089A9038;
      }
      goto L_089A8FBC;
    }
L_089A8FBC:
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29640)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[21] >> 16u);
      if (branch_taken) {
          goto L_089A9038;
      }
      goto L_089A8FE4;
    }
L_089A8FE4:
    ctx.gpr[5] = (16u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9034;
      }
      goto L_089A8FF0;
    }
L_089A8FF0:
    ctx.gpr[5] = (32u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9034;
      }
      goto L_089A8FFC;
    }
L_089A8FFC:
    ctx.gpr[5] = (48u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9034;
      }
      goto L_089A9008;
    }
L_089A9008:
    ctx.gpr[5] = (64u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9034;
      }
      goto L_089A9014;
    }
L_089A9014:
    ctx.gpr[5] = (80u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9034;
      }
      goto L_089A9020;
    }
L_089A9020:
    ctx.gpr[5] = (96u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9034;
      }
      goto L_089A902C;
    }
L_089A902C:
    ctx.gpr[5] = (112u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
    goto L_089A9034;
L_089A9034:
    ctx.gpr[9] = (ctx.gpr[21] >> 16u);
    goto L_089A9038;
L_089A9038:
    ctx.gpr[9] = (ctx.gpr[9] & 15u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (65521u << 16u);
      if (branch_taken) {
          goto L_089A909C;
      }
      goto L_089A9044;
    }
L_089A9044:
    ctx.gpr[5] = (ctx.gpr[21] >> 20u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[9] & 132u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_089A9090;
    }
    goto L_089A9090;
L_089A9090:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089A90C0;
      }
      goto L_089A909C;
    }
L_089A909C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[5] = (65296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[9] & 132u);
    goto L_089A90C0;
L_089A90C0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (65535u << 16u);
      if (branch_taken) {
          goto L_089A9118;
      }
      goto L_089A90C8;
    }
L_089A90C8:
    ctx.gpr[9] = (ctx.gpr[21] >> 12u);
    ctx.gpr[9] = (ctx.gpr[9] & 15u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[9] & 8u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_089A9108;
    }
    goto L_089A9108;
L_089A9108:
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9124;
      }
      goto L_089A9118;
    }
L_089A9118:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4095));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[9] & 8u);
    goto L_089A9124;
L_089A9124:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-241));
      if (branch_taken) {
          goto L_089A917C;
      }
      goto L_089A912C;
    }
L_089A912C:
    ctx.gpr[9] = (ctx.gpr[21] >> 4u);
    ctx.gpr[9] = (ctx.gpr[9] & 15u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] & 16u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_089A916C;
    }
    goto L_089A916C;
L_089A916C:
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9184;
      }
      goto L_089A917C;
    }
L_089A917C:
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[10]);
    ctx.gpr[20] = (ctx.gpr[9] & 16u);
    goto L_089A9184;
L_089A9184:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3841));
      if (branch_taken) {
          goto L_089A91E8;
      }
      goto L_089A918C;
    }
L_089A918C:
    ctx.gpr[9] = (ctx.gpr[21] >> 8u);
    ctx.gpr[9] = (ctx.gpr[9] & 15u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] & 15u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
        goto L_089A91D8;
    }
    goto L_089A91D8;
L_089A91D8:
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9200;
      }
      goto L_089A91E8;
    }
L_089A91E8:
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[21] & 15u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089A9200;
L_089A9200:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_089A921C;
    }
    goto L_089A921C;
L_089A921C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A930C;
      }
      goto L_089A922C;
    }
L_089A922C:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_089A9250;
L_089A9250:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[14] = (ctx.gpr[13] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[14] == 0u) {
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089A92A8;
    }
    goto L_089A9260;
L_089A9260:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A92A0;
      }
      goto L_089A9268;
    }
L_089A9268:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A9290;
      }
      goto L_089A9270;
    }
L_089A9270:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A9298;
      }
      goto L_089A9278;
    }
L_089A9278:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089A9288;
      }
      goto L_089A9280;
    }
L_089A9280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_089A92A4;
      }
      goto L_089A9288;
    }
L_089A9288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_089A92A4;
      }
      goto L_089A9290;
    }
L_089A9290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_089A92A4;
      }
      goto L_089A9298;
    }
L_089A9298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_089A92A4;
      }
      goto L_089A92A0;
    }
L_089A92A0:
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    goto L_089A92A4;
L_089A92A4:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089A92A8;
L_089A92A8:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
      if (branch_taken) {
          goto L_089A92D4;
      }
      goto L_089A92B8;
    }
L_089A92B8:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (~(ctx.gpr[13] | 0u));
    ctx.gpr[12] = (ctx.gpr[12] & ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
      if (branch_taken) {
          goto L_089A92E4;
      }
      goto L_089A92D4;
    }
L_089A92D4:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[11]);
    ctx.gpr[13] = (~(ctx.gpr[11] | 0u));
    ctx.gpr[12] = (ctx.gpr[12] & ctx.gpr[13]);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    goto L_089A92E4;
L_089A92E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A9250;
      }
      goto L_089A92F4;
    }
L_089A92F4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[12]));
    goto L_089A930C;
L_089A930C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089A9324;
    }
    goto L_089A9314;
L_089A9314:
    ctx.gpr[31] = (0x089A931Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 204u, 0x089C5190u>(ctx, &aot_mem) && ctx.pc == 0x089A931Cu) goto L_089A931C;
    return;
L_089A931C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089A9324;
L_089A9324:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
        goto L_089A9334;
    }
    goto L_089A9334;
L_089A9334:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A938C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (18175u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65024u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[5] << 5u);
    ctx.gpr[13] = (ctx.gpr[10] & 256u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[12] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
    ctx.gpr[10] = (ctx.gpr[5] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[13]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[11]);
      if (branch_taken) {
          goto L_089A9488;
      }
      goto L_089A9450;
    }
L_089A9450:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089A947C;
      }
      goto L_089A9460;
    }
L_089A9460:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089A9460;
      }
      goto L_089A947C;
    }
L_089A947C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_089A9488;
L_089A9488:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[10]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x089A94A4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A94A4u) goto L_089A94A4;
    return;
L_089A94A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A94BCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 188u, 0x089C4E60u>(ctx, &aot_mem) && ctx.pc == 0x089A94BCu) goto L_089A94BC;
    return;
L_089A94BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089A95BC;
      }
      goto L_089A94D8;
    }
L_089A94D8:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_089A94EC;
L_089A94EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[31] = (0x089A9504u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 604u, 0x089A7BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A9504u) goto L_089A9504;
    return;
L_089A9504:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089A9548;
      }
      goto L_089A9510;
    }
L_089A9510:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A9524u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_089A8F24;
L_089A9524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089A957C;
      }
      goto L_089A9530;
    }
L_089A9530:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A95A4;
      }
      goto L_089A9548;
    }
L_089A9548:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A957C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089A9590u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_089A8670;
L_089A9590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_089A95A4;
L_089A95A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089A94EC;
      }
      goto L_089A95BC;
    }
L_089A95BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A95D8;
      }
      goto L_089A95C8;
    }
L_089A95C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A95D4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A95D4u) goto L_089A95D4;
    return;
L_089A95D4:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    goto L_089A95D8;
L_089A95D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089A9610u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 223u, 0x089D1BCCu>(ctx, &aot_mem) && ctx.pc == 0x089A9610u) goto L_089A9610;
    return;
L_089A9610:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_089A9A68;
      }
      goto L_089A9620;
    }
L_089A9620:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089A9664;
      }
      goto L_089A965C;
    }
L_089A965C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089A966C;
      }
      goto L_089A9664;
    }
L_089A9664:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_089A966C;
L_089A966C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089A96A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 325u, 0x089C5BECu>(ctx, &aot_mem) && ctx.pc == 0x089A96A8u) goto L_089A96A8;
    return;
L_089A96A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_089A9928;
      }
      goto L_089A96D8;
    }
L_089A96D8:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_089A96E8;
L_089A96E8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089A9704u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 604u, 0x089A7BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A9704u) goto L_089A9704;
    return;
L_089A9704:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x089A971Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_089A8F24;
L_089A971C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x089A9744u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089A9744u) goto L_089A9744;
    return;
L_089A9744:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A97F8;
      }
      goto L_089A97C0;
    }
L_089A97C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A988C;
      }
      goto L_089A97F8;
    }
L_089A97F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089A9834u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089A9834u) goto L_089A9834;
    return;
L_089A9834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089A9848u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089A8670;
L_089A9848:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_089A988C;
L_089A988C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089A98BC;
      }
      goto L_089A989C;
    }
L_089A989C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089A98B4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A98B4u) goto L_089A98B4;
    return;
L_089A98B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A98D0;
      }
      goto L_089A98BC;
    }
L_089A98BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_089A990C;
      }
      goto L_089A98C8;
    }
L_089A98C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089A9914;
      }
      goto L_089A98D0;
    }
L_089A98D0:
    ctx.gpr[31] = (0x089A98D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 201u, 0x089D17DCu>(ctx, &aot_mem) && ctx.pc == 0x089A98D8u) goto L_089A98D8;
    return;
L_089A98D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A990C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089A9914;
L_089A9914:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
      if (branch_taken) {
          goto L_089A96E8;
      }
      goto L_089A9928;
    }
L_089A9928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_089A9950;
      }
      goto L_089A9934;
    }
L_089A9934:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089A9948u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9948u) goto L_089A9948;
    return;
L_089A9948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9980;
      }
      goto L_089A9950;
    }
L_089A9950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_089A99BC;
      }
      goto L_089A9978;
    }
L_089A9978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_089A9A28;
      }
      goto L_089A9980;
    }
L_089A9980:
    ctx.gpr[31] = (0x089A9988u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 201u, 0x089D17DCu>(ctx, &aot_mem) && ctx.pc == 0x089A9988u) goto L_089A9988;
    return;
L_089A9988:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A99BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A99F8;
      }
      goto L_089A99F0;
    }
L_089A99F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089A99F8;
      }
      goto L_089A99F8;
    }
L_089A99F8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_089A99BC;
      }
      goto L_089A9A24;
    }
L_089A9A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089A9A28;
L_089A9A28:
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_089A9A54;
    }
    goto L_089A9A38;
L_089A9A38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089A9A68;
      }
      goto L_089A9A40;
    }
L_089A9A40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A9A4Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 21u, 0x089D0504u>(ctx, &aot_mem) && ctx.pc == 0x089A9A4Cu) goto L_089A9A4C;
    return;
L_089A9A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9A68;
      }
      goto L_089A9A54;
    }
L_089A9A54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089A9A68;
      }
      goto L_089A9A5C;
    }
L_089A9A5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A9A68u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 21u, 0x089D0504u>(ctx, &aot_mem) && ctx.pc == 0x089A9A68u) goto L_089A9A68;
    return;
L_089A9A68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A9AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x089A9AE0u) goto L_089A9AE0;
    return;
L_089A9AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A9FCC;
      }
      goto L_089A9AEC;
    }
L_089A9AEC:
    ctx.gpr[31] = (0x089A9AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 550u, 0x089CF344u>(ctx, &aot_mem) && ctx.pc == 0x089A9AF4u) goto L_089A9AF4;
    return;
L_089A9AF4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B9C;
      }
      goto L_089A9B00;
    }
L_089A9B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x089A9B0Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 527u, 0x089CEFC4u>(ctx, &aot_mem) && ctx.pc == 0x089A9B0Cu) goto L_089A9B0C;
    return;
L_089A9B0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x089A9B20u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 315u, 0x089A5E3Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9B20u) goto L_089A9B20;
    return;
L_089A9B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089A9B58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 283u, 0x089A5A28u>(ctx, &aot_mem) && ctx.pc == 0x089A9B58u) goto L_089A9B58;
    return;
L_089A9B58:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A9B64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 282u, 0x089A5A20u>(ctx, &aot_mem) && ctx.pc == 0x089A9B64u) goto L_089A9B64;
    return;
L_089A9B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089A9BD8;
      }
      goto L_089A9B94;
    }
L_089A9B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A9C04;
      }
      goto L_089A9B9C;
    }
L_089A9B9C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
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
L_089A9BD8:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    goto L_089A9BE0;
L_089A9BE0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A9BE0;
      }
      goto L_089A9C00;
    }
L_089A9C00:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_089A9C04;
L_089A9C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089A9FC4;
      }
      goto L_089A9C44;
    }
L_089A9C44:
    ctx.gpr[5] = (ctx.gpr[4] & 132u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (17152u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A9C68;
L_089A9C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A9C94;
      }
      goto L_089A9C80;
    }
L_089A9C80:
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_089A9EF0;
    }
    goto L_089A9C88;
L_089A9C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A9CB0;
      }
      goto L_089A9C90;
    }
L_089A9C90:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    goto L_089A9C94;
L_089A9C94:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A9EEC;
      }
      goto L_089A9C9C;
    }
L_089A9C9C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089A9DE4;
    }
    goto L_089A9CA4;
L_089A9CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089A9EF0;
      }
      goto L_089A9CAC;
    }
L_089A9CAC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089A9CB0;
L_089A9CB0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] >> 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_089A9EEC;
      }
      goto L_089A9D7C;
    }
L_089A9D7C:
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[10]);
    goto L_089A9D80;
L_089A9D80:
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
    goto L_089A9D90;
L_089A9D90:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089A9DB8;
    }
    goto L_089A9D9C;
L_089A9D9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9DB8;
      }
      goto L_089A9DAC;
    }
L_089A9DAC:
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089A9DC8;
      }
      goto L_089A9DB8;
    }
L_089A9DB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9D90;
      }
      goto L_089A9DC4;
    }
L_089A9DC4:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089A9DC8;
L_089A9DC8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089A9D80;
      }
      goto L_089A9DD8;
    }
L_089A9DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089A9EEC;
      }
      goto L_089A9DE0;
    }
L_089A9DE0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089A9DE4;
L_089A9DE4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] >> 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A9EEC;
      }
      goto L_089A9E80;
    }
L_089A9E80:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089A9E90;
L_089A9E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A9EC0;
      }
      goto L_089A9EA4;
    }
L_089A9EA4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9EC4;
      }
      goto L_089A9EB4;
    }
L_089A9EB4:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089A9ED4;
      }
      goto L_089A9EC0;
    }
L_089A9EC0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089A9EC4;
L_089A9EC4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A9E90;
      }
      goto L_089A9ED0;
    }
L_089A9ED0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089A9ED4;
L_089A9ED4:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A9E80;
      }
      goto L_089A9EE4;
    }
L_089A9EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089A9EEC;
      }
      goto L_089A9EEC;
    }
L_089A9EEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_089A9EF0;
L_089A9EF0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A9F1C;
      }
      goto L_089A9EF8;
    }
L_089A9EF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9F14u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 287u, 0x089C5654u>(ctx, &aot_mem) && ctx.pc == 0x089A9F14u) goto L_089A9F14;
    return;
L_089A9F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089A9F1C;
L_089A9F1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9F50;
      }
      goto L_089A9F28;
    }
L_089A9F28:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(122)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9F44u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 296u, 0x089C5718u>(ctx, &aot_mem) && ctx.pc == 0x089A9F44u) goto L_089A9F44;
    return;
L_089A9F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_089A9F50;
L_089A9F50:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_089A9F8C;
      }
      goto L_089A9F60;
    }
L_089A9F60:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(121)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089A9F78u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 307u, 0x089C5834u>(ctx, &aot_mem) && ctx.pc == 0x089A9F78u) goto L_089A9F78;
    return;
L_089A9F78:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_089A9F8C;
L_089A9F8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x089A9FA8u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 274u, 0x089C5538u>(ctx, &aot_mem) && ctx.pc == 0x089A9FA8u) goto L_089A9FA8;
    return;
L_089A9FA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089A9C68;
      }
      goto L_089A9FC4;
    }
L_089A9FC4:
    ctx.gpr[31] = (0x089A9FCCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 548u, 0x089CF308u>(ctx, &aot_mem) && ctx.pc == 0x089A9FCCu) goto L_089A9FCC;
    return;
L_089A9FCC:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
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
L_089AA008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089AA074;
      }
      goto L_089AA040;
    }
L_089AA040:
    ctx.gpr[18] = (0u | 0u);
    goto L_089AA044;
L_089AA044:
    ctx.gpr[31] = (0x089AA04Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089AAFB0;
L_089AA04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
        goto L_089AA060;
    }
    goto L_089AA060;
L_089AA060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA044;
      }
      goto L_089AA074;
    }
L_089AA074:
    ctx.gpr[31] = (0x089AA07Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 188u, 0x089D9304u>(ctx, &aot_mem) && ctx.pc == 0x089AA07Cu) goto L_089AA07C;
    return;
L_089AA07C:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA090u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24568));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 215u, 0x089D952Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA090u) goto L_089AA090;
    return;
L_089AA090:
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
L_089AA0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AA0E0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089AAFB0;
L_089AA0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AA12C;
      }
      goto L_089AA0EC;
    }
L_089AA0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA12C;
      }
      goto L_089AA100;
    }
L_089AA100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
        goto L_089AA118;
    }
    goto L_089AA118;
L_089AA118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA100;
      }
      goto L_089AA12C;
    }
L_089AA12C:
    ctx.gpr[31] = (0x089AA134u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 188u, 0x089D9304u>(ctx, &aot_mem) && ctx.pc == 0x089AA134u) goto L_089AA134;
    return;
L_089AA134:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA148u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24396));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 215u, 0x089D952Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA148u) goto L_089AA148;
    return;
L_089AA148:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_089AA17C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25176)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25172)));
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[9] = (4u << 16u);
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(27120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AA1B8u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(286));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 78u, 0x089D0D2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA1B8u) goto L_089AA1B8;
    return;
L_089AA1B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14408));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_089AA1CC;
    }
    goto L_089AA1CC;
L_089AA1CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (2203u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15860));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15620));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12648));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16408));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[31] = (0x089AA24Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 413u, 0x0899B634u>(ctx, &aot_mem) && ctx.pc == 0x089AA24Cu) goto L_089AA24C;
    return;
L_089AA24C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14408));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA294;
      }
      goto L_089AA288;
    }
L_089AA288:
    ctx.gpr[31] = (0x089AA290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089AA290u) goto L_089AA290;
    return;
L_089AA290:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089AA294;
L_089AA294:
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
L_089AA2AC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089AA340;
      }
      goto L_089AA2F4;
    }
L_089AA2F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA328;
      }
      goto L_089AA308;
    }
L_089AA308:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA308;
      }
      goto L_089AA328;
    }
L_089AA328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
        goto L_089AA340;
    }
    goto L_089AA334;
L_089AA334:
    ctx.gpr[31] = (0x089AA33Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089AAB44;
L_089AA33C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089AA340;
L_089AA340:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_089AA360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089AA44C;
      }
      goto L_089AA398;
    }
L_089AA398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA44C;
      }
      goto L_089AA3A8;
    }
L_089AA3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AA3C4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089AA9BC;
L_089AA3C4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA444;
      }
      goto L_089AA3DC;
    }
L_089AA3DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA3DC;
      }
      goto L_089AA444;
    }
L_089AA444:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_089AA44C;
L_089AA44C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089AA468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AA4A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA4A0u) goto L_089AA4A0;
    return;
L_089AA4A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA4A8;
    }
L_089AA4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AA4C0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA4C0u) goto L_089AA4C0;
    return;
L_089AA4C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA4C8;
    }
L_089AA4C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[17] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
        goto L_089AA5B4;
    }
    goto L_089AA4D4;
L_089AA4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AA5B0;
      }
      goto L_089AA4E4;
    }
L_089AA4E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA4F0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA4F0u) goto L_089AA4F0;
    return;
L_089AA4F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA4F8;
    }
L_089AA4F8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AA504u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA504u) goto L_089AA504;
    return;
L_089AA504:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA50C;
    }
L_089AA50C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089AA520u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA520u) goto L_089AA520;
    return;
L_089AA520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA528;
    }
L_089AA528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089AA590;
      }
      goto L_089AA53C;
    }
L_089AA53C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AA54Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA54Cu) goto L_089AA54C;
    return;
L_089AA54C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA554;
    }
L_089AA554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA560u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA560u) goto L_089AA560;
    return;
L_089AA560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA568;
    }
L_089AA568:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA574u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA574u) goto L_089AA574;
    return;
L_089AA574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5CC;
      }
      goto L_089AA57C;
    }
L_089AA57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA53C;
      }
      goto L_089AA590;
    }
L_089AA590:
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
L_089AA5B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_089AA5B4;
L_089AA5B4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA5C4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 318u, 0x089CD860u>(ctx, &aot_mem) && ctx.pc == 0x089AA5C4u) goto L_089AA5C4;
    return;
L_089AA5C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA590;
      }
      goto L_089AA5CC;
    }
L_089AA5CC:
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
L_089AA5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AA62Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA62Cu) goto L_089AA62C;
    return;
L_089AA62C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA680;
      }
      goto L_089AA634;
    }
L_089AA634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 256u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089AA680;
      }
      goto L_089AA644;
    }
L_089AA644:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AA650u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA650u) goto L_089AA650;
    return;
L_089AA650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA680;
      }
      goto L_089AA658;
    }
L_089AA658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA664u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA664u) goto L_089AA664;
    return;
L_089AA664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA680;
      }
      goto L_089AA66C;
    }
L_089AA66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089AA6A8;
      }
      goto L_089AA678;
    }
L_089AA678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA874;
      }
      goto L_089AA680;
    }
L_089AA680:
    ctx.gpr[2] = (0u | 0u);
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
L_089AA6A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA6B4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA6B4u) goto L_089AA6B4;
    return;
L_089AA6B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089AA714;
      }
      goto L_089AA6BC;
    }
L_089AA6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA6C8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA6C8u) goto L_089AA6C8;
    return;
L_089AA6C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14408));
      if (branch_taken) {
          goto L_089AA714;
      }
      goto L_089AA6D0;
    }
L_089AA6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (3u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(286));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AA6F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AA6F0u) goto L_089AA6F0;
    return;
L_089AA6F0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AA704u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089AA704u) goto L_089AA704;
    return;
L_089AA704:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089AA73C;
    }
    goto L_089AA70C;
L_089AA70C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089AA874;
      }
      goto L_089AA714;
    }
L_089AA714:
    ctx.gpr[2] = (0u | 0u);
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
L_089AA73C:
    ctx.gpr[31] = (0x089AA744u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 480u, 0x0899BC30u>(ctx, &aot_mem) && ctx.pc == 0x089AA744u) goto L_089AA744;
    return;
L_089AA744:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089AA788;
      }
      goto L_089AA76C;
    }
L_089AA76C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089AA7C8;
      }
      goto L_089AA788;
    }
L_089AA788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AA7A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AA7A4u) goto L_089AA7A4;
    return;
L_089AA7A4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    goto L_089AA7C8;
L_089AA7C8:
    jump_target = ctx.gpr[20];
    ctx.gpr[31] = (0x089AA7D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AA7D0u) goto L_089AA7D0;
    return;
L_089AA7D0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089AA870;
      }
      goto L_089AA7E8;
    }
L_089AA7E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AA7F8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA7F8u) goto L_089AA7F8;
    return;
L_089AA7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AA848;
      }
      goto L_089AA800;
    }
L_089AA800:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA80Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA80Cu) goto L_089AA80C;
    return;
L_089AA80C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089AA848;
      }
      goto L_089AA814;
    }
L_089AA814:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA820u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 334u, 0x089CD970u>(ctx, &aot_mem) && ctx.pc == 0x089AA820u) goto L_089AA820;
    return;
L_089AA820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA848;
      }
      goto L_089AA828;
    }
L_089AA828:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AA7E8;
      }
      goto L_089AA840;
    }
L_089AA840:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089AA874;
      }
      goto L_089AA848;
    }
L_089AA848:
    ctx.gpr[2] = (0u | 0u);
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
L_089AA870:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    goto L_089AA874;
L_089AA874:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089AA89C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA8C4;
      }
      goto L_089AA8B8;
    }
L_089AA8B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA8C8;
      }
      goto L_089AA8C4;
    }
L_089AA8C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089AA8C8;
L_089AA8C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA908;
      }
      goto L_089AA8D0;
    }
L_089AA8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_089AA900;
      }
      goto L_089AA8DC;
    }
L_089AA8DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA900;
      }
      goto L_089AA8EC;
    }
L_089AA8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_089AA900;
L_089AA900:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA908:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2203u << 16u);
    ctx.gpr[7] = (2203u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 286u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24196));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AA938u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 45u, 0x089D83A8u>(ctx, &aot_mem) && ctx.pc == 0x089AA938u) goto L_089AA938;
    return;
L_089AA938:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (2203u << 16u);
      if (branch_taken) {
          goto L_089AA9A8;
      }
      goto L_089AA940;
    }
L_089AA940:
    ctx.gpr[7] = (2203u << 16u);
    ctx.gpr[8] = (2203u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 286u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23892));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23860));
    ctx.gpr[31] = (0x089AA960u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-23712));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 230u, 0x089D9814u>(ctx, &aot_mem) && ctx.pc == 0x089AA960u) goto L_089AA960;
    return;
L_089AA960:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[6] = (2203u << 16u);
    ctx.gpr[7] = (2203u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-14408), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 286u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23060));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23448));
    ctx.gpr[31] = (0x089AA988u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22372));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 75u, 0x089D4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA988u) goto L_089AA988;
    return;
L_089AA988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA9A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA9BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14408));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (3u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(286));
    ctx.gpr[22] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AAA20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAA20u) goto L_089AAA20;
    return;
L_089AAA20:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AAA30u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 480u, 0x0899BC30u>(ctx, &aot_mem) && ctx.pc == 0x089AAA30u) goto L_089AAA30;
    return;
L_089AAA30:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[23] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_089AAA80;
      }
      goto L_089AAA48;
    }
L_089AAA48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AAA60u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAA60u) goto L_089AAA60;
    return;
L_089AAA60:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089AAA90;
      }
      goto L_089AAA80;
    }
L_089AAA80:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    goto L_089AAA90;
L_089AAA90:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    jump_target = ctx.gpr[20];
    ctx.gpr[31] = (0x089AAA9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAA9Cu) goto L_089AAA9C;
    return;
L_089AAA9C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089AAB10;
      }
      goto L_089AAAAC;
    }
L_089AAAAC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_089AAAB8;
L_089AAAB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AAAE0;
      }
      goto L_089AAAD0;
    }
L_089AAAD0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089AAAE0;
L_089AAAE0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089AAAF8;
      }
      goto L_089AAAE8;
    }
L_089AAAE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    goto L_089AAAF8;
L_089AAAF8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AAAB8;
      }
      goto L_089AAB10;
    }
L_089AAB10:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_089AAB44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_089AABA8;
      }
      goto L_089AAB78;
    }
L_089AAB78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_089AAB9C;
      }
      goto L_089AAB88;
    }
L_089AAB88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089AAB94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAB94u) goto L_089AAB94;
    return;
L_089AAB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_089AAB9C;
L_089AAB9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089AABA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AABA8u) goto L_089AABA8;
    return;
L_089AABA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x089AABBCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 482u, 0x0899BCDCu>(ctx, &aot_mem) && ctx.pc == 0x089AABBCu) goto L_089AABBC;
    return;
L_089AABBC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14408));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AABD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AABD4u) goto L_089AABD4;
    return;
L_089AABD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AABE8;
      }
      goto L_089AABDC;
    }
L_089AABDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_089AABE8;
L_089AABE8:
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
L_089AAE80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AAE9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089AA008;
L_089AAE9C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAF50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAF84:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAFB0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14408)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2380), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2384), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2412), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[16] & 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2368), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2372), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2376), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2388), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2392), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2396), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2400), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2404), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2408), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2416), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089AB228;
      }
      goto L_089AB058;
    }
L_089AB058:
    ctx.gpr[31] = (0x089AB060u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 154u, 0x089D904Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB060u) goto L_089AB060;
    return;
L_089AB060:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AB0F4;
      }
      goto L_089AB068;
    }
L_089AB068:
    ctx.gpr[31] = (0x089AB070u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 191u, 0x089D9378u>(ctx, &aot_mem) && ctx.pc == 0x089AB070u) goto L_089AB070;
    return;
L_089AB070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AB278;
      }
      goto L_089AB0F4;
    }
L_089AB0F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
      if (branch_taken) {
          goto L_089AB278;
      }
      goto L_089AB180;
    }
L_089AB180:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
    goto L_089AB188;
L_089AB188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2136), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2140), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2144), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2148), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2156), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2160), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2164), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2172), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2180), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2184), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2188), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AB214u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB214u) goto L_089AB214;
    return;
L_089AB214:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
        goto L_089AB188;
    }
    goto L_089AB220;
L_089AB220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB278;
      }
      goto L_089AB228;
    }
L_089AB228:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[4]);
    goto L_089AB278;
L_089AB278:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
        goto L_089AB2FC;
    }
    goto L_089AB280;
L_089AB280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_089AB2F8;
      }
      goto L_089AB298;
    }
L_089AB298:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089AB2F8;
L_089AB2F8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    goto L_089AB2FC;
L_089AB2FC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2364), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_089AB7F4;
      }
      goto L_089AB324;
    }
L_089AB324:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15860));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2360), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 4096u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2356), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(2192));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089AB350;
L_089AB350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089AB438;
      }
      goto L_089AB35C;
    }
L_089AB35C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[16] + ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[13];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[2] + ctx.fpr[14];
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[18];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[1];
    ctx.fpr[14] = ctx.fpr[2] - ctx.fpr[14];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2200), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2208), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2212), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[15];
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2204), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089AB440;
      }
      goto L_089AB438;
    }
L_089AB438:
    jump_target = ctx.gpr[23];
    ctx.gpr[31] = (0x089AB440u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB440u) goto L_089AB440;
    return;
L_089AB440:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2256));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    ctx.gpr[31] = (0x089AB450u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB450u) goto L_089AB450;
    return;
L_089AB450:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_089AB59C;
    }
    goto L_089AB45C;
L_089AB45C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2356)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB4F8;
      }
      goto L_089AB468;
    }
L_089AB468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2204)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2212)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2216)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2252)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AB4F8;
      }
      goto L_089AB4F0;
    }
L_089AB4F0:
    ctx.gpr[31] = (0x089AB4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 188u, 0x089D9304u>(ctx, &aot_mem) && ctx.pc == 0x089AB4F8u) goto L_089AB4F8;
    return;
L_089AB4F8:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_089AB59C;
    }
    goto L_089AB500;
L_089AB500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2312)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2316)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_089AB59C;
L_089AB59C:
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089AB640;
      }
      goto L_089AB5AC;
    }
L_089AB5AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089AB7DC;
      }
      goto L_089AB5B4;
    }
L_089AB5B4:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-64));
        goto L_089AB650;
    }
    goto L_089AB5BC;
L_089AB5BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089AB7DC;
      }
      goto L_089AB640;
    }
L_089AB640:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
        goto L_089AB6D4;
    }
    goto L_089AB648;
L_089AB648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089AB7DC;
      }
      goto L_089AB650;
    }
L_089AB650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089AB7DC;
      }
      goto L_089AB6D4;
    }
L_089AB6D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2124)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_089AB7DC;
L_089AB7DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2364)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089AB350;
      }
      goto L_089AB7F4;
    }
L_089AB7F4:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2372)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2376)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2380)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2384)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2388)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2396)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2400)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2404)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2408)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2412)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2416)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[30] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089AB898;
      }
      goto L_089AB884;
    }
L_089AB884:
    ctx.gpr[6] = (ctx.gpr[30] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[30] & 8192u);
      if (branch_taken) {
          goto L_089AB8DC;
      }
      goto L_089AB890;
    }
L_089AB890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[30] & 16384u);
      if (branch_taken) {
          goto L_089AB920;
      }
      goto L_089AB898;
    }
L_089AB898:
    ctx.gpr[31] = (0x089AB8A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089AB008;
L_089AB8A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB8DC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[30] & 16384u);
      if (branch_taken) {
          goto L_089AB920;
      }
      goto L_089AB8EC;
    }
L_089AB8EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[22] << 6u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[22] = (ctx.gpr[8] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_089AB99C;
      }
      goto L_089AB904;
    }
L_089AB904:
    ctx.gpr[8] = (ctx.gpr[30] & 16384u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089AB99C;
      }
      goto L_089AB910;
    }
L_089AB910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AB99C;
      }
      goto L_089AB920;
    }
L_089AB920:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089AB990;
      }
      goto L_089AB928;
    }
L_089AB928:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089AB99C;
      }
      goto L_089AB984;
    }
L_089AB984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AB99C;
      }
      goto L_089AB990;
    }
L_089AB990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089AB99C;
L_089AB99C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
        goto L_089ABBDC;
    }
    goto L_089AB9A4;
L_089AB9A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089ABB8C;
      }
      goto L_089AB9AC;
    }
L_089AB9AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089ABB8C;
      }
      goto L_089AB9B8;
    }
L_089AB9B8:
    ctx.gpr[31] = (0x089AB9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 154u, 0x089D904Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB9C0u) goto L_089AB9C0;
    return;
L_089AB9C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ABA54;
      }
      goto L_089AB9C8;
    }
L_089AB9C8:
    ctx.gpr[31] = (0x089AB9D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 191u, 0x089D9378u>(ctx, &aot_mem) && ctx.pc == 0x089AB9D0u) goto L_089AB9D0;
    return;
L_089AB9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089ABBD8;
      }
      goto L_089ABA54;
    }
L_089ABA54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ABBD8;
      }
      goto L_089ABAE0;
    }
L_089ABAE0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089ABAE8;
L_089ABAE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ABB74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABB74u) goto L_089ABB74;
    return;
L_089ABB74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089ABAE8;
    }
    goto L_089ABB80;
L_089ABB80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_089ABBDC;
      }
      goto L_089ABB88;
    }
L_089ABB88:
    ctx.gpr[4] = (16256u << 16u);
    goto L_089ABB8C;
L_089ABB8C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089ABBD8;
L_089ABBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    goto L_089ABBDC;
L_089ABBDC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
        goto L_089ABC60;
    }
    goto L_089ABBE4;
L_089ABBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_089ABC5C;
      }
      goto L_089ABBFC;
    }
L_089ABBFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089ABC5C;
L_089ABC5C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_089ABC60;
L_089ABC60:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_089ABFA8;
      }
      goto L_089ABC90;
    }
L_089ABC90:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15860));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] & 4096u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[30] & 16384u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-5));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    goto L_089ABCC8;
L_089ABCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_089ABDB0;
      }
      goto L_089ABCD4;
    }
L_089ABCD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[16] + ctx.fpr[18];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[13];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[2] + ctx.fpr[14];
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[18];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[1];
    ctx.fpr[14] = ctx.fpr[2] - ctx.fpr[14];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[15];
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ABDB8;
      }
      goto L_089ABDB0;
    }
L_089ABDB0:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089ABDB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABDB8u) goto L_089ABDB8;
    return;
L_089ABDB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ABDC8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABDC8u) goto L_089ABDC8;
    return;
L_089ABDC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089ABF3C;
    }
    goto L_089ABDD4;
L_089ABDD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
        goto L_089ABE78;
    }
    goto L_089ABDE0;
L_089ABDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089ABE74;
      }
      goto L_089ABE6C;
    }
L_089ABE6C:
    ctx.gpr[31] = (0x089ABE74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 188u, 0x089D9304u>(ctx, &aot_mem) && ctx.pc == 0x089ABE74u) goto L_089ABE74;
    return;
L_089ABE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    goto L_089ABE78;
L_089ABE78:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089ABF3C;
    }
    goto L_089ABE80;
L_089ABE80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089ABEA8;
      }
      goto L_089ABE8C;
    }
L_089ABE8C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089ABE98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABE98u) goto L_089ABE98;
    return;
L_089ABE98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
      if (branch_taken) {
          goto L_089ABF34;
      }
      goto L_089ABEA8;
    }
L_089ABEA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    goto L_089ABF34;
L_089ABF34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089ABF3C;
L_089ABF3C:
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
      if (branch_taken) {
          goto L_089ABF64;
      }
      goto L_089ABF4C;
    }
L_089ABF4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089ABF8C;
      }
      goto L_089ABF54;
    }
L_089ABF54:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
        goto L_089ABF78;
    }
    goto L_089ABF5C;
L_089ABF5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089ABF8C;
      }
      goto L_089ABF64;
    }
L_089ABF64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
        goto L_089ABF80;
    }
    goto L_089ABF70;
L_089ABF70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089ABF8C;
      }
      goto L_089ABF78;
    }
L_089ABF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089ABF8C;
      }
      goto L_089ABF80;
    }
L_089ABF80:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_089ABF8C;
L_089ABF8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ABCC8;
      }
      goto L_089ABFA8;
    }
L_089ABFA8:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.pc = 0x089AC000u; return;
}

void recomp_unit_0105(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0105_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_105(Runtime &runtime) {
    runtime.register_generated_unit(105u, 0x089A8000u, 16384u, &recomp_unit_0105, &recomp_unit_0105_entry);
    runtime.register_function(0x089A8000u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A800Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8028u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8034u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A806Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A807Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8088u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8098u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8124u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8130u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A815Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8168u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8174u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8180u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8198u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8214u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8228u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A825Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8264u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8300u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8310u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A831Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8374u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A837Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8410u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8418u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8448u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8450u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8464u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8514u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8630u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8638u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8670u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8700u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A870Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A871Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8724u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8730u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8738u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8740u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8748u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8750u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8754u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8764u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8784u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A881Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8830u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8864u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8904u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A890Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A892Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A894Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8950u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8988u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A899Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8ED0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9008u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9014u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9020u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A902Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9034u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9038u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9044u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9090u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A909Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9108u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9118u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9124u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A912Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A916Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A917Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9184u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A918Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9200u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A921Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A922Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9250u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9260u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9268u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9270u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9278u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9280u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9288u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9290u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9298u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A930Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9314u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A931Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9324u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9334u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A938Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9450u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9460u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A947Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9488u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9504u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9510u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9524u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9530u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9548u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A957Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9590u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9610u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9620u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A965Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9664u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A966Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9704u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A971Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9744u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9834u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9848u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A988Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A989Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A990Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9914u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9928u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9934u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9948u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9950u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9978u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9980u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9988u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ED0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ED4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FCCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA008u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA040u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA044u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA04Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA060u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA074u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA07Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA090u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA100u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA118u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA12Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA134u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA148u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA17Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA24Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA260u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA288u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA290u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA294u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA308u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA328u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA334u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA33Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA340u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA360u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA398u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA444u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA44Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA468u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA504u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA50Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA520u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA528u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA53Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA54Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA554u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA560u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA568u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA574u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA57Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA590u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA62Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA634u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA644u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA650u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA658u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA664u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA66Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA678u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA680u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA704u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA70Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA714u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA73Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA744u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA76Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA788u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA800u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA80Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA814u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA820u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA828u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA840u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA848u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA870u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA874u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA89Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA900u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA908u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA910u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA938u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA940u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA960u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA988u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB008u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB058u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB060u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB068u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB070u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB180u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB188u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB214u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB220u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB228u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB278u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB280u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB298u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB324u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB350u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB35Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB440u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB450u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB45Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB468u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB59Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB640u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB648u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB650u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB834u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB884u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB890u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB898u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB904u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB910u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB920u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB928u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB984u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB990u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB99Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFE8u, &recomp_unit_0105, "recomp_unit_0105");
}
} // namespace psprecomp

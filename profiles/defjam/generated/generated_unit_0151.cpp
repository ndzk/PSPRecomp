#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0151[4086] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0,
    42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136,
    0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333,
    0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337,
    0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 368, 0,
    0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0,
    388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 0,
    0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 469, 0,
    470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0,
    494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499,
    0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 507,
    0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0,
    0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0,
    0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0,
    0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0,
    558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0,
    577, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0,
    0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0,
    0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600,
    0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0,
    0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0,
    615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620,
    0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0,
    629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0,
    0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0,
    0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0,
    0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0,
    0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0,
    0, 0, 671, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 677,
    0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687,
};
void recomp_unit_0151_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A60000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0151[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A60000;
    case 2u: goto L_08A60010;
    case 3u: goto L_08A6001C;
    case 4u: goto L_08A60024;
    case 5u: goto L_08A60038;
    case 6u: goto L_08A6004C;
    case 7u: goto L_08A60058;
    case 8u: goto L_08A6006C;
    case 9u: goto L_08A60078;
    case 10u: goto L_08A6008C;
    case 11u: goto L_08A6009C;
    case 12u: goto L_08A600B0;
    case 13u: goto L_08A600C0;
    case 14u: goto L_08A600CC;
    case 15u: goto L_08A600D4;
    case 16u: goto L_08A600E8;
    case 17u: goto L_08A600FC;
    case 18u: goto L_08A60108;
    case 19u: goto L_08A6011C;
    case 20u: goto L_08A6012C;
    case 21u: goto L_08A60168;
    case 22u: goto L_08A601A4;
    case 23u: goto L_08A601B8;
    case 24u: goto L_08A601CC;
    case 25u: goto L_08A601F8;
    case 26u: goto L_08A60204;
    case 27u: goto L_08A60218;
    case 28u: goto L_08A60230;
    case 29u: goto L_08A6024C;
    case 30u: goto L_08A6025C;
    case 31u: goto L_08A60278;
    case 32u: goto L_08A60294;
    case 33u: goto L_08A602A8;
    case 34u: goto L_08A602CC;
    case 35u: goto L_08A602E0;
    case 36u: goto L_08A602F4;
    case 37u: goto L_08A60308;
    case 38u: goto L_08A60358;
    case 39u: goto L_08A60368;
    case 40u: goto L_08A60370;
    case 41u: goto L_08A60378;
    case 42u: goto L_08A60380;
    case 43u: goto L_08A60388;
    case 44u: goto L_08A603CC;
    case 45u: goto L_08A603D8;
    case 46u: goto L_08A60444;
    case 47u: goto L_08A60458;
    case 48u: goto L_08A60460;
    case 49u: goto L_08A60478;
    case 50u: goto L_08A6048C;
    case 51u: goto L_08A604B0;
    case 52u: goto L_08A604C8;
    case 53u: goto L_08A604E0;
    case 54u: goto L_08A604F0;
    case 55u: goto L_08A604FC;
    case 56u: goto L_08A60508;
    case 57u: goto L_08A60538;
    case 58u: goto L_08A60554;
    case 59u: goto L_08A6056C;
    case 60u: goto L_08A60588;
    case 61u: goto L_08A605A0;
    case 62u: goto L_08A605B0;
    case 63u: goto L_08A605C0;
    case 64u: goto L_08A605D4;
    case 65u: goto L_08A605F0;
    case 66u: goto L_08A60634;
    case 67u: goto L_08A60648;
    case 68u: goto L_08A60660;
    case 69u: goto L_08A60678;
    case 70u: goto L_08A60694;
    case 71u: goto L_08A606B4;
    case 72u: goto L_08A606C4;
    case 73u: goto L_08A606E0;
    case 74u: goto L_08A6071C;
    case 75u: goto L_08A60730;
    case 76u: goto L_08A60738;
    case 77u: goto L_08A60754;
    case 78u: goto L_08A60764;
    case 79u: goto L_08A60770;
    case 80u: goto L_08A60780;
    case 81u: goto L_08A6078C;
    case 82u: goto L_08A607A0;
    case 83u: goto L_08A607A8;
    case 84u: goto L_08A607B8;
    case 85u: goto L_08A607C8;
    case 86u: goto L_08A607D4;
    case 87u: goto L_08A607F8;
    case 88u: goto L_08A6080C;
    case 89u: goto L_08A60820;
    case 90u: goto L_08A6083C;
    case 91u: goto L_08A60880;
    case 92u: goto L_08A60894;
    case 93u: goto L_08A608AC;
    case 94u: goto L_08A608C4;
    case 95u: goto L_08A608E0;
    case 96u: goto L_08A608F4;
    case 97u: goto L_08A60904;
    case 98u: goto L_08A60920;
    case 99u: goto L_08A60944;
    case 100u: goto L_08A60954;
    case 101u: goto L_08A60978;
    case 102u: goto L_08A60990;
    case 103u: goto L_08A609A4;
    case 104u: goto L_08A609B0;
    case 105u: goto L_08A609C4;
    case 106u: goto L_08A609D4;
    case 107u: goto L_08A609DC;
    case 108u: goto L_08A60A00;
    case 109u: goto L_08A60A20;
    case 110u: goto L_08A60A40;
    case 111u: goto L_08A60A50;
    case 112u: goto L_08A60A64;
    case 113u: goto L_08A60A80;
    case 114u: goto L_08A60A90;
    case 115u: goto L_08A60A9C;
    case 116u: goto L_08A60AAC;
    case 117u: goto L_08A60AB8;
    case 118u: goto L_08A60ACC;
    case 119u: goto L_08A60AD4;
    case 120u: goto L_08A60AF8;
    case 121u: goto L_08A60B18;
    case 122u: goto L_08A60B34;
    case 123u: goto L_08A60B44;
    case 124u: goto L_08A60B50;
    case 125u: goto L_08A60B60;
    case 126u: goto L_08A60B6C;
    case 127u: goto L_08A60B80;
    case 128u: goto L_08A60B98;
    case 129u: goto L_08A60BC4;
    case 130u: goto L_08A60BD8;
    case 131u: goto L_08A60BEC;
    case 132u: goto L_08A60C1C;
    case 133u: goto L_08A60C2C;
    case 134u: goto L_08A60C40;
    case 135u: goto L_08A60C68;
    case 136u: goto L_08A60C7C;
    case 137u: goto L_08A60C84;
    case 138u: goto L_08A60C8C;
    case 139u: goto L_08A60C94;
    case 140u: goto L_08A60CB4;
    case 141u: goto L_08A60CE0;
    case 142u: goto L_08A60D0C;
    case 143u: goto L_08A60D38;
    case 144u: goto L_08A60D5C;
    case 145u: goto L_08A60D78;
    case 146u: goto L_08A60D94;
    case 147u: goto L_08A60D9C;
    case 148u: goto L_08A60DA8;
    case 149u: goto L_08A60DD8;
    case 150u: goto L_08A60DE8;
    case 151u: goto L_08A60DFC;
    case 152u: goto L_08A60E28;
    case 153u: goto L_08A60E44;
    case 154u: goto L_08A60E54;
    case 155u: goto L_08A60E70;
    case 156u: goto L_08A60E84;
    case 157u: goto L_08A60EA0;
    case 158u: goto L_08A60EAC;
    case 159u: goto L_08A60EBC;
    case 160u: goto L_08A60ED0;
    case 161u: goto L_08A60EE4;
    case 162u: goto L_08A60EFC;
    case 163u: goto L_08A60F10;
    case 164u: goto L_08A60F24;
    case 165u: goto L_08A60F40;
    case 166u: goto L_08A60F54;
    case 167u: goto L_08A60F6C;
    case 168u: goto L_08A60F80;
    case 169u: goto L_08A60F94;
    case 170u: goto L_08A60FB0;
    case 171u: goto L_08A60FCC;
    case 172u: goto L_08A60FE0;
    case 173u: goto L_08A60FFC;
    case 174u: goto L_08A61010;
    case 175u: goto L_08A61024;
    case 176u: goto L_08A61074;
    case 177u: goto L_08A61080;
    case 178u: goto L_08A61088;
    case 179u: goto L_08A61098;
    case 180u: goto L_08A610A8;
    case 181u: goto L_08A610B0;
    case 182u: goto L_08A610CC;
    case 183u: goto L_08A610E0;
    case 184u: goto L_08A610EC;
    case 185u: goto L_08A610F8;
    case 186u: goto L_08A6110C;
    case 187u: goto L_08A6112C;
    case 188u: goto L_08A61148;
    case 189u: goto L_08A6115C;
    case 190u: goto L_08A61164;
    case 191u: goto L_08A61174;
    case 192u: goto L_08A61180;
    case 193u: goto L_08A61198;
    case 194u: goto L_08A611A4;
    case 195u: goto L_08A611AC;
    case 196u: goto L_08A611BC;
    case 197u: goto L_08A611C4;
    case 198u: goto L_08A611DC;
    case 199u: goto L_08A611EC;
    case 200u: goto L_08A611FC;
    case 201u: goto L_08A61214;
    case 202u: goto L_08A61224;
    case 203u: goto L_08A6123C;
    case 204u: goto L_08A61258;
    case 205u: goto L_08A61270;
    case 206u: goto L_08A61290;
    case 207u: goto L_08A612AC;
    case 208u: goto L_08A612C8;
    case 209u: goto L_08A612E0;
    case 210u: goto L_08A61300;
    case 211u: goto L_08A6131C;
    case 212u: goto L_08A6133C;
    case 213u: goto L_08A61348;
    case 214u: goto L_08A61368;
    case 215u: goto L_08A61378;
    case 216u: goto L_08A6138C;
    case 217u: goto L_08A613A0;
    case 218u: goto L_08A613C0;
    case 219u: goto L_08A613E0;
    case 220u: goto L_08A613F8;
    case 221u: goto L_08A61414;
    case 222u: goto L_08A61424;
    case 223u: goto L_08A61434;
    case 224u: goto L_08A61440;
    case 225u: goto L_08A61450;
    case 226u: goto L_08A6145C;
    case 227u: goto L_08A61470;
    case 228u: goto L_08A61478;
    case 229u: goto L_08A6148C;
    case 230u: goto L_08A614A8;
    case 231u: goto L_08A614D8;
    case 232u: goto L_08A614FC;
    case 233u: goto L_08A61538;
    case 234u: goto L_08A6154C;
    case 235u: goto L_08A61578;
    case 236u: goto L_08A61584;
    case 237u: goto L_08A61598;
    case 238u: goto L_08A615BC;
    case 239u: goto L_08A615D4;
    case 240u: goto L_08A615F0;
    case 241u: goto L_08A61600;
    case 242u: goto L_08A6161C;
    case 243u: goto L_08A61638;
    case 244u: goto L_08A6164C;
    case 245u: goto L_08A61670;
    case 246u: goto L_08A61688;
    case 247u: goto L_08A616A0;
    case 248u: goto L_08A61700;
    case 249u: goto L_08A6175C;
    case 250u: goto L_08A617A0;
    case 251u: goto L_08A617B4;
    case 252u: goto L_08A617CC;
    case 253u: goto L_08A61820;
    case 254u: goto L_08A61834;
    case 255u: goto L_08A6184C;
    case 256u: goto L_08A61884;
    case 257u: goto L_08A61894;
    case 258u: goto L_08A618D4;
    case 259u: goto L_08A618F0;
    case 260u: goto L_08A61900;
    case 261u: goto L_08A6190C;
    case 262u: goto L_08A61914;
    case 263u: goto L_08A61924;
    case 264u: goto L_08A61934;
    case 265u: goto L_08A6193C;
    case 266u: goto L_08A61950;
    case 267u: goto L_08A61964;
    case 268u: goto L_08A619A4;
    case 269u: goto L_08A619B0;
    case 270u: goto L_08A619BC;
    case 271u: goto L_08A619F0;
    case 272u: goto L_08A61A00;
    case 273u: goto L_08A61A1C;
    case 274u: goto L_08A61A2C;
    case 275u: goto L_08A61A48;
    case 276u: goto L_08A61A60;
    case 277u: goto L_08A61A70;
    case 278u: goto L_08A61A84;
    case 279u: goto L_08A61A8C;
    case 280u: goto L_08A61A98;
    case 281u: goto L_08A61AB8;
    case 282u: goto L_08A61ACC;
    case 283u: goto L_08A61B0C;
    case 284u: goto L_08A61B20;
    case 285u: goto L_08A61B40;
    case 286u: goto L_08A61B6C;
    case 287u: goto L_08A61B78;
    case 288u: goto L_08A61B8C;
    case 289u: goto L_08A61BA0;
    case 290u: goto L_08A61BD4;
    case 291u: goto L_08A61BF8;
    case 292u: goto L_08A61C0C;
    case 293u: goto L_08A61C14;
    case 294u: goto L_08A61C2C;
    case 295u: goto L_08A61C40;
    case 296u: goto L_08A61C68;
    case 297u: goto L_08A61C74;
    case 298u: goto L_08A61C90;
    case 299u: goto L_08A61CCC;
    case 300u: goto L_08A61CE0;
    case 301u: goto L_08A61CF4;
    case 302u: goto L_08A61D0C;
    case 303u: goto L_08A61D28;
    case 304u: goto L_08A61D38;
    case 305u: goto L_08A61D4C;
    case 306u: goto L_08A61D98;
    case 307u: goto L_08A61DB4;
    case 308u: goto L_08A61DC4;
    case 309u: goto L_08A61DD0;
    case 310u: goto L_08A61DD8;
    case 311u: goto L_08A61DE8;
    case 312u: goto L_08A61DF0;
    case 313u: goto L_08A61E04;
    case 314u: goto L_08A61E1C;
    case 315u: goto L_08A61E44;
    case 316u: goto L_08A61E5C;
    case 317u: goto L_08A61E70;
    case 318u: goto L_08A61E80;
    case 319u: goto L_08A61E98;
    case 320u: goto L_08A61EA8;
    case 321u: goto L_08A61EB8;
    case 322u: goto L_08A61ECC;
    case 323u: goto L_08A61EDC;
    case 324u: goto L_08A61EF0;
    case 325u: goto L_08A61F00;
    case 326u: goto L_08A61F08;
    case 327u: goto L_08A61F1C;
    case 328u: goto L_08A61F24;
    case 329u: goto L_08A61F40;
    case 330u: goto L_08A61F50;
    case 331u: goto L_08A61F64;
    case 332u: goto L_08A61F70;
    case 333u: goto L_08A61F7C;
    case 334u: goto L_08A61F8C;
    case 335u: goto L_08A61FA0;
    case 336u: goto L_08A61FEC;
    case 337u: goto L_08A61FFC;
    case 338u: goto L_08A6200C;
    case 339u: goto L_08A62020;
    case 340u: goto L_08A62034;
    case 341u: goto L_08A62048;
    case 342u: goto L_08A6205C;
    case 343u: goto L_08A62068;
    case 344u: goto L_08A62088;
    case 345u: goto L_08A6209C;
    case 346u: goto L_08A620B0;
    case 347u: goto L_08A620BC;
    case 348u: goto L_08A620D0;
    case 349u: goto L_08A620F8;
    case 350u: goto L_08A62104;
    case 351u: goto L_08A62124;
    case 352u: goto L_08A62138;
    case 353u: goto L_08A6214C;
    case 354u: goto L_08A62160;
    case 355u: goto L_08A62170;
    case 356u: goto L_08A62178;
    case 357u: goto L_08A6218C;
    case 358u: goto L_08A621A0;
    case 359u: goto L_08A621B0;
    case 360u: goto L_08A621C8;
    case 361u: goto L_08A621DC;
    case 362u: goto L_08A62220;
    case 363u: goto L_08A6223C;
    case 364u: goto L_08A6224C;
    case 365u: goto L_08A62258;
    case 366u: goto L_08A62260;
    case 367u: goto L_08A62270;
    case 368u: goto L_08A62278;
    case 369u: goto L_08A6228C;
    case 370u: goto L_08A6229C;
    case 371u: goto L_08A622B8;
    case 372u: goto L_08A622D0;
    case 373u: goto L_08A622E4;
    case 374u: goto L_08A622F4;
    case 375u: goto L_08A622FC;
    case 376u: goto L_08A6231C;
    case 377u: goto L_08A62334;
    case 378u: goto L_08A62380;
    case 379u: goto L_08A623B4;
    case 380u: goto L_08A623E4;
    case 381u: goto L_08A623F4;
    case 382u: goto L_08A62410;
    case 383u: goto L_08A62424;
    case 384u: goto L_08A62434;
    case 385u: goto L_08A6244C;
    case 386u: goto L_08A6245C;
    case 387u: goto L_08A6246C;
    case 388u: goto L_08A62480;
    case 389u: goto L_08A62490;
    case 390u: goto L_08A624A4;
    case 391u: goto L_08A624B4;
    case 392u: goto L_08A624BC;
    case 393u: goto L_08A624D0;
    case 394u: goto L_08A624E8;
    case 395u: goto L_08A624FC;
    case 396u: goto L_08A62514;
    case 397u: goto L_08A62544;
    case 398u: goto L_08A62558;
    case 399u: goto L_08A62564;
    case 400u: goto L_08A62570;
    case 401u: goto L_08A62578;
    case 402u: goto L_08A62588;
    case 403u: goto L_08A62590;
    case 404u: goto L_08A625A4;
    case 405u: goto L_08A625BC;
    case 406u: goto L_08A625DC;
    case 407u: goto L_08A625F4;
    case 408u: goto L_08A62640;
    case 409u: goto L_08A62650;
    case 410u: goto L_08A6266C;
    case 411u: goto L_08A6267C;
    case 412u: goto L_08A62690;
    case 413u: goto L_08A62698;
    case 414u: goto L_08A626A4;
    case 415u: goto L_08A626C4;
    case 416u: goto L_08A626D8;
    case 417u: goto L_08A626F0;
    case 418u: goto L_08A62708;
    case 419u: goto L_08A62740;
    case 420u: goto L_08A62754;
    case 421u: goto L_08A62764;
    case 422u: goto L_08A62774;
    case 423u: goto L_08A627A8;
    case 424u: goto L_08A627BC;
    case 425u: goto L_08A627C4;
    case 426u: goto L_08A627D4;
    case 427u: goto L_08A62804;
    case 428u: goto L_08A62820;
    case 429u: goto L_08A6282C;
    case 430u: goto L_08A62834;
    case 431u: goto L_08A62844;
    case 432u: goto L_08A6284C;
    case 433u: goto L_08A62868;
    case 434u: goto L_08A62878;
    case 435u: goto L_08A62888;
    case 436u: goto L_08A62894;
    case 437u: goto L_08A628A0;
    case 438u: goto L_08A628B0;
    case 439u: goto L_08A628C0;
    case 440u: goto L_08A6290C;
    case 441u: goto L_08A62920;
    case 442u: goto L_08A62934;
    case 443u: goto L_08A6295C;
    case 444u: goto L_08A62968;
    case 445u: goto L_08A62988;
    case 446u: goto L_08A6299C;
    case 447u: goto L_08A629B4;
    case 448u: goto L_08A629C4;
    case 449u: goto L_08A629D8;
    case 450u: goto L_08A629E8;
    case 451u: goto L_08A62A1C;
    case 452u: goto L_08A62A38;
    case 453u: goto L_08A62A44;
    case 454u: goto L_08A62A4C;
    case 455u: goto L_08A62A5C;
    case 456u: goto L_08A62A64;
    case 457u: goto L_08A62AB4;
    case 458u: goto L_08A62AE8;
    case 459u: goto L_08A62B18;
    case 460u: goto L_08A62B2C;
    case 461u: goto L_08A62B40;
    case 462u: goto L_08A62B54;
    case 463u: goto L_08A62B68;
    case 464u: goto L_08A62BA8;
    case 465u: goto L_08A62BC4;
    case 466u: goto L_08A62BD4;
    case 467u: goto L_08A62BE0;
    case 468u: goto L_08A62BE8;
    case 469u: goto L_08A62BF8;
    case 470u: goto L_08A62C00;
    case 471u: goto L_08A62C14;
    case 472u: goto L_08A62C28;
    case 473u: goto L_08A62C3C;
    case 474u: goto L_08A62C5C;
    case 475u: goto L_08A62C88;
    case 476u: goto L_08A62C9C;
    case 477u: goto L_08A62CF8;
    case 478u: goto L_08A62D20;
    case 479u: goto L_08A62D48;
    case 480u: goto L_08A62D68;
    case 481u: goto L_08A62D80;
    case 482u: goto L_08A62D94;
    case 483u: goto L_08A62DA8;
    case 484u: goto L_08A62DB4;
    case 485u: goto L_08A62DC8;
    case 486u: goto L_08A62DDC;
    case 487u: goto L_08A62DF4;
    case 488u: goto L_08A62E04;
    case 489u: goto L_08A62E14;
    case 490u: goto L_08A62E34;
    case 491u: goto L_08A62E54;
    case 492u: goto L_08A62E68;
    case 493u: goto L_08A62E78;
    case 494u: goto L_08A62E80;
    case 495u: goto L_08A62E90;
    case 496u: goto L_08A62E9C;
    case 497u: goto L_08A62EAC;
    case 498u: goto L_08A62EBC;
    case 499u: goto L_08A62EFC;
    case 500u: goto L_08A62F08;
    case 501u: goto L_08A62F10;
    case 502u: goto L_08A62F20;
    case 503u: goto L_08A62F28;
    case 504u: goto L_08A62F44;
    case 505u: goto L_08A62F58;
    case 506u: goto L_08A62F68;
    case 507u: goto L_08A62F7C;
    case 508u: goto L_08A62F8C;
    case 509u: goto L_08A62FA4;
    case 510u: goto L_08A62FB8;
    case 511u: goto L_08A62FD4;
    case 512u: goto L_08A62FE4;
    case 513u: goto L_08A62FF8;
    case 514u: goto L_08A63010;
    case 515u: goto L_08A63040;
    case 516u: goto L_08A63050;
    case 517u: goto L_08A63074;
    case 518u: goto L_08A63088;
    case 519u: goto L_08A6309C;
    case 520u: goto L_08A630AC;
    case 521u: goto L_08A630C0;
    case 522u: goto L_08A630D4;
    case 523u: goto L_08A63100;
    case 524u: goto L_08A63110;
    case 525u: goto L_08A63124;
    case 526u: goto L_08A6313C;
    case 527u: goto L_08A6316C;
    case 528u: goto L_08A6317C;
    case 529u: goto L_08A631A0;
    case 530u: goto L_08A631AC;
    case 531u: goto L_08A631C8;
    case 532u: goto L_08A631EC;
    case 533u: goto L_08A631F8;
    case 534u: goto L_08A63214;
    case 535u: goto L_08A63224;
    case 536u: goto L_08A63248;
    case 537u: goto L_08A63254;
    case 538u: goto L_08A63270;
    case 539u: goto L_08A63290;
    case 540u: goto L_08A632A8;
    case 541u: goto L_08A632C8;
    case 542u: goto L_08A632E0;
    case 543u: goto L_08A632F8;
    case 544u: goto L_08A63308;
    case 545u: goto L_08A6331C;
    case 546u: goto L_08A63348;
    case 547u: goto L_08A63354;
    case 548u: goto L_08A63388;
    case 549u: goto L_08A63398;
    case 550u: goto L_08A633A0;
    case 551u: goto L_08A633D0;
    case 552u: goto L_08A633E4;
    case 553u: goto L_08A63410;
    case 554u: goto L_08A6341C;
    case 555u: goto L_08A63430;
    case 556u: goto L_08A63460;
    case 557u: goto L_08A63478;
    case 558u: goto L_08A63480;
    case 559u: goto L_08A63498;
    case 560u: goto L_08A634AC;
    case 561u: goto L_08A634C8;
    case 562u: goto L_08A634D0;
    case 563u: goto L_08A634E4;
    case 564u: goto L_08A63514;
    case 565u: goto L_08A6352C;
    case 566u: goto L_08A63544;
    case 567u: goto L_08A63558;
    case 568u: goto L_08A63564;
    case 569u: goto L_08A635A0;
    case 570u: goto L_08A635C8;
    case 571u: goto L_08A635E8;
    case 572u: goto L_08A635FC;
    case 573u: goto L_08A63614;
    case 574u: goto L_08A63628;
    case 575u: goto L_08A6364C;
    case 576u: goto L_08A63674;
    case 577u: goto L_08A63680;
    case 578u: goto L_08A63688;
    case 579u: goto L_08A63698;
    case 580u: goto L_08A636A0;
    case 581u: goto L_08A636B8;
    case 582u: goto L_08A636C8;
    case 583u: goto L_08A636D0;
    case 584u: goto L_08A636F0;
    case 585u: goto L_08A63704;
    case 586u: goto L_08A63730;
    case 587u: goto L_08A63744;
    case 588u: goto L_08A63768;
    case 589u: goto L_08A63774;
    case 590u: goto L_08A63794;
    case 591u: goto L_08A637A8;
    case 592u: goto L_08A637B8;
    case 593u: goto L_08A637C4;
    case 594u: goto L_08A637E4;
    case 595u: goto L_08A637F0;
    case 596u: goto L_08A63804;
    case 597u: goto L_08A63838;
    case 598u: goto L_08A63864;
    case 599u: goto L_08A63870;
    case 600u: goto L_08A6387C;
    case 601u: goto L_08A63884;
    case 602u: goto L_08A63894;
    case 603u: goto L_08A638A4;
    case 604u: goto L_08A638AC;
    case 605u: goto L_08A638C4;
    case 606u: goto L_08A638D8;
    case 607u: goto L_08A638E8;
    case 608u: goto L_08A638F8;
    case 609u: goto L_08A6390C;
    case 610u: goto L_08A63920;
    case 611u: goto L_08A6392C;
    case 612u: goto L_08A63944;
    case 613u: goto L_08A63958;
    case 614u: goto L_08A63974;
    case 615u: goto L_08A63980;
    case 616u: goto L_08A63994;
    case 617u: goto L_08A639B4;
    case 618u: goto L_08A639C8;
    case 619u: goto L_08A639DC;
    case 620u: goto L_08A639FC;
    case 621u: goto L_08A63A08;
    case 622u: goto L_08A63A14;
    case 623u: goto L_08A63A28;
    case 624u: goto L_08A63A48;
    case 625u: goto L_08A63A50;
    case 626u: goto L_08A63A5C;
    case 627u: goto L_08A63A68;
    case 628u: goto L_08A63A74;
    case 629u: goto L_08A63A80;
    case 630u: goto L_08A63A90;
    case 631u: goto L_08A63A9C;
    case 632u: goto L_08A63AAC;
    case 633u: goto L_08A63AB8;
    case 634u: goto L_08A63ADC;
    case 635u: goto L_08A63AF4;
    case 636u: goto L_08A63B04;
    case 637u: goto L_08A63B20;
    case 638u: goto L_08A63B34;
    case 639u: goto L_08A63B38;
    case 640u: goto L_08A63B44;
    case 641u: goto L_08A63B58;
    case 642u: goto L_08A63B78;
    case 643u: goto L_08A63B98;
    case 644u: goto L_08A63BA8;
    case 645u: goto L_08A63BB4;
    case 646u: goto L_08A63BC8;
    case 647u: goto L_08A63BE0;
    case 648u: goto L_08A63BF4;
    case 649u: goto L_08A63BFC;
    case 650u: goto L_08A63C1C;
    case 651u: goto L_08A63C30;
    case 652u: goto L_08A63C50;
    case 653u: goto L_08A63C64;
    case 654u: goto L_08A63C78;
    case 655u: goto L_08A63C8C;
    case 656u: goto L_08A63D10;
    case 657u: goto L_08A63D1C;
    case 658u: goto L_08A63D24;
    case 659u: goto L_08A63D38;
    case 660u: goto L_08A63D6C;
    case 661u: goto L_08A63DB8;
    case 662u: goto L_08A63DC8;
    case 663u: goto L_08A63DE0;
    case 664u: goto L_08A63DF4;
    case 665u: goto L_08A63E04;
    case 666u: goto L_08A63E0C;
    case 667u: goto L_08A63E30;
    case 668u: goto L_08A63E44;
    case 669u: goto L_08A63E64;
    case 670u: goto L_08A63E70;
    case 671u: goto L_08A63E88;
    case 672u: goto L_08A63E94;
    case 673u: goto L_08A63EA4;
    case 674u: goto L_08A63EC4;
    case 675u: goto L_08A63ED8;
    case 676u: goto L_08A63EEC;
    case 677u: goto L_08A63EFC;
    case 678u: goto L_08A63F0C;
    case 679u: goto L_08A63F20;
    case 680u: goto L_08A63F30;
    case 681u: goto L_08A63F38;
    case 682u: goto L_08A63F54;
    case 683u: goto L_08A63F64;
    case 684u: goto L_08A63F94;
    case 685u: goto L_08A63FA4;
    case 686u: goto L_08A63FB8;
    case 687u: goto L_08A63FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A60000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60024;
      }
      goto L_08A60010;
    }
L_08A60010:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08A6001Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6001Cu) goto L_08A6001C;
    return;
L_08A6001C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A60024;
L_08A60024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3244)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6004C;
      }
      goto L_08A60038;
    }
L_08A60038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60058;
      }
      goto L_08A6004C;
    }
L_08A6004C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A60058;
L_08A60058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60078;
      }
      goto L_08A6006C;
    }
L_08A6006C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A60078;
L_08A60078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6008Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6008Cu) goto L_08A6008C;
    return;
L_08A6008C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6009C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3244)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A600C0;
      }
      goto L_08A600B0;
    }
L_08A600B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A600D4;
      }
      goto L_08A600C0;
    }
L_08A600C0:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08A600CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A600CCu) goto L_08A600CC;
    return;
L_08A600CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A600D4;
L_08A600D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3244)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A600FC;
      }
      goto L_08A600E8;
    }
L_08A600E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60108;
      }
      goto L_08A600FC;
    }
L_08A600FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A60108;
L_08A60108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6011Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6011Cu) goto L_08A6011C;
    return;
L_08A6011C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6012C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602F4;
      }
      goto L_08A60168;
    }
L_08A60168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602F4;
      }
      goto L_08A601A4;
    }
L_08A601A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602F4;
      }
      goto L_08A601B8;
    }
L_08A601B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A601CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A55828u>(ctx, &aot_mem) && ctx.pc == 0x08A601CCu) goto L_08A601CC;
    return;
L_08A601CC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A601F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A35FB0u>(ctx, &aot_mem) && ctx.pc == 0x08A601F8u) goto L_08A601F8;
    return;
L_08A601F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602F4;
      }
      goto L_08A60204;
    }
L_08A60204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A602E0;
      }
      goto L_08A60218;
    }
L_08A60218:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A60230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A60230u) goto L_08A60230;
    return;
L_08A60230:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6024Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 392u, 0x08A2B240u>(ctx, &aot_mem) && ctx.pc == 0x08A6024Cu) goto L_08A6024C;
    return;
L_08A6024C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602E0;
      }
      goto L_08A6025C;
    }
L_08A6025C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602E0;
      }
      goto L_08A60278;
    }
L_08A60278:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A60294u) goto L_08A60294;
    return;
L_08A60294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A602A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A602A8u) goto L_08A602A8;
    return;
L_08A602A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48949u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1267u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602E0;
      }
      goto L_08A602CC;
    }
L_08A602CC:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A602E0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A602F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60358;
    }
L_08A60358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A6048C;
      }
      goto L_08A60368;
    }
L_08A60368:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A60738;
      }
      goto L_08A60370;
    }
L_08A60370:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A607A8;
      }
      goto L_08A60378;
    }
L_08A60378:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A609DC;
      }
      goto L_08A60380;
    }
L_08A60380:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A60AD4;
      }
      goto L_08A60388;
    }
L_08A60388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A603D8;
      }
      goto L_08A603CC;
    }
L_08A603CC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A603D8;
L_08A603D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3004)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60458;
      }
      goto L_08A60444;
    }
L_08A60444:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3252), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60460;
      }
      goto L_08A60458;
    }
L_08A60458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3252), 0u);
    goto L_08A60460;
L_08A60460:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10205u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A60478u) goto L_08A60478;
    return;
L_08A60478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A6048C;
    }
L_08A6048C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16664u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A604B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 43u, 0x08A20468u>(ctx, &aot_mem) && ctx.pc == 0x08A604B0u) goto L_08A604B0;
    return;
L_08A604B0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A604C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A604C8u) goto L_08A604C8;
    return;
L_08A604C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A604F0;
      }
      goto L_08A604E0;
    }
L_08A604E0:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A604F0;
L_08A604F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A604FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 538u, 0x08A3FE24u>(ctx, &aot_mem) && ctx.pc == 0x08A604FCu) goto L_08A604FC;
    return;
L_08A604FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60508;
    }
L_08A60508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3248)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A605A0;
      }
      goto L_08A60538;
    }
L_08A60538:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10187u);
    ctx.gpr[18] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A60554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A60554u) goto L_08A60554;
    return;
L_08A60554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 10188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A6056Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6056Cu) goto L_08A6056C;
    return;
L_08A6056C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 146u, 0x08A212A8u>(ctx, &aot_mem) && ctx.pc == 0x08A60588u) goto L_08A60588;
    return;
L_08A60588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A605A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A605B0u);
    // nop
    goto L_08A60B98;
L_08A605B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6071C;
      }
      goto L_08A605C0;
    }
L_08A605C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60634;
      }
      goto L_08A605D4;
    }
L_08A605D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (0u | 62u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A605F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A605F0u) goto L_08A605F0;
    return;
L_08A605F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4748)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3300), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4516)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4476)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60648;
    }
L_08A60648:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A60660u) goto L_08A60660;
    return;
L_08A60660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A60678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A60678u) goto L_08A60678;
    return;
L_08A60678:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A60694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A60694u) goto L_08A60694;
    return;
L_08A60694:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A606B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A35E80u>(ctx, &aot_mem) && ctx.pc == 0x08A606B4u) goto L_08A606B4;
    return;
L_08A606B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A606E0;
      }
      goto L_08A606C4;
    }
L_08A606C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3124), ctx.gpr[4]);
    goto L_08A606E0;
L_08A606E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6071C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10205u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[31] = (0x08A60730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A60730u) goto L_08A60730;
    return;
L_08A60730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60738;
    }
L_08A60738:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A60754u) goto L_08A60754;
    return;
L_08A60754:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 517u, 0x08A571A4u>(ctx, &aot_mem) && ctx.pc == 0x08A60764u) goto L_08A60764;
    return;
L_08A60764:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60770;
    }
L_08A60770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08A60780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A60780u) goto L_08A60780;
    return;
L_08A60780:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A6078C;
    }
L_08A6078C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A607A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A607A0u) goto L_08A607A0;
    return;
L_08A607A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A607A8;
    }
L_08A607A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A607B8u);
    // nop
    goto L_08A60B98;
L_08A607B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A607D4;
      }
      goto L_08A607C8;
    }
L_08A607C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3124), ctx.gpr[4]);
    goto L_08A607D4;
L_08A607D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60954;
      }
      goto L_08A607F8;
    }
L_08A607F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60954;
      }
      goto L_08A6080C;
    }
L_08A6080C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60880;
      }
      goto L_08A60820;
    }
L_08A60820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (0u | 62u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6083Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6083Cu) goto L_08A6083C;
    return;
L_08A6083C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4748)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3300), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4516)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4476)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60894;
    }
L_08A60894:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A608ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A608ACu) goto L_08A608AC;
    return;
L_08A608AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A608C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A608C4u) goto L_08A608C4;
    return;
L_08A608C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3256)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A608E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A608E0u) goto L_08A608E0;
    return;
L_08A608E0:
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A608F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A35E80u>(ctx, &aot_mem) && ctx.pc == 0x08A608F4u) goto L_08A608F4;
    return;
L_08A608F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60920;
      }
      goto L_08A60904;
    }
L_08A60904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A60920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A60920u) goto L_08A60920;
    return;
L_08A60920:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-44));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A60944u) goto L_08A60944;
    return;
L_08A60944:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A60954;
L_08A60954:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16664u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 43u, 0x08A20468u>(ctx, &aot_mem) && ctx.pc == 0x08A60978u) goto L_08A60978;
    return;
L_08A60978:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A60990u) goto L_08A60990;
    return;
L_08A60990:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A609A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A609A4u) goto L_08A609A4;
    return;
L_08A609A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A609B0;
    }
L_08A609B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A609C4;
    }
L_08A609C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08A609D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A609D4u) goto L_08A609D4;
    return;
L_08A609D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A609DC;
    }
L_08A609DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60A20;
      }
      goto L_08A60A00;
    }
L_08A60A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16664u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A60A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 43u, 0x08A20468u>(ctx, &aot_mem) && ctx.pc == 0x08A60A20u) goto L_08A60A20;
    return;
L_08A60A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A60A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 67u, 0x08A149D4u>(ctx, &aot_mem) && ctx.pc == 0x08A60A40u) goto L_08A60A40;
    return;
L_08A60A40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60A64;
      }
      goto L_08A60A50;
    }
L_08A60A50:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    goto L_08A60A64;
L_08A60A64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A60A80u) goto L_08A60A80;
    return;
L_08A60A80:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 517u, 0x08A571A4u>(ctx, &aot_mem) && ctx.pc == 0x08A60A90u) goto L_08A60A90;
    return;
L_08A60A90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60A9C;
    }
L_08A60A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08A60AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A60AACu) goto L_08A60AAC;
    return;
L_08A60AAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60AB8;
    }
L_08A60AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A60ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A60ACCu) goto L_08A60ACC;
    return;
L_08A60ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60AD4;
    }
L_08A60AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60B18;
      }
      goto L_08A60AF8;
    }
L_08A60AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16664u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A60B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 43u, 0x08A20468u>(ctx, &aot_mem) && ctx.pc == 0x08A60B18u) goto L_08A60B18;
    return;
L_08A60B18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A60B34u) goto L_08A60B34;
    return;
L_08A60B34:
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 517u, 0x08A571A4u>(ctx, &aot_mem) && ctx.pc == 0x08A60B44u) goto L_08A60B44;
    return;
L_08A60B44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60B50;
    }
L_08A60B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x08A60B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A60B60u) goto L_08A60B60;
    return;
L_08A60B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B80;
      }
      goto L_08A60B6C;
    }
L_08A60B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A60B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A60B80u) goto L_08A60B80;
    return;
L_08A60B80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60BC4;
    }
L_08A60BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 47u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60BD8;
    }
L_08A60BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 960u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60BEC;
    }
L_08A60BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3252), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C2C;
      }
      goto L_08A60C1C;
    }
L_08A60C1C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D9C;
      }
      goto L_08A60C2C;
    }
L_08A60C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D9C;
      }
      goto L_08A60C40;
    }
L_08A60C40:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D5C;
      }
      goto L_08A60C68;
    }
L_08A60C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A60CB4;
      }
      goto L_08A60C7C;
    }
L_08A60C7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A60CE0;
      }
      goto L_08A60C84;
    }
L_08A60C84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A60D0C;
      }
      goto L_08A60C8C;
    }
L_08A60C8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A60D38;
      }
      goto L_08A60C94;
    }
L_08A60C94:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D5C;
      }
      goto L_08A60CB4;
    }
L_08A60CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D5C;
      }
      goto L_08A60CE0;
    }
L_08A60CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D5C;
      }
      goto L_08A60D0C;
    }
L_08A60D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D5C;
      }
      goto L_08A60D38;
    }
L_08A60D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A60D5C;
L_08A60D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60D9C;
      }
      goto L_08A60D78;
    }
L_08A60D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60D9C;
      }
      goto L_08A60D94;
    }
L_08A60D94:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A60D9C;
L_08A60D9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60DA8;
    }
L_08A60DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60EBC;
      }
      goto L_08A60DD8;
    }
L_08A60DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A60DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A60DE8u) goto L_08A60DE8;
    return;
L_08A60DE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A60EBC;
      }
      goto L_08A60DFC;
    }
L_08A60DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A60E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A60E28u) goto L_08A60E28;
    return;
L_08A60E28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 407u, 0x08A2B450u>(ctx, &aot_mem) && ctx.pc == 0x08A60E44u) goto L_08A60E44;
    return;
L_08A60E44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60EBC;
      }
      goto L_08A60E54;
    }
L_08A60E54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A60E70u) goto L_08A60E70;
    return;
L_08A60E70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A60E84u) goto L_08A60E84;
    return;
L_08A60E84:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 248u, 0x08A11C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60EA0u) goto L_08A60EA0;
    return;
L_08A60EA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60EBC;
      }
      goto L_08A60EAC;
    }
L_08A60EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A60EBC;
L_08A60EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60ED0;
    }
L_08A60ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 640u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60EFC;
      }
      goto L_08A60EE4;
    }
L_08A60EE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60EFC;
    }
L_08A60EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F6C;
      }
      goto L_08A60F10;
    }
L_08A60F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F40;
      }
      goto L_08A60F24;
    }
L_08A60F24:
    ctx.gpr[4] = (0u | 10336u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3256), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10043u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3260), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F54;
      }
      goto L_08A60F40;
    }
L_08A60F40:
    ctx.gpr[4] = (0u | 10338u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3256), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10044u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3260), ctx.gpr[4]);
    goto L_08A60F54;
L_08A60F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60F6C;
    }
L_08A60F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FCC;
      }
      goto L_08A60F80;
    }
L_08A60F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FB0;
      }
      goto L_08A60F94;
    }
L_08A60F94:
    ctx.gpr[4] = (0u | 10332u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3256), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10040u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3260), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60FB0;
    }
L_08A60FB0:
    ctx.gpr[4] = (0u | 10330u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3256), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10040u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3260), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60FCC;
    }
L_08A60FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60FE0;
    }
L_08A60FE0:
    ctx.gpr[4] = (0u | 10334u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3256), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10042u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3260), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A60FFC;
    }
L_08A60FFC:
    ctx.gpr[4] = (0u | 10334u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3256), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10041u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3260), ctx.gpr[4]);
    goto L_08A61010;
L_08A61010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A61088;
      }
      goto L_08A61074;
    }
L_08A61074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A61080;
    }
L_08A61080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A610B0;
      }
      goto L_08A61088;
    }
L_08A61088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6112C;
      }
      goto L_08A61098;
    }
L_08A61098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61164;
      }
      goto L_08A610A8;
    }
L_08A610A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A610B0;
    }
L_08A610B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A610CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A610CCu) goto L_08A610CC;
    return;
L_08A610CC:
    ctx.gpr[5] = (0u | 10206u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A610E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A610E0u) goto L_08A610E0;
    return;
L_08A610E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A610ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 538u, 0x08A3FE24u>(ctx, &aot_mem) && ctx.pc == 0x08A610ECu) goto L_08A610EC;
    return;
L_08A610EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A610F8;
    }
L_08A610F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 960u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A6110C;
    }
L_08A6110C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3248)));
    ctx.gpr[5] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A6112C;
    }
L_08A6112C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A61148u) goto L_08A61148;
    return;
L_08A61148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6115Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A6115Cu) goto L_08A6115C;
    return;
L_08A6115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A61164;
    }
L_08A61164:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 341u, 0x08A35EC8u>(ctx, &aot_mem) && ctx.pc == 0x08A61174u) goto L_08A61174;
    return;
L_08A61174:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61180u);
    // nop
    goto L_08A614A8;
L_08A61180:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A611AC;
      }
      goto L_08A61198;
    }
L_08A61198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6131C;
      }
      goto L_08A611A4;
    }
L_08A611A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A611C4;
      }
      goto L_08A611AC;
    }
L_08A611AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A612AC;
      }
      goto L_08A611BC;
    }
L_08A611BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6131C;
      }
      goto L_08A611C4;
    }
L_08A611C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 10336u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A611FC;
      }
      goto L_08A611DC;
    }
L_08A611DC:
    ctx.gpr[5] = (0u | 10332u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A611FC;
      }
      goto L_08A611EC;
    }
L_08A611EC:
    ctx.gpr[5] = (0u | 10330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A61214;
      }
      goto L_08A611FC;
    }
L_08A611FC:
    ctx.gpr[4] = (0u | 10729u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10015u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61224;
      }
      goto L_08A61214;
    }
L_08A61214:
    ctx.gpr[4] = (0u | 10731u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10015u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08A61224;
L_08A61224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6123Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6123Cu) goto L_08A6123C;
    return;
L_08A6123C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A61258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A61258u) goto L_08A61258;
    return;
L_08A61258:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A61270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A61270u) goto L_08A61270;
    return;
L_08A61270:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A61290u) goto L_08A61290;
    return;
L_08A61290:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A612AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10328u);
    ctx.gpr[18] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A612C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A612C8u) goto L_08A612C8;
    return;
L_08A612C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 10329u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A612E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A612E0u) goto L_08A612E0;
    return;
L_08A612E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A61300u) goto L_08A61300;
    return;
L_08A61300:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6131C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4048)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61348;
      }
      goto L_08A6133C;
    }
L_08A6133C:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A61348;
L_08A61348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A61368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 67u, 0x08A149D4u>(ctx, &aot_mem) && ctx.pc == 0x08A61368u) goto L_08A61368;
    return;
L_08A61368:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613F8;
      }
      goto L_08A61378;
    }
L_08A61378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613E0;
      }
      goto L_08A6138C;
    }
L_08A6138C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613C0;
      }
      goto L_08A613A0;
    }
L_08A613A0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613F8;
      }
      goto L_08A613C0;
    }
L_08A613C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613F8;
      }
      goto L_08A613E0;
    }
L_08A613E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_08A613F8;
L_08A613F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A61414u) goto L_08A61414;
    return;
L_08A61414:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61478;
      }
      goto L_08A61424;
    }
L_08A61424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08A61434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 517u, 0x08A571A4u>(ctx, &aot_mem) && ctx.pc == 0x08A61434u) goto L_08A61434;
    return;
L_08A61434:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A61440;
    }
L_08A61440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A61450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A61450u) goto L_08A61450;
    return;
L_08A61450:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A6145C;
    }
L_08A6145C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A61470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A61470u) goto L_08A61470;
    return;
L_08A61470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A61478;
    }
L_08A61478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6148Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A6148Cu) goto L_08A6148C;
    return;
L_08A6148C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A614A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A616A0;
      }
      goto L_08A614D8;
    }
L_08A614D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A616A0;
      }
      goto L_08A614FC;
    }
L_08A614FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A616A0;
      }
      goto L_08A61538;
    }
L_08A61538:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6154Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A55828u>(ctx, &aot_mem) && ctx.pc == 0x08A6154Cu) goto L_08A6154C;
    return;
L_08A6154C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A35FB0u>(ctx, &aot_mem) && ctx.pc == 0x08A61578u) goto L_08A61578;
    return;
L_08A61578:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A616A0;
      }
      goto L_08A61584;
    }
L_08A61584:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A61598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A55828u>(ctx, &aot_mem) && ctx.pc == 0x08A61598u) goto L_08A61598;
    return;
L_08A61598:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61688;
      }
      goto L_08A615BC;
    }
L_08A615BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A615D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A615D4u) goto L_08A615D4;
    return;
L_08A615D4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A615F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 392u, 0x08A2B240u>(ctx, &aot_mem) && ctx.pc == 0x08A615F0u) goto L_08A615F0;
    return;
L_08A615F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61688;
      }
      goto L_08A61600;
    }
L_08A61600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61688;
      }
      goto L_08A6161C;
    }
L_08A6161C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A61638u) goto L_08A61638;
    return;
L_08A61638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6164Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A6164Cu) goto L_08A6164C;
    return;
L_08A6164C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48949u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1267u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61688;
      }
      goto L_08A61670;
    }
L_08A61670:
    ctx.gpr[2] = (0u | 2u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61688:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A616A0:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3980)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_08A6175C;
L_08A6175C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-100));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(76))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A617B4;
      }
      goto L_08A617A0;
    }
L_08A617A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6175C;
      }
      goto L_08A617B4;
    }
L_08A617B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2988)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A617CC;
L_08A617CC:
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 80u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-100));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61834;
      }
      goto L_08A61820;
    }
L_08A61820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A617CC;
      }
      goto L_08A61834;
    }
L_08A61834:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4375));
    ctx.gpr[6] = (0u | 35u);
    ctx.gpr[31] = (0x08A6184Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A6184Cu) goto L_08A6184C;
    return;
L_08A6184C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A61884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61884u) goto L_08A61884;
    return;
L_08A61884:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A618D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A618D4u) goto L_08A618D4;
    return;
L_08A618D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A618F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A618F0u) goto L_08A618F0;
    return;
L_08A618F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A61914;
      }
      goto L_08A61900;
    }
L_08A61900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A6190C;
    }
L_08A6190C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6193C;
      }
      goto L_08A61914;
    }
L_08A61914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A619A4;
      }
      goto L_08A61924;
    }
L_08A61924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D0C;
      }
      goto L_08A61934;
    }
L_08A61934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A6193C;
    }
L_08A6193C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A61950u) goto L_08A61950;
    return;
L_08A61950:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A61964u) goto L_08A61964;
    return;
L_08A61964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1100));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A619A4;
    }
L_08A619A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A619B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 538u, 0x08A3FE24u>(ctx, &aot_mem) && ctx.pc == 0x08A619B0u) goto L_08A619B0;
    return;
L_08A619B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A619BC;
    }
L_08A619BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61A00;
      }
      goto L_08A619F0;
    }
L_08A619F0:
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A61A00;
L_08A61A00:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A2C;
      }
      goto L_08A61A1C;
    }
L_08A61A1C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A61A2C;
    }
L_08A61A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A61A48;
    }
L_08A61A48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A70;
      }
      goto L_08A61A60;
    }
L_08A61A60:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A61A70;
    }
L_08A61A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A61A84;
    }
L_08A61A84:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A61A8C;
L_08A61A8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B0C;
      }
      goto L_08A61A98;
    }
L_08A61A98:
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A61AB8u) goto L_08A61AB8;
    return;
L_08A61AB8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A61ACCu) goto L_08A61ACC;
    return;
L_08A61ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1120));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C14;
      }
      goto L_08A61B20;
    }
L_08A61B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B8C;
      }
      goto L_08A61B40;
    }
L_08A61B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3976)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A61B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A61B6Cu) goto L_08A61B6C;
    return;
L_08A61B6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B8C;
      }
      goto L_08A61B78;
    }
L_08A61B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A61B8C;
L_08A61B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A61BA0;
    }
L_08A61BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4248)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A61BD4;
    }
L_08A61BD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A61BF8u) goto L_08A61BF8;
    return;
L_08A61BF8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A61C0Cu) goto L_08A61C0C;
    return;
L_08A61C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A61C14;
    }
L_08A61C14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A61C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A61C2Cu) goto L_08A61C2C;
    return;
L_08A61C2C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08A61C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A61C40u) goto L_08A61C40;
    return;
L_08A61C40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61C74;
      }
      goto L_08A61C68;
    }
L_08A61C68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A61C74;
L_08A61C74:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61CF4;
      }
      goto L_08A61C90;
    }
L_08A61C90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A61CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A61CCCu) goto L_08A61CCC;
    return;
L_08A61CCC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A61CE0u) goto L_08A61CE0;
    return;
L_08A61CE0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A61CF4;
    }
L_08A61CF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A61D0C;
    }
L_08A61D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61D38;
      }
      goto L_08A61D28;
    }
L_08A61D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08A61D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A61D38u) goto L_08A61D38;
    return;
L_08A61D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A61D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A61D98u) goto L_08A61D98;
    return;
L_08A61D98:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A61DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A61DB4u) goto L_08A61DB4;
    return;
L_08A61DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A61DD8;
      }
      goto L_08A61DC4;
    }
L_08A61DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A621C8;
      }
      goto L_08A61DD0;
    }
L_08A61DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61DF0;
      }
      goto L_08A61DD8;
    }
L_08A61DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A620D0;
      }
      goto L_08A61DE8;
    }
L_08A61DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A621C8;
      }
      goto L_08A61DF0;
    }
L_08A61DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F24;
      }
      goto L_08A61E04;
    }
L_08A61E04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4410));
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08A61E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A61E1Cu) goto L_08A61E1C;
    return;
L_08A61E1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10000));
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A61E44u) goto L_08A61E44;
    return;
L_08A61E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[5] = (7u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8192));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61EB8;
      }
      goto L_08A61E5C;
    }
L_08A61E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[4] = (ctx.gpr[4] & 49152u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61E80;
      }
      goto L_08A61E70;
    }
L_08A61E70:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F08;
      }
      goto L_08A61E80;
    }
L_08A61E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61EA8;
      }
      goto L_08A61E98;
    }
L_08A61E98:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F08;
      }
      goto L_08A61EA8;
    }
L_08A61EA8:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F08;
      }
      goto L_08A61EB8;
    }
L_08A61EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[4] = (ctx.gpr[4] & 398u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61EDC;
      }
      goto L_08A61ECC;
    }
L_08A61ECC:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F08;
      }
      goto L_08A61EDC;
    }
L_08A61EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[4] = (ctx.gpr[4] & 7680u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F00;
      }
      goto L_08A61EF0;
    }
L_08A61EF0:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F08;
      }
      goto L_08A61F00;
    }
L_08A61F00:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A61F08;
L_08A61F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A61F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 546u, 0x08A47A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61F1Cu) goto L_08A61F1C;
    return;
L_08A61F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6209C;
      }
      goto L_08A61F24;
    }
L_08A61F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61F64;
      }
      goto L_08A61F40;
    }
L_08A61F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A61F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A61F50u) goto L_08A61F50;
    return;
L_08A61F50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A61F70u);
    // nop
    goto L_08A61700;
L_08A61F70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61FA0;
      }
      goto L_08A61F7C;
    }
L_08A61F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A61F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A61F8Cu) goto L_08A61F8C;
    return;
L_08A61F8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61FA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1220)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A61FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 70u, 0x08A2099Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61FECu) goto L_08A61FEC;
    return;
L_08A61FEC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6200C;
      }
      goto L_08A61FFC;
    }
L_08A61FFC:
    ctx.gpr[4] = (0u | 10096u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62088;
      }
      goto L_08A6200C;
    }
L_08A6200C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62034;
      }
      goto L_08A62020;
    }
L_08A62020:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62068;
      }
      goto L_08A62034;
    }
L_08A62034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6205C;
      }
      goto L_08A62048;
    }
L_08A62048:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4470));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62068;
      }
      goto L_08A6205C;
    }
L_08A6205C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4440));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08A62068;
L_08A62068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_08A62088;
L_08A62088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08A6209Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A6209Cu) goto L_08A6209C;
    return;
L_08A6209C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A620B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A620B0u) goto L_08A620B0;
    return;
L_08A620B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A620BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A620BCu) goto L_08A620BC;
    return;
L_08A620BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A621C8;
      }
      goto L_08A620D0;
    }
L_08A620D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A62104;
      }
      goto L_08A620F8;
    }
L_08A620F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A62104;
L_08A62104:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A62138;
      }
      goto L_08A62124;
    }
L_08A62124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A621C8;
      }
      goto L_08A62138;
    }
L_08A62138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62178;
      }
      goto L_08A6214C;
    }
L_08A6214C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62178;
      }
      goto L_08A62160;
    }
L_08A62160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 111u);
    ctx.gpr[31] = (0x08A62170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A62170u) goto L_08A62170;
    return;
L_08A62170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A621C8;
      }
      goto L_08A62178;
    }
L_08A62178:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6218Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A6218Cu) goto L_08A6218C;
    return;
L_08A6218C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A621A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A621A0u) goto L_08A621A0;
    return;
L_08A621A0:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A621B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A621B0u) goto L_08A621B0;
    return;
L_08A621B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(0u));
    goto L_08A621C8;
L_08A621C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A621DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A62220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A62220u) goto L_08A62220;
    return;
L_08A62220:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6223Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A6223Cu) goto L_08A6223C;
    return;
L_08A6223C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A62260;
      }
      goto L_08A6224C;
    }
L_08A6224C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A624FC;
      }
      goto L_08A62258;
    }
L_08A62258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62278;
      }
      goto L_08A62260;
    }
L_08A62260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A624E8;
      }
      goto L_08A62270;
    }
L_08A62270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624FC;
      }
      goto L_08A62278;
    }
L_08A62278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6229C;
      }
      goto L_08A6228C;
    }
L_08A6228C:
    ctx.gpr[4] = (0u | 10097u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6231C;
      }
      goto L_08A6229C;
    }
L_08A6229C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4530));
    ctx.gpr[16] = (0u | 30u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A622B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A622B8u) goto L_08A622B8;
    return;
L_08A622B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4560));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A622D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A622D0u) goto L_08A622D0;
    return;
L_08A622D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A622F4;
      }
      goto L_08A622E4;
    }
L_08A622E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(62));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A622FC;
      }
      goto L_08A622F4;
    }
L_08A622F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A622FC;
L_08A622FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A6231C;
L_08A6231C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A62334u) goto L_08A62334;
    return;
L_08A62334:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 70u, 0x08A2099Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62380u) goto L_08A62380;
    return;
L_08A62380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A623B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 80u, 0x08A20AD8u>(ctx, &aot_mem) && ctx.pc == 0x08A623B4u) goto L_08A623B4;
    return;
L_08A623B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A623E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 93u, 0x08A20C18u>(ctx, &aot_mem) && ctx.pc == 0x08A623E4u) goto L_08A623E4;
    return;
L_08A623E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624D0;
      }
      goto L_08A623F4;
    }
L_08A623F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[5] = (7u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8192));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6246C;
      }
      goto L_08A62410;
    }
L_08A62410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[4] = (ctx.gpr[4] & 49152u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62434;
      }
      goto L_08A62424;
    }
L_08A62424:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624BC;
      }
      goto L_08A62434;
    }
L_08A62434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6245C;
      }
      goto L_08A6244C;
    }
L_08A6244C:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624BC;
      }
      goto L_08A6245C;
    }
L_08A6245C:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624BC;
      }
      goto L_08A6246C;
    }
L_08A6246C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[4] = (ctx.gpr[4] & 398u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62490;
      }
      goto L_08A62480;
    }
L_08A62480:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624BC;
      }
      goto L_08A62490;
    }
L_08A62490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[4] = (ctx.gpr[4] & 7680u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624B4;
      }
      goto L_08A624A4;
    }
L_08A624A4:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624BC;
      }
      goto L_08A624B4;
    }
L_08A624B4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_08A624BC;
L_08A624BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A624D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 546u, 0x08A47A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A624D0u) goto L_08A624D0;
    return;
L_08A624D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624FC;
      }
      goto L_08A624E8;
    }
L_08A624E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A624FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A624FCu) goto L_08A624FC;
    return;
L_08A624FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A62544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A62544u) goto L_08A62544;
    return;
L_08A62544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62578;
      }
      goto L_08A62558;
    }
L_08A62558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A627C4;
      }
      goto L_08A62564;
    }
L_08A62564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A62590;
      }
      goto L_08A62570;
    }
L_08A62570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A625F4;
      }
      goto L_08A62578;
    }
L_08A62578:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A62774;
      }
      goto L_08A62588;
    }
L_08A62588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A627C4;
      }
      goto L_08A62590;
    }
L_08A62590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A625DC;
      }
      goto L_08A625A4;
    }
L_08A625A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10498u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A625BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A625BCu) goto L_08A625BC;
    return;
L_08A625BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1140));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A625DC;
L_08A625DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A625F4;
L_08A625F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A62650;
      }
      goto L_08A62640;
    }
L_08A62640:
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A62650;
L_08A62650:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6267C;
      }
      goto L_08A6266C;
    }
L_08A6266C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62698;
      }
      goto L_08A6267C;
    }
L_08A6267C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62698;
      }
      goto L_08A62690;
    }
L_08A62690:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A62698;
L_08A62698:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62740;
      }
      goto L_08A626A4;
    }
L_08A626A4:
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A626F0;
      }
      goto L_08A626C4;
    }
L_08A626C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A626D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A626D8u) goto L_08A626D8;
    return;
L_08A626D8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A626F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10494u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A62708u) goto L_08A62708;
    return;
L_08A62708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1160));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A627C4;
      }
      goto L_08A62754;
    }
L_08A62754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[31] = (0x08A62764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A62764u) goto L_08A62764;
    return;
L_08A62764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A627C4;
      }
      goto L_08A627A8;
    }
L_08A627A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A627BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A627BCu) goto L_08A627BC;
    return;
L_08A627BC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A627C4;
L_08A627C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A627D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A62804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A62804u) goto L_08A62804;
    return;
L_08A62804:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A62834;
      }
      goto L_08A62820;
    }
L_08A62820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A629D8;
      }
      goto L_08A6282C;
    }
L_08A6282C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6284C;
      }
      goto L_08A62834;
    }
L_08A62834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62934;
      }
      goto L_08A62844;
    }
L_08A62844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A629D8;
      }
      goto L_08A6284C;
    }
L_08A6284C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4280)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8192));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62888;
      }
      goto L_08A62868;
    }
L_08A62868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A62878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A62878u) goto L_08A62878;
    return;
L_08A62878:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A62894u);
    // nop
    goto L_08A61700;
L_08A62894:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A628C0;
      }
      goto L_08A628A0;
    }
L_08A628A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A628B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A628B0u) goto L_08A628B0;
    return;
L_08A628B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A628C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1220)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6290Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 70u, 0x08A2099Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6290Cu) goto L_08A6290C;
    return;
L_08A6290C:
    ctx.gpr[5] = (0u | 10499u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A62920u) goto L_08A62920;
    return;
L_08A62920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A629D8;
      }
      goto L_08A62934;
    }
L_08A62934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A62968;
      }
      goto L_08A6295C;
    }
L_08A6295C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A62968;
L_08A62968:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6299C;
      }
      goto L_08A62988;
    }
L_08A62988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A629D8;
      }
      goto L_08A6299C;
    }
L_08A6299C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10498u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A629B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A629B4u) goto L_08A629B4;
    return;
L_08A629B4:
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A629C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A629C4u) goto L_08A629C4;
    return;
L_08A629C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A629D8;
L_08A629D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A629E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A62A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A62A1Cu) goto L_08A62A1C;
    return;
L_08A62A1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62A38;
    }
L_08A62A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A62B54;
      }
      goto L_08A62A44;
    }
L_08A62A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A64;
      }
      goto L_08A62A4C;
    }
L_08A62A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B40;
      }
      goto L_08A62A5C;
    }
L_08A62A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B54;
      }
      goto L_08A62A64;
    }
L_08A62A64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5136))))));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 70u, 0x08A2099Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62AB4u) goto L_08A62AB4;
    return;
L_08A62AB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A62AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 80u, 0x08A20AD8u>(ctx, &aot_mem) && ctx.pc == 0x08A62AE8u) goto L_08A62AE8;
    return;
L_08A62AE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5124))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 93u, 0x08A20C18u>(ctx, &aot_mem) && ctx.pc == 0x08A62B18u) goto L_08A62B18;
    return;
L_08A62B18:
    ctx.gpr[5] = (0u | 10500u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A62B2Cu) goto L_08A62B2C;
    return;
L_08A62B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B54;
      }
      goto L_08A62B40;
    }
L_08A62B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A62B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A62B54u) goto L_08A62B54;
    return;
L_08A62B54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A62BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A62BA8u) goto L_08A62BA8;
    return;
L_08A62BA8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A62BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A62BC4u) goto L_08A62BC4;
    return;
L_08A62BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A62BE8;
      }
      goto L_08A62BD4;
    }
L_08A62BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A62C9C;
      }
      goto L_08A62BE0;
    }
L_08A62BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C00;
      }
      goto L_08A62BE8;
    }
L_08A62BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C3C;
      }
      goto L_08A62BF8;
    }
L_08A62BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C9C;
      }
      goto L_08A62C00;
    }
L_08A62C00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A62C14u) goto L_08A62C14;
    return;
L_08A62C14:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A62C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A62C28u) goto L_08A62C28;
    return;
L_08A62C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C9C;
      }
      goto L_08A62C3C;
    }
L_08A62C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A62C88;
      }
      goto L_08A62C5C;
    }
L_08A62C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A62C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A62C88u) goto L_08A62C88;
    return;
L_08A62C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A62C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A62C9Cu) goto L_08A62C9C;
    return;
L_08A62C9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62CF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4592));
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08A62D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A62D20u) goto L_08A62D20;
    return;
L_08A62D20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[2] = (ctx.gpr[29] + ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E04;
      }
      goto L_08A62D68;
    }
L_08A62D68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E04;
      }
      goto L_08A62D80;
    }
L_08A62D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62DA8;
      }
      goto L_08A62D94;
    }
L_08A62D94:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62DA8;
    }
L_08A62DA8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A62DB4;
L_08A62DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A62DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 123u, 0x08A289D0u>(ctx, &aot_mem) && ctx.pc == 0x08A62DC8u) goto L_08A62DC8;
    return;
L_08A62DC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A62E04;
      }
      goto L_08A62DDC;
    }
L_08A62DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3096), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x08A62DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A62DF4u) goto L_08A62DF4;
    return;
L_08A62DF4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62E04:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EAC;
      }
      goto L_08A62E34;
    }
L_08A62E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A62EAC;
      }
      goto L_08A62E54;
    }
L_08A62E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E78;
      }
      goto L_08A62E68;
    }
L_08A62E68:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E80;
      }
      goto L_08A62E78;
    }
L_08A62E78:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A62E80;
L_08A62E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A62E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 517u, 0x08A571A4u>(ctx, &aot_mem) && ctx.pc == 0x08A62E90u) goto L_08A62E90;
    return;
L_08A62E90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EAC;
      }
      goto L_08A62E9C;
    }
L_08A62E9C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62EAC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A62F10;
      }
      goto L_08A62EFC;
    }
L_08A62EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A63628;
      }
      goto L_08A62F08;
    }
L_08A62F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F28;
      }
      goto L_08A62F10;
    }
L_08A62F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63430;
      }
      goto L_08A62F20;
    }
L_08A62F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63628;
      }
      goto L_08A62F28;
    }
L_08A62F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F58;
      }
      goto L_08A62F44;
    }
L_08A62F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F68;
      }
      goto L_08A62F58;
    }
L_08A62F58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A62F68;
L_08A62F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F8C;
      }
      goto L_08A62F7C;
    }
L_08A62F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A62F8C;
L_08A62F8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6309C;
      }
      goto L_08A62FA4;
    }
L_08A62FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63088;
      }
      goto L_08A62FB8;
    }
L_08A62FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A62FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A62FD4u) goto L_08A62FD4;
    return;
L_08A62FD4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A62FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 3u, 0x08A2C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62FE4u) goto L_08A62FE4;
    return;
L_08A62FE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63074;
      }
      goto L_08A62FF8;
    }
L_08A62FF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63074;
      }
      goto L_08A63010;
    }
L_08A63010:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A63040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 165u, 0x08A28F18u>(ctx, &aot_mem) && ctx.pc == 0x08A63040u) goto L_08A63040;
    return;
L_08A63040:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A63050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A63050u) goto L_08A63050;
    return;
L_08A63050:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3096), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631AC;
      }
      goto L_08A63074;
    }
L_08A63074:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631AC;
      }
      goto L_08A63088;
    }
L_08A63088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631AC;
      }
      goto L_08A6309C;
    }
L_08A6309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x08A630ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A630ACu) goto L_08A630AC;
    return;
L_08A630AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A630D4;
      }
      goto L_08A630C0;
    }
L_08A630C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631AC;
      }
      goto L_08A630D4;
    }
L_08A630D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A63100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A63100u) goto L_08A63100;
    return;
L_08A63100:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A63110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 3u, 0x08A2C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63110u) goto L_08A63110;
    return;
L_08A63110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631A0;
      }
      goto L_08A63124;
    }
L_08A63124:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631A0;
      }
      goto L_08A6313C;
    }
L_08A6313C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6316Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 165u, 0x08A28F18u>(ctx, &aot_mem) && ctx.pc == 0x08A6316Cu) goto L_08A6316C;
    return;
L_08A6316C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A6317Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6317Cu) goto L_08A6317C;
    return;
L_08A6317C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3096), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631AC;
      }
      goto L_08A631A0;
    }
L_08A631A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A631AC;
L_08A631AC:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3312)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A631C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A631C8u) goto L_08A631C8;
    return;
L_08A631C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A631F8;
      }
      goto L_08A631EC;
    }
L_08A631EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A631F8;
L_08A631F8:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63224;
      }
      goto L_08A63214;
    }
L_08A63214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3308), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A632E0;
      }
      goto L_08A63224;
    }
L_08A63224:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63254;
      }
      goto L_08A63248;
    }
L_08A63248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A63254;
L_08A63254:
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63290;
      }
      goto L_08A63270;
    }
L_08A63270:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3308), ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A632E0;
      }
      goto L_08A63290;
    }
L_08A63290:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A632C8;
      }
      goto L_08A632A8;
    }
L_08A632A8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3308), ctx.gpr[4]);
    ctx.gpr[4] = (49844u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A632E0;
      }
      goto L_08A632C8;
    }
L_08A632C8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3308), ctx.gpr[4]);
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A632E0;
L_08A632E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3312)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A632F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A632F8u) goto L_08A632F8;
    return;
L_08A632F8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A63308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A63308u) goto L_08A63308;
    return;
L_08A63308:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A6331Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A6331Cu) goto L_08A6331C;
    return;
L_08A6331C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3308)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3308), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63354;
      }
      goto L_08A63348;
    }
L_08A63348:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3300), ctx.gpr[4]);
    goto L_08A63354;
L_08A63354:
    ctx.gpr[4] = (0u | 10230u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 10246u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10238u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63398;
      }
      goto L_08A63388;
    }
L_08A63388:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633A0;
      }
      goto L_08A63398;
    }
L_08A63398:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08A633A0;
L_08A633A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3300)));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3308)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A633D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A633D0u) goto L_08A633D0;
    return;
L_08A633D0:
    ctx.gpr[6] = (0u | 10059u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A633E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A633E4u) goto L_08A633E4;
    return;
L_08A633E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A63410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 102u, 0x08A14EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A63410u) goto L_08A63410;
    return;
L_08A63410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6341Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A6341Cu) goto L_08A6341C;
    return;
L_08A6341C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63628;
      }
      goto L_08A63430;
    }
L_08A63430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63480;
      }
      goto L_08A63460;
    }
L_08A63460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A63478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A63478u) goto L_08A63478;
    return;
L_08A63478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63498;
      }
      goto L_08A63480;
    }
L_08A63480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A63498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 163u, 0x08A3D264u>(ctx, &aot_mem) && ctx.pc == 0x08A63498u) goto L_08A63498;
    return;
L_08A63498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A634D0;
      }
      goto L_08A634AC;
    }
L_08A634AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A634C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A634C8u) goto L_08A634C8;
    return;
L_08A634C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63614;
      }
      goto L_08A634D0;
    }
L_08A634D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A634E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A634E4u) goto L_08A634E4;
    return;
L_08A634E4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A63514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A63514u) goto L_08A63514;
    return;
L_08A63514:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A6352Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A6352Cu) goto L_08A6352C;
    return;
L_08A6352C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3300)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A63558;
      }
      goto L_08A63544;
    }
L_08A63544:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63558;
    }
L_08A63558:
    ctx.gpr[4] = (16648u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A63564;
L_08A63564:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A635A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 63u, 0x08A2CCECu>(ctx, &aot_mem) && ctx.pc == 0x08A635A0u) goto L_08A635A0;
    return;
L_08A635A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A635C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A635C8u) goto L_08A635C8;
    return;
L_08A635C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A635E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 16u, 0x08A2C2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A635E8u) goto L_08A635E8;
    return;
L_08A635E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A635FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 14u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A635FCu) goto L_08A635FC;
    return;
L_08A635FC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A63614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A63614u) goto L_08A63614;
    return;
L_08A63614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A63628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A63628u) goto L_08A63628;
    return;
L_08A63628:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6364C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A63674;
    }
L_08A63674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A637F0;
      }
      goto L_08A63680;
    }
L_08A63680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636A0;
      }
      goto L_08A63688;
    }
L_08A63688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63704;
      }
      goto L_08A63698;
    }
L_08A63698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637F0;
      }
      goto L_08A636A0;
    }
L_08A636A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636C8;
      }
      goto L_08A636B8;
    }
L_08A636B8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636D0;
      }
      goto L_08A636C8;
    }
L_08A636C8:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A636D0;
L_08A636D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A636F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A636F0u) goto L_08A636F0;
    return;
L_08A636F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637F0;
      }
      goto L_08A63704;
    }
L_08A63704:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A63730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 163u, 0x08A3D264u>(ctx, &aot_mem) && ctx.pc == 0x08A63730u) goto L_08A63730;
    return;
L_08A63730:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A63744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A63744u) goto L_08A63744;
    return;
L_08A63744:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63774;
      }
      goto L_08A63768;
    }
L_08A63768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A63774;
L_08A63774:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A637A8;
      }
      goto L_08A63794;
    }
L_08A63794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637F0;
      }
      goto L_08A637A8;
    }
L_08A637A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A637B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A637B8u) goto L_08A637B8;
    return;
L_08A637B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A637C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 468u, 0x08A4E098u>(ctx, &aot_mem) && ctx.pc == 0x08A637C4u) goto L_08A637C4;
    return;
L_08A637C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4294), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A637E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A637E4u) goto L_08A637E4;
    return;
L_08A637E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A637F0;
L_08A637F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A63838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A63838u) goto L_08A63838;
    return;
L_08A63838:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63884;
      }
      goto L_08A63864;
    }
L_08A63864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63870;
    }
L_08A63870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A638AC;
      }
      goto L_08A6387C;
    }
L_08A6387C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63944;
      }
      goto L_08A63884;
    }
L_08A63884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63958;
      }
      goto L_08A63894;
    }
L_08A63894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A638A4;
    }
L_08A638A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A638AC;
    }
L_08A638AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3300)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3308)));
    ctx.gpr[31] = (0x08A638C4u);
    // nop
    goto L_08A62CF8;
L_08A638C4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A638D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A638D8u) goto L_08A638D8;
    return;
L_08A638D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 10257u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A638F8;
      }
      goto L_08A638E8;
    }
L_08A638E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A638F8;
L_08A638F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63920;
      }
      goto L_08A6390C;
    }
L_08A6390C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4308), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6392C;
      }
      goto L_08A63920;
    }
L_08A63920:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4308), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6392C;
L_08A6392C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63944;
    }
L_08A63944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3320), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A63958;
L_08A63958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A63974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A63974u) goto L_08A63974;
    return;
L_08A63974:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639B4;
      }
      goto L_08A63980;
    }
L_08A63980:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A63994u);
    // nop
    goto L_08A63C8C;
L_08A63994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A639B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4302)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639FC;
      }
      goto L_08A639C8;
    }
L_08A639C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A639DCu);
    // nop
    goto L_08A63C8C;
L_08A639DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A639FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A63A08u);
    // nop
    goto L_08A63F64;
L_08A63A08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63A14;
    }
L_08A63A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 24u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63A50;
      }
      goto L_08A63A28;
    }
L_08A63A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63A50;
      }
      goto L_08A63A48;
    }
L_08A63A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4640), 0u);
    goto L_08A63A50;
L_08A63A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A63A5Cu);
    // nop
    goto L_08A62E14;
L_08A63A5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63A68;
    }
L_08A63A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A63A74u);
    // nop
    goto L_08A62D48;
L_08A63A74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63A80;
    }
L_08A63A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4308)));
    ctx.gpr[31] = (0x08A63A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A63A90u) goto L_08A63A90;
    return;
L_08A63A90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63A9C;
    }
L_08A63A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A63AACu);
    // nop
    goto L_08A63C8C;
L_08A63AAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63ADC;
      }
      goto L_08A63AB8;
    }
L_08A63AB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A63AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A63AF4u) goto L_08A63AF4;
    return;
L_08A63AF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63B04;
    }
L_08A63B04:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A63B38;
      }
      goto L_08A63B20;
    }
L_08A63B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B38;
      }
      goto L_08A63B34;
    }
L_08A63B34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    goto L_08A63B38;
L_08A63B38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63B44;
    }
L_08A63B44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A63B58u);
    // nop
    goto L_08A63C8C;
L_08A63B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 24u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63BB4;
      }
      goto L_08A63B98;
    }
L_08A63B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4308)));
    ctx.gpr[31] = (0x08A63BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 27u, 0x08A443B4u>(ctx, &aot_mem) && ctx.pc == 0x08A63BA8u) goto L_08A63BA8;
    return;
L_08A63BA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C78;
      }
      goto L_08A63BB4;
    }
L_08A63BB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A63BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A63BC8u) goto L_08A63BC8;
    return;
L_08A63BC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63BFC;
      }
      goto L_08A63BE0;
    }
L_08A63BE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A63BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A63BF4u) goto L_08A63BF4;
    return;
L_08A63BF4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A63BFC;
L_08A63BFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A63C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A63C1Cu) goto L_08A63C1C;
    return;
L_08A63C1C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A63C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 171u, 0x08A3D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A63C30u) goto L_08A63C30;
    return;
L_08A63C30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63C64;
      }
      goto L_08A63C50;
    }
L_08A63C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A63C64;
L_08A63C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A63C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A63C78u) goto L_08A63C78;
    return;
L_08A63C78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17012u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16980u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 10254u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A63D1C;
      }
      goto L_08A63D10;
    }
L_08A63D10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63D24;
      }
      goto L_08A63D1C;
    }
L_08A63D1C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_08A63D24;
L_08A63D24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DE0;
      }
      goto L_08A63D38;
    }
L_08A63D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63DC8;
      }
      goto L_08A63D6C;
    }
L_08A63D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63DC8;
      }
      goto L_08A63DB8;
    }
L_08A63DB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3320)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3320), ctx.gpr[4]);
    goto L_08A63DC8;
L_08A63DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63D38;
      }
      goto L_08A63DE0;
    }
L_08A63DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63E04;
      }
      goto L_08A63DF4;
    }
L_08A63DF4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63E0C;
      }
      goto L_08A63E04;
    }
L_08A63E04:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08A63E0C;
L_08A63E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63E44;
      }
      goto L_08A63E30;
    }
L_08A63E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63E70;
      }
      goto L_08A63E44;
    }
L_08A63E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63E70;
      }
      goto L_08A63E64;
    }
L_08A63E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08A63E70;
L_08A63E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3320)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EA4;
      }
      goto L_08A63E88;
    }
L_08A63E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EA4;
      }
      goto L_08A63E94;
    }
L_08A63E94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3320)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F54;
      }
      goto L_08A63EC4;
    }
L_08A63EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F0C;
      }
      goto L_08A63ED8;
    }
L_08A63ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3320)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A63EFC;
      }
      goto L_08A63EEC;
    }
L_08A63EEC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F38;
      }
      goto L_08A63EFC;
    }
L_08A63EFC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F38;
      }
      goto L_08A63F0C;
    }
L_08A63F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3320)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A63F30;
      }
      goto L_08A63F20;
    }
L_08A63F20:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F38;
      }
      goto L_08A63F30;
    }
L_08A63F30:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A63F38;
L_08A63F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[31] = (0x08A63F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A63F54u) goto L_08A63F54;
    return;
L_08A63F54:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A63F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 153u, 0x08A3D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08A63F94u) goto L_08A63F94;
    return;
L_08A63F94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 33u, 0x08A642A0u>(ctx, &aot_mem); return;
      }
      goto L_08A63FA4;
    }
L_08A63FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 14u, 0x08A6410Cu>(ctx, &aot_mem); return;
      }
      goto L_08A63FB8;
    }
L_08A63FB8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4632));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A63FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A63FD4u) goto L_08A63FD4;
    return;
L_08A63FD4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4280), 0u);
    ctx.gpr[4] = (0u | 1024u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4284), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5136), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A64000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 477u, 0x08A32DBCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0151(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0151_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_151(Runtime &runtime) {
    runtime.register_generated_unit(151u, 0x08A60000u, 16384u, &recomp_unit_0151, &recomp_unit_0151_entry);
    runtime.register_function(0x08A60000u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6001Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60024u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60038u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6004Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6006Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60078u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6008Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6009Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60108u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6011Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6012Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60168u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60204u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60230u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6024Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6025Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60278u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60294u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60308u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60358u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60368u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60370u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60378u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60380u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60388u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60444u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60458u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60478u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6048Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60508u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60538u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60554u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6056Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60588u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60634u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60648u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60660u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60678u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60694u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6071Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60730u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60738u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60754u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60764u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60770u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60780u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6078Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6080Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60820u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6083Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60880u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60904u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60920u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60944u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60978u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60990u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60ACCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60ED0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61024u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61074u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61080u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61098u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6110Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6112Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61148u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6115Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61174u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61180u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61198u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61214u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61224u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6123Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61258u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61270u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61290u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61300u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6131Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6133Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61348u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61368u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61378u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6138Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61414u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61424u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61434u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61440u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61450u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6145Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61470u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61478u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6148Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61538u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6154Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61578u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61584u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61598u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61600u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6161Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61638u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6164Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61670u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61700u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6175Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61820u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61834u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6184Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61884u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61900u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6190Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61914u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61924u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61934u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6193Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61950u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61964u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61ACCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61ECCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6200Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62020u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62048u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6205Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62068u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6209Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62104u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62124u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62138u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6214Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62160u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62170u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62178u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6218Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62220u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6223Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6224Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62258u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62260u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62270u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62278u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6228Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6229Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6231Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62334u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62380u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62410u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62424u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62434u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6244Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6245Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6246Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62480u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62490u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62514u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62544u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62558u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62564u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62570u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62578u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62588u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62640u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62650u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6266Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6267Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62690u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62708u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62740u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62754u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62764u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62774u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62804u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62820u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6282Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62834u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62844u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6284Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62868u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62878u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62888u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6290Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62920u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62934u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6295Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62968u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62988u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6299Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63040u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63050u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63074u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6309Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63100u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63110u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63124u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6313Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6316Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6317Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63214u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63224u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63248u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63254u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63270u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63290u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63308u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6331Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63348u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63354u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63388u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63398u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63410u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6341Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63430u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63478u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63480u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63498u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63514u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6352Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63544u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63558u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63564u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63614u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63628u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6364Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63674u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63704u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63730u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63744u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63768u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63774u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63794u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63804u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63838u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63864u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63870u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6387Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63884u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6390Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63920u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6392Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63944u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63958u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63974u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63980u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63994u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ADCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ED8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FD4u, &recomp_unit_0151, "recomp_unit_0151");
}
} // namespace psprecomp

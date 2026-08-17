#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0145[4092] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23,
    0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0,
    0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0,
    0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 241, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311,
    0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0,
    0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0,
    0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0,
    334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0,
    349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0,
    356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0,
    0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0,
    0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0,
    393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0,
    0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0,
    0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450,
    0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0,
    0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472,
    0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0,
    0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494,
    0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509,
    0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 524,
    0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532,
    0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0,
    546, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0,
    553, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 560, 0,
    0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0,
    0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0,
    0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0,
    0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0,
    0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0,
    596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0,
    603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611,
    0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618,
    0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 0, 626, 0,
    0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0,
    634, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0,
    0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649,
    0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0,
    0, 657, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664, 0,
    0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0,
    672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0,
    0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687,
    0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0,
    0, 695, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 702,
    0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 709,
    0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0,
    0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0,
    0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0,
    731, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0,
    0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 746,
    0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0,
    0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0,
    0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0,
    0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0,
    775, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 782, 0,
    0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 789, 0,
    0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 796,
};
void recomp_unit_0145_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A48000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0145[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A48000;
    case 2u: goto L_08A48004;
    case 3u: goto L_08A48020;
    case 4u: goto L_08A48040;
    case 5u: goto L_08A48054;
    case 6u: goto L_08A480AC;
    case 7u: goto L_08A480BC;
    case 8u: goto L_08A480C8;
    case 9u: goto L_08A480D0;
    case 10u: goto L_08A480E0;
    case 11u: goto L_08A480F0;
    case 12u: goto L_08A480F8;
    case 13u: goto L_08A48110;
    case 14u: goto L_08A4812C;
    case 15u: goto L_08A48138;
    case 16u: goto L_08A48158;
    case 17u: goto L_08A4817C;
    case 18u: goto L_08A48188;
    case 19u: goto L_08A481A8;
    case 20u: goto L_08A481BC;
    case 21u: goto L_08A481D0;
    case 22u: goto L_08A481EC;
    case 23u: goto L_08A481FC;
    case 24u: goto L_08A4820C;
    case 25u: goto L_08A48214;
    case 26u: goto L_08A48228;
    case 27u: goto L_08A48230;
    case 28u: goto L_08A48244;
    case 29u: goto L_08A4825C;
    case 30u: goto L_08A48270;
    case 31u: goto L_08A48280;
    case 32u: goto L_08A482B0;
    case 33u: goto L_08A482C0;
    case 34u: goto L_08A482CC;
    case 35u: goto L_08A482D4;
    case 36u: goto L_08A482E4;
    case 37u: goto L_08A482EC;
    case 38u: goto L_08A48300;
    case 39u: goto L_08A48310;
    case 40u: goto L_08A48318;
    case 41u: goto L_08A48330;
    case 42u: goto L_08A4833C;
    case 43u: goto L_08A48348;
    case 44u: goto L_08A48360;
    case 45u: goto L_08A48384;
    case 46u: goto L_08A483C0;
    case 47u: goto L_08A483D0;
    case 48u: goto L_08A483E4;
    case 49u: goto L_08A483F0;
    case 50u: goto L_08A48404;
    case 51u: goto L_08A48414;
    case 52u: goto L_08A48444;
    case 53u: goto L_08A48454;
    case 54u: goto L_08A48460;
    case 55u: goto L_08A48468;
    case 56u: goto L_08A48478;
    case 57u: goto L_08A48480;
    case 58u: goto L_08A48494;
    case 59u: goto L_08A484A4;
    case 60u: goto L_08A484AC;
    case 61u: goto L_08A484C4;
    case 62u: goto L_08A484D8;
    case 63u: goto L_08A484FC;
    case 64u: goto L_08A48538;
    case 65u: goto L_08A48548;
    case 66u: goto L_08A4855C;
    case 67u: goto L_08A4856C;
    case 68u: goto L_08A48590;
    case 69u: goto L_08A4859C;
    case 70u: goto L_08A485A4;
    case 71u: goto L_08A485B4;
    case 72u: goto L_08A485C4;
    case 73u: goto L_08A485CC;
    case 74u: goto L_08A485E4;
    case 75u: goto L_08A485F8;
    case 76u: goto L_08A4860C;
    case 77u: goto L_08A48624;
    case 78u: goto L_08A48630;
    case 79u: goto L_08A48644;
    case 80u: goto L_08A48660;
    case 81u: goto L_08A48698;
    case 82u: goto L_08A486C0;
    case 83u: goto L_08A486D8;
    case 84u: goto L_08A486F8;
    case 85u: goto L_08A48710;
    case 86u: goto L_08A48720;
    case 87u: goto L_08A48728;
    case 88u: goto L_08A48738;
    case 89u: goto L_08A48758;
    case 90u: goto L_08A48768;
    case 91u: goto L_08A48778;
    case 92u: goto L_08A48788;
    case 93u: goto L_08A48798;
    case 94u: goto L_08A487A8;
    case 95u: goto L_08A487B0;
    case 96u: goto L_08A487C8;
    case 97u: goto L_08A487DC;
    case 98u: goto L_08A487F4;
    case 99u: goto L_08A4881C;
    case 100u: goto L_08A48828;
    case 101u: goto L_08A48848;
    case 102u: goto L_08A4885C;
    case 103u: goto L_08A48870;
    case 104u: goto L_08A48880;
    case 105u: goto L_08A48888;
    case 106u: goto L_08A488A0;
    case 107u: goto L_08A488B4;
    case 108u: goto L_08A488C8;
    case 109u: goto L_08A48920;
    case 110u: goto L_08A4893C;
    case 111u: goto L_08A48964;
    case 112u: goto L_08A48978;
    case 113u: goto L_08A48994;
    case 114u: goto L_08A489A8;
    case 115u: goto L_08A489C4;
    case 116u: goto L_08A489D8;
    case 117u: goto L_08A489F4;
    case 118u: goto L_08A489FC;
    case 119u: goto L_08A48A50;
    case 120u: goto L_08A48A64;
    case 121u: goto L_08A48AB0;
    case 122u: goto L_08A48AD0;
    case 123u: goto L_08A48AE0;
    case 124u: goto L_08A48AF8;
    case 125u: goto L_08A48B04;
    case 126u: goto L_08A48B10;
    case 127u: goto L_08A48B30;
    case 128u: goto L_08A48B60;
    case 129u: goto L_08A48BBC;
    case 130u: goto L_08A48BD8;
    case 131u: goto L_08A48BEC;
    case 132u: goto L_08A48C0C;
    case 133u: goto L_08A48C2C;
    case 134u: goto L_08A48C44;
    case 135u: goto L_08A48C54;
    case 136u: goto L_08A48C74;
    case 137u: goto L_08A48CA4;
    case 138u: goto L_08A48CB8;
    case 139u: goto L_08A48CCC;
    case 140u: goto L_08A48CEC;
    case 141u: goto L_08A48D10;
    case 142u: goto L_08A48D20;
    case 143u: goto L_08A48D30;
    case 144u: goto L_08A48D48;
    case 145u: goto L_08A48D68;
    case 146u: goto L_08A48D78;
    case 147u: goto L_08A48D88;
    case 148u: goto L_08A48D90;
    case 149u: goto L_08A48DA8;
    case 150u: goto L_08A48DB4;
    case 151u: goto L_08A48DC8;
    case 152u: goto L_08A48DE0;
    case 153u: goto L_08A48DF0;
    case 154u: goto L_08A48E08;
    case 155u: goto L_08A48E38;
    case 156u: goto L_08A48E54;
    case 157u: goto L_08A48E68;
    case 158u: goto L_08A48E88;
    case 159u: goto L_08A48EB0;
    case 160u: goto L_08A48EBC;
    case 161u: goto L_08A48ED4;
    case 162u: goto L_08A48EDC;
    case 163u: goto L_08A48EFC;
    case 164u: goto L_08A48F10;
    case 165u: goto L_08A48F1C;
    case 166u: goto L_08A48F2C;
    case 167u: goto L_08A48F38;
    case 168u: goto L_08A48F44;
    case 169u: goto L_08A48F50;
    case 170u: goto L_08A48F60;
    case 171u: goto L_08A48F70;
    case 172u: goto L_08A48FA4;
    case 173u: goto L_08A48FEC;
    case 174u: goto L_08A48FF4;
    case 175u: goto L_08A4901C;
    case 176u: goto L_08A4904C;
    case 177u: goto L_08A490B8;
    case 178u: goto L_08A490C8;
    case 179u: goto L_08A490D0;
    case 180u: goto L_08A49100;
    case 181u: goto L_08A49148;
    case 182u: goto L_08A4917C;
    case 183u: goto L_08A49188;
    case 184u: goto L_08A491B4;
    case 185u: goto L_08A491C0;
    case 186u: goto L_08A491D4;
    case 187u: goto L_08A491EC;
    case 188u: goto L_08A49200;
    case 189u: goto L_08A49218;
    case 190u: goto L_08A49228;
    case 191u: goto L_08A49268;
    case 192u: goto L_08A49278;
    case 193u: goto L_08A49290;
    case 194u: goto L_08A492A0;
    case 195u: goto L_08A492AC;
    case 196u: goto L_08A493B0;
    case 197u: goto L_08A493C0;
    case 198u: goto L_08A493D4;
    case 199u: goto L_08A49408;
    case 200u: goto L_08A49418;
    case 201u: goto L_08A49424;
    case 202u: goto L_08A49430;
    case 203u: goto L_08A4943C;
    case 204u: goto L_08A49454;
    case 205u: goto L_08A49460;
    case 206u: goto L_08A49484;
    case 207u: goto L_08A49498;
    case 208u: goto L_08A494FC;
    case 209u: goto L_08A4953C;
    case 210u: goto L_08A49578;
    case 211u: goto L_08A495AC;
    case 212u: goto L_08A495B8;
    case 213u: goto L_08A49640;
    case 214u: goto L_08A49650;
    case 215u: goto L_08A49678;
    case 216u: goto L_08A496A4;
    case 217u: goto L_08A4970C;
    case 218u: goto L_08A49718;
    case 219u: goto L_08A49738;
    case 220u: goto L_08A49744;
    case 221u: goto L_08A49774;
    case 222u: goto L_08A49780;
    case 223u: goto L_08A497A0;
    case 224u: goto L_08A497AC;
    case 225u: goto L_08A497E0;
    case 226u: goto L_08A497EC;
    case 227u: goto L_08A4980C;
    case 228u: goto L_08A49818;
    case 229u: goto L_08A49830;
    case 230u: goto L_08A4983C;
    case 231u: goto L_08A49848;
    case 232u: goto L_08A49854;
    case 233u: goto L_08A49860;
    case 234u: goto L_08A4986C;
    case 235u: goto L_08A49878;
    case 236u: goto L_08A4988C;
    case 237u: goto L_08A49898;
    case 238u: goto L_08A498AC;
    case 239u: goto L_08A498D8;
    case 240u: goto L_08A498EC;
    case 241u: goto L_08A49904;
    case 242u: goto L_08A4990C;
    case 243u: goto L_08A49918;
    case 244u: goto L_08A49924;
    case 245u: goto L_08A49930;
    case 246u: goto L_08A49944;
    case 247u: goto L_08A49970;
    case 248u: goto L_08A499D8;
    case 249u: goto L_08A499E4;
    case 250u: goto L_08A49A04;
    case 251u: goto L_08A49A14;
    case 252u: goto L_08A49A48;
    case 253u: goto L_08A49A54;
    case 254u: goto L_08A49A74;
    case 255u: goto L_08A49A80;
    case 256u: goto L_08A49A94;
    case 257u: goto L_08A49AAC;
    case 258u: goto L_08A49AB4;
    case 259u: goto L_08A49AC8;
    case 260u: goto L_08A49AF4;
    case 261u: goto L_08A49B08;
    case 262u: goto L_08A49B20;
    case 263u: goto L_08A49B2C;
    case 264u: goto L_08A49B44;
    case 265u: goto L_08A49B74;
    case 266u: goto L_08A49B84;
    case 267u: goto L_08A49B94;
    case 268u: goto L_08A49BA8;
    case 269u: goto L_08A49BCC;
    case 270u: goto L_08A49BD8;
    case 271u: goto L_08A49BE4;
    case 272u: goto L_08A49C00;
    case 273u: goto L_08A49C10;
    case 274u: goto L_08A49C40;
    case 275u: goto L_08A49C50;
    case 276u: goto L_08A49C60;
    case 277u: goto L_08A49C74;
    case 278u: goto L_08A49C98;
    case 279u: goto L_08A49CA4;
    case 280u: goto L_08A49CB0;
    case 281u: goto L_08A49CCC;
    case 282u: goto L_08A49CDC;
    case 283u: goto L_08A49D08;
    case 284u: goto L_08A49D18;
    case 285u: goto L_08A49D38;
    case 286u: goto L_08A49D4C;
    case 287u: goto L_08A49D60;
    case 288u: goto L_08A49D78;
    case 289u: goto L_08A49D8C;
    case 290u: goto L_08A49D98;
    case 291u: goto L_08A49DAC;
    case 292u: goto L_08A49DC0;
    case 293u: goto L_08A49DCC;
    case 294u: goto L_08A49DE0;
    case 295u: goto L_08A49DEC;
    case 296u: goto L_08A49E00;
    case 297u: goto L_08A49E14;
    case 298u: goto L_08A49E20;
    case 299u: goto L_08A49E34;
    case 300u: goto L_08A49E4C;
    case 301u: goto L_08A49E54;
    case 302u: goto L_08A49E68;
    case 303u: goto L_08A49E74;
    case 304u: goto L_08A49E88;
    case 305u: goto L_08A49EA0;
    case 306u: goto L_08A49EA8;
    case 307u: goto L_08A49EBC;
    case 308u: goto L_08A49EC8;
    case 309u: goto L_08A49EDC;
    case 310u: goto L_08A49EF4;
    case 311u: goto L_08A49EFC;
    case 312u: goto L_08A49F10;
    case 313u: goto L_08A49F1C;
    case 314u: goto L_08A49F30;
    case 315u: goto L_08A49F48;
    case 316u: goto L_08A49F50;
    case 317u: goto L_08A49F64;
    case 318u: goto L_08A49F70;
    case 319u: goto L_08A49F84;
    case 320u: goto L_08A49F90;
    case 321u: goto L_08A49FA4;
    case 322u: goto L_08A49FB8;
    case 323u: goto L_08A49FC4;
    case 324u: goto L_08A49FD8;
    case 325u: goto L_08A49FF0;
    case 326u: goto L_08A49FF8;
    case 327u: goto L_08A4A00C;
    case 328u: goto L_08A4A018;
    case 329u: goto L_08A4A02C;
    case 330u: goto L_08A4A044;
    case 331u: goto L_08A4A04C;
    case 332u: goto L_08A4A060;
    case 333u: goto L_08A4A06C;
    case 334u: goto L_08A4A080;
    case 335u: goto L_08A4A08C;
    case 336u: goto L_08A4A0A0;
    case 337u: goto L_08A4A0B4;
    case 338u: goto L_08A4A0C0;
    case 339u: goto L_08A4A0D4;
    case 340u: goto L_08A4A0E0;
    case 341u: goto L_08A4A0F4;
    case 342u: goto L_08A4A108;
    case 343u: goto L_08A4A114;
    case 344u: goto L_08A4A128;
    case 345u: goto L_08A4A134;
    case 346u: goto L_08A4A14C;
    case 347u: goto L_08A4A160;
    case 348u: goto L_08A4A174;
    case 349u: goto L_08A4A180;
    case 350u: goto L_08A4A194;
    case 351u: goto L_08A4A1A0;
    case 352u: goto L_08A4A1B8;
    case 353u: goto L_08A4A1CC;
    case 354u: goto L_08A4A1E0;
    case 355u: goto L_08A4A1EC;
    case 356u: goto L_08A4A200;
    case 357u: goto L_08A4A20C;
    case 358u: goto L_08A4A224;
    case 359u: goto L_08A4A238;
    case 360u: goto L_08A4A24C;
    case 361u: goto L_08A4A258;
    case 362u: goto L_08A4A26C;
    case 363u: goto L_08A4A278;
    case 364u: goto L_08A4A290;
    case 365u: goto L_08A4A2A4;
    case 366u: goto L_08A4A2B8;
    case 367u: goto L_08A4A2C4;
    case 368u: goto L_08A4A2D8;
    case 369u: goto L_08A4A2F0;
    case 370u: goto L_08A4A2F8;
    case 371u: goto L_08A4A30C;
    case 372u: goto L_08A4A318;
    case 373u: goto L_08A4A32C;
    case 374u: goto L_08A4A344;
    case 375u: goto L_08A4A34C;
    case 376u: goto L_08A4A360;
    case 377u: goto L_08A4A36C;
    case 378u: goto L_08A4A380;
    case 379u: goto L_08A4A398;
    case 380u: goto L_08A4A3A0;
    case 381u: goto L_08A4A3B4;
    case 382u: goto L_08A4A3C0;
    case 383u: goto L_08A4A3D4;
    case 384u: goto L_08A4A3EC;
    case 385u: goto L_08A4A3F4;
    case 386u: goto L_08A4A408;
    case 387u: goto L_08A4A414;
    case 388u: goto L_08A4A428;
    case 389u: goto L_08A4A434;
    case 390u: goto L_08A4A44C;
    case 391u: goto L_08A4A460;
    case 392u: goto L_08A4A474;
    case 393u: goto L_08A4A480;
    case 394u: goto L_08A4A494;
    case 395u: goto L_08A4A4A0;
    case 396u: goto L_08A4A4B8;
    case 397u: goto L_08A4A4CC;
    case 398u: goto L_08A4A4E0;
    case 399u: goto L_08A4A4EC;
    case 400u: goto L_08A4A500;
    case 401u: goto L_08A4A518;
    case 402u: goto L_08A4A520;
    case 403u: goto L_08A4A534;
    case 404u: goto L_08A4A540;
    case 405u: goto L_08A4A554;
    case 406u: goto L_08A4A560;
    case 407u: goto L_08A4A578;
    case 408u: goto L_08A4A58C;
    case 409u: goto L_08A4A5A0;
    case 410u: goto L_08A4A5AC;
    case 411u: goto L_08A4A5C0;
    case 412u: goto L_08A4A5CC;
    case 413u: goto L_08A4A5E4;
    case 414u: goto L_08A4A5F8;
    case 415u: goto L_08A4A60C;
    case 416u: goto L_08A4A618;
    case 417u: goto L_08A4A62C;
    case 418u: goto L_08A4A638;
    case 419u: goto L_08A4A650;
    case 420u: goto L_08A4A664;
    case 421u: goto L_08A4A678;
    case 422u: goto L_08A4A684;
    case 423u: goto L_08A4A698;
    case 424u: goto L_08A4A6A4;
    case 425u: goto L_08A4A6BC;
    case 426u: goto L_08A4A6D0;
    case 427u: goto L_08A4A6E4;
    case 428u: goto L_08A4A6F0;
    case 429u: goto L_08A4A704;
    case 430u: goto L_08A4A710;
    case 431u: goto L_08A4A728;
    case 432u: goto L_08A4A73C;
    case 433u: goto L_08A4A750;
    case 434u: goto L_08A4A75C;
    case 435u: goto L_08A4A770;
    case 436u: goto L_08A4A77C;
    case 437u: goto L_08A4A790;
    case 438u: goto L_08A4A7A4;
    case 439u: goto L_08A4A7B0;
    case 440u: goto L_08A4A7C4;
    case 441u: goto L_08A4A7D0;
    case 442u: goto L_08A4A7E8;
    case 443u: goto L_08A4A7FC;
    case 444u: goto L_08A4A810;
    case 445u: goto L_08A4A81C;
    case 446u: goto L_08A4A830;
    case 447u: goto L_08A4A83C;
    case 448u: goto L_08A4A854;
    case 449u: goto L_08A4A868;
    case 450u: goto L_08A4A87C;
    case 451u: goto L_08A4A888;
    case 452u: goto L_08A4A89C;
    case 453u: goto L_08A4A8A8;
    case 454u: goto L_08A4A8C0;
    case 455u: goto L_08A4A8D4;
    case 456u: goto L_08A4A8E8;
    case 457u: goto L_08A4A8F4;
    case 458u: goto L_08A4A908;
    case 459u: goto L_08A4A914;
    case 460u: goto L_08A4A92C;
    case 461u: goto L_08A4A940;
    case 462u: goto L_08A4A954;
    case 463u: goto L_08A4A960;
    case 464u: goto L_08A4A974;
    case 465u: goto L_08A4A98C;
    case 466u: goto L_08A4A994;
    case 467u: goto L_08A4A9A8;
    case 468u: goto L_08A4A9B4;
    case 469u: goto L_08A4A9C8;
    case 470u: goto L_08A4A9D4;
    case 471u: goto L_08A4A9E8;
    case 472u: goto L_08A4A9FC;
    case 473u: goto L_08A4AA08;
    case 474u: goto L_08A4AA1C;
    case 475u: goto L_08A4AA28;
    case 476u: goto L_08A4AA40;
    case 477u: goto L_08A4AA54;
    case 478u: goto L_08A4AA68;
    case 479u: goto L_08A4AA74;
    case 480u: goto L_08A4AA88;
    case 481u: goto L_08A4AA94;
    case 482u: goto L_08A4AAAC;
    case 483u: goto L_08A4AAC0;
    case 484u: goto L_08A4AAD4;
    case 485u: goto L_08A4AAE0;
    case 486u: goto L_08A4AAF4;
    case 487u: goto L_08A4AB0C;
    case 488u: goto L_08A4AB14;
    case 489u: goto L_08A4AB28;
    case 490u: goto L_08A4AB34;
    case 491u: goto L_08A4AB48;
    case 492u: goto L_08A4AB60;
    case 493u: goto L_08A4AB68;
    case 494u: goto L_08A4AB7C;
    case 495u: goto L_08A4AB88;
    case 496u: goto L_08A4AB9C;
    case 497u: goto L_08A4ABB4;
    case 498u: goto L_08A4ABBC;
    case 499u: goto L_08A4ABD0;
    case 500u: goto L_08A4ABDC;
    case 501u: goto L_08A4ABF0;
    case 502u: goto L_08A4AC08;
    case 503u: goto L_08A4AC10;
    case 504u: goto L_08A4AC24;
    case 505u: goto L_08A4AC30;
    case 506u: goto L_08A4AC44;
    case 507u: goto L_08A4AC60;
    case 508u: goto L_08A4AC68;
    case 509u: goto L_08A4AC7C;
    case 510u: goto L_08A4AC88;
    case 511u: goto L_08A4AC9C;
    case 512u: goto L_08A4ACB4;
    case 513u: goto L_08A4ACBC;
    case 514u: goto L_08A4ACD0;
    case 515u: goto L_08A4ACDC;
    case 516u: goto L_08A4ACF0;
    case 517u: goto L_08A4AD0C;
    case 518u: goto L_08A4AD14;
    case 519u: goto L_08A4AD28;
    case 520u: goto L_08A4AD34;
    case 521u: goto L_08A4AD48;
    case 522u: goto L_08A4AD60;
    case 523u: goto L_08A4AD68;
    case 524u: goto L_08A4AD7C;
    case 525u: goto L_08A4AD88;
    case 526u: goto L_08A4AD9C;
    case 527u: goto L_08A4ADA8;
    case 528u: goto L_08A4ADBC;
    case 529u: goto L_08A4ADD0;
    case 530u: goto L_08A4ADDC;
    case 531u: goto L_08A4ADF0;
    case 532u: goto L_08A4ADFC;
    case 533u: goto L_08A4AE14;
    case 534u: goto L_08A4AE28;
    case 535u: goto L_08A4AE3C;
    case 536u: goto L_08A4AE48;
    case 537u: goto L_08A4AE5C;
    case 538u: goto L_08A4AE68;
    case 539u: goto L_08A4AE80;
    case 540u: goto L_08A4AE94;
    case 541u: goto L_08A4AEA8;
    case 542u: goto L_08A4AEB4;
    case 543u: goto L_08A4AEC8;
    case 544u: goto L_08A4AED4;
    case 545u: goto L_08A4AEEC;
    case 546u: goto L_08A4AF00;
    case 547u: goto L_08A4AF14;
    case 548u: goto L_08A4AF20;
    case 549u: goto L_08A4AF34;
    case 550u: goto L_08A4AF40;
    case 551u: goto L_08A4AF58;
    case 552u: goto L_08A4AF6C;
    case 553u: goto L_08A4AF80;
    case 554u: goto L_08A4AF8C;
    case 555u: goto L_08A4AFA0;
    case 556u: goto L_08A4AFAC;
    case 557u: goto L_08A4AFC4;
    case 558u: goto L_08A4AFD8;
    case 559u: goto L_08A4AFEC;
    case 560u: goto L_08A4AFF8;
    case 561u: goto L_08A4B00C;
    case 562u: goto L_08A4B018;
    case 563u: goto L_08A4B030;
    case 564u: goto L_08A4B044;
    case 565u: goto L_08A4B058;
    case 566u: goto L_08A4B064;
    case 567u: goto L_08A4B078;
    case 568u: goto L_08A4B084;
    case 569u: goto L_08A4B09C;
    case 570u: goto L_08A4B0B0;
    case 571u: goto L_08A4B0C4;
    case 572u: goto L_08A4B0D0;
    case 573u: goto L_08A4B0E4;
    case 574u: goto L_08A4B0F0;
    case 575u: goto L_08A4B108;
    case 576u: goto L_08A4B11C;
    case 577u: goto L_08A4B130;
    case 578u: goto L_08A4B13C;
    case 579u: goto L_08A4B150;
    case 580u: goto L_08A4B15C;
    case 581u: goto L_08A4B174;
    case 582u: goto L_08A4B188;
    case 583u: goto L_08A4B19C;
    case 584u: goto L_08A4B1A8;
    case 585u: goto L_08A4B1BC;
    case 586u: goto L_08A4B1C8;
    case 587u: goto L_08A4B1E0;
    case 588u: goto L_08A4B1F4;
    case 589u: goto L_08A4B208;
    case 590u: goto L_08A4B214;
    case 591u: goto L_08A4B228;
    case 592u: goto L_08A4B234;
    case 593u: goto L_08A4B24C;
    case 594u: goto L_08A4B260;
    case 595u: goto L_08A4B274;
    case 596u: goto L_08A4B280;
    case 597u: goto L_08A4B294;
    case 598u: goto L_08A4B2AC;
    case 599u: goto L_08A4B2B4;
    case 600u: goto L_08A4B2C8;
    case 601u: goto L_08A4B2D4;
    case 602u: goto L_08A4B2E8;
    case 603u: goto L_08A4B300;
    case 604u: goto L_08A4B308;
    case 605u: goto L_08A4B31C;
    case 606u: goto L_08A4B328;
    case 607u: goto L_08A4B33C;
    case 608u: goto L_08A4B354;
    case 609u: goto L_08A4B35C;
    case 610u: goto L_08A4B370;
    case 611u: goto L_08A4B37C;
    case 612u: goto L_08A4B390;
    case 613u: goto L_08A4B3A8;
    case 614u: goto L_08A4B3B0;
    case 615u: goto L_08A4B3C4;
    case 616u: goto L_08A4B3D0;
    case 617u: goto L_08A4B3E4;
    case 618u: goto L_08A4B3FC;
    case 619u: goto L_08A4B404;
    case 620u: goto L_08A4B418;
    case 621u: goto L_08A4B424;
    case 622u: goto L_08A4B438;
    case 623u: goto L_08A4B450;
    case 624u: goto L_08A4B458;
    case 625u: goto L_08A4B46C;
    case 626u: goto L_08A4B478;
    case 627u: goto L_08A4B48C;
    case 628u: goto L_08A4B498;
    case 629u: goto L_08A4B4AC;
    case 630u: goto L_08A4B4C0;
    case 631u: goto L_08A4B4CC;
    case 632u: goto L_08A4B4E0;
    case 633u: goto L_08A4B4F8;
    case 634u: goto L_08A4B500;
    case 635u: goto L_08A4B514;
    case 636u: goto L_08A4B520;
    case 637u: goto L_08A4B534;
    case 638u: goto L_08A4B54C;
    case 639u: goto L_08A4B554;
    case 640u: goto L_08A4B568;
    case 641u: goto L_08A4B574;
    case 642u: goto L_08A4B588;
    case 643u: goto L_08A4B5A0;
    case 644u: goto L_08A4B5A8;
    case 645u: goto L_08A4B5BC;
    case 646u: goto L_08A4B5C8;
    case 647u: goto L_08A4B5DC;
    case 648u: goto L_08A4B5F4;
    case 649u: goto L_08A4B5FC;
    case 650u: goto L_08A4B610;
    case 651u: goto L_08A4B61C;
    case 652u: goto L_08A4B630;
    case 653u: goto L_08A4B648;
    case 654u: goto L_08A4B650;
    case 655u: goto L_08A4B664;
    case 656u: goto L_08A4B670;
    case 657u: goto L_08A4B684;
    case 658u: goto L_08A4B69C;
    case 659u: goto L_08A4B6A4;
    case 660u: goto L_08A4B6B8;
    case 661u: goto L_08A4B6C4;
    case 662u: goto L_08A4B6D8;
    case 663u: goto L_08A4B6F0;
    case 664u: goto L_08A4B6F8;
    case 665u: goto L_08A4B70C;
    case 666u: goto L_08A4B718;
    case 667u: goto L_08A4B72C;
    case 668u: goto L_08A4B744;
    case 669u: goto L_08A4B74C;
    case 670u: goto L_08A4B760;
    case 671u: goto L_08A4B76C;
    case 672u: goto L_08A4B780;
    case 673u: goto L_08A4B798;
    case 674u: goto L_08A4B7A0;
    case 675u: goto L_08A4B7B4;
    case 676u: goto L_08A4B7C0;
    case 677u: goto L_08A4B7D4;
    case 678u: goto L_08A4B7EC;
    case 679u: goto L_08A4B7F4;
    case 680u: goto L_08A4B808;
    case 681u: goto L_08A4B814;
    case 682u: goto L_08A4B828;
    case 683u: goto L_08A4B840;
    case 684u: goto L_08A4B848;
    case 685u: goto L_08A4B85C;
    case 686u: goto L_08A4B868;
    case 687u: goto L_08A4B87C;
    case 688u: goto L_08A4B894;
    case 689u: goto L_08A4B89C;
    case 690u: goto L_08A4B8B0;
    case 691u: goto L_08A4B8BC;
    case 692u: goto L_08A4B8D0;
    case 693u: goto L_08A4B8E8;
    case 694u: goto L_08A4B8F0;
    case 695u: goto L_08A4B904;
    case 696u: goto L_08A4B910;
    case 697u: goto L_08A4B924;
    case 698u: goto L_08A4B930;
    case 699u: goto L_08A4B948;
    case 700u: goto L_08A4B95C;
    case 701u: goto L_08A4B970;
    case 702u: goto L_08A4B97C;
    case 703u: goto L_08A4B990;
    case 704u: goto L_08A4B99C;
    case 705u: goto L_08A4B9B4;
    case 706u: goto L_08A4B9C8;
    case 707u: goto L_08A4B9DC;
    case 708u: goto L_08A4B9E8;
    case 709u: goto L_08A4B9FC;
    case 710u: goto L_08A4BA08;
    case 711u: goto L_08A4BA20;
    case 712u: goto L_08A4BA34;
    case 713u: goto L_08A4BA48;
    case 714u: goto L_08A4BA54;
    case 715u: goto L_08A4BA68;
    case 716u: goto L_08A4BA74;
    case 717u: goto L_08A4BA8C;
    case 718u: goto L_08A4BAA0;
    case 719u: goto L_08A4BAB4;
    case 720u: goto L_08A4BAC0;
    case 721u: goto L_08A4BAD4;
    case 722u: goto L_08A4BAEC;
    case 723u: goto L_08A4BAF4;
    case 724u: goto L_08A4BB08;
    case 725u: goto L_08A4BB14;
    case 726u: goto L_08A4BB28;
    case 727u: goto L_08A4BB44;
    case 728u: goto L_08A4BB4C;
    case 729u: goto L_08A4BB60;
    case 730u: goto L_08A4BB6C;
    case 731u: goto L_08A4BB80;
    case 732u: goto L_08A4BB98;
    case 733u: goto L_08A4BBA0;
    case 734u: goto L_08A4BBB4;
    case 735u: goto L_08A4BBC0;
    case 736u: goto L_08A4BBD4;
    case 737u: goto L_08A4BBEC;
    case 738u: goto L_08A4BBF4;
    case 739u: goto L_08A4BC08;
    case 740u: goto L_08A4BC14;
    case 741u: goto L_08A4BC28;
    case 742u: goto L_08A4BC34;
    case 743u: goto L_08A4BC48;
    case 744u: goto L_08A4BC5C;
    case 745u: goto L_08A4BC68;
    case 746u: goto L_08A4BC7C;
    case 747u: goto L_08A4BC88;
    case 748u: goto L_08A4BCA0;
    case 749u: goto L_08A4BCB4;
    case 750u: goto L_08A4BCC8;
    case 751u: goto L_08A4BCD4;
    case 752u: goto L_08A4BCE8;
    case 753u: goto L_08A4BCF4;
    case 754u: goto L_08A4BD0C;
    case 755u: goto L_08A4BD20;
    case 756u: goto L_08A4BD34;
    case 757u: goto L_08A4BD40;
    case 758u: goto L_08A4BD54;
    case 759u: goto L_08A4BD60;
    case 760u: goto L_08A4BD78;
    case 761u: goto L_08A4BD8C;
    case 762u: goto L_08A4BDA0;
    case 763u: goto L_08A4BDAC;
    case 764u: goto L_08A4BDC0;
    case 765u: goto L_08A4BDCC;
    case 766u: goto L_08A4BDE4;
    case 767u: goto L_08A4BDF8;
    case 768u: goto L_08A4BE0C;
    case 769u: goto L_08A4BE18;
    case 770u: goto L_08A4BE2C;
    case 771u: goto L_08A4BE44;
    case 772u: goto L_08A4BE4C;
    case 773u: goto L_08A4BE60;
    case 774u: goto L_08A4BE6C;
    case 775u: goto L_08A4BE80;
    case 776u: goto L_08A4BE8C;
    case 777u: goto L_08A4BEA4;
    case 778u: goto L_08A4BEB8;
    case 779u: goto L_08A4BECC;
    case 780u: goto L_08A4BED8;
    case 781u: goto L_08A4BEEC;
    case 782u: goto L_08A4BEF8;
    case 783u: goto L_08A4BF10;
    case 784u: goto L_08A4BF24;
    case 785u: goto L_08A4BF38;
    case 786u: goto L_08A4BF44;
    case 787u: goto L_08A4BF58;
    case 788u: goto L_08A4BF70;
    case 789u: goto L_08A4BF78;
    case 790u: goto L_08A4BF8C;
    case 791u: goto L_08A4BF98;
    case 792u: goto L_08A4BFAC;
    case 793u: goto L_08A4BFB8;
    case 794u: goto L_08A4BFCC;
    case 795u: goto L_08A4BFE0;
    case 796u: goto L_08A4BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A48000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A48004;
L_08A48004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 580u, 0x08A47F70u>(ctx, &aot_mem); return;
      }
      goto L_08A48020;
    }
L_08A48020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 579u, 0x08A47F54u>(ctx, &aot_mem); return;
      }
      goto L_08A48040;
    }
L_08A48040:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4212)));
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7880));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A480ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A480ACu) goto L_08A480AC;
    return;
L_08A480AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A480D0;
      }
      goto L_08A480BC;
    }
L_08A480BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A48270;
      }
      goto L_08A480C8;
    }
L_08A480C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A480F8;
      }
      goto L_08A480D0;
    }
L_08A480D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48138;
      }
      goto L_08A480E0;
    }
L_08A480E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4825C;
      }
      goto L_08A480F0;
    }
L_08A480F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48270;
      }
      goto L_08A480F8;
    }
L_08A480F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A48110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A48110u) goto L_08A48110;
    return;
L_08A48110:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 10510u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4812Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A4812Cu) goto L_08A4812C;
    return;
L_08A4812C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A48138;
L_08A48138:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3976)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A48158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A48158u) goto L_08A48158;
    return;
L_08A48158:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48188;
      }
      goto L_08A4817C;
    }
L_08A4817C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A48188;
L_08A48188:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A481BC;
      }
      goto L_08A481A8;
    }
L_08A481A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48270;
      }
      goto L_08A481BC;
    }
L_08A481BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48230;
      }
      goto L_08A481D0;
    }
L_08A481D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4212)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A481ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 432u, 0x08A46C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A481ECu) goto L_08A481EC;
    return;
L_08A481EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4820C;
      }
      goto L_08A481FC;
    }
L_08A481FC:
    ctx.gpr[4] = (0u | 10511u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48214;
      }
      goto L_08A4820C;
    }
L_08A4820C:
    ctx.gpr[4] = (0u | 10512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A48214;
L_08A48214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[31] = (0x08A48228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A48228u) goto L_08A48228;
    return;
L_08A48228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48244;
      }
      goto L_08A48230;
    }
L_08A48230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10512u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[31] = (0x08A48244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A48244u) goto L_08A48244;
    return;
L_08A48244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48270;
      }
      goto L_08A4825C;
    }
L_08A4825C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A48270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A48270u) goto L_08A48270;
    return;
L_08A48270:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A482B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A482B0u) goto L_08A482B0;
    return;
L_08A482B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A482D4;
      }
      goto L_08A482C0;
    }
L_08A482C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A48404;
      }
      goto L_08A482CC;
    }
L_08A482CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A482EC;
      }
      goto L_08A482D4;
    }
L_08A482D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48360;
      }
      goto L_08A482E4;
    }
L_08A482E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48404;
      }
      goto L_08A482EC;
    }
L_08A482EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48310;
      }
      goto L_08A48300;
    }
L_08A48300:
    ctx.gpr[4] = (0u | 10513u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48318;
      }
      goto L_08A48310;
    }
L_08A48310:
    ctx.gpr[4] = (0u | 10514u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A48318;
L_08A48318:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A48330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A48330u) goto L_08A48330;
    return;
L_08A48330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48348;
      }
      goto L_08A4833C;
    }
L_08A4833C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A48348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A48348u) goto L_08A48348;
    return;
L_08A48348:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48404;
      }
      goto L_08A48360;
    }
L_08A48360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(788)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A483D0;
      }
      goto L_08A48384;
    }
L_08A48384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(788)));
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
          goto L_08A483D0;
      }
      goto L_08A483C0;
    }
L_08A483C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A483D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 460u, 0x08A4704Cu>(ctx, &aot_mem) && ctx.pc == 0x08A483D0u) goto L_08A483D0;
    return;
L_08A483D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A483E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A483E4u) goto L_08A483E4;
    return;
L_08A483E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48404;
      }
      goto L_08A483F0;
    }
L_08A483F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A48404;
L_08A48404:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A48444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A48444u) goto L_08A48444;
    return;
L_08A48444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A48468;
      }
      goto L_08A48454;
    }
L_08A48454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4855C;
      }
      goto L_08A48460;
    }
L_08A48460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48480;
      }
      goto L_08A48468;
    }
L_08A48468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A484D8;
      }
      goto L_08A48478;
    }
L_08A48478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4855C;
      }
      goto L_08A48480;
    }
L_08A48480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A484A4;
      }
      goto L_08A48494;
    }
L_08A48494:
    ctx.gpr[4] = (0u | 10529u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A484AC;
      }
      goto L_08A484A4;
    }
L_08A484A4:
    ctx.gpr[4] = (0u | 10530u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A484AC;
L_08A484AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A484C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A484C4u) goto L_08A484C4;
    return;
L_08A484C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4855C;
      }
      goto L_08A484D8;
    }
L_08A484D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(788)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48548;
      }
      goto L_08A484FC;
    }
L_08A484FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(788)));
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
          goto L_08A48548;
      }
      goto L_08A48538;
    }
L_08A48538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A48548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 460u, 0x08A4704Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48548u) goto L_08A48548;
    return;
L_08A48548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4855Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A4855Cu) goto L_08A4855C;
    return;
L_08A4855C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4856C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A485A4;
      }
      goto L_08A48590;
    }
L_08A48590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A488C8;
      }
      goto L_08A4859C;
    }
L_08A4859C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A485CC;
      }
      goto L_08A485A4;
    }
L_08A485A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A485F8;
      }
      goto L_08A485B4;
    }
L_08A485B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A488B4;
      }
      goto L_08A485C4;
    }
L_08A485C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488C8;
      }
      goto L_08A485CC;
    }
L_08A485CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 10507u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A485E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A485E4u) goto L_08A485E4;
    return;
L_08A485E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488C8;
      }
      goto L_08A485F8;
    }
L_08A485F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48630;
      }
      goto L_08A4860C;
    }
L_08A4860C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A48624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A48624u) goto L_08A48624;
    return;
L_08A48624:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A48630;
L_08A48630:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A48644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A48644u) goto L_08A48644;
    return;
L_08A48644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A487F4;
      }
      goto L_08A48660;
    }
L_08A48660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A487F4;
      }
      goto L_08A48698;
    }
L_08A48698:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4656)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A486C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 280u, 0x08A11FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A486C0u) goto L_08A486C0;
    return;
L_08A486C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4120)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A486F8;
      }
      goto L_08A486D8;
    }
L_08A486D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A486F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 50u, 0x0894C3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A486F8u) goto L_08A486F8;
    return;
L_08A486F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 342 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48728;
      }
      goto L_08A48710;
    }
L_08A48710:
    ctx.gpr[5] = (0u | 140u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48798;
      }
      goto L_08A48720;
    }
L_08A48720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48758;
      }
      goto L_08A48728;
    }
L_08A48728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 361 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48758;
      }
      goto L_08A48738;
    }
L_08A48738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-342));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48758:
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A487B0;
      }
      goto L_08A48768;
    }
L_08A48768:
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A487B0;
      }
      goto L_08A48778;
    }
L_08A48778:
    ctx.gpr[4] = (0u | 53u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A487B0;
      }
      goto L_08A48788;
    }
L_08A48788:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A487B0;
      }
      goto L_08A48798;
    }
L_08A48798:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A487B0;
      }
      goto L_08A487A8;
    }
L_08A487A8:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A487B0;
L_08A487B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A487C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 823u, 0x089679A4u>(ctx, &aot_mem) && ctx.pc == 0x08A487C8u) goto L_08A487C8;
    return;
L_08A487C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A487F4;
      }
      goto L_08A487DC;
    }
L_08A487DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A487F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 432u, 0x08A46C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A487F4u) goto L_08A487F4;
    return;
L_08A487F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48828;
      }
      goto L_08A4881C;
    }
L_08A4881C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A48828;
L_08A48828:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4885C;
      }
      goto L_08A48848;
    }
L_08A48848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488C8;
      }
      goto L_08A4885C;
    }
L_08A4885C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48880;
      }
      goto L_08A48870;
    }
L_08A48870:
    ctx.gpr[4] = (0u | 10508u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48888;
      }
      goto L_08A48880;
    }
L_08A48880:
    ctx.gpr[4] = (0u | 10509u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08A48888;
L_08A48888:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A488A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A488A0u) goto L_08A488A0;
    return;
L_08A488A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488C8;
      }
      goto L_08A488B4;
    }
L_08A488B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A488C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A488C8u) goto L_08A488C8;
    return;
L_08A488C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48964;
      }
      goto L_08A4893C;
    }
L_08A4893C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4048), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4893C;
      }
      goto L_08A48964;
    }
L_08A48964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48994;
      }
      goto L_08A48978;
    }
L_08A48978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4048)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4048), ctx.gpr[4]);
    goto L_08A48994;
L_08A48994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4728)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A489C4;
      }
      goto L_08A489A8;
    }
L_08A489A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4728)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4048)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4048), ctx.gpr[4]);
    goto L_08A489C4;
L_08A489C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4732)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A489F4;
      }
      goto L_08A489D8;
    }
L_08A489D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4732)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4048)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4048), ctx.gpr[4]);
    goto L_08A489F4;
L_08A489F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A489FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10872));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48AB0;
      }
      goto L_08A48A50;
    }
L_08A48A50:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48AB0;
      }
      goto L_08A48A64;
    }
L_08A48A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A48AB0;
L_08A48AB0:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A48AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 433u, 0x08A2B788u>(ctx, &aot_mem) && ctx.pc == 0x08A48AD0u) goto L_08A48AD0;
    return;
L_08A48AD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48AF8;
      }
      goto L_08A48AE0;
    }
L_08A48AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B04;
      }
      goto L_08A48AF8;
    }
L_08A48AF8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A48B04;
L_08A48B04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C44;
      }
      goto L_08A48B30;
    }
L_08A48B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48C2C;
      }
      goto L_08A48B60;
    }
L_08A48B60:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A48BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A48BBCu) goto L_08A48BBC;
    return;
L_08A48BBC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48C2C;
      }
      goto L_08A48BD8;
    }
L_08A48BD8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C2C;
      }
      goto L_08A48BEC;
    }
L_08A48BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C2C;
      }
      goto L_08A48C0C;
    }
L_08A48C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A48C2C;
L_08A48C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B30;
      }
      goto L_08A48C44;
    }
L_08A48C44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48DE0;
      }
      goto L_08A48C74;
    }
L_08A48C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48DC8;
      }
      goto L_08A48CA4;
    }
L_08A48CA4:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48D30;
      }
      goto L_08A48CB8;
    }
L_08A48CB8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48D30;
      }
      goto L_08A48CCC;
    }
L_08A48CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48D30;
      }
      goto L_08A48CEC;
    }
L_08A48CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48D20;
      }
      goto L_08A48D10;
    }
L_08A48D10:
    ctx.gpr[4] = (0u | 10464u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48D90;
      }
      goto L_08A48D20;
    }
L_08A48D20:
    ctx.gpr[4] = (0u | 10465u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48D90;
      }
      goto L_08A48D30;
    }
L_08A48D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A48D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 55u, 0x08A2CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48D48u) goto L_08A48D48;
    return;
L_08A48D48:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48D78;
      }
      goto L_08A48D68;
    }
L_08A48D68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A48D78;
L_08A48D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A48D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A48D88u) goto L_08A48D88;
    return;
L_08A48D88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A48D90;
L_08A48D90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A48DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A48DA8u) goto L_08A48DA8;
    return;
L_08A48DA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A48DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 302u, 0x08A2FCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A48DB4u) goto L_08A48DB4;
    return;
L_08A48DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A48DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 108u, 0x0893CB94u>(ctx, &aot_mem) && ctx.pc == 0x08A48DC8u) goto L_08A48DC8;
    return;
L_08A48DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C74;
      }
      goto L_08A48DE0;
    }
L_08A48DE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48ED4;
      }
      goto L_08A48E08;
    }
L_08A48E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48EBC;
      }
      goto L_08A48E38;
    }
L_08A48E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48EB0;
      }
      goto L_08A48E54;
    }
L_08A48E54:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48EB0;
      }
      goto L_08A48E68;
    }
L_08A48E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48EB0;
      }
      goto L_08A48E88;
    }
L_08A48E88:
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48EBC;
      }
      goto L_08A48EB0;
    }
L_08A48EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A48EBC;
L_08A48EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48E08;
      }
      goto L_08A48ED4;
    }
L_08A48ED4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A48EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 253u, 0x08821774u>(ctx, &aot_mem) && ctx.pc == 0x08A48EFCu) goto L_08A48EFC;
    return;
L_08A48EFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4976), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48F1C;
      }
      goto L_08A48F10;
    }
L_08A48F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A48F1Cu);
    // nop
    goto L_08A48F60;
L_08A48F1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A48F2Cu);
    // nop
    goto L_08A48F70;
L_08A48F2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A48F38u);
    // nop
    goto L_08A4904C;
L_08A48F38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A48F44u);
    // nop
    goto L_08A49100;
L_08A48F44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A48F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 258u, 0x08A2F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A48F50u) goto L_08A48F50;
    return;
L_08A48F50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4901C;
      }
      goto L_08A48FA4;
    }
L_08A48FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4976)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48FF4;
      }
      goto L_08A48FEC;
    }
L_08A48FEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A48FF4;
L_08A48FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A48FA4;
      }
      goto L_08A4901C;
    }
L_08A4901C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7440));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4904C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4976)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7440));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A490C8;
      }
      goto L_08A490B8;
    }
L_08A490B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A490D0;
      }
      goto L_08A490C8;
    }
L_08A490C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A490D0;
L_08A490D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7440));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7440));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49218;
      }
      goto L_08A49148;
    }
L_08A49148:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-130));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A4917Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 521u, 0x08A4E778u>(ctx, &aot_mem) && ctx.pc == 0x08A4917Cu) goto L_08A4917C;
    return;
L_08A4917C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49200;
      }
      goto L_08A49188;
    }
L_08A49188:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-130));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A491B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A491B4u) goto L_08A491B4;
    return;
L_08A491B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5054))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A491D4;
      }
      goto L_08A491C0;
    }
L_08A491C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5056)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49200;
      }
      goto L_08A491D4;
    }
L_08A491D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(5068))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A491ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 514u, 0x08A4E6D4u>(ctx, &aot_mem) && ctx.pc == 0x08A491ECu) goto L_08A491EC;
    return;
L_08A491EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5023))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A49200;
L_08A49200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49148;
      }
      goto L_08A49218;
    }
L_08A49218:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49290;
      }
      goto L_08A49268;
    }
L_08A49268:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 91u, 0x0893C968u>(ctx, &aot_mem) && ctx.pc == 0x08A49278u) goto L_08A49278;
    return;
L_08A49278:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10584));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49290;
L_08A49290:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A492A0u);
    // nop
    goto L_08A494FC;
L_08A492A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A492ACu);
    // nop
    goto L_08A48920;
L_08A492AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (49864u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3088), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A493C0;
      }
      goto L_08A493B0;
    }
L_08A493B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4313)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4313), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A493C0;
L_08A493C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49408;
      }
      goto L_08A493D4;
    }
L_08A493D4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4324), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A493D4;
      }
      goto L_08A49408;
    }
L_08A49408:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 147u, 0x08A212ECu>(ctx, &aot_mem) && ctx.pc == 0x08A49418u) goto L_08A49418;
    return;
L_08A49418:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 283u, 0x08A39F98u>(ctx, &aot_mem) && ctx.pc == 0x08A49424u) goto L_08A49424;
    return;
L_08A49424:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 322u, 0x08A3A360u>(ctx, &aot_mem) && ctx.pc == 0x08A49430u) goto L_08A49430;
    return;
L_08A49430:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4943Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 280u, 0x08A55B10u>(ctx, &aot_mem) && ctx.pc == 0x08A4943Cu) goto L_08A4943C;
    return;
L_08A4943C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49498;
      }
      goto L_08A49454;
    }
L_08A49454:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[31] = (0x08A49460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49460u) goto L_08A49460;
    return;
L_08A49460:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 90u);
    ctx.gpr[31] = (0x08A49484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 96u, 0x08A2D33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49484u) goto L_08A49484;
    return;
L_08A49484:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2988), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49498;
L_08A49498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1648));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A494FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4724));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2456));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08A4953Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 127u, 0x08A18BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A4953Cu) goto L_08A4953C;
    return;
L_08A4953C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A495AC;
      }
      goto L_08A49578;
    }
L_08A49578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49578;
      }
      goto L_08A495AC;
    }
L_08A495AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49640;
      }
      goto L_08A495B8;
    }
L_08A495B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4820), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4824), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4828), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4832), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4836), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4840), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4844), ctx.gpr[4]);
    goto L_08A49640;
L_08A49640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49830;
      }
      goto L_08A49678;
    }
L_08A49678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A49818;
      }
      goto L_08A496A4;
    }
L_08A496A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-84));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49718;
      }
      goto L_08A4970C;
    }
L_08A4970C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49718;
L_08A49718:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49744;
      }
      goto L_08A49738;
    }
L_08A49738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A49744;
L_08A49744:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49780;
      }
      goto L_08A49774;
    }
L_08A49774:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49780;
L_08A49780:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A497AC;
      }
      goto L_08A497A0;
    }
L_08A497A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A497AC;
L_08A497AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A497EC;
      }
      goto L_08A497E0;
    }
L_08A497E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A497EC;
L_08A497EC:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49818;
      }
      goto L_08A4980C;
    }
L_08A4980C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A49818;
L_08A49818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49678;
      }
      goto L_08A49830;
    }
L_08A49830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49854;
      }
      goto L_08A4983C;
    }
L_08A4983C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49854;
      }
      goto L_08A49848;
    }
L_08A49848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49898;
      }
      goto L_08A49854;
    }
L_08A49854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49878;
      }
      goto L_08A49860;
    }
L_08A49860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49878;
      }
      goto L_08A4986C;
    }
L_08A4986C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49898;
      }
      goto L_08A49878;
    }
L_08A49878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4990C;
      }
      goto L_08A4988C;
    }
L_08A4988C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4990C;
      }
      goto L_08A49898;
    }
L_08A49898:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B20;
      }
      goto L_08A498AC;
    }
L_08A498AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A498EC;
      }
      goto L_08A498D8;
    }
L_08A498D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A498ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 88u, 0x0893C92Cu>(ctx, &aot_mem) && ctx.pc == 0x08A498ECu) goto L_08A498EC;
    return;
L_08A498EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A498AC;
      }
      goto L_08A49904;
    }
L_08A49904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B20;
      }
      goto L_08A4990C;
    }
L_08A4990C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AB4;
      }
      goto L_08A49918;
    }
L_08A49918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AB4;
      }
      goto L_08A49924;
    }
L_08A49924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AB4;
      }
      goto L_08A49930;
    }
L_08A49930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B20;
      }
      goto L_08A49944;
    }
L_08A49944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A49A94;
      }
      goto L_08A49970;
    }
L_08A49970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-84));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A499E4;
      }
      goto L_08A499D8;
    }
L_08A499D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A499E4;
L_08A499E4:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49A14;
      }
      goto L_08A49A04;
    }
L_08A49A04:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49A14;
L_08A49A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49A54;
      }
      goto L_08A49A48;
    }
L_08A49A48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49A54;
L_08A49A54:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49A80;
      }
      goto L_08A49A74;
    }
L_08A49A74:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A49A80;
L_08A49A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A49A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 88u, 0x0893C92Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49A94u) goto L_08A49A94;
    return;
L_08A49A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49944;
      }
      goto L_08A49AAC;
    }
L_08A49AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B20;
      }
      goto L_08A49AB4;
    }
L_08A49AB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B20;
      }
      goto L_08A49AC8;
    }
L_08A49AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A49B08;
      }
      goto L_08A49AF4;
    }
L_08A49AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A49B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 88u, 0x0893C92Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49B08u) goto L_08A49B08;
    return;
L_08A49B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AC8;
      }
      goto L_08A49B20;
    }
L_08A49B20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49B2C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-152)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-148), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C00;
      }
      goto L_08A49B74;
    }
L_08A49B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[31] = (0x08A49B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x08A49B84u) goto L_08A49B84;
    return;
L_08A49B84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49BCC;
      }
      goto L_08A49B94;
    }
L_08A49B94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A49BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A49BA8u) goto L_08A49BA8;
    return;
L_08A49BA8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49BE4;
      }
      goto L_08A49BCC;
    }
L_08A49BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A49BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A49BD8u) goto L_08A49BD8;
    return;
L_08A49BD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A49BE4;
L_08A49BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B74;
      }
      goto L_08A49C00;
    }
L_08A49C00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49CCC;
      }
      goto L_08A49C40;
    }
L_08A49C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[31] = (0x08A49C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x08A49C50u) goto L_08A49C50;
    return;
L_08A49C50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C98;
      }
      goto L_08A49C60;
    }
L_08A49C60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A49C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A49C74u) goto L_08A49C74;
    return;
L_08A49C74:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49CB0;
      }
      goto L_08A49C98;
    }
L_08A49C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A49CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A49CA4u) goto L_08A49CA4;
    return;
L_08A49CA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A49CB0;
L_08A49CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C40;
      }
      goto L_08A49CCC;
    }
L_08A49CCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 460u, 0x08A4DF68u>(ctx, &aot_mem); return;
      }
      goto L_08A49D08;
    }
L_08A49D08:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 332u, 0x08AB28F0u>(ctx, &aot_mem) && ctx.pc == 0x08A49D18u) goto L_08A49D18;
    return;
L_08A49D18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22484));
    ctx.gpr[31] = (0x08A49D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 162u, 0x0893D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49D38u) goto L_08A49D38;
    return;
L_08A49D38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08A49D4Cu) goto L_08A49D4C;
    return;
L_08A49D4C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 459u, 0x08A4DF58u>(ctx, &aot_mem); return;
      }
      goto L_08A49D60;
    }
L_08A49D60:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22468));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A49D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A49D78u) goto L_08A49D78;
    return;
L_08A49D78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22464));
    ctx.gpr[31] = (0x08A49D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49D8Cu) goto L_08A49D8C;
    return;
L_08A49D8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 459u, 0x08A4DF58u>(ctx, &aot_mem); return;
      }
      goto L_08A49D98;
    }
L_08A49D98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A49DACu) goto L_08A49DAC;
    return;
L_08A49DAC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22444));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49DC0u) goto L_08A49DC0;
    return;
L_08A49DC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F50;
      }
      goto L_08A49DCC;
    }
L_08A49DCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22404));
    ctx.gpr[31] = (0x08A49DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49DE0u) goto L_08A49DE0;
    return;
L_08A49DE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A49DEC;
    }
L_08A49DEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A49E00u) goto L_08A49E00;
    return;
L_08A49E00:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49E14u) goto L_08A49E14;
    return;
L_08A49E14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E54;
      }
      goto L_08A49E20;
    }
L_08A49E20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A49E34u) goto L_08A49E34;
    return;
L_08A49E34:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(680));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49E4Cu) goto L_08A49E4C;
    return;
L_08A49E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49DCC;
      }
      goto L_08A49E54;
    }
L_08A49E54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22344));
    ctx.gpr[31] = (0x08A49E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49E68u) goto L_08A49E68;
    return;
L_08A49E68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49EA8;
      }
      goto L_08A49E74;
    }
L_08A49E74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A49E88u) goto L_08A49E88;
    return;
L_08A49E88:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(700));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49EA0u) goto L_08A49EA0;
    return;
L_08A49EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49DCC;
      }
      goto L_08A49EA8;
    }
L_08A49EA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22336));
    ctx.gpr[31] = (0x08A49EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49EBCu) goto L_08A49EBC;
    return;
L_08A49EBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49EFC;
      }
      goto L_08A49EC8;
    }
L_08A49EC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A49EDCu) goto L_08A49EDC;
    return;
L_08A49EDC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(720));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49EF4u) goto L_08A49EF4;
    return;
L_08A49EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49DCC;
      }
      goto L_08A49EFC;
    }
L_08A49EFC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22324));
    ctx.gpr[31] = (0x08A49F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49F10u) goto L_08A49F10;
    return;
L_08A49F10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49DCC;
      }
      goto L_08A49F1C;
    }
L_08A49F1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A49F30u) goto L_08A49F30;
    return;
L_08A49F30:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(740));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49F48u) goto L_08A49F48;
    return;
L_08A49F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49DCC;
      }
      goto L_08A49F50;
    }
L_08A49F50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22316));
    ctx.gpr[31] = (0x08A49F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49F64u) goto L_08A49F64;
    return;
L_08A49F64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A04C;
      }
      goto L_08A49F70;
    }
L_08A49F70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22280));
    ctx.gpr[31] = (0x08A49F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49F84u) goto L_08A49F84;
    return;
L_08A49F84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A49F90;
    }
L_08A49F90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A49FA4u) goto L_08A49FA4;
    return;
L_08A49FA4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A49FB8u) goto L_08A49FB8;
    return;
L_08A49FB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49FF8;
      }
      goto L_08A49FC4;
    }
L_08A49FC4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A49FD8u) goto L_08A49FD8;
    return;
L_08A49FD8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(760));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A49FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49FF0u) goto L_08A49FF0;
    return;
L_08A49FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F70;
      }
      goto L_08A49FF8;
    }
L_08A49FF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22232));
    ctx.gpr[31] = (0x08A4A00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A00Cu) goto L_08A4A00C;
    return;
L_08A4A00C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F70;
      }
      goto L_08A4A018;
    }
L_08A4A018:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A02Cu) goto L_08A4A02C;
    return;
L_08A4A02C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(772));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A044u) goto L_08A4A044;
    return;
L_08A4A044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F70;
      }
      goto L_08A4A04C;
    }
L_08A4A04C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22228));
    ctx.gpr[31] = (0x08A4A060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A060u) goto L_08A4A060;
    return;
L_08A4A060:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A160;
      }
      goto L_08A4A06C;
    }
L_08A4A06C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22212));
    ctx.gpr[31] = (0x08A4A080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A080u) goto L_08A4A080;
    return;
L_08A4A080:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A08C;
    }
L_08A4A08C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4A0A0u) goto L_08A4A0A0;
    return;
L_08A4A0A0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22196));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A0B4u) goto L_08A4A0B4;
    return;
L_08A4A0B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A0F4;
      }
      goto L_08A4A0C0;
    }
L_08A4A0C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A0D4u) goto L_08A4A0D4;
    return;
L_08A4A0D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A4A0E0u) goto L_08A4A0E0;
    return;
L_08A4A0E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(796), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A06C;
      }
      goto L_08A4A0F4;
    }
L_08A4A0F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22192));
    ctx.gpr[31] = (0x08A4A108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A108u) goto L_08A4A108;
    return;
L_08A4A108:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A06C;
      }
      goto L_08A4A114;
    }
L_08A4A114:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A128u) goto L_08A4A128;
    return;
L_08A4A128:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A134u) goto L_08A4A134;
    return;
L_08A4A134:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A14Cu) goto L_08A4A14C;
    return;
L_08A4A14C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A06C;
      }
      goto L_08A4A160;
    }
L_08A4A160:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22184));
    ctx.gpr[31] = (0x08A4A174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A174u) goto L_08A4A174;
    return;
L_08A4A174:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A1CC;
      }
      goto L_08A4A180;
    }
L_08A4A180:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A194u) goto L_08A4A194;
    return;
L_08A4A194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A1A0u) goto L_08A4A1A0;
    return;
L_08A4A1A0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A1B8u) goto L_08A4A1B8;
    return;
L_08A4A1B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A1CC;
    }
L_08A4A1CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22164));
    ctx.gpr[31] = (0x08A4A1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A1E0u) goto L_08A4A1E0;
    return;
L_08A4A1E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A238;
      }
      goto L_08A4A1EC;
    }
L_08A4A1EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A200u) goto L_08A4A200;
    return;
L_08A4A200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A20Cu) goto L_08A4A20C;
    return;
L_08A4A20C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A224u) goto L_08A4A224;
    return;
L_08A4A224:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A238;
    }
L_08A4A238:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22140));
    ctx.gpr[31] = (0x08A4A24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A24Cu) goto L_08A4A24C;
    return;
L_08A4A24C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2A4;
      }
      goto L_08A4A258;
    }
L_08A4A258:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A26Cu) goto L_08A4A26C;
    return;
L_08A4A26C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A278u) goto L_08A4A278;
    return;
L_08A4A278:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A290u) goto L_08A4A290;
    return;
L_08A4A290:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A2A4;
    }
L_08A4A2A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22108));
    ctx.gpr[31] = (0x08A4A2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A2B8u) goto L_08A4A2B8;
    return;
L_08A4A2B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2F8;
      }
      goto L_08A4A2C4;
    }
L_08A4A2C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A2D8u) goto L_08A4A2D8;
    return;
L_08A4A2D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7632));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A2F0u) goto L_08A4A2F0;
    return;
L_08A4A2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A2F8;
    }
L_08A4A2F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22084));
    ctx.gpr[31] = (0x08A4A30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A30Cu) goto L_08A4A30C;
    return;
L_08A4A30C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A34C;
      }
      goto L_08A4A318;
    }
L_08A4A318:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A32Cu) goto L_08A4A32C;
    return;
L_08A4A32C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10568));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A344u) goto L_08A4A344;
    return;
L_08A4A344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A34C;
    }
L_08A4A34C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22060));
    ctx.gpr[31] = (0x08A4A360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A360u) goto L_08A4A360;
    return;
L_08A4A360:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3A0;
      }
      goto L_08A4A36C;
    }
L_08A4A36C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A380u) goto L_08A4A380;
    return;
L_08A4A380:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10552));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A398u) goto L_08A4A398;
    return;
L_08A4A398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A3A0;
    }
L_08A4A3A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22032));
    ctx.gpr[31] = (0x08A4A3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A3B4u) goto L_08A4A3B4;
    return;
L_08A4A3B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3F4;
      }
      goto L_08A4A3C0;
    }
L_08A4A3C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A3D4u) goto L_08A4A3D4;
    return;
L_08A4A3D4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10536));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A3ECu) goto L_08A4A3EC;
    return;
L_08A4A3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A3F4;
    }
L_08A4A3F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22008));
    ctx.gpr[31] = (0x08A4A408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A408u) goto L_08A4A408;
    return;
L_08A4A408:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A460;
      }
      goto L_08A4A414;
    }
L_08A4A414:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A428u) goto L_08A4A428;
    return;
L_08A4A428:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A434u) goto L_08A4A434;
    return;
L_08A4A434:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A44Cu) goto L_08A4A44C;
    return;
L_08A4A44C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A460;
    }
L_08A4A460:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21980));
    ctx.gpr[31] = (0x08A4A474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A474u) goto L_08A4A474;
    return;
L_08A4A474:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A4CC;
      }
      goto L_08A4A480;
    }
L_08A4A480:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A494u) goto L_08A4A494;
    return;
L_08A4A494:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A4A0u) goto L_08A4A4A0;
    return;
L_08A4A4A0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A4B8u) goto L_08A4A4B8;
    return;
L_08A4A4B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A4CC;
    }
L_08A4A4CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21956));
    ctx.gpr[31] = (0x08A4A4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A4E0u) goto L_08A4A4E0;
    return;
L_08A4A4E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A520;
      }
      goto L_08A4A4EC;
    }
L_08A4A4EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A500u) goto L_08A4A500;
    return;
L_08A4A500:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(812));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A518u) goto L_08A4A518;
    return;
L_08A4A518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A520;
    }
L_08A4A520:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21932));
    ctx.gpr[31] = (0x08A4A534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A534u) goto L_08A4A534;
    return;
L_08A4A534:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A58C;
      }
      goto L_08A4A540;
    }
L_08A4A540:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A554u) goto L_08A4A554;
    return;
L_08A4A554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A560u) goto L_08A4A560;
    return;
L_08A4A560:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A578u) goto L_08A4A578;
    return;
L_08A4A578:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A58C;
    }
L_08A4A58C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21912));
    ctx.gpr[31] = (0x08A4A5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5A0u) goto L_08A4A5A0;
    return;
L_08A4A5A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A5F8;
      }
      goto L_08A4A5AC;
    }
L_08A4A5AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5C0u) goto L_08A4A5C0;
    return;
L_08A4A5C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5CCu) goto L_08A4A5CC;
    return;
L_08A4A5CC:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5E4u) goto L_08A4A5E4;
    return;
L_08A4A5E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A5F8;
    }
L_08A4A5F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21884));
    ctx.gpr[31] = (0x08A4A60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A60Cu) goto L_08A4A60C;
    return;
L_08A4A60C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A664;
      }
      goto L_08A4A618;
    }
L_08A4A618:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A62Cu) goto L_08A4A62C;
    return;
L_08A4A62C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A638u) goto L_08A4A638;
    return;
L_08A4A638:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A650u) goto L_08A4A650;
    return;
L_08A4A650:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A664;
    }
L_08A4A664:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21864));
    ctx.gpr[31] = (0x08A4A678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A678u) goto L_08A4A678;
    return;
L_08A4A678:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6D0;
      }
      goto L_08A4A684;
    }
L_08A4A684:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A698u) goto L_08A4A698;
    return;
L_08A4A698:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A6A4u) goto L_08A4A6A4;
    return;
L_08A4A6A4:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A6BCu) goto L_08A4A6BC;
    return;
L_08A4A6BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(844), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A6D0;
    }
L_08A4A6D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21844));
    ctx.gpr[31] = (0x08A4A6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A6E4u) goto L_08A4A6E4;
    return;
L_08A4A6E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A73C;
      }
      goto L_08A4A6F0;
    }
L_08A4A6F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A704u) goto L_08A4A704;
    return;
L_08A4A704:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A710u) goto L_08A4A710;
    return;
L_08A4A710:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A728u) goto L_08A4A728;
    return;
L_08A4A728:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A73C;
    }
L_08A4A73C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21816));
    ctx.gpr[31] = (0x08A4A750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A750u) goto L_08A4A750;
    return;
L_08A4A750:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8D4;
      }
      goto L_08A4A75C;
    }
L_08A4A75C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21808));
    ctx.gpr[31] = (0x08A4A770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A770u) goto L_08A4A770;
    return;
L_08A4A770:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A77C;
    }
L_08A4A77C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4A790u) goto L_08A4A790;
    return;
L_08A4A790:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21800));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A7A4u) goto L_08A4A7A4;
    return;
L_08A4A7A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A7FC;
      }
      goto L_08A4A7B0;
    }
L_08A4A7B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A7C4u) goto L_08A4A7C4;
    return;
L_08A4A7C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A7D0u) goto L_08A4A7D0;
    return;
L_08A4A7D0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A7E8u) goto L_08A4A7E8;
    return;
L_08A4A7E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A75C;
      }
      goto L_08A4A7FC;
    }
L_08A4A7FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21788));
    ctx.gpr[31] = (0x08A4A810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A810u) goto L_08A4A810;
    return;
L_08A4A810:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A868;
      }
      goto L_08A4A81C;
    }
L_08A4A81C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A830u) goto L_08A4A830;
    return;
L_08A4A830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A83Cu) goto L_08A4A83C;
    return;
L_08A4A83C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A854u) goto L_08A4A854;
    return;
L_08A4A854:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A75C;
      }
      goto L_08A4A868;
    }
L_08A4A868:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21772));
    ctx.gpr[31] = (0x08A4A87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A87Cu) goto L_08A4A87C;
    return;
L_08A4A87C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A75C;
      }
      goto L_08A4A888;
    }
L_08A4A888:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A89Cu) goto L_08A4A89C;
    return;
L_08A4A89C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A8A8u) goto L_08A4A8A8;
    return;
L_08A4A8A8:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A8C0u) goto L_08A4A8C0;
    return;
L_08A4A8C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A75C;
      }
      goto L_08A4A8D4;
    }
L_08A4A8D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21752));
    ctx.gpr[31] = (0x08A4A8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A8E8u) goto L_08A4A8E8;
    return;
L_08A4A8E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A940;
      }
      goto L_08A4A8F4;
    }
L_08A4A8F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A908u) goto L_08A4A908;
    return;
L_08A4A908:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A914u) goto L_08A4A914;
    return;
L_08A4A914:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4A92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A92Cu) goto L_08A4A92C;
    return;
L_08A4A92C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A940;
    }
L_08A4A940:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21736));
    ctx.gpr[31] = (0x08A4A954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A954u) goto L_08A4A954;
    return;
L_08A4A954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A994;
      }
      goto L_08A4A960;
    }
L_08A4A960:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4A974u) goto L_08A4A974;
    return;
L_08A4A974:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(868));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A98Cu) goto L_08A4A98C;
    return;
L_08A4A98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A994;
    }
L_08A4A994:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21716));
    ctx.gpr[31] = (0x08A4A9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A9A8u) goto L_08A4A9A8;
    return;
L_08A4A9A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD68;
      }
      goto L_08A4A9B4;
    }
L_08A4A9B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21692));
    ctx.gpr[31] = (0x08A4A9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A9C8u) goto L_08A4A9C8;
    return;
L_08A4A9C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4A9D4;
    }
L_08A4A9D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4A9E8u) goto L_08A4A9E8;
    return;
L_08A4A9E8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21664));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4A9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4A9FCu) goto L_08A4A9FC;
    return;
L_08A4A9FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA54;
      }
      goto L_08A4AA08;
    }
L_08A4AA08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA1Cu) goto L_08A4AA1C;
    return;
L_08A4AA1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA28u) goto L_08A4AA28;
    return;
L_08A4AA28:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA40u) goto L_08A4AA40;
    return;
L_08A4AA40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AA54;
    }
L_08A4AA54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21640));
    ctx.gpr[31] = (0x08A4AA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA68u) goto L_08A4AA68;
    return;
L_08A4AA68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAC0;
      }
      goto L_08A4AA74;
    }
L_08A4AA74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA88u) goto L_08A4AA88;
    return;
L_08A4AA88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA94u) goto L_08A4AA94;
    return;
L_08A4AA94:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AAACu) goto L_08A4AAAC;
    return;
L_08A4AAAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AAC0;
    }
L_08A4AAC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21620));
    ctx.gpr[31] = (0x08A4AAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AAD4u) goto L_08A4AAD4;
    return;
L_08A4AAD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB14;
      }
      goto L_08A4AAE0;
    }
L_08A4AAE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AAF4u) goto L_08A4AAF4;
    return;
L_08A4AAF4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AB0Cu) goto L_08A4AB0C;
    return;
L_08A4AB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AB14;
    }
L_08A4AB14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21596));
    ctx.gpr[31] = (0x08A4AB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AB28u) goto L_08A4AB28;
    return;
L_08A4AB28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB68;
      }
      goto L_08A4AB34;
    }
L_08A4AB34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AB48u) goto L_08A4AB48;
    return;
L_08A4AB48:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(916));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AB60u) goto L_08A4AB60;
    return;
L_08A4AB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AB68;
    }
L_08A4AB68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21572));
    ctx.gpr[31] = (0x08A4AB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AB7Cu) goto L_08A4AB7C;
    return;
L_08A4AB7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ABBC;
      }
      goto L_08A4AB88;
    }
L_08A4AB88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AB9Cu) goto L_08A4AB9C;
    return;
L_08A4AB9C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(936));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ABB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4ABB4u) goto L_08A4ABB4;
    return;
L_08A4ABB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4ABBC;
    }
L_08A4ABBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21544));
    ctx.gpr[31] = (0x08A4ABD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4ABD0u) goto L_08A4ABD0;
    return;
L_08A4ABD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC10;
      }
      goto L_08A4ABDC;
    }
L_08A4ABDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4ABF0u) goto L_08A4ABF0;
    return;
L_08A4ABF0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(956));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AC08u) goto L_08A4AC08;
    return;
L_08A4AC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AC10;
    }
L_08A4AC10:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21524));
    ctx.gpr[31] = (0x08A4AC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AC24u) goto L_08A4AC24;
    return;
L_08A4AC24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC68;
      }
      goto L_08A4AC30;
    }
L_08A4AC30:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AC44u) goto L_08A4AC44;
    return;
L_08A4AC44:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(956));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AC60u) goto L_08A4AC60;
    return;
L_08A4AC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AC68;
    }
L_08A4AC68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21504));
    ctx.gpr[31] = (0x08A4AC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AC7Cu) goto L_08A4AC7C;
    return;
L_08A4AC7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ACBC;
      }
      goto L_08A4AC88;
    }
L_08A4AC88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AC9Cu) goto L_08A4AC9C;
    return;
L_08A4AC9C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ACB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4ACB4u) goto L_08A4ACB4;
    return;
L_08A4ACB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4ACBC;
    }
L_08A4ACBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21476));
    ctx.gpr[31] = (0x08A4ACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4ACD0u) goto L_08A4ACD0;
    return;
L_08A4ACD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD14;
      }
      goto L_08A4ACDC;
    }
L_08A4ACDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ACF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4ACF0u) goto L_08A4ACF0;
    return;
L_08A4ACF0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AD0Cu) goto L_08A4AD0C;
    return;
L_08A4AD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AD14;
    }
L_08A4AD14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21448));
    ctx.gpr[31] = (0x08A4AD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AD28u) goto L_08A4AD28;
    return;
L_08A4AD28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AD34;
    }
L_08A4AD34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AD48u) goto L_08A4AD48;
    return;
L_08A4AD48:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1036));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AD60u) goto L_08A4AD60;
    return;
L_08A4AD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B4;
      }
      goto L_08A4AD68;
    }
L_08A4AD68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21428));
    ctx.gpr[31] = (0x08A4AD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AD7Cu) goto L_08A4AD7C;
    return;
L_08A4AD7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B260;
      }
      goto L_08A4AD88;
    }
L_08A4AD88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21408));
    ctx.gpr[31] = (0x08A4AD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AD9Cu) goto L_08A4AD9C;
    return;
L_08A4AD9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4ADA8;
    }
L_08A4ADA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4ADBCu) goto L_08A4ADBC;
    return;
L_08A4ADBC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21388));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ADD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4ADD0u) goto L_08A4ADD0;
    return;
L_08A4ADD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE28;
      }
      goto L_08A4ADDC;
    }
L_08A4ADDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ADF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4ADF0u) goto L_08A4ADF0;
    return;
L_08A4ADF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ADFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4ADFCu) goto L_08A4ADFC;
    return;
L_08A4ADFC:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AE14u) goto L_08A4AE14;
    return;
L_08A4AE14:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4AE28;
    }
L_08A4AE28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21376));
    ctx.gpr[31] = (0x08A4AE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AE3Cu) goto L_08A4AE3C;
    return;
L_08A4AE3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE94;
      }
      goto L_08A4AE48;
    }
L_08A4AE48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AE5Cu) goto L_08A4AE5C;
    return;
L_08A4AE5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AE68u) goto L_08A4AE68;
    return;
L_08A4AE68:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AE80u) goto L_08A4AE80;
    return;
L_08A4AE80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4AE94;
    }
L_08A4AE94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21364));
    ctx.gpr[31] = (0x08A4AEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AEA8u) goto L_08A4AEA8;
    return;
L_08A4AEA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AF00;
      }
      goto L_08A4AEB4;
    }
L_08A4AEB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AEC8u) goto L_08A4AEC8;
    return;
L_08A4AEC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AED4u) goto L_08A4AED4;
    return;
L_08A4AED4:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AEECu) goto L_08A4AEEC;
    return;
L_08A4AEEC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4AF00;
    }
L_08A4AF00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21348));
    ctx.gpr[31] = (0x08A4AF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AF14u) goto L_08A4AF14;
    return;
L_08A4AF14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AF6C;
      }
      goto L_08A4AF20;
    }
L_08A4AF20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AF34u) goto L_08A4AF34;
    return;
L_08A4AF34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AF40u) goto L_08A4AF40;
    return;
L_08A4AF40:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AF58u) goto L_08A4AF58;
    return;
L_08A4AF58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4AF6C;
    }
L_08A4AF6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22780));
    ctx.gpr[31] = (0x08A4AF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AF80u) goto L_08A4AF80;
    return;
L_08A4AF80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AFD8;
      }
      goto L_08A4AF8C;
    }
L_08A4AF8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4AFA0u) goto L_08A4AFA0;
    return;
L_08A4AFA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4AFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AFACu) goto L_08A4AFAC;
    return;
L_08A4AFAC:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4AFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4AFC4u) goto L_08A4AFC4;
    return;
L_08A4AFC4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4AFD8;
    }
L_08A4AFD8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21336));
    ctx.gpr[31] = (0x08A4AFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4AFECu) goto L_08A4AFEC;
    return;
L_08A4AFEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B044;
      }
      goto L_08A4AFF8;
    }
L_08A4AFF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B00Cu) goto L_08A4B00C;
    return;
L_08A4B00C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B018u) goto L_08A4B018;
    return;
L_08A4B018:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B030u) goto L_08A4B030;
    return;
L_08A4B030:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B044;
    }
L_08A4B044:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21324));
    ctx.gpr[31] = (0x08A4B058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B058u) goto L_08A4B058;
    return;
L_08A4B058:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B0B0;
      }
      goto L_08A4B064;
    }
L_08A4B064:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B078u) goto L_08A4B078;
    return;
L_08A4B078:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B084u) goto L_08A4B084;
    return;
L_08A4B084:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B09Cu) goto L_08A4B09C;
    return;
L_08A4B09C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B0B0;
    }
L_08A4B0B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21296));
    ctx.gpr[31] = (0x08A4B0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B0C4u) goto L_08A4B0C4;
    return;
L_08A4B0C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B11C;
      }
      goto L_08A4B0D0;
    }
L_08A4B0D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B0E4u) goto L_08A4B0E4;
    return;
L_08A4B0E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B0F0u) goto L_08A4B0F0;
    return;
L_08A4B0F0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B108u) goto L_08A4B108;
    return;
L_08A4B108:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B11C;
    }
L_08A4B11C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22164));
    ctx.gpr[31] = (0x08A4B130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B130u) goto L_08A4B130;
    return;
L_08A4B130:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B188;
      }
      goto L_08A4B13C;
    }
L_08A4B13C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B150u) goto L_08A4B150;
    return;
L_08A4B150:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B15Cu) goto L_08A4B15C;
    return;
L_08A4B15C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B174u) goto L_08A4B174;
    return;
L_08A4B174:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B188;
    }
L_08A4B188:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21276));
    ctx.gpr[31] = (0x08A4B19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B19Cu) goto L_08A4B19C;
    return;
L_08A4B19C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B1F4;
      }
      goto L_08A4B1A8;
    }
L_08A4B1A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B1BCu) goto L_08A4B1BC;
    return;
L_08A4B1BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B1C8u) goto L_08A4B1C8;
    return;
L_08A4B1C8:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B1E0u) goto L_08A4B1E0;
    return;
L_08A4B1E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B1F4;
    }
L_08A4B1F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21244));
    ctx.gpr[31] = (0x08A4B208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B208u) goto L_08A4B208;
    return;
L_08A4B208:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B214;
    }
L_08A4B214:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B228u) goto L_08A4B228;
    return;
L_08A4B228:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B234u) goto L_08A4B234;
    return;
L_08A4B234:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B24Cu) goto L_08A4B24C;
    return;
L_08A4B24C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD88;
      }
      goto L_08A4B260;
    }
L_08A4B260:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21232));
    ctx.gpr[31] = (0x08A4B274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B274u) goto L_08A4B274;
    return;
L_08A4B274:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B2B4;
      }
      goto L_08A4B280;
    }
L_08A4B280:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B294u) goto L_08A4B294;
    return;
L_08A4B294:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1100));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B2ACu) goto L_08A4B2AC;
    return;
L_08A4B2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B2B4;
    }
L_08A4B2B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21212));
    ctx.gpr[31] = (0x08A4B2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B2C8u) goto L_08A4B2C8;
    return;
L_08A4B2C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B308;
      }
      goto L_08A4B2D4;
    }
L_08A4B2D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B2E8u) goto L_08A4B2E8;
    return;
L_08A4B2E8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1120));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B300u) goto L_08A4B300;
    return;
L_08A4B300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B308;
    }
L_08A4B308:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21196));
    ctx.gpr[31] = (0x08A4B31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B31Cu) goto L_08A4B31C;
    return;
L_08A4B31C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B35C;
      }
      goto L_08A4B328;
    }
L_08A4B328:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B33Cu) goto L_08A4B33C;
    return;
L_08A4B33C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1140));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B354u) goto L_08A4B354;
    return;
L_08A4B354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B35C;
    }
L_08A4B35C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21172));
    ctx.gpr[31] = (0x08A4B370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B370u) goto L_08A4B370;
    return;
L_08A4B370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3B0;
      }
      goto L_08A4B37C;
    }
L_08A4B37C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B390u) goto L_08A4B390;
    return;
L_08A4B390:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1160));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B3A8u) goto L_08A4B3A8;
    return;
L_08A4B3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B3B0;
    }
L_08A4B3B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21148));
    ctx.gpr[31] = (0x08A4B3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B3C4u) goto L_08A4B3C4;
    return;
L_08A4B3C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B404;
      }
      goto L_08A4B3D0;
    }
L_08A4B3D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B3E4u) goto L_08A4B3E4;
    return;
L_08A4B3E4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1180));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B3FCu) goto L_08A4B3FC;
    return;
L_08A4B3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B404;
    }
L_08A4B404:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21128));
    ctx.gpr[31] = (0x08A4B418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B418u) goto L_08A4B418;
    return;
L_08A4B418:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B458;
      }
      goto L_08A4B424;
    }
L_08A4B424:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B438u) goto L_08A4B438;
    return;
L_08A4B438:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1200));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B450u) goto L_08A4B450;
    return;
L_08A4B450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B458;
    }
L_08A4B458:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21112));
    ctx.gpr[31] = (0x08A4B46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B46Cu) goto L_08A4B46C;
    return;
L_08A4B46C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B8F0;
      }
      goto L_08A4B478;
    }
L_08A4B478:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21100));
    ctx.gpr[31] = (0x08A4B48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B48Cu) goto L_08A4B48C;
    return;
L_08A4B48C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B498;
    }
L_08A4B498:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B4ACu) goto L_08A4B4AC;
    return;
L_08A4B4AC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21084));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B4C0u) goto L_08A4B4C0;
    return;
L_08A4B4C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B500;
      }
      goto L_08A4B4CC;
    }
L_08A4B4CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B4E0u) goto L_08A4B4E0;
    return;
L_08A4B4E0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1316));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B4F8u) goto L_08A4B4F8;
    return;
L_08A4B4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B500;
    }
L_08A4B500:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21080));
    ctx.gpr[31] = (0x08A4B514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B514u) goto L_08A4B514;
    return;
L_08A4B514:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B554;
      }
      goto L_08A4B520;
    }
L_08A4B520:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B534u) goto L_08A4B534;
    return;
L_08A4B534:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1336));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B54Cu) goto L_08A4B54C;
    return;
L_08A4B54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B554;
    }
L_08A4B554:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21072));
    ctx.gpr[31] = (0x08A4B568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B568u) goto L_08A4B568;
    return;
L_08A4B568:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B5A8;
      }
      goto L_08A4B574;
    }
L_08A4B574:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B588u) goto L_08A4B588;
    return;
L_08A4B588:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1356));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B5A0u) goto L_08A4B5A0;
    return;
L_08A4B5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B5A8;
    }
L_08A4B5A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21064));
    ctx.gpr[31] = (0x08A4B5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B5BCu) goto L_08A4B5BC;
    return;
L_08A4B5BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B5FC;
      }
      goto L_08A4B5C8;
    }
L_08A4B5C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B5DCu) goto L_08A4B5DC;
    return;
L_08A4B5DC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1376));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B5F4u) goto L_08A4B5F4;
    return;
L_08A4B5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B5FC;
    }
L_08A4B5FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21048));
    ctx.gpr[31] = (0x08A4B610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B610u) goto L_08A4B610;
    return;
L_08A4B610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B650;
      }
      goto L_08A4B61C;
    }
L_08A4B61C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B630u) goto L_08A4B630;
    return;
L_08A4B630:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B648u) goto L_08A4B648;
    return;
L_08A4B648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B650;
    }
L_08A4B650:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21816));
    ctx.gpr[31] = (0x08A4B664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B664u) goto L_08A4B664;
    return;
L_08A4B664:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B6A4;
      }
      goto L_08A4B670;
    }
L_08A4B670:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B684u) goto L_08A4B684;
    return;
L_08A4B684:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1416));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B69Cu) goto L_08A4B69C;
    return;
L_08A4B69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B6A4;
    }
L_08A4B6A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21028));
    ctx.gpr[31] = (0x08A4B6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B6B8u) goto L_08A4B6B8;
    return;
L_08A4B6B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B6F8;
      }
      goto L_08A4B6C4;
    }
L_08A4B6C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B6D8u) goto L_08A4B6D8;
    return;
L_08A4B6D8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1436));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B6F0u) goto L_08A4B6F0;
    return;
L_08A4B6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B6F8;
    }
L_08A4B6F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21016));
    ctx.gpr[31] = (0x08A4B70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B70Cu) goto L_08A4B70C;
    return;
L_08A4B70C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B74C;
      }
      goto L_08A4B718;
    }
L_08A4B718:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B72Cu) goto L_08A4B72C;
    return;
L_08A4B72C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1456));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B744u) goto L_08A4B744;
    return;
L_08A4B744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B74C;
    }
L_08A4B74C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[31] = (0x08A4B760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B760u) goto L_08A4B760;
    return;
L_08A4B760:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7A0;
      }
      goto L_08A4B76C;
    }
L_08A4B76C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B780u) goto L_08A4B780;
    return;
L_08A4B780:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1476));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B798u) goto L_08A4B798;
    return;
L_08A4B798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B7A0;
    }
L_08A4B7A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20992));
    ctx.gpr[31] = (0x08A4B7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B7B4u) goto L_08A4B7B4;
    return;
L_08A4B7B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7F4;
      }
      goto L_08A4B7C0;
    }
L_08A4B7C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B7D4u) goto L_08A4B7D4;
    return;
L_08A4B7D4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1496));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B7ECu) goto L_08A4B7EC;
    return;
L_08A4B7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B7F4;
    }
L_08A4B7F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20976));
    ctx.gpr[31] = (0x08A4B808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B808u) goto L_08A4B808;
    return;
L_08A4B808:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B848;
      }
      goto L_08A4B814;
    }
L_08A4B814:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B828u) goto L_08A4B828;
    return;
L_08A4B828:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1516));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B840u) goto L_08A4B840;
    return;
L_08A4B840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B848;
    }
L_08A4B848:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20964));
    ctx.gpr[31] = (0x08A4B85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B85Cu) goto L_08A4B85C;
    return;
L_08A4B85C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B89C;
      }
      goto L_08A4B868;
    }
L_08A4B868:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B87Cu) goto L_08A4B87C;
    return;
L_08A4B87C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1536));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B894u) goto L_08A4B894;
    return;
L_08A4B894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B89C;
    }
L_08A4B89C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20952));
    ctx.gpr[31] = (0x08A4B8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B8B0u) goto L_08A4B8B0;
    return;
L_08A4B8B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B8BC;
    }
L_08A4B8BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B8D0u) goto L_08A4B8D0;
    return;
L_08A4B8D0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1556));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B8E8u) goto L_08A4B8E8;
    return;
L_08A4B8E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B478;
      }
      goto L_08A4B8F0;
    }
L_08A4B8F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20932));
    ctx.gpr[31] = (0x08A4B904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B904u) goto L_08A4B904;
    return;
L_08A4B904:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B95C;
      }
      goto L_08A4B910;
    }
L_08A4B910:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B924u) goto L_08A4B924;
    return;
L_08A4B924:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B930u) goto L_08A4B930;
    return;
L_08A4B930:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B948u) goto L_08A4B948;
    return;
L_08A4B948:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B95C;
    }
L_08A4B95C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20900));
    ctx.gpr[31] = (0x08A4B970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B970u) goto L_08A4B970;
    return;
L_08A4B970:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B9C8;
      }
      goto L_08A4B97C;
    }
L_08A4B97C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B990u) goto L_08A4B990;
    return;
L_08A4B990:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B99Cu) goto L_08A4B99C;
    return;
L_08A4B99C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4B9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B9B4u) goto L_08A4B9B4;
    return;
L_08A4B9B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4B9C8;
    }
L_08A4B9C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20868));
    ctx.gpr[31] = (0x08A4B9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4B9DCu) goto L_08A4B9DC;
    return;
L_08A4B9DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA34;
      }
      goto L_08A4B9E8;
    }
L_08A4B9E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4B9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4B9FCu) goto L_08A4B9FC;
    return;
L_08A4B9FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA08u) goto L_08A4BA08;
    return;
L_08A4BA08:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA20u) goto L_08A4BA20;
    return;
L_08A4BA20:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BA34;
    }
L_08A4BA34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20840));
    ctx.gpr[31] = (0x08A4BA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA48u) goto L_08A4BA48;
    return;
L_08A4BA48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAA0;
      }
      goto L_08A4BA54;
    }
L_08A4BA54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA68u) goto L_08A4BA68;
    return;
L_08A4BA68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA74u) goto L_08A4BA74;
    return;
L_08A4BA74:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA8Cu) goto L_08A4BA8C;
    return;
L_08A4BA8C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BAA0;
    }
L_08A4BAA0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20804));
    ctx.gpr[31] = (0x08A4BAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BAB4u) goto L_08A4BAB4;
    return;
L_08A4BAB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAF4;
      }
      goto L_08A4BAC0;
    }
L_08A4BAC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BAD4u) goto L_08A4BAD4;
    return;
L_08A4BAD4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1236));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BAECu) goto L_08A4BAEC;
    return;
L_08A4BAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BAF4;
    }
L_08A4BAF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20772));
    ctx.gpr[31] = (0x08A4BB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BB08u) goto L_08A4BB08;
    return;
L_08A4BB08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB4C;
      }
      goto L_08A4BB14;
    }
L_08A4BB14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BB28u) goto L_08A4BB28;
    return;
L_08A4BB28:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BB44u) goto L_08A4BB44;
    return;
L_08A4BB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BB4C;
    }
L_08A4BB4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20740));
    ctx.gpr[31] = (0x08A4BB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BB60u) goto L_08A4BB60;
    return;
L_08A4BB60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBA0;
      }
      goto L_08A4BB6C;
    }
L_08A4BB6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BB80u) goto L_08A4BB80;
    return;
L_08A4BB80:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1276));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BB98u) goto L_08A4BB98;
    return;
L_08A4BB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BBA0;
    }
L_08A4BBA0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20708));
    ctx.gpr[31] = (0x08A4BBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BBB4u) goto L_08A4BBB4;
    return;
L_08A4BBB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBF4;
      }
      goto L_08A4BBC0;
    }
L_08A4BBC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BBD4u) goto L_08A4BBD4;
    return;
L_08A4BBD4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1296));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BBECu) goto L_08A4BBEC;
    return;
L_08A4BBEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BBF4;
    }
L_08A4BBF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20676));
    ctx.gpr[31] = (0x08A4BC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC08u) goto L_08A4BC08;
    return;
L_08A4BC08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD8C;
      }
      goto L_08A4BC14;
    }
L_08A4BC14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20660));
    ctx.gpr[31] = (0x08A4BC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC28u) goto L_08A4BC28;
    return;
L_08A4BC28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BC34;
    }
L_08A4BC34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC48u) goto L_08A4BC48;
    return;
L_08A4BC48:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20644));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC5Cu) goto L_08A4BC5C;
    return;
L_08A4BC5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BCB4;
      }
      goto L_08A4BC68;
    }
L_08A4BC68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC7Cu) goto L_08A4BC7C;
    return;
L_08A4BC7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC88u) goto L_08A4BC88;
    return;
L_08A4BC88:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BCA0u) goto L_08A4BCA0;
    return;
L_08A4BCA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC14;
      }
      goto L_08A4BCB4;
    }
L_08A4BCB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20632));
    ctx.gpr[31] = (0x08A4BCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BCC8u) goto L_08A4BCC8;
    return;
L_08A4BCC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD20;
      }
      goto L_08A4BCD4;
    }
L_08A4BCD4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BCE8u) goto L_08A4BCE8;
    return;
L_08A4BCE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BCF4u) goto L_08A4BCF4;
    return;
L_08A4BCF4:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD0Cu) goto L_08A4BD0C;
    return;
L_08A4BD0C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1580), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC14;
      }
      goto L_08A4BD20;
    }
L_08A4BD20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20620));
    ctx.gpr[31] = (0x08A4BD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD34u) goto L_08A4BD34;
    return;
L_08A4BD34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC14;
      }
      goto L_08A4BD40;
    }
L_08A4BD40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD54u) goto L_08A4BD54;
    return;
L_08A4BD54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD60u) goto L_08A4BD60;
    return;
L_08A4BD60:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD78u) goto L_08A4BD78;
    return;
L_08A4BD78:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC14;
      }
      goto L_08A4BD8C;
    }
L_08A4BD8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20612));
    ctx.gpr[31] = (0x08A4BDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BDA0u) goto L_08A4BDA0;
    return;
L_08A4BDA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BDF8;
      }
      goto L_08A4BDAC;
    }
L_08A4BDAC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BDC0u) goto L_08A4BDC0;
    return;
L_08A4BDC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BDCCu) goto L_08A4BDCC;
    return;
L_08A4BDCC:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BDE4u) goto L_08A4BDE4;
    return;
L_08A4BDE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BDF8;
    }
L_08A4BDF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20588));
    ctx.gpr[31] = (0x08A4BE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BE0Cu) goto L_08A4BE0C;
    return;
L_08A4BE0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE4C;
      }
      goto L_08A4BE18;
    }
L_08A4BE18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BE2Cu) goto L_08A4BE2C;
    return;
L_08A4BE2C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1592));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BE44u) goto L_08A4BE44;
    return;
L_08A4BE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BE4C;
    }
L_08A4BE4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20560));
    ctx.gpr[31] = (0x08A4BE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BE60u) goto L_08A4BE60;
    return;
L_08A4BE60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BEB8;
      }
      goto L_08A4BE6C;
    }
L_08A4BE6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BE80u) goto L_08A4BE80;
    return;
L_08A4BE80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BE8Cu) goto L_08A4BE8C;
    return;
L_08A4BE8C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BEA4u) goto L_08A4BEA4;
    return;
L_08A4BEA4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BEB8;
    }
L_08A4BEB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20532));
    ctx.gpr[31] = (0x08A4BECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BECCu) goto L_08A4BECC;
    return;
L_08A4BECC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF24;
      }
      goto L_08A4BED8;
    }
L_08A4BED8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BEECu) goto L_08A4BEEC;
    return;
L_08A4BEEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BEF8u) goto L_08A4BEF8;
    return;
L_08A4BEF8:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4BF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4BF10u) goto L_08A4BF10;
    return;
L_08A4BF10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BF24;
    }
L_08A4BF24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20504));
    ctx.gpr[31] = (0x08A4BF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BF38u) goto L_08A4BF38;
    return;
L_08A4BF38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF78;
      }
      goto L_08A4BF44;
    }
L_08A4BF44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4BF58u) goto L_08A4BF58;
    return;
L_08A4BF58:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1616));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BF70u) goto L_08A4BF70;
    return;
L_08A4BF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BF78;
    }
L_08A4BF78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20484));
    ctx.gpr[31] = (0x08A4BF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BF8Cu) goto L_08A4BF8C;
    return;
L_08A4BF8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 10u, 0x08A4C0A4u>(ctx, &aot_mem); return;
      }
      goto L_08A4BF98;
    }
L_08A4BF98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20468));
    ctx.gpr[31] = (0x08A4BFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BFACu) goto L_08A4BFAC;
    return;
L_08A4BFAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D78;
      }
      goto L_08A4BFB8;
    }
L_08A4BFB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4BFCCu) goto L_08A4BFCC;
    return;
L_08A4BFCC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20448));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4BFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4BFE0u) goto L_08A4BFE0;
    return;
L_08A4BFE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 4u, 0x08A4C038u>(ctx, &aot_mem); return;
      }
      goto L_08A4BFEC;
    }
L_08A4BFEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0145(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0145_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_145(Runtime &runtime) {
    runtime.register_generated_unit(145u, 0x08A48000u, 16384u, &recomp_unit_0145, &recomp_unit_0145_entry);
    runtime.register_function(0x08A48000u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48004u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48020u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48040u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48054u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48110u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4812Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48138u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48158u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4817Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48188u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4820Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48214u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48228u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48230u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48244u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4825Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48270u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48280u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48300u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48310u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48318u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48330u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4833Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48348u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48360u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48384u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48404u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48414u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48444u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48454u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48460u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48468u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48478u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48480u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48494u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48538u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48548u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4855Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4856Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48590u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4859Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4860Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48624u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48630u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48644u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48660u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48698u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48710u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48720u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48728u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48738u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48758u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48768u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48778u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48788u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48798u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4881Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48828u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48848u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4885Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48870u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48880u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48888u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48920u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4893Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48964u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48978u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48994u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48ED4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4901Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4904Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49100u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49148u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4917Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49188u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49200u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49218u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49228u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49268u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49278u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49290u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49408u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49418u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49424u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49430u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4943Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49454u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49460u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49484u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49498u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4953Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49578u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49640u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49650u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49678u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4970Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49718u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49738u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49744u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49774u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49780u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4980Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49818u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49830u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4983Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49848u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49854u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49860u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4986Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49878u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4988Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49898u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49904u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4990Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49918u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49924u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49930u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49944u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49970u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A00Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A018u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A02Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A044u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A04Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A060u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A06Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A080u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A08Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A108u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A114u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A128u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A134u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A14Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A160u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A174u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A180u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A194u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A200u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A20Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A224u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A238u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A24Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A258u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A26Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A278u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A290u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A30Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A318u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A32Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A344u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A34Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A360u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A36Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A380u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A398u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A408u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A414u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A428u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A434u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A44Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A460u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A474u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A480u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A494u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A500u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A518u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A520u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A534u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A540u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A554u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A560u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A578u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A58Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A60Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A618u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A62Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A638u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A650u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A664u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A678u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A684u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A698u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A704u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A710u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A728u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A73Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A750u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A75Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A770u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A77Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A790u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A810u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A81Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A830u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A83Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A854u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A868u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A87Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A888u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A89Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A908u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A914u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A92Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A940u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A954u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A960u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A974u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A98Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A994u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AED4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B00Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B018u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B030u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B044u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B058u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B064u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B078u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B084u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B09Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B108u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B11Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B130u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B13Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B150u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B15Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B174u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B188u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B19Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B208u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B214u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B228u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B234u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B24Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B260u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B274u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B280u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B294u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B300u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B308u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B31Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B328u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B33Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B354u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B35Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B370u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B37Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B390u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B404u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B418u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B424u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B438u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B450u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B458u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B46Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B478u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B48Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B498u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B500u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B514u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B520u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B534u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B54Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B554u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B568u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B574u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B588u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B610u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B61Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B630u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B648u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B650u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B664u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B670u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B684u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B69Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B70Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B718u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B72Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B744u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B74Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B760u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B76Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B780u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B798u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B808u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B814u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B828u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B840u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B848u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B85Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B868u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B87Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B894u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B89Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B904u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B910u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B924u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B930u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B948u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B95Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B970u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B97Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B990u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B99Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BECCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BED8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFECu, &recomp_unit_0145, "recomp_unit_0145");
}
} // namespace psprecomp

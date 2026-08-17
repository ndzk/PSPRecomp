#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0169[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 7, 0, 8, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 39, 0, 0, 40, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 46,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    59, 0, 0, 60, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 72, 73, 0, 74, 0, 0, 75, 76, 0, 0, 77, 0, 0, 78, 0, 79, 80,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0,
    0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 106, 107, 0, 108, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0,
    0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 212, 0, 213, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0,
    220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244, 245, 0, 246,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0,
    0, 258, 259, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 271, 0, 272,
    0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0,
    289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 299, 0, 300, 0, 0, 301, 302, 0, 303, 0, 304, 0, 0, 305,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 309, 0, 310, 0, 0, 311, 312, 0, 313, 0, 314, 0, 315,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 324, 0, 325, 0, 0, 326, 0,
    0, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 337, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 369, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 375, 376, 0, 377, 378, 379, 0,
    0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 391, 0, 392, 0,
    393, 0, 0, 0, 394, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 406, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 421,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 431, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 446,
    0, 447, 0, 448, 0, 0, 449, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 455, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0,
    0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474,
    0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0,
    0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0,
    0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506,
    0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 517, 0, 518,
    0, 519, 0, 520, 0, 521, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 0,
    0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0,
    544, 0, 545, 0, 0, 0, 546, 0, 547, 548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 553, 554, 555, 0, 0, 0, 0, 556, 0,
    557, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 564, 565, 0, 0, 566, 0, 567,
    0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 583, 584,
    0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0,
    0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 604, 605, 0, 0,
    0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 610, 611, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0,
    0, 614, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0,
    0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0,
    0, 0, 639, 0, 0, 640, 0, 641, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0, 653, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0,
    0, 0, 657, 0, 0, 658, 0, 659, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 0,
    671, 0, 672, 0, 673, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0,
    0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 688, 689, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 697, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0,
    700, 0, 701, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0,
    707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 728, 729, 0, 0, 0, 0, 730, 0,
    731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 735, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 738,
};
void recomp_unit_0169_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA8000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0169[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA8000;
    case 2u: goto L_08AA8020;
    case 3u: goto L_08AA804C;
    case 4u: goto L_08AA8058;
    case 5u: goto L_08AA8060;
    case 6u: goto L_08AA8084;
    case 7u: goto L_08AA808C;
    case 8u: goto L_08AA8094;
    case 9u: goto L_08AA8098;
    case 10u: goto L_08AA80A8;
    case 11u: goto L_08AA80BC;
    case 12u: goto L_08AA80D0;
    case 13u: goto L_08AA80EC;
    case 14u: goto L_08AA80F8;
    case 15u: goto L_08AA8120;
    case 16u: goto L_08AA8144;
    case 17u: goto L_08AA814C;
    case 18u: goto L_08AA815C;
    case 19u: goto L_08AA8168;
    case 20u: goto L_08AA8178;
    case 21u: goto L_08AA81AC;
    case 22u: goto L_08AA81C4;
    case 23u: goto L_08AA81CC;
    case 24u: goto L_08AA81F4;
    case 25u: goto L_08AA820C;
    case 26u: goto L_08AA8230;
    case 27u: goto L_08AA823C;
    case 28u: goto L_08AA824C;
    case 29u: goto L_08AA8258;
    case 30u: goto L_08AA8268;
    case 31u: goto L_08AA827C;
    case 32u: goto L_08AA8288;
    case 33u: goto L_08AA82AC;
    case 34u: goto L_08AA82B8;
    case 35u: goto L_08AA82C4;
    case 36u: goto L_08AA82C8;
    case 37u: goto L_08AA82DC;
    case 38u: goto L_08AA8304;
    case 39u: goto L_08AA8310;
    case 40u: goto L_08AA831C;
    case 41u: goto L_08AA8320;
    case 42u: goto L_08AA8334;
    case 43u: goto L_08AA8360;
    case 44u: goto L_08AA836C;
    case 45u: goto L_08AA8378;
    case 46u: goto L_08AA837C;
    case 47u: goto L_08AA8390;
    case 48u: goto L_08AA83BC;
    case 49u: goto L_08AA83C8;
    case 50u: goto L_08AA83D4;
    case 51u: goto L_08AA83D8;
    case 52u: goto L_08AA83EC;
    case 53u: goto L_08AA8418;
    case 54u: goto L_08AA8424;
    case 55u: goto L_08AA8430;
    case 56u: goto L_08AA8434;
    case 57u: goto L_08AA8448;
    case 58u: goto L_08AA8474;
    case 59u: goto L_08AA8480;
    case 60u: goto L_08AA848C;
    case 61u: goto L_08AA8490;
    case 62u: goto L_08AA84A4;
    case 63u: goto L_08AA84B4;
    case 64u: goto L_08AA84C0;
    case 65u: goto L_08AA84CC;
    case 66u: goto L_08AA84E4;
    case 67u: goto L_08AA84FC;
    case 68u: goto L_08AA8514;
    case 69u: goto L_08AA8524;
    case 70u: goto L_08AA852C;
    case 71u: goto L_08AA8538;
    case 72u: goto L_08AA853C;
    case 73u: goto L_08AA8540;
    case 74u: goto L_08AA8548;
    case 75u: goto L_08AA8554;
    case 76u: goto L_08AA8558;
    case 77u: goto L_08AA8564;
    case 78u: goto L_08AA8570;
    case 79u: goto L_08AA8578;
    case 80u: goto L_08AA857C;
    case 81u: goto L_08AA8580;
    case 82u: goto L_08AA8620;
    case 83u: goto L_08AA863C;
    case 84u: goto L_08AA8648;
    case 85u: goto L_08AA8658;
    case 86u: goto L_08AA8664;
    case 87u: goto L_08AA867C;
    case 88u: goto L_08AA86AC;
    case 89u: goto L_08AA86B4;
    case 90u: goto L_08AA86CC;
    case 91u: goto L_08AA86D4;
    case 92u: goto L_08AA86D8;
    case 93u: goto L_08AA86E8;
    case 94u: goto L_08AA8718;
    case 95u: goto L_08AA8730;
    case 96u: goto L_08AA8768;
    case 97u: goto L_08AA8780;
    case 98u: goto L_08AA87B0;
    case 99u: goto L_08AA87B8;
    case 100u: goto L_08AA87D0;
    case 101u: goto L_08AA87F0;
    case 102u: goto L_08AA87F4;
    case 103u: goto L_08AA8808;
    case 104u: goto L_08AA8818;
    case 105u: goto L_08AA8820;
    case 106u: goto L_08AA8828;
    case 107u: goto L_08AA882C;
    case 108u: goto L_08AA8834;
    case 109u: goto L_08AA8840;
    case 110u: goto L_08AA8844;
    case 111u: goto L_08AA884C;
    case 112u: goto L_08AA8860;
    case 113u: goto L_08AA8870;
    case 114u: goto L_08AA887C;
    case 115u: goto L_08AA889C;
    case 116u: goto L_08AA88A8;
    case 117u: goto L_08AA88B0;
    case 118u: goto L_08AA88B4;
    case 119u: goto L_08AA88EC;
    case 120u: goto L_08AA88FC;
    case 121u: goto L_08AA8914;
    case 122u: goto L_08AA8920;
    case 123u: goto L_08AA892C;
    case 124u: goto L_08AA8938;
    case 125u: goto L_08AA8944;
    case 126u: goto L_08AA8950;
    case 127u: goto L_08AA895C;
    case 128u: goto L_08AA8968;
    case 129u: goto L_08AA8974;
    case 130u: goto L_08AA897C;
    case 131u: goto L_08AA8984;
    case 132u: goto L_08AA89B8;
    case 133u: goto L_08AA89C4;
    case 134u: goto L_08AA89D8;
    case 135u: goto L_08AA89F0;
    case 136u: goto L_08AA8A00;
    case 137u: goto L_08AA8A08;
    case 138u: goto L_08AA8A14;
    case 139u: goto L_08AA8A24;
    case 140u: goto L_08AA8A4C;
    case 141u: goto L_08AA8A8C;
    case 142u: goto L_08AA8ACC;
    case 143u: goto L_08AA8AFC;
    case 144u: goto L_08AA8B10;
    case 145u: goto L_08AA8B18;
    case 146u: goto L_08AA8B30;
    case 147u: goto L_08AA8B60;
    case 148u: goto L_08AA8B8C;
    case 149u: goto L_08AA8C08;
    case 150u: goto L_08AA8D04;
    case 151u: goto L_08AA8D84;
    case 152u: goto L_08AA8DA4;
    case 153u: goto L_08AA8DB0;
    case 154u: goto L_08AA8DB8;
    case 155u: goto L_08AA8DBC;
    case 156u: goto L_08AA8DE4;
    case 157u: goto L_08AA8E70;
    case 158u: goto L_08AA8EC0;
    case 159u: goto L_08AA8EC8;
    case 160u: goto L_08AA8ED0;
    case 161u: goto L_08AA8ED8;
    case 162u: goto L_08AA8EE4;
    case 163u: goto L_08AA8EEC;
    case 164u: goto L_08AA8EF4;
    case 165u: goto L_08AA8EFC;
    case 166u: goto L_08AA9090;
    case 167u: goto L_08AA90B8;
    case 168u: goto L_08AA9120;
    case 169u: goto L_08AA9148;
    case 170u: goto L_08AA9160;
    case 171u: goto L_08AA9188;
    case 172u: goto L_08AA918C;
    case 173u: goto L_08AA9198;
    case 174u: goto L_08AA91A0;
    case 175u: goto L_08AA91B0;
    case 176u: goto L_08AA91BC;
    case 177u: goto L_08AA91C8;
    case 178u: goto L_08AA91CC;
    case 179u: goto L_08AA91D8;
    case 180u: goto L_08AA91E4;
    case 181u: goto L_08AA91F8;
    case 182u: goto L_08AA922C;
    case 183u: goto L_08AA9240;
    case 184u: goto L_08AA9250;
    case 185u: goto L_08AA9254;
    case 186u: goto L_08AA925C;
    case 187u: goto L_08AA9264;
    case 188u: goto L_08AA9274;
    case 189u: goto L_08AA9284;
    case 190u: goto L_08AA9294;
    case 191u: goto L_08AA92BC;
    case 192u: goto L_08AA92D0;
    case 193u: goto L_08AA92DC;
    case 194u: goto L_08AA92E4;
    case 195u: goto L_08AA92F8;
    case 196u: goto L_08AA9308;
    case 197u: goto L_08AA9314;
    case 198u: goto L_08AA932C;
    case 199u: goto L_08AA9348;
    case 200u: goto L_08AA937C;
    case 201u: goto L_08AA93DC;
    case 202u: goto L_08AA9414;
    case 203u: goto L_08AA9424;
    case 204u: goto L_08AA943C;
    case 205u: goto L_08AA9474;
    case 206u: goto L_08AA949C;
    case 207u: goto L_08AA94A4;
    case 208u: goto L_08AA94AC;
    case 209u: goto L_08AA94B4;
    case 210u: goto L_08AA94D8;
    case 211u: goto L_08AA94E0;
    case 212u: goto L_08AA94E4;
    case 213u: goto L_08AA94EC;
    case 214u: goto L_08AA9504;
    case 215u: goto L_08AA9534;
    case 216u: goto L_08AA9548;
    case 217u: goto L_08AA955C;
    case 218u: goto L_08AA9568;
    case 219u: goto L_08AA9578;
    case 220u: goto L_08AA9580;
    case 221u: goto L_08AA9588;
    case 222u: goto L_08AA9598;
    case 223u: goto L_08AA95C4;
    case 224u: goto L_08AA95C8;
    case 225u: goto L_08AA95E8;
    case 226u: goto L_08AA9604;
    case 227u: goto L_08AA9610;
    case 228u: goto L_08AA9638;
    case 229u: goto L_08AA9644;
    case 230u: goto L_08AA9650;
    case 231u: goto L_08AA965C;
    case 232u: goto L_08AA9664;
    case 233u: goto L_08AA966C;
    case 234u: goto L_08AA9674;
    case 235u: goto L_08AA9694;
    case 236u: goto L_08AA969C;
    case 237u: goto L_08AA96AC;
    case 238u: goto L_08AA96B8;
    case 239u: goto L_08AA96C0;
    case 240u: goto L_08AA96C8;
    case 241u: goto L_08AA96D0;
    case 242u: goto L_08AA96E0;
    case 243u: goto L_08AA96E8;
    case 244u: goto L_08AA96F0;
    case 245u: goto L_08AA96F4;
    case 246u: goto L_08AA96FC;
    case 247u: goto L_08AA9718;
    case 248u: goto L_08AA9788;
    case 249u: goto L_08AA97A8;
    case 250u: goto L_08AA97B0;
    case 251u: goto L_08AA97B8;
    case 252u: goto L_08AA97C4;
    case 253u: goto L_08AA97D4;
    case 254u: goto L_08AA97DC;
    case 255u: goto L_08AA97E4;
    case 256u: goto L_08AA97EC;
    case 257u: goto L_08AA97F4;
    case 258u: goto L_08AA9804;
    case 259u: goto L_08AA9808;
    case 260u: goto L_08AA9810;
    case 261u: goto L_08AA9818;
    case 262u: goto L_08AA9820;
    case 263u: goto L_08AA982C;
    case 264u: goto L_08AA983C;
    case 265u: goto L_08AA9848;
    case 266u: goto L_08AA9850;
    case 267u: goto L_08AA9858;
    case 268u: goto L_08AA9860;
    case 269u: goto L_08AA9868;
    case 270u: goto L_08AA9870;
    case 271u: goto L_08AA9874;
    case 272u: goto L_08AA987C;
    case 273u: goto L_08AA9894;
    case 274u: goto L_08AA989C;
    case 275u: goto L_08AA98A4;
    case 276u: goto L_08AA98AC;
    case 277u: goto L_08AA98B4;
    case 278u: goto L_08AA98B8;
    case 279u: goto L_08AA98C4;
    case 280u: goto L_08AA98D0;
    case 281u: goto L_08AA9904;
    case 282u: goto L_08AA991C;
    case 283u: goto L_08AA9928;
    case 284u: goto L_08AA9938;
    case 285u: goto L_08AA9944;
    case 286u: goto L_08AA9950;
    case 287u: goto L_08AA9964;
    case 288u: goto L_08AA9974;
    case 289u: goto L_08AA9980;
    case 290u: goto L_08AA9988;
    case 291u: goto L_08AA9994;
    case 292u: goto L_08AA99BC;
    case 293u: goto L_08AA99D0;
    case 294u: goto L_08AA9A24;
    case 295u: goto L_08AA9A70;
    case 296u: goto L_08AA9A84;
    case 297u: goto L_08AA9A90;
    case 298u: goto L_08AA9AC4;
    case 299u: goto L_08AA9AC8;
    case 300u: goto L_08AA9AD0;
    case 301u: goto L_08AA9ADC;
    case 302u: goto L_08AA9AE0;
    case 303u: goto L_08AA9AE8;
    case 304u: goto L_08AA9AF0;
    case 305u: goto L_08AA9AFC;
    case 306u: goto L_08AA9B04;
    case 307u: goto L_08AA9B2C;
    case 308u: goto L_08AA9B48;
    case 309u: goto L_08AA9B4C;
    case 310u: goto L_08AA9B54;
    case 311u: goto L_08AA9B60;
    case 312u: goto L_08AA9B64;
    case 313u: goto L_08AA9B6C;
    case 314u: goto L_08AA9B74;
    case 315u: goto L_08AA9B7C;
    case 316u: goto L_08AA9B80;
    case 317u: goto L_08AA9BA4;
    case 318u: goto L_08AA9BAC;
    case 319u: goto L_08AA9BE0;
    case 320u: goto L_08AA9C08;
    case 321u: goto L_08AA9C34;
    case 322u: goto L_08AA9CC0;
    case 323u: goto L_08AA9CE0;
    case 324u: goto L_08AA9CE4;
    case 325u: goto L_08AA9CEC;
    case 326u: goto L_08AA9CF8;
    case 327u: goto L_08AA9D0C;
    case 328u: goto L_08AA9D14;
    case 329u: goto L_08AA9D1C;
    case 330u: goto L_08AA9D24;
    case 331u: goto L_08AA9D50;
    case 332u: goto L_08AA9D5C;
    case 333u: goto L_08AA9D88;
    case 334u: goto L_08AA9DB4;
    case 335u: goto L_08AA9DBC;
    case 336u: goto L_08AA9DC4;
    case 337u: goto L_08AA9DD0;
    case 338u: goto L_08AA9DD4;
    case 339u: goto L_08AA9DDC;
    case 340u: goto L_08AA9DFC;
    case 341u: goto L_08AA9E04;
    case 342u: goto L_08AA9E08;
    case 343u: goto L_08AA9E1C;
    case 344u: goto L_08AA9E64;
    case 345u: goto L_08AA9E6C;
    case 346u: goto L_08AA9E70;
    case 347u: goto L_08AA9E9C;
    case 348u: goto L_08AA9EB0;
    case 349u: goto L_08AA9EB8;
    case 350u: goto L_08AA9EC4;
    case 351u: goto L_08AA9ECC;
    case 352u: goto L_08AA9ED8;
    case 353u: goto L_08AA9EE0;
    case 354u: goto L_08AA9EE8;
    case 355u: goto L_08AA9EF4;
    case 356u: goto L_08AA9F00;
    case 357u: goto L_08AA9F24;
    case 358u: goto L_08AA9F28;
    case 359u: goto L_08AA9F30;
    case 360u: goto L_08AA9F38;
    case 361u: goto L_08AA9F40;
    case 362u: goto L_08AA9F48;
    case 363u: goto L_08AA9F50;
    case 364u: goto L_08AA9F58;
    case 365u: goto L_08AA9F64;
    case 366u: goto L_08AA9F6C;
    case 367u: goto L_08AA9F78;
    case 368u: goto L_08AA9F9C;
    case 369u: goto L_08AA9FA0;
    case 370u: goto L_08AA9FA8;
    case 371u: goto L_08AA9FB8;
    case 372u: goto L_08AA9FC0;
    case 373u: goto L_08AA9FD8;
    case 374u: goto L_08AA9FE0;
    case 375u: goto L_08AA9FE4;
    case 376u: goto L_08AA9FE8;
    case 377u: goto L_08AA9FF0;
    case 378u: goto L_08AA9FF4;
    case 379u: goto L_08AA9FF8;
    case 380u: goto L_08AAA004;
    case 381u: goto L_08AAA014;
    case 382u: goto L_08AAA01C;
    case 383u: goto L_08AAA02C;
    case 384u: goto L_08AAA038;
    case 385u: goto L_08AAA040;
    case 386u: goto L_08AAA048;
    case 387u: goto L_08AAA050;
    case 388u: goto L_08AAA058;
    case 389u: goto L_08AAA064;
    case 390u: goto L_08AAA06C;
    case 391u: goto L_08AAA070;
    case 392u: goto L_08AAA078;
    case 393u: goto L_08AAA080;
    case 394u: goto L_08AAA090;
    case 395u: goto L_08AAA098;
    case 396u: goto L_08AAA0A4;
    case 397u: goto L_08AAA0B8;
    case 398u: goto L_08AAA0CC;
    case 399u: goto L_08AAA0D0;
    case 400u: goto L_08AAA0DC;
    case 401u: goto L_08AAA0E4;
    case 402u: goto L_08AAA0F0;
    case 403u: goto L_08AAA110;
    case 404u: goto L_08AAA12C;
    case 405u: goto L_08AAA13C;
    case 406u: goto L_08AAA140;
    case 407u: goto L_08AAA150;
    case 408u: goto L_08AAA158;
    case 409u: goto L_08AAA160;
    case 410u: goto L_08AAA170;
    case 411u: goto L_08AAA1A4;
    case 412u: goto L_08AAA1B4;
    case 413u: goto L_08AAA1C4;
    case 414u: goto L_08AAA1CC;
    case 415u: goto L_08AAA274;
    case 416u: goto L_08AAA2F0;
    case 417u: goto L_08AAA448;
    case 418u: goto L_08AAA4C8;
    case 419u: goto L_08AAA4E8;
    case 420u: goto L_08AAA4F4;
    case 421u: goto L_08AAA4FC;
    case 422u: goto L_08AAA500;
    case 423u: goto L_08AAA528;
    case 424u: goto L_08AAA558;
    case 425u: goto L_08AAA5D4;
    case 426u: goto L_08AAA72C;
    case 427u: goto L_08AAA7AC;
    case 428u: goto L_08AAA7CC;
    case 429u: goto L_08AAA7D8;
    case 430u: goto L_08AAA7E0;
    case 431u: goto L_08AAA7E4;
    case 432u: goto L_08AAA80C;
    case 433u: goto L_08AAA83C;
    case 434u: goto L_08AAA880;
    case 435u: goto L_08AAA8A4;
    case 436u: goto L_08AAA8AC;
    case 437u: goto L_08AAA8B8;
    case 438u: goto L_08AAA8C0;
    case 439u: goto L_08AAA8C8;
    case 440u: goto L_08AAA8D4;
    case 441u: goto L_08AAA8E0;
    case 442u: goto L_08AAA8EC;
    case 443u: goto L_08AAA958;
    case 444u: goto L_08AAA960;
    case 445u: goto L_08AAA970;
    case 446u: goto L_08AAA97C;
    case 447u: goto L_08AAA984;
    case 448u: goto L_08AAA98C;
    case 449u: goto L_08AAA998;
    case 450u: goto L_08AAA99C;
    case 451u: goto L_08AAA9A4;
    case 452u: goto L_08AAA9AC;
    case 453u: goto L_08AAA9B4;
    case 454u: goto L_08AAA9CC;
    case 455u: goto L_08AAA9D0;
    case 456u: goto L_08AAA9D8;
    case 457u: goto L_08AAA9E4;
    case 458u: goto L_08AAAA08;
    case 459u: goto L_08AAAA10;
    case 460u: goto L_08AAAA1C;
    case 461u: goto L_08AAAA24;
    case 462u: goto L_08AAAA4C;
    case 463u: goto L_08AAAA54;
    case 464u: goto L_08AAAA5C;
    case 465u: goto L_08AAAA64;
    case 466u: goto L_08AAAA70;
    case 467u: goto L_08AAAA78;
    case 468u: goto L_08AAAA88;
    case 469u: goto L_08AAAA94;
    case 470u: goto L_08AAAAA0;
    case 471u: goto L_08AAAB90;
    case 472u: goto L_08AAABBC;
    case 473u: goto L_08AAAC3C;
    case 474u: goto L_08AAAC7C;
    case 475u: goto L_08AAAC84;
    case 476u: goto L_08AAAC94;
    case 477u: goto L_08AAAC9C;
    case 478u: goto L_08AAACB4;
    case 479u: goto L_08AAACC0;
    case 480u: goto L_08AAACD0;
    case 481u: goto L_08AAACD4;
    case 482u: goto L_08AAACDC;
    case 483u: goto L_08AAACF4;
    case 484u: goto L_08AAAD1C;
    case 485u: goto L_08AAAD6C;
    case 486u: goto L_08AAAD84;
    case 487u: goto L_08AAADAC;
    case 488u: goto L_08AAADD4;
    case 489u: goto L_08AAADDC;
    case 490u: goto L_08AAADE4;
    case 491u: goto L_08AAADEC;
    case 492u: goto L_08AAAE08;
    case 493u: goto L_08AAAE20;
    case 494u: goto L_08AAAE30;
    case 495u: goto L_08AAAE44;
    case 496u: goto L_08AAAE58;
    case 497u: goto L_08AAAE88;
    case 498u: goto L_08AAAE9C;
    case 499u: goto L_08AAAECC;
    case 500u: goto L_08AAAEDC;
    case 501u: goto L_08AAAEE8;
    case 502u: goto L_08AAAEF8;
    case 503u: goto L_08AAAF04;
    case 504u: goto L_08AAAF6C;
    case 505u: goto L_08AAAF74;
    case 506u: goto L_08AAAF7C;
    case 507u: goto L_08AAAF84;
    case 508u: goto L_08AAAF8C;
    case 509u: goto L_08AAAF9C;
    case 510u: goto L_08AAAFAC;
    case 511u: goto L_08AAAFB4;
    case 512u: goto L_08AAAFBC;
    case 513u: goto L_08AAAFC4;
    case 514u: goto L_08AAAFD8;
    case 515u: goto L_08AAAFE0;
    case 516u: goto L_08AAAFEC;
    case 517u: goto L_08AAAFF4;
    case 518u: goto L_08AAAFFC;
    case 519u: goto L_08AAB004;
    case 520u: goto L_08AAB00C;
    case 521u: goto L_08AAB014;
    case 522u: goto L_08AAB018;
    case 523u: goto L_08AAB024;
    case 524u: goto L_08AAB048;
    case 525u: goto L_08AAB060;
    case 526u: goto L_08AAB068;
    case 527u: goto L_08AAB074;
    case 528u: goto L_08AAB08C;
    case 529u: goto L_08AAB094;
    case 530u: goto L_08AAB09C;
    case 531u: goto L_08AAB0B8;
    case 532u: goto L_08AAB0D0;
    case 533u: goto L_08AAB0D8;
    case 534u: goto L_08AAB0E0;
    case 535u: goto L_08AAB150;
    case 536u: goto L_08AAB1A4;
    case 537u: goto L_08AAB1AC;
    case 538u: goto L_08AAB1B8;
    case 539u: goto L_08AAB1C0;
    case 540u: goto L_08AAB1C8;
    case 541u: goto L_08AAB1D4;
    case 542u: goto L_08AAB1F0;
    case 543u: goto L_08AAB1F8;
    case 544u: goto L_08AAB200;
    case 545u: goto L_08AAB208;
    case 546u: goto L_08AAB218;
    case 547u: goto L_08AAB220;
    case 548u: goto L_08AAB224;
    case 549u: goto L_08AAB230;
    case 550u: goto L_08AAB238;
    case 551u: goto L_08AAB240;
    case 552u: goto L_08AAB24C;
    case 553u: goto L_08AAB25C;
    case 554u: goto L_08AAB260;
    case 555u: goto L_08AAB264;
    case 556u: goto L_08AAB278;
    case 557u: goto L_08AAB280;
    case 558u: goto L_08AAB28C;
    case 559u: goto L_08AAB298;
    case 560u: goto L_08AAB2B4;
    case 561u: goto L_08AAB2C0;
    case 562u: goto L_08AAB2C8;
    case 563u: goto L_08AAB2D8;
    case 564u: goto L_08AAB2E4;
    case 565u: goto L_08AAB2E8;
    case 566u: goto L_08AAB2F4;
    case 567u: goto L_08AAB2FC;
    case 568u: goto L_08AAB314;
    case 569u: goto L_08AAB31C;
    case 570u: goto L_08AAB324;
    case 571u: goto L_08AAB32C;
    case 572u: goto L_08AAB334;
    case 573u: goto L_08AAB338;
    case 574u: goto L_08AAB348;
    case 575u: goto L_08AAB37C;
    case 576u: goto L_08AAB3A4;
    case 577u: goto L_08AAB3AC;
    case 578u: goto L_08AAB3B4;
    case 579u: goto L_08AAB3C4;
    case 580u: goto L_08AAB3CC;
    case 581u: goto L_08AAB3D4;
    case 582u: goto L_08AAB3F0;
    case 583u: goto L_08AAB3F8;
    case 584u: goto L_08AAB3FC;
    case 585u: goto L_08AAB410;
    case 586u: goto L_08AAB42C;
    case 587u: goto L_08AAB434;
    case 588u: goto L_08AAB43C;
    case 589u: goto L_08AAB448;
    case 590u: goto L_08AAB464;
    case 591u: goto L_08AAB46C;
    case 592u: goto L_08AAB474;
    case 593u: goto L_08AAB4EC;
    case 594u: goto L_08AAB50C;
    case 595u: goto L_08AAB518;
    case 596u: goto L_08AAB530;
    case 597u: goto L_08AAB54C;
    case 598u: goto L_08AAB574;
    case 599u: goto L_08AAB590;
    case 600u: goto L_08AAB5A4;
    case 601u: goto L_08AAB5CC;
    case 602u: goto L_08AAB5DC;
    case 603u: goto L_08AAB5E8;
    case 604u: goto L_08AAB5F0;
    case 605u: goto L_08AAB5F4;
    case 606u: goto L_08AAB604;
    case 607u: goto L_08AAB62C;
    case 608u: goto L_08AAB63C;
    case 609u: goto L_08AAB648;
    case 610u: goto L_08AAB650;
    case 611u: goto L_08AAB654;
    case 612u: goto L_08AAB66C;
    case 613u: goto L_08AAB674;
    case 614u: goto L_08AAB684;
    case 615u: goto L_08AAB690;
    case 616u: goto L_08AAB6A4;
    case 617u: goto L_08AAB6C0;
    case 618u: goto L_08AAB6E8;
    case 619u: goto L_08AAB6F8;
    case 620u: goto L_08AAB708;
    case 621u: goto L_08AAB730;
    case 622u: goto L_08AAB740;
    case 623u: goto L_08AAB74C;
    case 624u: goto L_08AAB754;
    case 625u: goto L_08AAB758;
    case 626u: goto L_08AAB768;
    case 627u: goto L_08AAB790;
    case 628u: goto L_08AAB7A0;
    case 629u: goto L_08AAB7AC;
    case 630u: goto L_08AAB7B8;
    case 631u: goto L_08AAB7E8;
    case 632u: goto L_08AAB818;
    case 633u: goto L_08AAB828;
    case 634u: goto L_08AAB834;
    case 635u: goto L_08AAB83C;
    case 636u: goto L_08AAB840;
    case 637u: goto L_08AAB850;
    case 638u: goto L_08AAB878;
    case 639u: goto L_08AAB888;
    case 640u: goto L_08AAB894;
    case 641u: goto L_08AAB89C;
    case 642u: goto L_08AAB8A0;
    case 643u: goto L_08AAB8AC;
    case 644u: goto L_08AAB8BC;
    case 645u: goto L_08AAB8D8;
    case 646u: goto L_08AAB8F4;
    case 647u: goto L_08AAB91C;
    case 648u: goto L_08AAB934;
    case 649u: goto L_08AAB970;
    case 650u: goto L_08AAB998;
    case 651u: goto L_08AAB9A8;
    case 652u: goto L_08AAB9B4;
    case 653u: goto L_08AAB9BC;
    case 654u: goto L_08AAB9C0;
    case 655u: goto L_08AAB9D0;
    case 656u: goto L_08AAB9F8;
    case 657u: goto L_08AABA08;
    case 658u: goto L_08AABA14;
    case 659u: goto L_08AABA1C;
    case 660u: goto L_08AABA20;
    case 661u: goto L_08AABA3C;
    case 662u: goto L_08AABA58;
    case 663u: goto L_08AABA60;
    case 664u: goto L_08AABA78;
    case 665u: goto L_08AABAA0;
    case 666u: goto L_08AABAAC;
    case 667u: goto L_08AABAC8;
    case 668u: goto L_08AABAD8;
    case 669u: goto L_08AABAE4;
    case 670u: goto L_08AABAEC;
    case 671u: goto L_08AABB00;
    case 672u: goto L_08AABB08;
    case 673u: goto L_08AABB10;
    case 674u: goto L_08AABB18;
    case 675u: goto L_08AABB24;
    case 676u: goto L_08AABB2C;
    case 677u: goto L_08AABB70;
    case 678u: goto L_08AABB78;
    case 679u: goto L_08AABB9C;
    case 680u: goto L_08AABBA8;
    case 681u: goto L_08AABBB0;
    case 682u: goto L_08AABBBC;
    case 683u: goto L_08AABBE4;
    case 684u: goto L_08AABBEC;
    case 685u: goto L_08AABBF4;
    case 686u: goto L_08AABC00;
    case 687u: goto L_08AABC28;
    case 688u: goto L_08AABC2C;
    case 689u: goto L_08AABC30;
    case 690u: goto L_08AABC3C;
    case 691u: goto L_08AABC4C;
    case 692u: goto L_08AABC5C;
    case 693u: goto L_08AABC64;
    case 694u: goto L_08AABC74;
    case 695u: goto L_08AABCA0;
    case 696u: goto L_08AABCA8;
    case 697u: goto L_08AABCAC;
    case 698u: goto L_08AABCB0;
    case 699u: goto L_08AABCF8;
    case 700u: goto L_08AABD00;
    case 701u: goto L_08AABD08;
    case 702u: goto L_08AABD0C;
    case 703u: goto L_08AABD24;
    case 704u: goto L_08AABD68;
    case 705u: goto L_08AABD70;
    case 706u: goto L_08AABD78;
    case 707u: goto L_08AABD80;
    case 708u: goto L_08AABDA4;
    case 709u: goto L_08AABDCC;
    case 710u: goto L_08AABDD4;
    case 711u: goto L_08AABDE4;
    case 712u: goto L_08AABDF4;
    case 713u: goto L_08AABE28;
    case 714u: goto L_08AABE34;
    case 715u: goto L_08AABE44;
    case 716u: goto L_08AABE4C;
    case 717u: goto L_08AABE5C;
    case 718u: goto L_08AABE90;
    case 719u: goto L_08AABE9C;
    case 720u: goto L_08AABEB8;
    case 721u: goto L_08AABEC0;
    case 722u: goto L_08AABED0;
    case 723u: goto L_08AABF14;
    case 724u: goto L_08AABF20;
    case 725u: goto L_08AABF34;
    case 726u: goto L_08AABF44;
    case 727u: goto L_08AABF50;
    case 728u: goto L_08AABF60;
    case 729u: goto L_08AABF64;
    case 730u: goto L_08AABF78;
    case 731u: goto L_08AABF80;
    case 732u: goto L_08AABFA0;
    case 733u: goto L_08AABFA8;
    case 734u: goto L_08AABFB8;
    case 735u: goto L_08AABFBC;
    case 736u: goto L_08AABFD4;
    case 737u: goto L_08AABFDC;
    case 738u: goto L_08AABFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA8000:
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
L_08AA8020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(67));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA8060;
      }
      goto L_08AA804C;
    }
L_08AA804C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
      if (branch_taken) {
          goto L_08AA8098;
      }
      goto L_08AA8058;
    }
L_08AA8058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08AA8084;
      }
      goto L_08AA8060;
    }
L_08AA8060:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8084:
    ctx.gpr[31] = (0x08AA808Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AA82DC;
L_08AA808C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AA80A8;
      }
      goto L_08AA8094;
    }
L_08AA8094:
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    goto L_08AA8098;
L_08AA8098:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
      if (branch_taken) {
          goto L_08AA80F8;
      }
      goto L_08AA80A8;
    }
L_08AA80A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 61440u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08AA80EC;
    }
    goto L_08AA80BC;
L_08AA80BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32244));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08AA80EC;
    }
    goto L_08AA80D0;
L_08AA80D0:
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1024u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
      if (branch_taken) {
          goto L_08AA80F8;
      }
      goto L_08AA80EC;
    }
L_08AA80EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    goto L_08AA80F8;
L_08AA80F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8144u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    goto L_08AA83EC;
L_08AA8144:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AA815C;
    }
    goto L_08AA814C;
L_08AA814C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA8168;
      }
      goto L_08AA815C;
    }
L_08AA815C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AA8168;
L_08AA8168:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] & 256u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA81CC;
      }
      goto L_08AA81AC;
    }
L_08AA81AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA81C4u);
    ctx.gpr[7] = (0u | 2u);
    goto L_08AA8334;
L_08AA81C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA81CC;
L_08AA81CC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA81F4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08AA8448;
L_08AA81F4:
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
L_08AA820C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8230u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    goto L_08AA8334;
L_08AA8230:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AA824C;
      }
      goto L_08AA823C;
    }
L_08AA823C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA8258;
      }
      goto L_08AA824C;
    }
L_08AA824C:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08AA8258;
L_08AA8258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA827Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    goto L_08AA8288;
L_08AA827C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26940), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA82ACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 574u, 0x0897FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA82ACu) goto L_08AA82AC;
    return;
L_08AA82AC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA82C8;
      }
      goto L_08AA82B8;
    }
L_08AA82B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26940)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA82C8;
      }
      goto L_08AA82C4;
    }
L_08AA82C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AA82C8;
L_08AA82C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA82DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26940), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8304u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 5u, 0x08980020u>(ctx, &aot_mem) && ctx.pc == 0x08AA8304u) goto L_08AA8304;
    return;
L_08AA8304:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA8320;
      }
      goto L_08AA8310;
    }
L_08AA8310:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26940)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8320;
      }
      goto L_08AA831C;
    }
L_08AA831C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AA8320;
L_08AA8320:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26940), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8360u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 480u, 0x0897FB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA8360u) goto L_08AA8360;
    return;
L_08AA8360:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA837C;
      }
      goto L_08AA836C;
    }
L_08AA836C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26940)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA837C;
      }
      goto L_08AA8378;
    }
L_08AA8378:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AA837C;
L_08AA837C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26940), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA83BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 474u, 0x0897FAD4u>(ctx, &aot_mem) && ctx.pc == 0x08AA83BCu) goto L_08AA83BC;
    return;
L_08AA83BC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA83D8;
      }
      goto L_08AA83C8;
    }
L_08AA83C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26940)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA83D8;
      }
      goto L_08AA83D4;
    }
L_08AA83D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AA83D8;
L_08AA83D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA83EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26940), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8418u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 544u, 0x0897FE54u>(ctx, &aot_mem) && ctx.pc == 0x08AA8418u) goto L_08AA8418;
    return;
L_08AA8418:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA8434;
      }
      goto L_08AA8424;
    }
L_08AA8424:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26940)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8434;
      }
      goto L_08AA8430;
    }
L_08AA8430:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AA8434;
L_08AA8434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26940), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8474u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 559u, 0x0897FEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8474u) goto L_08AA8474;
    return;
L_08AA8474:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA8490;
      }
      goto L_08AA8480;
    }
L_08AA8480:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26940)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8490;
      }
      goto L_08AA848C;
    }
L_08AA848C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AA8490;
L_08AA8490:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA84A4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_08AA84FC;
      }
      goto L_08AA84B4;
    }
L_08AA84B4:
    ctx.gpr[8] = (0u | 114u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08AA84E4;
      }
      goto L_08AA84C0;
    }
L_08AA84C0:
    ctx.gpr[8] = (0u | 97u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[2] = (0u | 264u);
      if (branch_taken) {
          goto L_08AA8514;
      }
      goto L_08AA84CC;
    }
L_08AA84CC:
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[10] = (0u | 43u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 98u);
      if (branch_taken) {
          goto L_08AA8524;
      }
      goto L_08AA84E4;
    }
L_08AA84E4:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[10] = (0u | 43u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 98u);
      if (branch_taken) {
          goto L_08AA8524;
      }
      goto L_08AA84FC;
    }
L_08AA84FC:
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 768u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[10] = (0u | 43u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 98u);
      if (branch_taken) {
          goto L_08AA8524;
      }
      goto L_08AA8514;
    }
L_08AA8514:
    ctx.gpr[5] = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8524:
    if (ctx.gpr[4] == ctx.gpr[10]) {
    ctx.gpr[2] = (0u | 16u);
        goto L_08AA853C;
    }
    goto L_08AA852C;
L_08AA852C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AA8540;
      }
      goto L_08AA8538;
    }
L_08AA8538:
    ctx.gpr[2] = (0u | 16u);
    goto L_08AA853C;
L_08AA853C:
    ctx.gpr[8] = (0u | 2u);
    goto L_08AA8540;
L_08AA8540:
    if (ctx.gpr[4] == ctx.gpr[9]) {
    ctx.gpr[8] = (ctx.gpr[8] | 32768u);
        goto L_08AA8558;
    }
    goto L_08AA8548;
L_08AA8548:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA8564;
      }
      goto L_08AA8554;
    }
L_08AA8554:
    ctx.gpr[8] = (ctx.gpr[8] | 32768u);
    goto L_08AA8558;
L_08AA8558:
    ctx.gpr[4] = (ctx.gpr[8] | ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8564:
    ctx.gpr[4] = (0u | 116u);
    if (ctx.gpr[9] == ctx.gpr[4]) {
    ctx.gpr[8] = (ctx.gpr[8] | 16384u);
        goto L_08AA857C;
    }
    goto L_08AA8570;
L_08AA8570:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[8] | ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA8580;
      }
      goto L_08AA8578;
    }
L_08AA8578:
    ctx.gpr[8] = (ctx.gpr[8] | 16384u);
    goto L_08AA857C;
L_08AA857C:
    ctx.gpr[4] = (ctx.gpr[8] | ctx.gpr[7]);
    goto L_08AA8580;
L_08AA8580:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA8648;
      }
      goto L_08AA863C;
    }
L_08AA863C:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA8664;
      }
      goto L_08AA8648;
    }
L_08AA8648:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AA8658u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 559u, 0x0897FEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA8658u) goto L_08AA8658;
    return;
L_08AA8658:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8664:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08AA867Cu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AA86CC;
L_08AA867C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA86AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA86B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA86CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AA86D8;
      }
      goto L_08AA86D4;
    }
L_08AA86D4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AA86D8;
L_08AA86D8:
    // nop
    // nop
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA86E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8718u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    goto L_08AA8780;
L_08AA8718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_08AA8E70;
L_08AA8768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08AA87B8;
      }
      goto L_08AA87B0;
    }
L_08AA87B0:
    ctx.gpr[31] = (0x08AA87B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x08AA87B8u) goto L_08AA87B8;
    return;
L_08AA87B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA87D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA884C;
      }
      goto L_08AA87F0;
    }
L_08AA87F0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AA87F4;
L_08AA87F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA8820;
      }
      goto L_08AA8808;
    }
L_08AA8808:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA8818u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA8818u) goto L_08AA8818;
    return;
L_08AA8818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072)));
      if (branch_taken) {
          goto L_08AA882C;
      }
      goto L_08AA8820;
    }
L_08AA8820:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AA8828u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA8828u) goto L_08AA8828;
    return;
L_08AA8828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072)));
    goto L_08AA882C;
L_08AA882C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8844;
      }
      goto L_08AA8834;
    }
L_08AA8834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8844;
      }
      goto L_08AA8840;
    }
L_08AA8840:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AA8844;
L_08AA8844:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA87F4;
      }
      goto L_08AA884C;
    }
L_08AA884C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8870u);
    ctx.gpr[4] = (0u | 4u);
    goto L_08AA89F0;
L_08AA8870:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA887C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AA88A8;
      }
      goto L_08AA889C;
    }
L_08AA889C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072)));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072)));
        goto L_08AA88B4;
    }
    goto L_08AA88A8;
L_08AA88A8:
    ctx.gpr[31] = (0x08AA88B0u);
    // nop
    goto L_08AA8860;
L_08AA88B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072)));
    goto L_08AA88B4;
L_08AA88B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5072), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA88EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA897C;
      }
      goto L_08AA88FC;
    }
L_08AA88FC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8914:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6760));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8920:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6740));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA892C:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6684));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8938:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6632));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8944:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6564));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8950:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6532));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA895C:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6496));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8968:
    ctx.gpr[2] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6472));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8974:
    ctx.gpr[2] = (2221u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6444));
    goto L_08AA897C;
L_08AA897C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA89B8u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6388));
    goto L_08AA88EC;
L_08AA89B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA89C4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AA88EC;
L_08AA89C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA89D8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 295u, 0x08AB2518u>(ctx, &aot_mem) && ctx.pc == 0x08AA89D8u) goto L_08AA89D8;
    return;
L_08AA89D8:
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
L_08AA89F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8A00u);
    // nop
    goto L_08AA8984;
L_08AA8A00:
    ctx.gpr[31] = (0x08AA8A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 194u, 0x08A9C9F0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8A08u) goto L_08AA8A08;
    return;
L_08AA8A08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 194u, 0x08A9C9F0u>(ctx, &aot_mem) && ctx.pc == 0x08AA8A24u) goto L_08AA8A24;
    return;
L_08AA8A24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8A4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18404)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18404), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(18508));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18404), ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18404)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18404), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(18508));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18404), ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08AA8B18;
      }
      goto L_08AA8AFC;
    }
L_08AA8AFC:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18508));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA8B18;
      }
      goto L_08AA8B10;
    }
L_08AA8B10:
    ctx.gpr[31] = (0x08AA8B18u);
    // nop
    goto L_08AA8780;
L_08AA8B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6300));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA8C08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA8A4C;
L_08AA8C08:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA8DB8;
      }
      goto L_08AA8D84;
    }
L_08AA8D84:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18532));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA8DA4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA8ACC;
L_08AA8DA4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
        goto L_08AA8DBC;
    }
    goto L_08AA8DB0;
L_08AA8DB0:
    ctx.gpr[31] = (0x08AA8DB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AA8780;
L_08AA8DB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08AA8DBC;
L_08AA8DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6300));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA8E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18228));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AA8EC0;
    }
    goto L_08AA8EC0;
L_08AA8EC0:
    ctx.gpr[17] = (2219u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28528));
    goto L_08AA8EC8;
L_08AA8EC8:
    ctx.gpr[31] = (0x08AA8ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 239u, 0x08A9CCFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA8ED0u) goto L_08AA8ED0;
    return;
L_08AA8ED0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08AA8EFC;
    }
    goto L_08AA8ED8;
L_08AA8ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18392)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8EEC;
      }
      goto L_08AA8EE4;
    }
L_08AA8EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA8EEC;
      }
      goto L_08AA8EEC;
    }
L_08AA8EEC:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AA8EF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA8EF4u) goto L_08AA8EF4;
    return;
L_08AA8EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA8EC8;
      }
      goto L_08AA8EFC;
    }
L_08AA8EFC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA90B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21168));
    goto L_08AA9BE0;
L_08AA90B8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AA9120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA8A4C;
L_08AA9120:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21144));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AA9148u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    goto L_08AA9E1C;
L_08AA9148:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(18800));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA91B0;
      }
      goto L_08AA9188;
    }
L_08AA9188:
    ctx.gpr[4] = (1u << 16u);
    goto L_08AA918C;
L_08AA918C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08AA91A0;
    }
    goto L_08AA9198;
L_08AA9198:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA91A0;
      }
      goto L_08AA91A0;
    }
L_08AA91A0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA918C;
      }
      goto L_08AA91B0;
    }
L_08AA91B0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA9250;
      }
      goto L_08AA91BC;
    }
L_08AA91BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA9254;
    }
    goto L_08AA91C8;
L_08AA91C8:
    ctx.gpr[9] = (0u | 0u);
    goto L_08AA91CC;
L_08AA91CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA9240;
      }
      goto L_08AA91D8;
    }
L_08AA91D8:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    goto L_08AA91E4;
L_08AA91E4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AA922C;
    }
    goto L_08AA91F8;
L_08AA91F8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AA922C;
L_08AA922C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA91E4;
      }
      goto L_08AA9240;
    }
L_08AA9240:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA91CC;
      }
      goto L_08AA9250;
    }
L_08AA9250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA9254;
L_08AA9254:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9274;
      }
      goto L_08AA925C;
    }
L_08AA925C:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AA9264u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA9264u) goto L_08AA9264;
    return;
L_08AA9264:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA925C;
      }
      goto L_08AA9274;
    }
L_08AA9274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9294u);
    // nop
    goto L_08AA9160;
L_08AA9294:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA92BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA92D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 239u, 0x08A9CCFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA92D0u) goto L_08AA92D0;
    return;
L_08AA92D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA92E4;
      }
      goto L_08AA92DC;
    }
L_08AA92DC:
    ctx.gpr[31] = (0x08AA92E4u);
    // nop
    goto L_08AAB048;
L_08AA92E4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA92F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x08AA9308u) goto L_08AA9308;
    return;
L_08AA9308:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9314:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA932C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA9314;
L_08AA9348:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5040));
    ctx.gpr[5] = (0u | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18292), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA937C:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18292)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18292)));
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(18296)));
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(18296), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA93DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] >> 13u);
    ctx.gpr[4] = (ctx.gpr[4] << 13u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8192));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8192));
        goto L_08AA9414;
    }
    goto L_08AA9414;
L_08AA9414:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AA9424u);
    ctx.gpr[4] = (0u | 32u);
    goto L_08AA937C;
L_08AA9424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA943Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA92BC;
L_08AA943C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18292)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18292), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
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
L_08AA9474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA94A4;
      }
      goto L_08AA949C;
    }
L_08AA949C:
    ctx.gpr[31] = (0x08AA94A4u);
    // nop
    goto L_08AA932C;
L_08AA94A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA94B4;
      }
      goto L_08AA94AC;
    }
L_08AA94AC:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    goto L_08AA94B4;
L_08AA94B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18292)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA94E4;
      }
      goto L_08AA94D8;
    }
L_08AA94D8:
    ctx.gpr[31] = (0x08AA94E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA93DC;
L_08AA94E0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AA94E4;
L_08AA94E4:
    ctx.gpr[31] = (0x08AA94ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA937C;
L_08AA94EC:
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
L_08AA9504:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18296)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18292)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18296), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9548u);
    // nop
    goto L_08AA9504;
L_08AA9548:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9588;
      }
      goto L_08AA955C;
    }
L_08AA955C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9588;
      }
      goto L_08AA9568;
    }
L_08AA9568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18292), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA9580;
      }
      goto L_08AA9578;
    }
L_08AA9578:
    ctx.gpr[31] = (0x08AA9580u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AA92F8;
L_08AA9580:
    ctx.gpr[31] = (0x08AA9588u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA9504;
L_08AA9588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[5] & 65535u);
    ctx.gpr[17] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA96FC;
      }
      goto L_08AA95C4;
    }
L_08AA95C4:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    goto L_08AA95C8;
L_08AA95C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA9604;
      }
      goto L_08AA95E8;
    }
L_08AA95E8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
        goto L_08AA96F4;
    }
    goto L_08AA9604;
L_08AA9604:
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AA9638;
      }
      goto L_08AA9610;
    }
L_08AA9610:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA9644;
      }
      goto L_08AA9638;
    }
L_08AA9638:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08AA9644;
L_08AA9644:
    ctx.gpr[8] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08AA9650;
    }
    goto L_08AA9650;
L_08AA9650:
    ctx.gpr[8] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_08AA9664;
      }
      goto L_08AA965C;
    }
L_08AA965C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AA96F0;
      }
      goto L_08AA9664;
    }
L_08AA9664:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA96C0;
      }
      goto L_08AA966C;
    }
L_08AA966C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA969C;
      }
      goto L_08AA9674;
    }
L_08AA9674:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08AA9694u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AAAE88;
L_08AA9694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08AA96F4;
      }
      goto L_08AA969C;
    }
L_08AA969C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08AA96AC;
    }
    goto L_08AA96AC;
L_08AA96AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA96B8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA96B8u) goto L_08AA96B8;
    return;
L_08AA96B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08AA96F4;
      }
      goto L_08AA96C0;
    }
L_08AA96C0:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
        goto L_08AA96F4;
    }
    goto L_08AA96C8;
L_08AA96C8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA96E8;
      }
      goto L_08AA96D0;
    }
L_08AA96D0:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AA96E0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA96E0u) goto L_08AA96E0;
    return;
L_08AA96E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08AA96F4;
      }
      goto L_08AA96E8;
    }
L_08AA96E8:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA96F0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA96F0u) goto L_08AA96F0;
    return;
L_08AA96F0:
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    goto L_08AA96F4;
L_08AA96F4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA95C8;
      }
      goto L_08AA96FC;
    }
L_08AA96FC:
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
L_08AA9718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[23] & 1u);
    ctx.gpr[22] = (ctx.gpr[23] & 6u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    goto L_08AA9788;
L_08AA9788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08AA97B0;
      }
      goto L_08AA97A8;
    }
L_08AA97A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA97B0;
    }
L_08AA97B0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA97B8;
    }
L_08AA97B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA97DC;
      }
      goto L_08AA97C4;
    }
L_08AA97C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA97D4;
    }
L_08AA97D4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA97DC;
    }
L_08AA97DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA97EC;
      }
      goto L_08AA97E4;
    }
L_08AA97E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA97EC;
    }
L_08AA97EC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[4] & 6u);
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA97F4;
    }
L_08AA97F4:
    ctx.gpr[6] = (~(ctx.gpr[6] | 0u));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9808;
      }
      goto L_08AA9804;
    }
L_08AA9804:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AA9808;
L_08AA9808:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08AA98B8;
    }
    goto L_08AA9810;
L_08AA9810:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA9818;
    }
L_08AA9818:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AA982C;
      }
      goto L_08AA9820;
    }
L_08AA9820:
    ctx.gpr[4] = (ctx.gpr[4] & 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA982C;
    }
L_08AA982C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9860;
      }
      goto L_08AA983C;
    }
L_08AA983C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA9860;
      }
      goto L_08AA9848;
    }
L_08AA9848:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA9860;
      }
      goto L_08AA9850;
    }
L_08AA9850:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9860;
      }
      goto L_08AA9858;
    }
L_08AA9858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA9860;
    }
L_08AA9860:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_08AA9874;
    }
    goto L_08AA9868;
L_08AA9868:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA9870;
    }
L_08AA9870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_08AA9874;
L_08AA9874:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA987C;
    }
L_08AA987C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA9894u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    goto L_08AAB150;
L_08AA9894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA989C;
    }
L_08AA989C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA98AC;
      }
      goto L_08AA98A4;
    }
L_08AA98A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AA98AC;
L_08AA98AC:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08AA98C4;
    }
    goto L_08AA98B4;
L_08AA98B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08AA98B8;
L_08AA98B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AA98D0;
      }
      goto L_08AA98C4;
    }
L_08AA98C4:
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA9788;
      }
      goto L_08AA98D0;
    }
L_08AA98D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_08AA991C;
    }
    goto L_08AA991C;
L_08AA991C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA9938;
      }
      goto L_08AA9928;
    }
L_08AA9928:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08AA9938;
L_08AA9938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9988;
      }
      goto L_08AA9944;
    }
L_08AA9944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA9988;
      }
      goto L_08AA9950;
    }
L_08AA9950:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA9988;
      }
      goto L_08AA9964;
    }
L_08AA9964:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9988;
      }
      goto L_08AA9974;
    }
L_08AA9974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA9988;
      }
      goto L_08AA9980;
    }
L_08AA9980:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA9988u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA9988u) goto L_08AA9988;
    return;
L_08AA9988:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9994:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18404), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA99BC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA99D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[10] | 0u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9A24u);
    ctx.gpr[4] = (0u | 164u);
    goto L_08AA9474;
L_08AA9A24:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18288), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
        goto L_08AA9A84;
    }
    goto L_08AA9A70;
L_08AA9A70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA9A90;
      }
      goto L_08AA9A84;
    }
L_08AA9A84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    goto L_08AA9A90;
L_08AA9A90:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9AE8;
      }
      goto L_08AA9AC4;
    }
L_08AA9AC4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AA9AC8;
L_08AA9AC8:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AA9AE0;
    }
    goto L_08AA9AD0;
L_08AA9AD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9AE8;
      }
      goto L_08AA9ADC;
    }
L_08AA9ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA9AE0;
L_08AA9AE0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08AA9AC8;
    }
    goto L_08AA9AE8;
L_08AA9AE8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA9B04;
      }
      goto L_08AA9AF0;
    }
L_08AA9AF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA9B04;
      }
      goto L_08AA9AFC;
    }
L_08AA9AFC:
    ctx.gpr[31] = (0x08AA9B04u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA9904;
L_08AA9B04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9B6C;
      }
      goto L_08AA9B48;
    }
L_08AA9B48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    goto L_08AA9B4C;
L_08AA9B4C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA9B64;
    }
    goto L_08AA9B54;
L_08AA9B54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9B6C;
      }
      goto L_08AA9B60;
    }
L_08AA9B60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA9B64;
L_08AA9B64:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
        goto L_08AA9B4C;
    }
    goto L_08AA9B6C;
L_08AA9B6C:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AA9B80;
    }
    goto L_08AA9B74;
L_08AA9B74:
    ctx.gpr[31] = (0x08AA9B7Cu);
    // nop
    goto L_08AAB048;
L_08AA9B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AA9B80;
L_08AA9B80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AA9BA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AA99D0;
L_08AA9BA4:
    ctx.gpr[31] = (0x08AA9BACu);
    // nop
    goto L_08AA9E1C;
L_08AA9BAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9C08u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA9474;
L_08AA9C08:
    ctx.gpr[6] = (ctx.gpr[17] & 255u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AA9C34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AA99D0;
L_08AA9C34:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA9CE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18288)));
    goto L_08AA9904;
L_08AA9CE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18288)));
    goto L_08AA9CE4;
L_08AA9CE4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9D24;
      }
      goto L_08AA9CEC;
    }
L_08AA9CEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA9D24;
      }
      goto L_08AA9CF8;
    }
L_08AA9CF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18288), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AA9D0Cu);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08AA9534;
L_08AA9D0C:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18288)));
        goto L_08AA9CE4;
    }
    goto L_08AA9D14;
L_08AA9D14:
    ctx.gpr[31] = (0x08AA9D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA9534;
L_08AA9D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18288)));
      if (branch_taken) {
          goto L_08AA9CE4;
      }
      goto L_08AA9D24;
    }
L_08AA9D24:
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
L_08AA9D50:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9D5C:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AA9DD0;
      }
      goto L_08AA9DB4;
    }
L_08AA9DB4:
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_08AA9DBC;
L_08AA9DBC:
    if (ctx.gpr[9] == ctx.gpr[8]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_08AA9DD4;
    }
    goto L_08AA9DC4;
L_08AA9DC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_08AA9DBC;
    }
    goto L_08AA9DD0;
L_08AA9DD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08AA9DD4;
L_08AA9DD4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA9E08;
      }
      goto L_08AA9DDC;
    }
L_08AA9DDC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AA9DFCu);
    ctx.gpr[10] = (0u | 0u);
    goto L_08AA9718;
L_08AA9DFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9E08;
      }
      goto L_08AA9E04;
    }
L_08AA9E04:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AA9E08;
L_08AA9E08:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA9E1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA9E70;
      }
      goto L_08AA9E64;
    }
L_08AA9E64:
    ctx.gpr[31] = (0x08AA9E6Cu);
    // nop
    goto L_08AA9994;
L_08AA9E6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    goto L_08AA9E70;
L_08AA9E70:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[17] & 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA9EB0;
      }
      goto L_08AA9E9C;
    }
L_08AA9E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA9EB8;
      }
      goto L_08AA9EB0;
    }
L_08AA9EB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_08AA9EB8;
L_08AA9EB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AA9FF8;
      }
      goto L_08AA9EC4;
    }
L_08AA9EC4:
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AA9ECC;
L_08AA9ECC:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08AA9FE0;
      }
      goto L_08AA9ED8;
    }
L_08AA9ED8:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA9FE4;
    }
    goto L_08AA9EE0;
L_08AA9EE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA9F50;
      }
      goto L_08AA9EE8;
    }
L_08AA9EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA9FE4;
    }
    goto L_08AA9EF4;
L_08AA9EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA9F28;
      }
      goto L_08AA9F00;
    }
L_08AA9F00:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AA9F24u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    goto L_08AA9718;
L_08AA9F24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA9F28;
L_08AA9F28:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA9FE4;
    }
    goto L_08AA9F30;
L_08AA9F30:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08AA9F40;
      }
      goto L_08AA9F38;
    }
L_08AA9F38:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08AA9F40;
L_08AA9F40:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (2222u << 16u);
        goto L_08AA9FF4;
    }
    goto L_08AA9F48;
L_08AA9F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA9FE4;
      }
      goto L_08AA9F50;
    }
L_08AA9F50:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08AA9F64;
      }
      goto L_08AA9F58;
    }
L_08AA9F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA9FE8;
      }
      goto L_08AA9F64;
    }
L_08AA9F64:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA9FB8;
      }
      goto L_08AA9F6C;
    }
L_08AA9F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA9FA0;
      }
      goto L_08AA9F78;
    }
L_08AA9F78:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08AA9F9Cu);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_08AA9718;
L_08AA9F9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA9FA0;
L_08AA9FA0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AA9FE4;
    }
    goto L_08AA9FA8;
L_08AA9FA8:
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
      if (branch_taken) {
          goto L_08AA9FF8;
      }
      goto L_08AA9FB8;
    }
L_08AA9FB8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA9FE0;
      }
      goto L_08AA9FC0;
    }
L_08AA9FC0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AA9FD8u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA99BC;
L_08AA9FD8:
    ctx.gpr[31] = (0x08AA9FE0u);
    // nop
    goto L_08AAB048;
L_08AA9FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA9FE4;
L_08AA9FE4:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AA9FE8;
L_08AA9FE8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AA9ECC;
    }
    goto L_08AA9FF0;
L_08AA9FF0:
    ctx.gpr[23] = (2222u << 16u);
    goto L_08AA9FF4;
L_08AA9FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
    goto L_08AA9FF8;
L_08AA9FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAA078;
      }
      goto L_08AAA004;
    }
L_08AAA004:
    ctx.gpr[18] = (0u | 65535u);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AAA014;
L_08AAA014:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AAA038;
      }
      goto L_08AAA01C;
    }
L_08AAA01C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18400)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAA02Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AA9598;
L_08AAA02C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAA06C;
      }
      goto L_08AAA038;
    }
L_08AAA038:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AAA050;
      }
      goto L_08AAA040;
    }
L_08AAA040:
    ctx.gpr[31] = (0x08AAA048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAAC3C;
L_08AAA048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAA070;
      }
      goto L_08AAA050;
    }
L_08AAA050:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AAA070;
    }
    goto L_08AAA058;
L_08AAA058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AAA070;
    }
    goto L_08AAA064;
L_08AAA064:
    ctx.gpr[31] = (0x08AAA06Cu);
    // nop
    goto L_08AA9904;
L_08AAA06C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AAA070;
L_08AAA070:
    if (ctx.gpr[16] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAA014;
    }
    goto L_08AAA078;
L_08AAA078:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AAA098;
      }
      goto L_08AAA080;
    }
L_08AAA080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AAA090u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AA99BC;
L_08AAA090:
    ctx.gpr[31] = (0x08AAA098u);
    // nop
    goto L_08AAB048;
L_08AAA098:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
        goto L_08AAA0F0;
    }
    goto L_08AAA0A4;
L_08AAA0A4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18400)));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
        goto L_08AAA0F0;
    }
    goto L_08AAA0B8;
L_08AAA0B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAA0DC;
      }
      goto L_08AAA0CC;
    }
L_08AAA0CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08AAA0D0;
L_08AAA0D0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != ctx.gpr[4]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08AAA0D0;
    }
    goto L_08AAA0DC;
L_08AAA0DC:
    ctx.gpr[31] = (0x08AAA0E4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AA9598;
L_08AAA0E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
    goto L_08AAA0F0;
L_08AAA0F0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18288)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_08AAA158;
    }
    goto L_08AAA110;
L_08AAA110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26944), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AAA13C;
      }
      goto L_08AAA12C;
    }
L_08AAA12C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26952), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AAA140;
      }
      goto L_08AAA13C;
    }
L_08AAA13C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26952), ctx.gpr[5]);
    goto L_08AAA140;
L_08AAA140:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AAA150u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 292u, 0x08AB24ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAA150u) goto L_08AAA150;
    return;
L_08AAA150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA170;
      }
      goto L_08AAA158;
    }
L_08AAA158:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAA170;
      }
      goto L_08AAA160;
    }
L_08AAA160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AAA170u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    goto L_08AAAF04;
L_08AAA170:
    ctx.gpr[2] = (0u | 0u);
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
L_08AAA1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AAA1CC;
      }
      goto L_08AAA1B4;
    }
L_08AAA1B4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18600));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAA1CC;
      }
      goto L_08AAA1C4;
    }
L_08AAA1C4:
    ctx.gpr[31] = (0x08AAA1CCu);
    // nop
    goto L_08AA8780;
L_08AAA1CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAA2F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA8A4C;
L_08AAA2F0:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18616));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18344));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAA4FC;
      }
      goto L_08AAA4C8;
    }
L_08AAA4C8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18616));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAA4E8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA8ACC;
L_08AAA4E8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
        goto L_08AAA500;
    }
    goto L_08AAA4F4;
L_08AAA4F4:
    ctx.gpr[31] = (0x08AAA4FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AA8780;
L_08AAA4FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08AAA500;
L_08AAA500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6184));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18356));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAA5D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA8A4C;
L_08AAA5D4:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18640));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA72C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18380));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAA7E0;
      }
      goto L_08AAA7AC;
    }
L_08AAA7AC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18640));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAA7CCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA8ACC;
L_08AAA7CC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
        goto L_08AAA7E4;
    }
    goto L_08AAA7D8;
L_08AAA7D8:
    ctx.gpr[31] = (0x08AAA7E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AA8780;
L_08AAA7E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08AAA7E4;
L_08AAA7E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA80C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6184));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA83C:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[9] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(18416)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AAA8B8;
      }
      goto L_08AAA8A4;
    }
L_08AAA8A4:
    ctx.gpr[31] = (0x08AAA8ACu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AA86E8;
L_08AAA8AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA8B8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAA8D4;
      }
      goto L_08AAA8C0;
    }
L_08AAA8C0:
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AAA8C8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAA8C8u) goto L_08AAA8C8;
    return;
L_08AAA8C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA8D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AAA8E0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAA8E0u) goto L_08AAA8E0;
    return;
L_08AAA8E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAA8EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (0u < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AAA960;
      }
      goto L_08AAA958;
    }
L_08AAA958:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_08AAA9D0;
    }
    goto L_08AAA960;
L_08AAA960:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AAA9B4;
      }
      goto L_08AAA970;
    }
L_08AAA970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18416)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AAA98C;
      }
      goto L_08AAA97C;
    }
L_08AAA97C:
    ctx.gpr[31] = (0x08AAA984u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA8730;
L_08AAA984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAA99C;
      }
      goto L_08AAA98C;
    }
L_08AAA98C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAA998u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAA998u) goto L_08AAA998;
    return;
L_08AAA998:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAA99C;
L_08AAA99C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAA9AC;
      }
      goto L_08AAA9A4;
    }
L_08AAA9A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18416)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AAA9AC;
L_08AAA9AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAAAA0;
      }
      goto L_08AAA9B4;
    }
L_08AAA9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18416)));
    ctx.gpr[5] = (~(ctx.gpr[19] | 0u));
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAAAA0;
      }
      goto L_08AAA9CC;
    }
L_08AAA9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_08AAA9D0;
L_08AAA9D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AAAA08;
      }
      goto L_08AAA9D8;
    }
L_08AAA9D8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08AAA9E4u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AAA83C;
L_08AAA9E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    goto L_08AAAA08;
L_08AAAA08:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAAA88;
      }
      goto L_08AAAA10;
    }
L_08AAAA10:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AAAA88;
      }
      goto L_08AAAA1C;
    }
L_08AAAA1C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08AAAA54;
      }
      goto L_08AAAA24;
    }
L_08AAAA24:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08AAAA4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAAA4Cu) goto L_08AAAA4C;
    return;
L_08AAAA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAAA5C;
      }
      goto L_08AAAA54;
    }
L_08AAAA54:
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08AAAA5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAAA5Cu) goto L_08AAAA5C;
    return;
L_08AAAA5C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAAA70;
      }
      goto L_08AAAA64;
    }
L_08AAAA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AAAA70;
L_08AAAA70:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
        goto L_08AAAA78;
    }
    goto L_08AAAA78;
L_08AAAA78:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AAAA1C;
      }
      goto L_08AAAA88;
    }
L_08AAAA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AAAAA0;
      }
      goto L_08AAAA94;
    }
L_08AAAA94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    goto L_08AAAAA0;
L_08AAAAA0:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAB90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAABBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AAA8EC;
L_08AAABBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AAAC84;
      }
      goto L_08AAAC7C;
    }
L_08AAAC7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAAC94;
      }
      goto L_08AAAC84;
    }
L_08AAAC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AAAC94;
L_08AAAC94:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
        goto L_08AAACD4;
    }
    goto L_08AAAC9C;
L_08AAAC9C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[21] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AAACD0;
      }
      goto L_08AAACB4;
    }
L_08AAACB4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x08AAACC0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAACC0u) goto L_08AAACC0;
    return;
L_08AAACC0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AAACB4;
      }
      goto L_08AAACD0;
    }
L_08AAACD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    goto L_08AAACD4;
L_08AAACD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAACF4;
      }
      goto L_08AAACDC;
    }
L_08AAACDC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08AAACF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AAA880;
L_08AAACF4:
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
L_08AAAD1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AAAE58;
      }
      goto L_08AAAD6C;
    }
L_08AAAD6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AAAD84u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AAA83C;
L_08AAAD84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AAADE4;
      }
      goto L_08AAADAC;
    }
L_08AAADAC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18416)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[5] | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAADDC;
      }
      goto L_08AAADD4;
    }
L_08AAADD4:
    ctx.gpr[31] = (0x08AAADDCu);
    // nop
    goto L_08AAAECC;
L_08AAADDC:
    { const std::uint32_t dividend = ctx.gpr[22]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.lo);
    goto L_08AAADE4;
L_08AAADE4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AAAE30;
      }
      goto L_08AAADEC;
    }
L_08AAADEC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AAAE30;
      }
      goto L_08AAAE08;
    }
L_08AAAE08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    jump_target = ctx.gpr[20];
    ctx.gpr[31] = (0x08AAAE20u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAAE20u) goto L_08AAAE20;
    return;
L_08AAAE20:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AAAE08;
      }
      goto L_08AAAE30;
    }
L_08AAAE30:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAAE58;
      }
      goto L_08AAAE44;
    }
L_08AAAE44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AAAE58u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    goto L_08AAA880;
L_08AAAE58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAE88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAAE9Cu);
    ctx.gpr[10] = (0u | 0u);
    goto L_08AAAD1C;
L_08AAAE9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAAEDCu);
    ctx.gpr[4] = (0u | 9u);
    goto L_08AA89F0;
L_08AAAEDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAEE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAAEF8u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08AA89F0;
L_08AAAEF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAAF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18404)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[9] = (0u | 65535u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18428));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAAF6Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 291u, 0x08AB2448u>(ctx, &aot_mem) && ctx.pc == 0x08AAAF6Cu) goto L_08AAAF6C;
    return;
L_08AAAF6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAAF84;
      }
      goto L_08AAAF74;
    }
L_08AAAF74:
    ctx.gpr[31] = (0x08AAAF7Cu);
    // nop
    goto L_08AAB0B8;
L_08AAAF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AAB018;
      }
      goto L_08AAAF84;
    }
L_08AAAF84:
    ctx.gpr[31] = (0x08AAAF8Cu);
    // nop
    goto L_08AA99BC;
L_08AAAF8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x08AAAF9Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    goto L_08AA9D5C;
L_08AAAF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (0x08AAAFACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_08AA9D88;
L_08AAAFAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AAAFC4;
      }
      goto L_08AAAFB4;
    }
L_08AAAFB4:
    ctx.gpr[31] = (0x08AAAFBCu);
    // nop
    goto L_08AA9B2C;
L_08AAAFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB00C;
      }
      goto L_08AAAFC4;
    }
L_08AAAFC4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(18576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AAAFD8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AA9D88;
L_08AAAFD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AAB004;
      }
      goto L_08AAAFE0;
    }
L_08AAAFE0:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08AAAFECu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AA9BE0;
L_08AAAFEC:
    ctx.gpr[31] = (0x08AAAFF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA8B8C;
L_08AAAFF4:
    ctx.gpr[31] = (0x08AAAFFCu);
    // nop
    goto L_08AA9E1C;
L_08AAAFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB00C;
      }
      goto L_08AAB004;
    }
L_08AAB004:
    ctx.gpr[31] = (0x08AAB00Cu);
    // nop
    goto L_08AAB048;
L_08AAB00C:
    ctx.gpr[31] = (0x08AAB014u);
    // nop
    goto L_08AA9CC0;
L_08AAB014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AAB018;
L_08AAB018:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[31] = (0x08AAB024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 194u, 0x08A9C9F0u>(ctx, &aot_mem) && ctx.pc == 0x08AAB024u) goto L_08AAB024;
    return;
L_08AAB024:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAB060u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18424), ctx.gpr[4]);
    goto L_08AAB074;
L_08AAB060:
    ctx.gpr[31] = (0x08AAB068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 194u, 0x08A9C9F0u>(ctx, &aot_mem) && ctx.pc == 0x08AAB068u) goto L_08AAB068;
    return;
L_08AAB068:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB094;
      }
      goto L_08AAB08C;
    }
L_08AAB08C:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AAB094u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAB094u) goto L_08AAB094;
    return;
L_08AAB094:
    ctx.gpr[31] = (0x08AAB09Cu);
    ctx.gpr[4] = (0u | 3u);
    goto L_08AA89F0;
L_08AAB09C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB0B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB0D8;
      }
      goto L_08AAB0D0;
    }
L_08AAB0D0:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AAB0D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAB0D8u) goto L_08AAB0D8;
    return;
L_08AAB0D8:
    ctx.gpr[31] = (0x08AAB0E0u);
    // nop
    goto L_08AAB074;
L_08AAB0E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AAB1A4;
    }
    goto L_08AAB1A4;
L_08AAB1A4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AAB348;
      }
      goto L_08AAB1AC;
    }
L_08AAB1AC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAB1C0;
      }
      goto L_08AAB1B8;
    }
L_08AAB1B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    goto L_08AAB1C0;
L_08AAB1C0:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
        goto L_08AAB1F8;
    }
    goto L_08AAB1C8;
L_08AAB1C8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (0u | 0u);
        goto L_08AAB1F0;
    }
    goto L_08AAB1D4;
L_08AAB1D4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[10] ^ 89u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08AAB200;
      }
      goto L_08AAB1F0;
    }
L_08AAB1F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08AAB200;
      }
      goto L_08AAB1F8;
    }
L_08AAB1F8:
    ctx.gpr[9] = (ctx.gpr[10] & 4u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    goto L_08AAB200;
L_08AAB200:
    if (ctx.gpr[8] == ctx.gpr[17]) {
    ctx.gpr[5] = (ctx.gpr[10] & 8u);
        goto L_08AAB224;
    }
    goto L_08AAB208;
L_08AAB208:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != ctx.gpr[11]) {
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[20]);
        goto L_08AAB264;
    }
    goto L_08AAB218;
L_08AAB218:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[20]);
        goto L_08AAB264;
    }
    goto L_08AAB220;
L_08AAB220:
    ctx.gpr[5] = (ctx.gpr[10] & 8u);
    goto L_08AAB224;
L_08AAB224:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[20]);
        goto L_08AAB264;
    }
    goto L_08AAB230;
L_08AAB230:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[20]);
        goto L_08AAB264;
    }
    goto L_08AAB238;
L_08AAB238:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAB260;
      }
      goto L_08AAB240;
    }
L_08AAB240:
    ctx.gpr[8] = (ctx.gpr[10] & 1u);
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08AAB25C;
    }
    goto L_08AAB24C;
L_08AAB24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08AAB260;
      }
      goto L_08AAB25C;
    }
L_08AAB25C:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    goto L_08AAB260;
L_08AAB260:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[20]);
    goto L_08AAB264;
L_08AAB264:
    ctx.gpr[8] = (ctx.gpr[10] & 2u);
    ctx.gpr[8] = (ctx.gpr[4] | ctx.gpr[8]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAB1AC;
      }
      goto L_08AAB278;
    }
L_08AAB278:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB348;
      }
      goto L_08AAB280;
    }
L_08AAB280:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08AAB28C;
L_08AAB28C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAB2C0;
      }
      goto L_08AAB298;
    }
L_08AAB298:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB2C0;
      }
      goto L_08AAB2B4;
    }
L_08AAB2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AAB2C0;
L_08AAB2C0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAB2E8;
      }
      goto L_08AAB2C8;
    }
L_08AAB2C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAB2E8;
      }
      goto L_08AAB2D8;
    }
L_08AAB2D8:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB2E8;
      }
      goto L_08AAB2E4;
    }
L_08AAB2E4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AAB2E8;
L_08AAB2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
        goto L_08AAB338;
    }
    goto L_08AAB2F4;
L_08AAB2F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAB334;
      }
      goto L_08AAB2FC;
    }
L_08AAB2FC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAB314u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_08AAB150;
L_08AAB314:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
        goto L_08AAB338;
    }
    goto L_08AAB31C;
L_08AAB31C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB32C;
      }
      goto L_08AAB324;
    }
L_08AAB324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AAB32C;
L_08AAB32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAB348;
      }
      goto L_08AAB334;
    }
L_08AAB334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    goto L_08AAB338;
L_08AAB338:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAB28C;
      }
      goto L_08AAB348;
    }
L_08AAB348:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB37C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AAB3AC;
      }
      goto L_08AAB3A4;
    }
L_08AAB3A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AAB3FC;
      }
      goto L_08AAB3AC;
    }
L_08AAB3AC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAB3CC;
      }
      goto L_08AAB3B4;
    }
L_08AAB3B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08AAB3D4;
    }
    goto L_08AAB3C4;
L_08AAB3C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAB3D4;
      }
      goto L_08AAB3CC;
    }
L_08AAB3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AAB3FC;
      }
      goto L_08AAB3D4;
    }
L_08AAB3D4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08AAB3F0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AAB150;
L_08AAB3F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAB3FC;
      }
      goto L_08AAB3F8;
    }
L_08AAB3F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AAB3FC;
L_08AAB3FC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAB42Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18684));
    goto L_08AA9BE0;
L_08AAB42C:
    ctx.gpr[31] = (0x08AAB434u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAA274;
L_08AAB434:
    ctx.gpr[31] = (0x08AAB43Cu);
    // nop
    goto L_08AA9E1C;
L_08AAB43C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAB464u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18704));
    goto L_08AA9BE0;
L_08AAB464:
    ctx.gpr[31] = (0x08AAB46Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAA558;
L_08AAB46C:
    ctx.gpr[31] = (0x08AAB474u);
    // nop
    goto L_08AA9E1C;
L_08AAB474:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB4EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[7] + 0u);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAB8AC;
      }
      goto L_08AAB50C;
    }
L_08AAB50C:
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08AAB66C;
      }
      goto L_08AAB518;
    }
L_08AAB518:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    if (ctx.gpr[4] != 0u) ctx.gpr[5] = (0u);
      if (branch_taken) {
          goto L_08AAB54C;
      }
      goto L_08AAB530;
    }
L_08AAB530:
    ctx.gpr[2] = (255u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    if (ctx.gpr[2] != 0u) ctx.gpr[5] = (ctx.gpr[4]);
    goto L_08AAB54C;
L_08AAB54C:
    ctx.gpr[3] = (2221u << 16u);
    ctx.gpr[2] = (ctx.gpr[6] >> (ctx.gpr[5] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6152));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[2] - ctx.gpr[4]);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (ctx.gpr[9] >> 16u);
        goto L_08AAB590;
    }
    goto L_08AAB574;
L_08AAB574:
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[14] >> (ctx.gpr[2] & 31u));
    ctx.gpr[3] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[10] = (ctx.gpr[3] | ctx.gpr[2]);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] >> 16u);
    goto L_08AAB590;
L_08AAB590:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.gpr[9] & 65535u);
    ctx.gpr[4] = (ctx.gpr[14] >> 16u);
    if (ctx.gpr[7] == 0u) {
    rt.stop("guest executed break at 0x08AAB5A0"); return;
        goto L_08AAB5A4;
    }
    goto L_08AAB5A4;
L_08AAB5A4:
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[11] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB5F0;
      }
      goto L_08AAB5CC;
    }
L_08AAB5CC:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB5F0;
      }
      goto L_08AAB5DC;
    }
L_08AAB5DC:
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
        goto L_08AAB5F4;
    }
    goto L_08AAB5E8;
L_08AAB5E8:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    goto L_08AAB5F0;
L_08AAB5F0:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    goto L_08AAB5F4;
L_08AAB5F4:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[14] & 65535u);
    if (ctx.gpr[7] == 0u) {
    rt.stop("guest executed break at 0x08AAB600"); return;
        goto L_08AAB604;
    }
    goto L_08AAB604;
L_08AAB604:
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB648;
      }
      goto L_08AAB62C;
    }
L_08AAB62C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB648;
      }
      goto L_08AAB63C;
    }
L_08AAB63C:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[2]);
    goto L_08AAB648;
L_08AAB648:
    ctx.gpr[2] = (ctx.gpr[11] << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[8]);
    goto L_08AAB650;
L_08AAB650:
    ctx.gpr[6] = (0u + 0u);
    goto L_08AAB654;
L_08AAB654:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAB66C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAB690;
      }
      goto L_08AAB674;
    }
L_08AAB674:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    if (ctx.gpr[6] == 0u) {
    rt.stop("guest executed break at 0x08AAB680"); return;
        goto L_08AAB684;
    }
    goto L_08AAB684;
L_08AAB684:
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[2] = (0u | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8));
    goto L_08AAB690;
L_08AAB690:
    ctx.gpr[4] = (ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    if (ctx.gpr[4] != 0u) ctx.gpr[5] = (0u);
      if (branch_taken) {
          goto L_08AAB6C0;
      }
      goto L_08AAB6A4;
    }
L_08AAB6A4:
    ctx.gpr[2] = (255u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    if (ctx.gpr[2] != 0u) ctx.gpr[5] = (ctx.gpr[4]);
    goto L_08AAB6C0;
L_08AAB6C0:
    ctx.gpr[3] = (2221u << 16u);
    ctx.gpr[2] = (ctx.gpr[9] >> (ctx.gpr[5] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6152));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AAB7B8;
      }
      goto L_08AAB6E8;
    }
L_08AAB6E8:
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[9]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[9] >> 16u);
    ctx.gpr[16] = (ctx.gpr[9] & 65535u);
    goto L_08AAB6F8;
L_08AAB6F8:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[14] >> 16u);
    if (ctx.gpr[8] == 0u) {
    rt.stop("guest executed break at 0x08AAB704"); return;
        goto L_08AAB708;
    }
    goto L_08AAB708;
L_08AAB708:
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[11] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[7] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB754;
      }
      goto L_08AAB730;
    }
L_08AAB730:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB754;
      }
      goto L_08AAB740;
    }
L_08AAB740:
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
        goto L_08AAB758;
    }
    goto L_08AAB74C;
L_08AAB74C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08AAB754;
L_08AAB754:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    goto L_08AAB758;
L_08AAB758:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[14] & 65535u);
    if (ctx.gpr[8] == 0u) {
    rt.stop("guest executed break at 0x08AAB764"); return;
        goto L_08AAB768;
    }
    goto L_08AAB768;
L_08AAB768:
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[10] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB7AC;
      }
      goto L_08AAB790;
    }
L_08AAB790:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB7AC;
      }
      goto L_08AAB7A0;
    }
L_08AAB7A0:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[2]);
    goto L_08AAB7AC;
L_08AAB7AC:
    ctx.gpr[2] = (ctx.gpr[11] << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[10]);
    goto L_08AAB654;
L_08AAB7B8:
    ctx.gpr[9] = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (ctx.gpr[9] >> 16u);
    ctx.gpr[12] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.gpr[9] & 65535u);
    ctx.gpr[3] = (ctx.gpr[14] >> (ctx.gpr[5] & 31u));
    ctx.gpr[2] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[10] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[10] >> 16u);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[7] & 31u));
    if (ctx.gpr[8] == 0u) {
    rt.stop("guest executed break at 0x08AAB7E4"); return;
        goto L_08AAB7E8;
    }
    goto L_08AAB7E8;
L_08AAB7E8:
    ctx.gpr[11] = (ctx.gpr[8] + 0u);
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[15] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[13] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB83C;
      }
      goto L_08AAB818;
    }
L_08AAB818:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[15] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB83C;
      }
      goto L_08AAB828;
    }
L_08AAB828:
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
        goto L_08AAB840;
    }
    goto L_08AAB834;
L_08AAB834:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08AAB83C;
L_08AAB83C:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
    goto L_08AAB840;
L_08AAB840:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[10] & 65535u);
    if (ctx.gpr[11] == 0u) {
    rt.stop("guest executed break at 0x08AAB84C"); return;
        goto L_08AAB850;
    }
    goto L_08AAB850;
L_08AAB850:
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[13] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[4] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB89C;
      }
      goto L_08AAB878;
    }
L_08AAB878:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB89C;
      }
      goto L_08AAB888;
    }
L_08AAB888:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[15] << 16u);
      if (branch_taken) {
          goto L_08AAB8A0;
      }
      goto L_08AAB894;
    }
L_08AAB894:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    goto L_08AAB89C;
L_08AAB89C:
    ctx.gpr[2] = (ctx.gpr[15] << 16u);
    goto L_08AAB8A0;
L_08AAB8A0:
    ctx.gpr[6] = (ctx.gpr[2] | ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[4] - ctx.gpr[13]);
    goto L_08AAB6F8;
L_08AAB8AC:
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[4] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAB654;
      }
      goto L_08AAB8BC;
    }
L_08AAB8BC:
    ctx.gpr[2] = (0u | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    if (ctx.gpr[4] != 0u) ctx.gpr[5] = (0u);
      if (branch_taken) {
          goto L_08AAB8F4;
      }
      goto L_08AAB8D8;
    }
L_08AAB8D8:
    ctx.gpr[2] = (255u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    if (ctx.gpr[2] != 0u) ctx.gpr[5] = (ctx.gpr[4]);
    goto L_08AAB8F4;
L_08AAB8F4:
    ctx.gpr[3] = (2221u << 16u);
    ctx.gpr[2] = (ctx.gpr[8] >> (ctx.gpr[5] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6152));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AAB934;
      }
      goto L_08AAB91C;
    }
L_08AAB91C:
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[2]);
    ctx.gpr[4] = (0u < ctx.gpr[3] ? 1u : 0u);
    goto L_08AAB650;
L_08AAB934:
    ctx.gpr[2] = (ctx.gpr[9] >> (ctx.gpr[5] & 31u));
    ctx.gpr[3] = (ctx.gpr[8] << (ctx.gpr[7] & 31u));
    ctx.gpr[8] = (ctx.gpr[3] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[8] >> 16u);
    ctx.gpr[12] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.gpr[8] & 65535u);
    ctx.gpr[3] = (ctx.gpr[14] >> (ctx.gpr[5] & 31u));
    ctx.gpr[2] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[10] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[10] >> 16u);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (ctx.gpr[9] << (ctx.gpr[7] & 31u));
    if (ctx.gpr[11] == 0u) {
    rt.stop("guest executed break at 0x08AAB96C"); return;
        goto L_08AAB970;
    }
    goto L_08AAB970;
L_08AAB970:
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[15] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[13] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AAB9BC;
      }
      goto L_08AAB998;
    }
L_08AAB998:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[15] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAB9BC;
      }
      goto L_08AAB9A8;
    }
L_08AAB9A8:
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[13] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
        goto L_08AAB9C0;
    }
    goto L_08AAB9B4;
L_08AAB9B4:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08AAB9BC;
L_08AAB9BC:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[13]);
    goto L_08AAB9C0;
L_08AAB9C0:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[10] & 65535u);
    if (ctx.gpr[11] == 0u) {
    rt.stop("guest executed break at 0x08AAB9CC"); return;
        goto L_08AAB9D0;
    }
    goto L_08AAB9D0;
L_08AAB9D0:
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[5] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[13] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[5] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08AABA1C;
      }
      goto L_08AAB9F8;
    }
L_08AAB9F8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AABA1C;
      }
      goto L_08AABA08;
    }
L_08AABA08:
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[15] << 16u);
      if (branch_taken) {
          goto L_08AABA20;
      }
      goto L_08AABA14;
    }
L_08AABA14:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08AABA1C;
L_08AABA1C:
    ctx.gpr[2] = (ctx.gpr[15] << 16u);
    goto L_08AABA20;
L_08AABA20:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[13]);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[4]) * static_cast<std::uint64_t>(ctx.gpr[9]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[3] = (ctx.hi);
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
        goto L_08AAB650;
    }
    goto L_08AABA3C;
L_08AABA3C:
    ctx.gpr[2] = (ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[14] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AAB654;
      }
      goto L_08AABA58;
    }
L_08AABA58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08AAB654;
L_08AABA60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AABA78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 103u, 0x08AAC768u>(ctx, &aot_mem) && ctx.pc == 0x08AABA78u) goto L_08AABA78;
    return;
L_08AABA78:
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[9] = (ctx.gpr[9] << 30u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[2]);
    ctx.gpr[31] = (0x08AABAA0u);
    ctx.gpr[8] = (ctx.gpr[8] << 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 98u, 0x08AAC6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AABAA0u) goto L_08AABAA0;
    return;
L_08AABAA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABAAC:
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AABB00;
      }
      goto L_08AABAC8;
    }
L_08AABAC8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABB00;
      }
      goto L_08AABAD8;
    }
L_08AABAD8:
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AABB10;
      }
      goto L_08AABAE4;
    }
L_08AABAE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AABB00;
      }
      goto L_08AABAEC;
    }
L_08AABAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6176));
      if (branch_taken) {
          goto L_08AABB08;
      }
      goto L_08AABB00;
    }
L_08AABB00:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABB08:
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
    goto L_08AABB00;
L_08AABB10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABB00;
      }
      goto L_08AABB18;
    }
L_08AABB18:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
      if (branch_taken) {
          goto L_08AABB70;
      }
      goto L_08AABB24;
    }
L_08AABB24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AABB00;
      }
      goto L_08AABB2C;
    }
L_08AABB2C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[10] + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AABB00;
L_08AABB70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AABB00;
      }
      goto L_08AABB78;
    }
L_08AABB78:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[11] - ctx.gpr[9]);
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[2] = (0u - ctx.gpr[2]);
        goto L_08AABB9C;
    }
    goto L_08AABB9C;
L_08AABB9C:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AABDCC;
      }
      goto L_08AABBA8;
    }
L_08AABBA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AABBEC;
      }
      goto L_08AABBB0;
    }
L_08AABBB0:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[9]);
    goto L_08AABBBC;
L_08AABBBC:
    ctx.gpr[4] = (ctx.gpr[14] >> 1u);
    ctx.gpr[6] = (ctx.gpr[15] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[15] >> 1u);
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[25]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[15] = (ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AABBBC;
      }
      goto L_08AABBE4;
    }
L_08AABBE4:
    ctx.gpr[9] = (ctx.gpr[11] + 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_08AABBEC;
L_08AABBEC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AABC30;
    }
    goto L_08AABBF4;
L_08AABBF4:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[9] - ctx.gpr[11]);
    goto L_08AABC00;
L_08AABC00:
    ctx.gpr[4] = (ctx.gpr[12] >> 1u);
    ctx.gpr[6] = (ctx.gpr[13] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[13] >> 1u);
    ctx.gpr[2] = (ctx.gpr[12] & ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[13] & ctx.gpr[25]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AABC00;
      }
      goto L_08AABC28;
    }
L_08AABC28:
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08AABC2C;
L_08AABC2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AABC30;
L_08AABC30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[15] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AABDA4;
      }
      goto L_08AABC3C;
    }
L_08AABC3C:
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[12] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[14] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AABC5C;
      }
      goto L_08AABC4C;
    }
L_08AABC4C:
    ctx.gpr[2] = (ctx.gpr[12] < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[13] - ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[12] - ctx.gpr[14]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    goto L_08AABC5C;
L_08AABC5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AABD80;
      }
      goto L_08AABC64;
    }
L_08AABC64:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), 0u);
    goto L_08AABC74;
L_08AABC74:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (4095u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
        goto L_08AABD0C;
    }
    goto L_08AABCA0;
L_08AABCA0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AABD70;
      }
      goto L_08AABCA8;
    }
L_08AABCA8:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    goto L_08AABCAC;
L_08AABCAC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08AABCB0;
L_08AABCB0:
    ctx.gpr[7] = (ctx.gpr[9] << 1u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[8] << 1u);
    ctx.gpr[11] = (4095u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AABD08;
      }
      goto L_08AABCF8;
    }
L_08AABCF8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08AABCAC;
      }
      goto L_08AABD00;
    }
L_08AABD00:
    if (ctx.gpr[12] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08AABCB0;
    }
    goto L_08AABD08;
L_08AABD08:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AABD0C;
L_08AABD0C:
    ctx.gpr[3] = (8191u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AABD68;
      }
      goto L_08AABD24;
    }
L_08AABD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[3] = (ctx.gpr[5] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AABD68;
L_08AABD68:
    ctx.gpr[6] = (ctx.gpr[10] + 0u);
    goto L_08AABB00;
L_08AABD70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08AABCAC;
      }
      goto L_08AABD78;
    }
L_08AABD78:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AABD0C;
L_08AABD80:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[3] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08AABC74;
L_08AABDA4:
    ctx.gpr[2] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AABD0C;
L_08AABDCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AABDE4;
      }
      goto L_08AABDD4;
    }
L_08AABDD4:
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AABC30;
L_08AABDE4:
    ctx.gpr[12] = (0u + 0u);
    ctx.gpr[13] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08AABC2C;
L_08AABDF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AABE28u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB04u>(ctx, &aot_mem) && ctx.pc == 0x08AABE28u) goto L_08AABE28;
    return;
L_08AABE28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AABE34u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB04u>(ctx, &aot_mem) && ctx.pc == 0x08AABE34u) goto L_08AABE34;
    return;
L_08AABE34:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AABE44u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AABAAC;
L_08AABE44:
    ctx.gpr[31] = (0x08AABE4Cu);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 119u, 0x08AAC864u>(ctx, &aot_mem) && ctx.pc == 0x08AABE4Cu) goto L_08AABE4C;
    return;
L_08AABE4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AABE90u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB04u>(ctx, &aot_mem) && ctx.pc == 0x08AABE90u) goto L_08AABE90;
    return;
L_08AABE90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AABE9Cu);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB04u>(ctx, &aot_mem) && ctx.pc == 0x08AABE9Cu) goto L_08AABE9C;
    return;
L_08AABE9C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[31] = (0x08AABEB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08AABAAC;
L_08AABEB8:
    ctx.gpr[31] = (0x08AABEC0u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 119u, 0x08AAC864u>(ctx, &aot_mem) && ctx.pc == 0x08AABEC0u) goto L_08AABEC0;
    return;
L_08AABEC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[31] = (0x08AABF14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB04u>(ctx, &aot_mem) && ctx.pc == 0x08AABF14u) goto L_08AABF14;
    return;
L_08AABF14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AABF20u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB04u>(ctx, &aot_mem) && ctx.pc == 0x08AABF20u) goto L_08AABF20;
    return;
L_08AABF20:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08AABF60;
      }
      goto L_08AABF34;
    }
L_08AABF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08AABFBC;
    }
    goto L_08AABF44;
L_08AABF44:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
      if (branch_taken) {
          goto L_08AABFA0;
      }
      goto L_08AABF50;
    }
L_08AABF50:
    ctx.gpr[3] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[2] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6176));
      if (branch_taken) {
          goto L_08AABF78;
      }
      goto L_08AABF60;
    }
L_08AABF60:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AABF64;
L_08AABF64:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AABF78;
L_08AABF78:
    ctx.gpr[31] = (0x08AABF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 119u, 0x08AAC864u>(ctx, &aot_mem) && ctx.pc == 0x08AABF80u) goto L_08AABF80;
    return;
L_08AABF80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AABFA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
      if (branch_taken) {
          goto L_08AABFD4;
      }
      goto L_08AABFA8;
    }
L_08AABFA8:
    ctx.gpr[2] = (2221u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6176));
      if (branch_taken) {
          goto L_08AABF78;
      }
      goto L_08AABFB8;
    }
L_08AABFB8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AABFBC;
L_08AABFBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08AABF78;
L_08AABFD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AABF64;
      }
      goto L_08AABFDC;
    }
L_08AABFDC:
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AABFBC;
      }
      goto L_08AABFE8;
    }
L_08AABFE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[18] = (0u + 0u);
    ctx.pc = 0x08AAC000u; return;
}

void recomp_unit_0169(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0169_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_169(Runtime &runtime) {
    runtime.register_generated_unit(169u, 0x08AA8000u, 16384u, &recomp_unit_0169, &recomp_unit_0169_entry);
    runtime.register_function(0x08AA8000u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8020u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA804Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8058u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8060u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8084u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA808Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8094u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8098u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA80F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8120u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8144u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA814Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA815Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8168u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8178u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA81F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA820Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8230u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA823Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA824Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8258u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8268u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA827Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8288u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA82DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8304u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8310u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA831Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8320u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8334u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8360u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA836Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8378u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA837Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8390u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA83BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA83C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA83D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA83D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA83ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8418u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8424u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8430u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8434u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8448u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8474u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8480u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA848Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8490u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA84FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8514u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8524u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA852Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8538u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA853Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8540u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8548u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8554u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8558u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8564u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8570u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8578u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA857Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8580u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8620u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA863Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8648u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8658u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8664u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA867Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA86E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8718u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8730u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8768u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8780u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA87F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8808u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8818u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8820u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8828u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA882Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8834u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8840u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8844u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA884Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8860u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8870u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA887Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA889Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA88FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8914u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8920u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA892Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8938u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8944u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8950u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA895Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8968u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8974u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA897Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8984u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA89B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA89C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA89D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA89F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8A8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8ACCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8AFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8B8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8C08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8D84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8DE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8E70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8ED0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8ED8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA8EFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9090u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA90B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9120u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9148u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9160u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9188u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA918Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9198u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA91F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA922Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9240u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9250u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9254u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA925Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9264u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9274u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9284u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9294u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA92F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9308u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9314u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA932Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9348u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA937Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA93DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9414u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9424u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA943Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9474u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA949Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA94ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9504u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9534u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9548u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA955Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9568u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9578u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9580u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9588u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9598u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA95E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9604u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9610u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9638u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9644u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9650u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA965Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9664u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA966Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9674u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9694u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA969Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA96FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9718u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9788u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97B0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA97F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9804u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9808u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9810u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9818u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9820u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA982Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA983Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9848u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9850u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9858u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9860u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9868u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9870u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9874u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA987Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9894u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA989Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA98D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9904u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA991Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9928u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9938u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9944u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9950u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9964u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9974u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9980u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9988u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9994u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA99D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9A90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9ADCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9AFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B48u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9B80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9BE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9C34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9CF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D5Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9D88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DD4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9DFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9E9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9ECCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9ED8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9EF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F38u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F40u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F48u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9F9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FF0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AA9FF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA004u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA014u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA01Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA02Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA038u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA040u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA048u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA050u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA058u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA064u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA06Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA070u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA078u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA080u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA090u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA098u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA0F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA110u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA12Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA13Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA140u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA150u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA158u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA160u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA170u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA1CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA274u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA2F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA448u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA4FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA500u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA528u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA558u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA5D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA72Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA7E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA80Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA83Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA880u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA8ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA958u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA960u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA970u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA97Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA984u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA98Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA998u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA99Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAA9E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA54u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA5Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAA94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAAA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAB90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAABBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC94u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAC9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACD0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACD4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAACF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAD84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADD4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAADECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE20u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE88u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAE9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAECCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEE8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAEF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF04u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF6Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF7Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF84u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF8Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAF9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFB4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFC4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFE0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAAFFCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB004u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB00Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB014u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB018u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB024u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB048u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB060u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB068u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB074u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB08Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB094u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB09Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB0E0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB150u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB1F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB200u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB208u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB218u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB220u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB224u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB230u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB238u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB240u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB24Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB25Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB260u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB264u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB278u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB280u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB28Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB298u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2C8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2E4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB2FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB314u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB31Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB324u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB32Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB334u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB338u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB348u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB37Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3C4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3D4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB3FCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB410u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB42Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB434u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB43Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB448u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB464u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB46Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB474u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB4ECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB50Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB518u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB530u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB54Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB574u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB590u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5CCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5DCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5F0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB5F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB604u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB62Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB63Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB648u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB650u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB654u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB66Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB674u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB684u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB690u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6A4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB6F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB708u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB730u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB740u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB74Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB754u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB758u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB768u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB790u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB7A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB7ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB7B8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB7E8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB818u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB828u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB834u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB83Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB840u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB850u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB878u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB888u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB894u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB89Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8A0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8ACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8D8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB8F4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB91Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB934u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB970u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB998u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9A8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9B4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9BCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9C0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9D0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AAB9F8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA1Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA20u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA58u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABA78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAC8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAD8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABAECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB10u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB18u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABB9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBECu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABBF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC2Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC30u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC3Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC5Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABC74u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCACu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCB0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABCF8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD00u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD08u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD0Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD24u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD68u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD70u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABD80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDA4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDCCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDD4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDE4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABDF4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE28u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE4Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE5Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE90u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABE9Cu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABEB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABEC0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABED0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF14u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF20u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF34u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF44u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF50u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF60u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF64u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF78u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABF80u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFA0u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFA8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFB8u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFBCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFD4u, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFDCu, &recomp_unit_0169, "recomp_unit_0169");
    runtime.register_function(0x08AABFE8u, &recomp_unit_0169, "recomp_unit_0169");
}
} // namespace psprecomp

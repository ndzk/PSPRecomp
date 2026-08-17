#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0055[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 8, 0, 9, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 0, 19, 0, 20, 0, 21, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 32, 0, 33, 0, 34, 0, 35, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0,
    0, 47, 0, 48, 0, 49, 0, 50, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 73, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0,
    78, 79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0,
    98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 110, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128,
    0, 0, 129, 130, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 138, 0, 139, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 144, 0,
    0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 151, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0,
    156, 0, 157, 0, 158, 0, 0, 0, 159, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0,
    204, 0, 205, 0, 206, 207, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 215, 216, 0, 217, 0,
    0, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0,
    238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 250, 251, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 255, 0, 256, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 269, 270, 0, 271,
    0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 278, 0, 279, 280, 0, 281, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 289, 0, 290, 0, 0,
    0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 298, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 314, 0, 0, 0, 0, 0, 0,
    315, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0,
    0, 340, 0, 341, 0, 342, 343, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 360, 361, 0, 0, 0, 362, 0, 363,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0,
    373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 409, 0, 0, 0, 0, 410,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 417, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0,
    0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 513, 0, 514, 0, 515, 0, 516, 517, 0,
    0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    525, 0, 0, 0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 535, 0, 536, 0, 537,
    0, 538, 0, 0, 539, 0, 0, 0, 540, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542,
    0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 560, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 593, 594, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0,
    597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0,
    605, 0, 0, 606, 0, 0, 0, 607, 608, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0,
    615, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0,
    0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629,
};
void recomp_unit_0055_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E0000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0055[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E0000;
    case 2u: goto L_088E0028;
    case 3u: goto L_088E0030;
    case 4u: goto L_088E0034;
    case 5u: goto L_088E003C;
    case 6u: goto L_088E0054;
    case 7u: goto L_088E0074;
    case 8u: goto L_088E0090;
    case 9u: goto L_088E0098;
    case 10u: goto L_088E009C;
    case 11u: goto L_088E00A8;
    case 12u: goto L_088E00C0;
    case 13u: goto L_088E00FC;
    case 14u: goto L_088E0108;
    case 15u: goto L_088E0110;
    case 16u: goto L_088E0138;
    case 17u: goto L_088E0170;
    case 18u: goto L_088E0180;
    case 19u: goto L_088E0194;
    case 20u: goto L_088E019C;
    case 21u: goto L_088E01A4;
    case 22u: goto L_088E01A8;
    case 23u: goto L_088E01B0;
    case 24u: goto L_088E01C0;
    case 25u: goto L_088E01D4;
    case 26u: goto L_088E01DC;
    case 27u: goto L_088E01E4;
    case 28u: goto L_088E0224;
    case 29u: goto L_088E0234;
    case 30u: goto L_088E0250;
    case 31u: goto L_088E0258;
    case 32u: goto L_088E025C;
    case 33u: goto L_088E0264;
    case 34u: goto L_088E026C;
    case 35u: goto L_088E0274;
    case 36u: goto L_088E028C;
    case 37u: goto L_088E029C;
    case 38u: goto L_088E02A8;
    case 39u: goto L_088E02B0;
    case 40u: goto L_088E02B8;
    case 41u: goto L_088E02BC;
    case 42u: goto L_088E02C4;
    case 43u: goto L_088E02D4;
    case 44u: goto L_088E02E4;
    case 45u: goto L_088E02EC;
    case 46u: goto L_088E02F8;
    case 47u: goto L_088E0304;
    case 48u: goto L_088E030C;
    case 49u: goto L_088E0314;
    case 50u: goto L_088E031C;
    case 51u: goto L_088E0320;
    case 52u: goto L_088E0328;
    case 53u: goto L_088E0330;
    case 54u: goto L_088E0338;
    case 55u: goto L_088E034C;
    case 56u: goto L_088E0360;
    case 57u: goto L_088E036C;
    case 58u: goto L_088E0378;
    case 59u: goto L_088E03D0;
    case 60u: goto L_088E03D8;
    case 61u: goto L_088E03E0;
    case 62u: goto L_088E03E8;
    case 63u: goto L_088E0418;
    case 64u: goto L_088E0420;
    case 65u: goto L_088E0438;
    case 66u: goto L_088E0440;
    case 67u: goto L_088E0480;
    case 68u: goto L_088E0488;
    case 69u: goto L_088E048C;
    case 70u: goto L_088E0494;
    case 71u: goto L_088E04AC;
    case 72u: goto L_088E04C8;
    case 73u: goto L_088E04CC;
    case 74u: goto L_088E04D4;
    case 75u: goto L_088E04E4;
    case 76u: goto L_088E04F0;
    case 77u: goto L_088E04F8;
    case 78u: goto L_088E0500;
    case 79u: goto L_088E0504;
    case 80u: goto L_088E050C;
    case 81u: goto L_088E051C;
    case 82u: goto L_088E0528;
    case 83u: goto L_088E0530;
    case 84u: goto L_088E0538;
    case 85u: goto L_088E0568;
    case 86u: goto L_088E05AC;
    case 87u: goto L_088E0604;
    case 88u: goto L_088E060C;
    case 89u: goto L_088E0618;
    case 90u: goto L_088E0628;
    case 91u: goto L_088E0668;
    case 92u: goto L_088E0670;
    case 93u: goto L_088E0678;
    case 94u: goto L_088E06D4;
    case 95u: goto L_088E06E0;
    case 96u: goto L_088E06E8;
    case 97u: goto L_088E06F8;
    case 98u: goto L_088E0700;
    case 99u: goto L_088E0708;
    case 100u: goto L_088E0738;
    case 101u: goto L_088E0740;
    case 102u: goto L_088E0758;
    case 103u: goto L_088E07A0;
    case 104u: goto L_088E07A8;
    case 105u: goto L_088E07AC;
    case 106u: goto L_088E07B8;
    case 107u: goto L_088E07D0;
    case 108u: goto L_088E07F0;
    case 109u: goto L_088E0814;
    case 110u: goto L_088E081C;
    case 111u: goto L_088E0820;
    case 112u: goto L_088E0828;
    case 113u: goto L_088E0840;
    case 114u: goto L_088E0854;
    case 115u: goto L_088E0858;
    case 116u: goto L_088E0890;
    case 117u: goto L_088E089C;
    case 118u: goto L_088E08AC;
    case 119u: goto L_088E08D0;
    case 120u: goto L_088E08E4;
    case 121u: goto L_088E08F4;
    case 122u: goto L_088E0934;
    case 123u: goto L_088E093C;
    case 124u: goto L_088E0950;
    case 125u: goto L_088E0960;
    case 126u: goto L_088E0968;
    case 127u: goto L_088E0974;
    case 128u: goto L_088E097C;
    case 129u: goto L_088E0988;
    case 130u: goto L_088E098C;
    case 131u: goto L_088E0990;
    case 132u: goto L_088E099C;
    case 133u: goto L_088E09BC;
    case 134u: goto L_088E0A00;
    case 135u: goto L_088E0A10;
    case 136u: goto L_088E0A2C;
    case 137u: goto L_088E0A34;
    case 138u: goto L_088E0A38;
    case 139u: goto L_088E0A40;
    case 140u: goto L_088E0A44;
    case 141u: goto L_088E0A4C;
    case 142u: goto L_088E0A64;
    case 143u: goto L_088E0A74;
    case 144u: goto L_088E0A78;
    case 145u: goto L_088E0A84;
    case 146u: goto L_088E0A90;
    case 147u: goto L_088E0AA0;
    case 148u: goto L_088E0AA8;
    case 149u: goto L_088E0AB4;
    case 150u: goto L_088E0ABC;
    case 151u: goto L_088E0AC0;
    case 152u: goto L_088E0AC4;
    case 153u: goto L_088E0ACC;
    case 154u: goto L_088E0AE8;
    case 155u: goto L_088E0AF4;
    case 156u: goto L_088E0B00;
    case 157u: goto L_088E0B08;
    case 158u: goto L_088E0B10;
    case 159u: goto L_088E0B20;
    case 160u: goto L_088E0B24;
    case 161u: goto L_088E0B2C;
    case 162u: goto L_088E0B5C;
    case 163u: goto L_088E0BD4;
    case 164u: goto L_088E0BEC;
    case 165u: goto L_088E0C00;
    case 166u: goto L_088E0C08;
    case 167u: goto L_088E0C10;
    case 168u: goto L_088E0C18;
    case 169u: goto L_088E0C20;
    case 170u: goto L_088E0C3C;
    case 171u: goto L_088E0C98;
    case 172u: goto L_088E0CA4;
    case 173u: goto L_088E0CB4;
    case 174u: goto L_088E0CBC;
    case 175u: goto L_088E0CC4;
    case 176u: goto L_088E0CCC;
    case 177u: goto L_088E0CD4;
    case 178u: goto L_088E0CDC;
    case 179u: goto L_088E0CF4;
    case 180u: goto L_088E0D08;
    case 181u: goto L_088E0D10;
    case 182u: goto L_088E0D1C;
    case 183u: goto L_088E0D24;
    case 184u: goto L_088E0D44;
    case 185u: goto L_088E0D4C;
    case 186u: goto L_088E0D50;
    case 187u: goto L_088E0D5C;
    case 188u: goto L_088E0D74;
    case 189u: goto L_088E0DBC;
    case 190u: goto L_088E0DC4;
    case 191u: goto L_088E0DC8;
    case 192u: goto L_088E0DD0;
    case 193u: goto L_088E0E14;
    case 194u: goto L_088E0E20;
    case 195u: goto L_088E0E2C;
    case 196u: goto L_088E0E38;
    case 197u: goto L_088E0E40;
    case 198u: goto L_088E0E48;
    case 199u: goto L_088E0E4C;
    case 200u: goto L_088E0E54;
    case 201u: goto L_088E0E64;
    case 202u: goto L_088E0E6C;
    case 203u: goto L_088E0E74;
    case 204u: goto L_088E0E80;
    case 205u: goto L_088E0E88;
    case 206u: goto L_088E0E90;
    case 207u: goto L_088E0E94;
    case 208u: goto L_088E0E98;
    case 209u: goto L_088E0EA0;
    case 210u: goto L_088E0EB8;
    case 211u: goto L_088E0EC4;
    case 212u: goto L_088E0ED0;
    case 213u: goto L_088E0EDC;
    case 214u: goto L_088E0EE4;
    case 215u: goto L_088E0EEC;
    case 216u: goto L_088E0EF0;
    case 217u: goto L_088E0EF8;
    case 218u: goto L_088E0F08;
    case 219u: goto L_088E0F10;
    case 220u: goto L_088E0F18;
    case 221u: goto L_088E0F24;
    case 222u: goto L_088E0F2C;
    case 223u: goto L_088E0F34;
    case 224u: goto L_088E0F3C;
    case 225u: goto L_088E0F6C;
    case 226u: goto L_088E0FE4;
    case 227u: goto L_088E1028;
    case 228u: goto L_088E1030;
    case 229u: goto L_088E103C;
    case 230u: goto L_088E104C;
    case 231u: goto L_088E1054;
    case 232u: goto L_088E105C;
    case 233u: goto L_088E1064;
    case 234u: goto L_088E106C;
    case 235u: goto L_088E1088;
    case 236u: goto L_088E10E4;
    case 237u: goto L_088E10F0;
    case 238u: goto L_088E1100;
    case 239u: goto L_088E1108;
    case 240u: goto L_088E1110;
    case 241u: goto L_088E1118;
    case 242u: goto L_088E1120;
    case 243u: goto L_088E1128;
    case 244u: goto L_088E1144;
    case 245u: goto L_088E115C;
    case 246u: goto L_088E1164;
    case 247u: goto L_088E1170;
    case 248u: goto L_088E1178;
    case 249u: goto L_088E1198;
    case 250u: goto L_088E11A0;
    case 251u: goto L_088E11A4;
    case 252u: goto L_088E11A8;
    case 253u: goto L_088E11B0;
    case 254u: goto L_088E11C8;
    case 255u: goto L_088E120C;
    case 256u: goto L_088E1214;
    case 257u: goto L_088E1218;
    case 258u: goto L_088E1220;
    case 259u: goto L_088E1238;
    case 260u: goto L_088E125C;
    case 261u: goto L_088E1268;
    case 262u: goto L_088E1270;
    case 263u: goto L_088E1298;
    case 264u: goto L_088E12B8;
    case 265u: goto L_088E12C8;
    case 266u: goto L_088E12DC;
    case 267u: goto L_088E12E4;
    case 268u: goto L_088E12EC;
    case 269u: goto L_088E12F0;
    case 270u: goto L_088E12F4;
    case 271u: goto L_088E12FC;
    case 272u: goto L_088E130C;
    case 273u: goto L_088E1320;
    case 274u: goto L_088E1328;
    case 275u: goto L_088E1330;
    case 276u: goto L_088E1358;
    case 277u: goto L_088E1368;
    case 278u: goto L_088E1384;
    case 279u: goto L_088E138C;
    case 280u: goto L_088E1390;
    case 281u: goto L_088E1398;
    case 282u: goto L_088E139C;
    case 283u: goto L_088E13A4;
    case 284u: goto L_088E13BC;
    case 285u: goto L_088E13CC;
    case 286u: goto L_088E13D8;
    case 287u: goto L_088E13E0;
    case 288u: goto L_088E13E8;
    case 289u: goto L_088E13EC;
    case 290u: goto L_088E13F4;
    case 291u: goto L_088E1404;
    case 292u: goto L_088E1414;
    case 293u: goto L_088E141C;
    case 294u: goto L_088E1428;
    case 295u: goto L_088E1434;
    case 296u: goto L_088E143C;
    case 297u: goto L_088E1444;
    case 298u: goto L_088E144C;
    case 299u: goto L_088E1450;
    case 300u: goto L_088E1458;
    case 301u: goto L_088E1488;
    case 302u: goto L_088E14FC;
    case 303u: goto L_088E1510;
    case 304u: goto L_088E1518;
    case 305u: goto L_088E153C;
    case 306u: goto L_088E1554;
    case 307u: goto L_088E1564;
    case 308u: goto L_088E156C;
    case 309u: goto L_088E1598;
    case 310u: goto L_088E15B4;
    case 311u: goto L_088E15C4;
    case 312u: goto L_088E15CC;
    case 313u: goto L_088E15E0;
    case 314u: goto L_088E15E4;
    case 315u: goto L_088E1600;
    case 316u: goto L_088E1604;
    case 317u: goto L_088E160C;
    case 318u: goto L_088E1624;
    case 319u: goto L_088E1630;
    case 320u: goto L_088E1654;
    case 321u: goto L_088E168C;
    case 322u: goto L_088E1690;
    case 323u: goto L_088E1698;
    case 324u: goto L_088E16B0;
    case 325u: goto L_088E16BC;
    case 326u: goto L_088E16C4;
    case 327u: goto L_088E16CC;
    case 328u: goto L_088E1740;
    case 329u: goto L_088E1748;
    case 330u: goto L_088E1750;
    case 331u: goto L_088E1758;
    case 332u: goto L_088E1760;
    case 333u: goto L_088E176C;
    case 334u: goto L_088E1774;
    case 335u: goto L_088E17C4;
    case 336u: goto L_088E17CC;
    case 337u: goto L_088E17E0;
    case 338u: goto L_088E17E8;
    case 339u: goto L_088E17F8;
    case 340u: goto L_088E1804;
    case 341u: goto L_088E180C;
    case 342u: goto L_088E1814;
    case 343u: goto L_088E1818;
    case 344u: goto L_088E1820;
    case 345u: goto L_088E1830;
    case 346u: goto L_088E183C;
    case 347u: goto L_088E1844;
    case 348u: goto L_088E184C;
    case 349u: goto L_088E1854;
    case 350u: goto L_088E1878;
    case 351u: goto L_088E18C0;
    case 352u: goto L_088E18C8;
    case 353u: goto L_088E18DC;
    case 354u: goto L_088E1900;
    case 355u: goto L_088E191C;
    case 356u: goto L_088E1934;
    case 357u: goto L_088E1940;
    case 358u: goto L_088E1948;
    case 359u: goto L_088E1954;
    case 360u: goto L_088E1960;
    case 361u: goto L_088E1964;
    case 362u: goto L_088E1974;
    case 363u: goto L_088E197C;
    case 364u: goto L_088E1994;
    case 365u: goto L_088E19AC;
    case 366u: goto L_088E19B4;
    case 367u: goto L_088E19BC;
    case 368u: goto L_088E19C8;
    case 369u: goto L_088E19D4;
    case 370u: goto L_088E19D8;
    case 371u: goto L_088E19E8;
    case 372u: goto L_088E19F8;
    case 373u: goto L_088E1A00;
    case 374u: goto L_088E1A08;
    case 375u: goto L_088E1A10;
    case 376u: goto L_088E1A30;
    case 377u: goto L_088E1A40;
    case 378u: goto L_088E1A48;
    case 379u: goto L_088E1A74;
    case 380u: goto L_088E1A88;
    case 381u: goto L_088E1AB0;
    case 382u: goto L_088E1B0C;
    case 383u: goto L_088E1B30;
    case 384u: goto L_088E1B48;
    case 385u: goto L_088E1B68;
    case 386u: goto L_088E1B7C;
    case 387u: goto L_088E1B9C;
    case 388u: goto L_088E1BE4;
    case 389u: goto L_088E1BF8;
    case 390u: goto L_088E1C18;
    case 391u: goto L_088E1C28;
    case 392u: goto L_088E1C64;
    case 393u: goto L_088E1CA0;
    case 394u: goto L_088E1CB4;
    case 395u: goto L_088E1CC8;
    case 396u: goto L_088E1DB0;
    case 397u: goto L_088E1E10;
    case 398u: goto L_088E1E20;
    case 399u: goto L_088E1E38;
    case 400u: goto L_088E1E54;
    case 401u: goto L_088E1F00;
    case 402u: goto L_088E1F14;
    case 403u: goto L_088E1F20;
    case 404u: goto L_088E1F74;
    case 405u: goto L_088E1F80;
    case 406u: goto L_088E1F8C;
    case 407u: goto L_088E1FDC;
    case 408u: goto L_088E1FE0;
    case 409u: goto L_088E1FE8;
    case 410u: goto L_088E1FFC;
    case 411u: goto L_088E2008;
    case 412u: goto L_088E2024;
    case 413u: goto L_088E2078;
    case 414u: goto L_088E2080;
    case 415u: goto L_088E2090;
    case 416u: goto L_088E20D8;
    case 417u: goto L_088E20DC;
    case 418u: goto L_088E2100;
    case 419u: goto L_088E211C;
    case 420u: goto L_088E2130;
    case 421u: goto L_088E2140;
    case 422u: goto L_088E2188;
    case 423u: goto L_088E21E0;
    case 424u: goto L_088E2204;
    case 425u: goto L_088E2278;
    case 426u: goto L_088E228C;
    case 427u: goto L_088E22AC;
    case 428u: goto L_088E2354;
    case 429u: goto L_088E23C8;
    case 430u: goto L_088E23D8;
    case 431u: goto L_088E23F0;
    case 432u: goto L_088E240C;
    case 433u: goto L_088E2454;
    case 434u: goto L_088E2470;
    case 435u: goto L_088E24D8;
    case 436u: goto L_088E24FC;
    case 437u: goto L_088E2520;
    case 438u: goto L_088E2528;
    case 439u: goto L_088E2544;
    case 440u: goto L_088E2558;
    case 441u: goto L_088E256C;
    case 442u: goto L_088E25E0;
    case 443u: goto L_088E263C;
    case 444u: goto L_088E2668;
    case 445u: goto L_088E26DC;
    case 446u: goto L_088E2788;
    case 447u: goto L_088E2820;
    case 448u: goto L_088E2860;
    case 449u: goto L_088E2910;
    case 450u: goto L_088E292C;
    case 451u: goto L_088E29C4;
    case 452u: goto L_088E2A68;
    case 453u: goto L_088E2A7C;
    case 454u: goto L_088E2AF4;
    case 455u: goto L_088E2B90;
    case 456u: goto L_088E2C60;
    case 457u: goto L_088E2C78;
    case 458u: goto L_088E2CA0;
    case 459u: goto L_088E2CB8;
    case 460u: goto L_088E2CE0;
    case 461u: goto L_088E2D48;
    case 462u: goto L_088E2D58;
    case 463u: goto L_088E2D68;
    case 464u: goto L_088E2DB0;
    case 465u: goto L_088E2E08;
    case 466u: goto L_088E2E2C;
    case 467u: goto L_088E2F00;
    case 468u: goto L_088E2F10;
    case 469u: goto L_088E2F8C;
    case 470u: goto L_088E2FA8;
    case 471u: goto L_088E2FBC;
    case 472u: goto L_088E2FD8;
    case 473u: goto L_088E3004;
    case 474u: goto L_088E3080;
    case 475u: goto L_088E3098;
    case 476u: goto L_088E30AC;
    case 477u: goto L_088E30E0;
    case 478u: goto L_088E30FC;
    case 479u: goto L_088E3164;
    case 480u: goto L_088E3188;
    case 481u: goto L_088E31A8;
    case 482u: goto L_088E31B0;
    case 483u: goto L_088E31CC;
    case 484u: goto L_088E31E4;
    case 485u: goto L_088E31F8;
    case 486u: goto L_088E326C;
    case 487u: goto L_088E32D0;
    case 488u: goto L_088E32D8;
    case 489u: goto L_088E3304;
    case 490u: goto L_088E3320;
    case 491u: goto L_088E3328;
    case 492u: goto L_088E3338;
    case 493u: goto L_088E3378;
    case 494u: goto L_088E339C;
    case 495u: goto L_088E33E0;
    case 496u: goto L_088E33F4;
    case 497u: goto L_088E3428;
    case 498u: goto L_088E3450;
    case 499u: goto L_088E346C;
    case 500u: goto L_088E3494;
    case 501u: goto L_088E34C4;
    case 502u: goto L_088E34F0;
    case 503u: goto L_088E34F8;
    case 504u: goto L_088E350C;
    case 505u: goto L_088E3514;
    case 506u: goto L_088E351C;
    case 507u: goto L_088E356C;
    case 508u: goto L_088E3588;
    case 509u: goto L_088E3594;
    case 510u: goto L_088E35C8;
    case 511u: goto L_088E35D0;
    case 512u: goto L_088E35D8;
    case 513u: goto L_088E35DC;
    case 514u: goto L_088E35E4;
    case 515u: goto L_088E35EC;
    case 516u: goto L_088E35F4;
    case 517u: goto L_088E35F8;
    case 518u: goto L_088E3614;
    case 519u: goto L_088E361C;
    case 520u: goto L_088E3638;
    case 521u: goto L_088E363C;
    case 522u: goto L_088E3648;
    case 523u: goto L_088E3650;
    case 524u: goto L_088E3678;
    case 525u: goto L_088E3680;
    case 526u: goto L_088E3690;
    case 527u: goto L_088E3698;
    case 528u: goto L_088E36A0;
    case 529u: goto L_088E36A8;
    case 530u: goto L_088E36D0;
    case 531u: goto L_088E3718;
    case 532u: goto L_088E3748;
    case 533u: goto L_088E3754;
    case 534u: goto L_088E3764;
    case 535u: goto L_088E376C;
    case 536u: goto L_088E3774;
    case 537u: goto L_088E377C;
    case 538u: goto L_088E3784;
    case 539u: goto L_088E3790;
    case 540u: goto L_088E37A0;
    case 541u: goto L_088E37A4;
    case 542u: goto L_088E37FC;
    case 543u: goto L_088E3804;
    case 544u: goto L_088E3810;
    case 545u: goto L_088E3820;
    case 546u: goto L_088E3828;
    case 547u: goto L_088E388C;
    case 548u: goto L_088E3894;
    case 549u: goto L_088E38D4;
    case 550u: goto L_088E38DC;
    case 551u: goto L_088E393C;
    case 552u: goto L_088E3940;
    case 553u: goto L_088E3960;
    case 554u: goto L_088E3968;
    case 555u: goto L_088E3978;
    case 556u: goto L_088E39B4;
    case 557u: goto L_088E39C0;
    case 558u: goto L_088E39CC;
    case 559u: goto L_088E39D4;
    case 560u: goto L_088E3A04;
    case 561u: goto L_088E3A08;
    case 562u: goto L_088E3A44;
    case 563u: goto L_088E3A4C;
    case 564u: goto L_088E3A58;
    case 565u: goto L_088E3A94;
    case 566u: goto L_088E3AA8;
    case 567u: goto L_088E3ABC;
    case 568u: goto L_088E3ACC;
    case 569u: goto L_088E3AD4;
    case 570u: goto L_088E3AE0;
    case 571u: goto L_088E3B1C;
    case 572u: goto L_088E3B24;
    case 573u: goto L_088E3B2C;
    case 574u: goto L_088E3B34;
    case 575u: goto L_088E3B54;
    case 576u: goto L_088E3B64;
    case 577u: goto L_088E3B70;
    case 578u: goto L_088E3BA4;
    case 579u: goto L_088E3BB4;
    case 580u: goto L_088E3BC0;
    case 581u: goto L_088E3BF4;
    case 582u: goto L_088E3C04;
    case 583u: goto L_088E3C10;
    case 584u: goto L_088E3C38;
    case 585u: goto L_088E3C48;
    case 586u: goto L_088E3C54;
    case 587u: goto L_088E3C88;
    case 588u: goto L_088E3C98;
    case 589u: goto L_088E3CA4;
    case 590u: goto L_088E3CAC;
    case 591u: goto L_088E3CB8;
    case 592u: goto L_088E3CC8;
    case 593u: goto L_088E3CD0;
    case 594u: goto L_088E3CD4;
    case 595u: goto L_088E3CE4;
    case 596u: goto L_088E3CEC;
    case 597u: goto L_088E3D00;
    case 598u: goto L_088E3D14;
    case 599u: goto L_088E3D28;
    case 600u: goto L_088E3D3C;
    case 601u: goto L_088E3D50;
    case 602u: goto L_088E3D64;
    case 603u: goto L_088E3D6C;
    case 604u: goto L_088E3D74;
    case 605u: goto L_088E3D80;
    case 606u: goto L_088E3D8C;
    case 607u: goto L_088E3D9C;
    case 608u: goto L_088E3DA0;
    case 609u: goto L_088E3DA4;
    case 610u: goto L_088E3DB0;
    case 611u: goto L_088E3DC4;
    case 612u: goto L_088E3DD8;
    case 613u: goto L_088E3DE4;
    case 614u: goto L_088E3DF0;
    case 615u: goto L_088E3E00;
    case 616u: goto L_088E3E14;
    case 617u: goto L_088E3E1C;
    case 618u: goto L_088E3E24;
    case 619u: goto L_088E3E78;
    case 620u: goto L_088E3E84;
    case 621u: goto L_088E3E98;
    case 622u: goto L_088E3EBC;
    case 623u: goto L_088E3F10;
    case 624u: goto L_088E3F34;
    case 625u: goto L_088E3F44;
    case 626u: goto L_088E3F98;
    case 627u: goto L_088E3FBC;
    case 628u: goto L_088E3FD0;
    case 629u: goto L_088E3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E0000:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088E0028u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E0028u) goto L_088E0028;
    return;
L_088E0028:
    ctx.gpr[31] = (0x088E0030u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0030u) goto L_088E0030;
    return;
L_088E0030:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_088E0034;
L_088E0034:
    if (ctx.gpr[18] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_088E009C;
    }
    goto L_088E003C;
L_088E003C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_088E009C;
    }
    goto L_088E0054;
L_088E0054:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E0074u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E0074u) goto L_088E0074;
    return;
L_088E0074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E0090u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E0090u) goto L_088E0090;
    return;
L_088E0090:
    ctx.gpr[31] = (0x088E0098u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0098u) goto L_088E0098;
    return;
L_088E0098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E009C;
L_088E009C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E00A8;
    }
L_088E00A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E00C0;
    }
L_088E00C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
      if (branch_taken) {
          goto L_088E0110;
      }
      goto L_088E00FC;
    }
L_088E00FC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E0108u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0108u) goto L_088E0108;
    return;
L_088E0108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E0110;
    }
L_088E0110:
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E019C;
      }
      goto L_088E0138;
    }
L_088E0138:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[21] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_088E0180;
      }
      goto L_088E0170;
    }
L_088E0170:
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u - ctx.gpr[21]);
      if (branch_taken) {
          goto L_088E0180;
      }
      goto L_088E0180;
    }
L_088E0180:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088E0194u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0194u) goto L_088E0194;
    return;
L_088E0194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E019C;
    }
L_088E019C:
    ctx.gpr[31] = (0x088E01A4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E01A4u) goto L_088E01A4;
    return;
L_088E01A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E01A8;
L_088E01A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E026C;
      }
      goto L_088E01B0;
    }
L_088E01B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (0u | 21u);
      if (branch_taken) {
          goto L_088E01D4;
      }
      goto L_088E01C0;
    }
L_088E01C0:
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] & 3u);
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E01DC;
      }
      goto L_088E01D4;
    }
L_088E01D4:
    ctx.gpr[7] = (ctx.gpr[5] & 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_088E01DC;
L_088E01DC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0258;
      }
      goto L_088E01E4;
    }
L_088E01E4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
        goto L_088E0234;
    }
    goto L_088E0224;
L_088E0224:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_088E0234;
L_088E0234:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E025C;
      }
      goto L_088E0250;
    }
L_088E0250:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088E025C;
      }
      goto L_088E0258;
    }
L_088E0258:
    ctx.gpr[4] = (0u | 6u);
    goto L_088E025C;
L_088E025C:
    ctx.gpr[31] = (0x088E0264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0264u) goto L_088E0264;
    return;
L_088E0264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 4u);
    goto L_088E026C;
L_088E026C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E02BC;
      }
      goto L_088E0274;
    }
L_088E0274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E02BC;
      }
      goto L_088E028C;
    }
L_088E028C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E02B0;
      }
      goto L_088E029C;
    }
L_088E029C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E02A8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E02A8u) goto L_088E02A8;
    return;
L_088E02A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E02BC;
      }
      goto L_088E02B0;
    }
L_088E02B0:
    ctx.gpr[31] = (0x088E02B8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E02B8u) goto L_088E02B8;
    return;
L_088E02B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E02BC;
L_088E02BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088E0320;
      }
      goto L_088E02C4;
    }
L_088E02C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_088E02E4;
      }
      goto L_088E02D4;
    }
L_088E02D4:
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088E02E4;
      }
      goto L_088E02E4;
    }
L_088E02E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E0304;
      }
      goto L_088E02EC;
    }
L_088E02EC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E02F8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E02F8u) goto L_088E02F8;
    return;
L_088E02F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E0314;
      }
      goto L_088E0304;
    }
L_088E0304:
    ctx.gpr[31] = (0x088E030Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E030Cu) goto L_088E030C;
    return;
L_088E030C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088E0314;
L_088E0314:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E0320;
      }
      goto L_088E031C;
    }
L_088E031C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088E0320;
L_088E0320:
    ctx.gpr[31] = (0x088E0328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E58B4u>(ctx, &aot_mem) && ctx.pc == 0x088E0328u) goto L_088E0328;
    return;
L_088E0328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0538;
      }
      goto L_088E0330;
    }
L_088E0330:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088E0538;
      }
      goto L_088E0338;
    }
L_088E0338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[18] = (0u | 64u);
      if (branch_taken) {
          goto L_088E048C;
      }
      goto L_088E034C;
    }
L_088E034C:
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E048C;
      }
      goto L_088E0360;
    }
L_088E0360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[20] = (0u | 14u);
      if (branch_taken) {
          goto L_088E0378;
      }
      goto L_088E036C;
    }
L_088E036C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E048C;
      }
      goto L_088E0378;
    }
L_088E0378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3612)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E0438;
      }
      goto L_088E03D0;
    }
L_088E03D0:
    ctx.gpr[31] = (0x088E03D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 541u, 0x088DE050u>(ctx, &aot_mem) && ctx.pc == 0x088E03D8u) goto L_088E03D8;
    return;
L_088E03D8:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
        goto L_088E0420;
    }
    goto L_088E03E0;
L_088E03E0:
    ctx.gpr[31] = (0x088E03E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E03E8u) goto L_088E03E8;
    return;
L_088E03E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E0418u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 57u, 0x088E48FCu>(ctx, &aot_mem) && ctx.pc == 0x088E0418u) goto L_088E0418;
    return;
L_088E0418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0480;
      }
      goto L_088E0420;
    }
L_088E0420:
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E0480;
      }
      goto L_088E0438;
    }
L_088E0438:
    ctx.gpr[31] = (0x088E0440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E0440u) goto L_088E0440;
    return;
L_088E0440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E0480u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 57u, 0x088E48FCu>(ctx, &aot_mem) && ctx.pc == 0x088E0480u) goto L_088E0480;
    return;
L_088E0480:
    ctx.gpr[31] = (0x088E0488u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0488u) goto L_088E0488;
    return;
L_088E0488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_088E048C;
L_088E048C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E04CC;
      }
      goto L_088E0494;
    }
L_088E0494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E04CC;
      }
      goto L_088E04AC;
    }
L_088E04AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E04C8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E04C8u) goto L_088E04C8;
    return;
L_088E04C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_088E04CC;
L_088E04CC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088E0504;
      }
      goto L_088E04D4;
    }
L_088E04D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E04F8;
      }
      goto L_088E04E4;
    }
L_088E04E4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E04F0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E04F0u) goto L_088E04F0;
    return;
L_088E04F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E0504;
      }
      goto L_088E04F8;
    }
L_088E04F8:
    ctx.gpr[31] = (0x088E0500u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0500u) goto L_088E0500;
    return;
L_088E0500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_088E0504;
L_088E0504:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E0538;
      }
      goto L_088E050C;
    }
L_088E050C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0530;
      }
      goto L_088E051C;
    }
L_088E051C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x088E0528u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0528u) goto L_088E0528;
    return;
L_088E0528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0538;
      }
      goto L_088E0530;
    }
L_088E0530:
    ctx.gpr[31] = (0x088E0538u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0538u) goto L_088E0538;
    return;
L_088E0538:
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
L_088E0568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B2C;
      }
      goto L_088E05AC;
    }
L_088E05AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[19] = (1u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 9u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[30] = (0u | 8u);
      if (branch_taken) {
          goto L_088E060C;
      }
      goto L_088E0604;
    }
L_088E0604:
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_088E060C;
L_088E060C:
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    ctx.gpr[6] = (1u << 16u);
      if (branch_taken) {
          goto L_088E07AC;
      }
      goto L_088E0618;
    }
L_088E0618:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088E07AC;
      }
      goto L_088E0628;
    }
L_088E0628:
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (ctx.gpr[21] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(9908)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    ctx.gpr[20] = (0u | 14u);
      if (branch_taken) {
          goto L_088E0758;
      }
      goto L_088E0668;
    }
L_088E0668:
    ctx.gpr[31] = (0x088E0670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D72F0u>(ctx, &aot_mem) && ctx.pc == 0x088E0670u) goto L_088E0670;
    return;
L_088E0670:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E06F8;
      }
      goto L_088E0678;
    }
L_088E0678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31016), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E06D4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31020), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 500u, 0x088DDA90u>(ctx, &aot_mem) && ctx.pc == 0x088E06D4u) goto L_088E06D4;
    return;
L_088E06D4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088E06E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E06E0u) goto L_088E06E0;
    return;
L_088E06E0:
    ctx.gpr[31] = (0x088E06E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E06E8u) goto L_088E06E8;
    return;
L_088E06E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E07A0;
      }
      goto L_088E06F8;
    }
L_088E06F8:
    ctx.gpr[31] = (0x088E0700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 541u, 0x088DE050u>(ctx, &aot_mem) && ctx.pc == 0x088E0700u) goto L_088E0700;
    return;
L_088E0700:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E0740;
      }
      goto L_088E0708;
    }
L_088E0708:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088E0738u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E0738u) goto L_088E0738;
    return;
L_088E0738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07A0;
      }
      goto L_088E0740;
    }
L_088E0740:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_088E07A0;
      }
      goto L_088E0758;
    }
L_088E0758:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088E07A0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E07A0u) goto L_088E07A0;
    return;
L_088E07A0:
    ctx.gpr[31] = (0x088E07A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E07A8u) goto L_088E07A8;
    return;
L_088E07A8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E07AC;
L_088E07AC:
    ctx.gpr[4] = (0u | 64u);
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0820;
    }
    goto L_088E07B8;
L_088E07B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0820;
    }
    goto L_088E07D0;
L_088E07D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E07F0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E07F0u) goto L_088E07F0;
    return;
L_088E07F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E0814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E0814u) goto L_088E0814;
    return;
L_088E0814:
    ctx.gpr[31] = (0x088E081Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E081Cu) goto L_088E081C;
    return;
L_088E081C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0820;
L_088E0820:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0990;
    }
    goto L_088E0828;
L_088E0828:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
        goto L_088E0858;
    }
    goto L_088E0840;
L_088E0840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0990;
    }
    goto L_088E0854;
L_088E0854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    goto L_088E0858;
L_088E0858:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 5u);
      if (branch_taken) {
          goto L_088E08AC;
      }
      goto L_088E0890;
    }
L_088E0890:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x088E089Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E089Cu) goto L_088E089C;
    return;
L_088E089C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0974;
      }
      goto L_088E08AC;
    }
L_088E08AC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0960;
      }
      goto L_088E08D0;
    }
L_088E08D0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E08F4;
      }
      goto L_088E08E4;
    }
L_088E08E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    goto L_088E08F4;
L_088E08F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_088E093C;
      }
      goto L_088E0934;
    }
L_088E0934:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_088E093C;
L_088E093C:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088E0950u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0950u) goto L_088E0950;
    return;
L_088E0950:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0974;
      }
      goto L_088E0960;
    }
L_088E0960:
    ctx.gpr[31] = (0x088E0968u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0968u) goto L_088E0968;
    return;
L_088E0968:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    goto L_088E0974;
L_088E0974:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088E098C;
      }
      goto L_088E097C;
    }
L_088E097C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0990;
    }
    goto L_088E0988;
L_088E0988:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088E098C;
L_088E098C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0990;
L_088E0990:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0A44;
    }
    goto L_088E099C;
L_088E099C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 21u);
      if (branch_taken) {
          goto L_088E0A34;
      }
      goto L_088E09BC;
    }
L_088E09BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31024)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
        goto L_088E0A10;
    }
    goto L_088E0A00;
L_088E0A00:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_088E0A10;
L_088E0A10:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A38;
      }
      goto L_088E0A2C;
    }
L_088E0A2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088E0A38;
      }
      goto L_088E0A34;
    }
L_088E0A34:
    ctx.gpr[4] = (0u | 6u);
    goto L_088E0A38;
L_088E0A38:
    ctx.gpr[31] = (0x088E0A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0A40u) goto L_088E0A40;
    return;
L_088E0A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0A44;
L_088E0A44:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0AC4;
    }
    goto L_088E0A4C;
L_088E0A4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
        goto L_088E0A78;
    }
    goto L_088E0A64;
L_088E0A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0AC4;
    }
    goto L_088E0A74;
L_088E0A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    goto L_088E0A78;
L_088E0A78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E0AA0;
      }
      goto L_088E0A84;
    }
L_088E0A84:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E0A90u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0A90u) goto L_088E0A90;
    return;
L_088E0A90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0AB4;
      }
      goto L_088E0AA0;
    }
L_088E0AA0:
    ctx.gpr[31] = (0x088E0AA8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0AA8u) goto L_088E0AA8;
    return;
L_088E0AA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    goto L_088E0AB4;
L_088E0AB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_088E0AC0;
      }
      goto L_088E0ABC;
    }
L_088E0ABC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088E0AC0;
L_088E0AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0AC4;
L_088E0AC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0ACC;
    }
L_088E0ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E0B00;
      }
      goto L_088E0AE8;
    }
L_088E0AE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E0AF4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0AF4u) goto L_088E0AF4;
    return;
L_088E0AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E0B10;
      }
      goto L_088E0B00;
    }
L_088E0B00:
    ctx.gpr[31] = (0x088E0B08u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0B08u) goto L_088E0B08;
    return;
L_088E0B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_088E0B10;
L_088E0B10:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0B20;
    }
L_088E0B20:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    goto L_088E0B24;
L_088E0B24:
    ctx.gpr[31] = (0x088E0B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E58B4u>(ctx, &aot_mem) && ctx.pc == 0x088E0B2Cu) goto L_088E0B2C;
    return;
L_088E0B2C:
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
L_088E0B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F3C;
      }
      goto L_088E0BD4;
    }
L_088E0BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[23] = (0u | 8u);
      if (branch_taken) {
          goto L_088E0D4C;
      }
      goto L_088E0BEC;
    }
L_088E0BEC:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E0D50;
    }
    goto L_088E0C00;
L_088E0C00:
    ctx.gpr[31] = (0x088E0C08u);
    ctx.gpr[19] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D72F0u>(ctx, &aot_mem) && ctx.pc == 0x088E0C08u) goto L_088E0C08;
    return;
L_088E0C08:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088E0CBC;
      }
      goto L_088E0C10;
    }
L_088E0C10:
    ctx.gpr[31] = (0x088E0C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 563u, 0x088DE388u>(ctx, &aot_mem) && ctx.pc == 0x088E0C18u) goto L_088E0C18;
    return;
L_088E0C18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E0C3C;
      }
      goto L_088E0C20;
    }
L_088E0C20:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_088E0D44;
      }
      goto L_088E0C3C;
    }
L_088E0C3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31016), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E0C98u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31020), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 500u, 0x088DDA90u>(ctx, &aot_mem) && ctx.pc == 0x088E0C98u) goto L_088E0C98;
    return;
L_088E0C98:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088E0CA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E0CA4u) goto L_088E0CA4;
    return;
L_088E0CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088E0CB4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E0CB4u) goto L_088E0CB4;
    return;
L_088E0CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D44;
      }
      goto L_088E0CBC;
    }
L_088E0CBC:
    ctx.gpr[31] = (0x088E0CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 541u, 0x088DE050u>(ctx, &aot_mem) && ctx.pc == 0x088E0CC4u) goto L_088E0CC4;
    return;
L_088E0CC4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E0D24;
      }
      goto L_088E0CCC;
    }
L_088E0CCC:
    ctx.gpr[31] = (0x088E0CD4u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 563u, 0x088DE388u>(ctx, &aot_mem) && ctx.pc == 0x088E0CD4u) goto L_088E0CD4;
    return;
L_088E0CD4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[22] = (0u | 11u);
      if (branch_taken) {
          goto L_088E0D08;
      }
      goto L_088E0CDC;
    }
L_088E0CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088E0CF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E0CF4u) goto L_088E0CF4;
    return;
L_088E0CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_088E0D44;
      }
      goto L_088E0D08;
    }
L_088E0D08:
    ctx.gpr[31] = (0x088E0D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E0D10u) goto L_088E0D10;
    return;
L_088E0D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E0D1Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 57u, 0x088E48FCu>(ctx, &aot_mem) && ctx.pc == 0x088E0D1Cu) goto L_088E0D1C;
    return;
L_088E0D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D44;
      }
      goto L_088E0D24;
    }
L_088E0D24:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[19] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    goto L_088E0D44;
L_088E0D44:
    ctx.gpr[31] = (0x088E0D4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0D4Cu) goto L_088E0D4C;
    return;
L_088E0D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E0D50;
L_088E0D50:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0DC8;
    }
    goto L_088E0D5C;
L_088E0D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E0DC8;
    }
    goto L_088E0D74;
L_088E0D74:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E0DBCu);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E0DBCu) goto L_088E0DBC;
    return;
L_088E0DBC:
    ctx.gpr[31] = (0x088E0DC4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0DC4u) goto L_088E0DC4;
    return;
L_088E0DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0DC8;
L_088E0DC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[5] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_088E0E4C;
      }
      goto L_088E0DD0;
    }
L_088E0DD0:
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[9] = (1u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32120)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-15384)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E0E20;
      }
      goto L_088E0E14;
    }
L_088E0E14:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E4C;
      }
      goto L_088E0E20;
    }
L_088E0E20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E40;
      }
      goto L_088E0E2C;
    }
L_088E0E2C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E0E38u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0E38u) goto L_088E0E38;
    return;
L_088E0E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E0E4C;
      }
      goto L_088E0E40;
    }
L_088E0E40:
    ctx.gpr[31] = (0x088E0E48u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0E48u) goto L_088E0E48;
    return;
L_088E0E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0E4C;
L_088E0E4C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E0E98;
      }
      goto L_088E0E54;
    }
L_088E0E54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0E64;
    }
L_088E0E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0E6C;
    }
L_088E0E6C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0E88;
      }
      goto L_088E0E74;
    }
L_088E0E74:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E0E80u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0E80u) goto L_088E0E80;
    return;
L_088E0E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E0E94;
      }
      goto L_088E0E88;
    }
L_088E0E88:
    ctx.gpr[31] = (0x088E0E90u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0E90u) goto L_088E0E90;
    return;
L_088E0E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0E94;
L_088E0E94:
    ctx.gpr[5] = (0u | 4u);
    goto L_088E0E98;
L_088E0E98:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0EF0;
      }
      goto L_088E0EA0;
    }
L_088E0EA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088E0EC4;
      }
      goto L_088E0EB8;
    }
L_088E0EB8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EF0;
      }
      goto L_088E0EC4;
    }
L_088E0EC4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E0EE4;
      }
      goto L_088E0ED0;
    }
L_088E0ED0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E0EDCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0EDCu) goto L_088E0EDC;
    return;
L_088E0EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E0EF0;
      }
      goto L_088E0EE4;
    }
L_088E0EE4:
    ctx.gpr[31] = (0x088E0EECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0EECu) goto L_088E0EEC;
    return;
L_088E0EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E0EF0;
L_088E0EF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088E0F34;
      }
      goto L_088E0EF8;
    }
L_088E0EF8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_088E0F10;
      }
      goto L_088E0F08;
    }
L_088E0F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E0F10;
      }
      goto L_088E0F10;
    }
L_088E0F10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E0F2C;
      }
      goto L_088E0F18;
    }
L_088E0F18:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E0F24u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0F24u) goto L_088E0F24;
    return;
L_088E0F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F34;
      }
      goto L_088E0F2C;
    }
L_088E0F2C:
    ctx.gpr[31] = (0x088E0F34u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0F34u) goto L_088E0F34;
    return;
L_088E0F34:
    ctx.gpr[31] = (0x088E0F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E58B4u>(ctx, &aot_mem) && ctx.pc == 0x088E0F3Cu) goto L_088E0F3C;
    return;
L_088E0F3C:
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
L_088E0F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(796));
      if (branch_taken) {
          goto L_088E1458;
      }
      goto L_088E0FE4;
    }
L_088E0FE4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[23] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (0u | 8u);
      if (branch_taken) {
          goto L_088E1030;
      }
      goto L_088E1028;
    }
L_088E1028:
    ctx.gpr[20] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_088E1030;
L_088E1030:
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_088E11A4;
      }
      goto L_088E103C;
    }
L_088E103C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 64u);
      if (branch_taken) {
          goto L_088E11A8;
      }
      goto L_088E104C;
    }
L_088E104C:
    ctx.gpr[31] = (0x088E1054u);
    ctx.gpr[18] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D72F0u>(ctx, &aot_mem) && ctx.pc == 0x088E1054u) goto L_088E1054;
    return;
L_088E1054:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E1108;
      }
      goto L_088E105C;
    }
L_088E105C:
    ctx.gpr[31] = (0x088E1064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 563u, 0x088DE388u>(ctx, &aot_mem) && ctx.pc == 0x088E1064u) goto L_088E1064;
    return;
L_088E1064:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E1088;
      }
      goto L_088E106C;
    }
L_088E106C:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 6u);
      if (branch_taken) {
          goto L_088E1198;
      }
      goto L_088E1088;
    }
L_088E1088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31016), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E10E4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31020), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 500u, 0x088DDA90u>(ctx, &aot_mem) && ctx.pc == 0x088E10E4u) goto L_088E10E4;
    return;
L_088E10E4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088E10F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E10F0u) goto L_088E10F0;
    return;
L_088E10F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088E1100u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E1100u) goto L_088E1100;
    return;
L_088E1100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1198;
      }
      goto L_088E1108;
    }
L_088E1108:
    ctx.gpr[31] = (0x088E1110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 541u, 0x088DE050u>(ctx, &aot_mem) && ctx.pc == 0x088E1110u) goto L_088E1110;
    return;
L_088E1110:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E1178;
      }
      goto L_088E1118;
    }
L_088E1118:
    ctx.gpr[31] = (0x088E1120u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 563u, 0x088DE388u>(ctx, &aot_mem) && ctx.pc == 0x088E1120u) goto L_088E1120;
    return;
L_088E1120:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088E115C;
      }
      goto L_088E1128;
    }
L_088E1128:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088E1144u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E1144u) goto L_088E1144;
    return;
L_088E1144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[30]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088E1198;
      }
      goto L_088E115C;
    }
L_088E115C:
    ctx.gpr[31] = (0x088E1164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E1164u) goto L_088E1164;
    return;
L_088E1164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E1170u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 57u, 0x088E48FCu>(ctx, &aot_mem) && ctx.pc == 0x088E1170u) goto L_088E1170;
    return;
L_088E1170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1198;
      }
      goto L_088E1178;
    }
L_088E1178:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[18] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    goto L_088E1198;
L_088E1198:
    ctx.gpr[31] = (0x088E11A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E11A0u) goto L_088E11A0;
    return;
L_088E11A0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_088E11A4;
L_088E11A4:
    ctx.gpr[4] = (0u | 64u);
    goto L_088E11A8;
L_088E11A8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_088E1214;
      }
      goto L_088E11B0;
    }
L_088E11B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_088E1218;
    }
    goto L_088E11C8;
L_088E11C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E120Cu);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E120Cu) goto L_088E120C;
    return;
L_088E120C:
    ctx.gpr[31] = (0x088E1214u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1214u) goto L_088E1214;
    return;
L_088E1214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E1218;
L_088E1218:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088E12F4;
      }
      goto L_088E1220;
    }
L_088E1220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 2u);
        goto L_088E12F4;
    }
    goto L_088E1238;
L_088E1238:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
      if (branch_taken) {
          goto L_088E1270;
      }
      goto L_088E125C;
    }
L_088E125C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E1268u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1268u) goto L_088E1268;
    return;
L_088E1268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E12F0;
      }
      goto L_088E1270;
    }
L_088E1270:
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E12E4;
      }
      goto L_088E1298;
    }
L_088E1298:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[20] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_088E12C8;
      }
      goto L_088E12B8;
    }
L_088E12B8:
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u - ctx.gpr[20]);
      if (branch_taken) {
          goto L_088E12C8;
      }
      goto L_088E12C8;
    }
L_088E12C8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088E12DCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E12DCu) goto L_088E12DC;
    return;
L_088E12DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E12F0;
      }
      goto L_088E12E4;
    }
L_088E12E4:
    ctx.gpr[31] = (0x088E12ECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E12ECu) goto L_088E12EC;
    return;
L_088E12EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E12F0;
L_088E12F0:
    ctx.gpr[5] = (0u | 2u);
    goto L_088E12F4;
L_088E12F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E139C;
      }
      goto L_088E12FC;
    }
L_088E12FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (0u | 21u);
      if (branch_taken) {
          goto L_088E1320;
      }
      goto L_088E130C;
    }
L_088E130C:
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] & 3u);
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E1328;
      }
      goto L_088E1320;
    }
L_088E1320:
    ctx.gpr[7] = (ctx.gpr[5] & 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_088E1328;
L_088E1328:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E138C;
      }
      goto L_088E1330;
    }
L_088E1330:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
        goto L_088E1368;
    }
    goto L_088E1358;
L_088E1358:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    goto L_088E1368;
L_088E1368:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1390;
      }
      goto L_088E1384;
    }
L_088E1384:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088E1390;
      }
      goto L_088E138C;
    }
L_088E138C:
    ctx.gpr[4] = (0u | 6u);
    goto L_088E1390;
L_088E1390:
    ctx.gpr[31] = (0x088E1398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1398u) goto L_088E1398;
    return;
L_088E1398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E139C;
L_088E139C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E13EC;
      }
      goto L_088E13A4;
    }
L_088E13A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E13EC;
      }
      goto L_088E13BC;
    }
L_088E13BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E13E0;
      }
      goto L_088E13CC;
    }
L_088E13CC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E13D8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E13D8u) goto L_088E13D8;
    return;
L_088E13D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E13EC;
      }
      goto L_088E13E0;
    }
L_088E13E0:
    ctx.gpr[31] = (0x088E13E8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E13E8u) goto L_088E13E8;
    return;
L_088E13E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088E13EC;
L_088E13EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E1450;
      }
      goto L_088E13F4;
    }
L_088E13F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_088E1414;
      }
      goto L_088E1404;
    }
L_088E1404:
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088E1414;
      }
      goto L_088E1414;
    }
L_088E1414:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E1434;
      }
      goto L_088E141C;
    }
L_088E141C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E1428u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1428u) goto L_088E1428;
    return;
L_088E1428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088E1444;
      }
      goto L_088E1434;
    }
L_088E1434:
    ctx.gpr[31] = (0x088E143Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E143Cu) goto L_088E143C;
    return;
L_088E143C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_088E1444;
L_088E1444:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E1450;
      }
      goto L_088E144C;
    }
L_088E144C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_088E1450;
L_088E1450:
    ctx.gpr[31] = (0x088E1458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E58B4u>(ctx, &aot_mem) && ctx.pc == 0x088E1458u) goto L_088E1458;
    return;
L_088E1458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[8] = (0u | 64u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[20] = (0u | 128u);
      if (branch_taken) {
          goto L_088E1604;
      }
      goto L_088E14FC;
    }
L_088E14FC:
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_088E1604;
      }
      goto L_088E1510;
    }
L_088E1510:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_088E1564;
      }
      goto L_088E1518;
    }
L_088E1518:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-3612)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[19];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088E1564;
      }
      goto L_088E153C;
    }
L_088E153C:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x088E1554u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E1554u) goto L_088E1554;
    return;
L_088E1554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E15E4;
      }
      goto L_088E1564;
    }
L_088E1564:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_088E15C4;
      }
      goto L_088E156C;
    }
L_088E156C:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9908)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088E15C4;
      }
      goto L_088E1598;
    }
L_088E1598:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088E15B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E15B4u) goto L_088E15B4;
    return;
L_088E15B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E15E4;
      }
      goto L_088E15C4;
    }
L_088E15C4:
    ctx.gpr[31] = (0x088E15CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E15CCu) goto L_088E15CC;
    return;
L_088E15CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.gpr[31] = (0x088E15E0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 57u, 0x088E48FCu>(ctx, &aot_mem) && ctx.pc == 0x088E15E0u) goto L_088E15E0;
    return;
L_088E15E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    goto L_088E15E4;
L_088E15E4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E1600u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1600u) goto L_088E1600;
    return;
L_088E1600:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E1604;
L_088E1604:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088E1690;
      }
      goto L_088E160C;
    }
L_088E160C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1690;
      }
      goto L_088E1624;
    }
L_088E1624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088E1690;
      }
      goto L_088E1630;
    }
L_088E1630:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E1654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 611u, 0x088DE6A4u>(ctx, &aot_mem) && ctx.pc == 0x088E1654u) goto L_088E1654;
    return;
L_088E1654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E168Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E168Cu) goto L_088E168C;
    return;
L_088E168C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E1690;
L_088E1690:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088E17E0;
      }
      goto L_088E1698;
    }
L_088E1698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_088E17E0;
    }
    goto L_088E16B0;
L_088E16B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088E17E0;
      }
      goto L_088E16BC;
    }
L_088E16BC:
    ctx.gpr[31] = (0x088E16C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 563u, 0x088DE388u>(ctx, &aot_mem) && ctx.pc == 0x088E16C4u) goto L_088E16C4;
    return;
L_088E16C4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E1758;
      }
      goto L_088E16CC;
    }
L_088E16CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31016), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E1740u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31020), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 552u, 0x088DE1F0u>(ctx, &aot_mem) && ctx.pc == 0x088E1740u) goto L_088E1740;
    return;
L_088E1740:
    ctx.gpr[31] = (0x088E1748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 500u, 0x088DDA90u>(ctx, &aot_mem) && ctx.pc == 0x088E1748u) goto L_088E1748;
    return;
L_088E1748:
    ctx.gpr[31] = (0x088E1750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E1750u) goto L_088E1750;
    return;
L_088E1750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E176C;
      }
      goto L_088E1758;
    }
L_088E1758:
    ctx.gpr[31] = (0x088E1760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 552u, 0x088DE1F0u>(ctx, &aot_mem) && ctx.pc == 0x088E1760u) goto L_088E1760;
    return;
L_088E1760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E176Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 436u, 0x088D71D4u>(ctx, &aot_mem) && ctx.pc == 0x088E176Cu) goto L_088E176C;
    return;
L_088E176C:
    ctx.gpr[31] = (0x088E1774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 280u, 0x088D9774u>(ctx, &aot_mem) && ctx.pc == 0x088E1774u) goto L_088E1774;
    return;
L_088E1774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[31] = (0x088E17C4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E17C4u) goto L_088E17C4;
    return;
L_088E17C4:
    ctx.gpr[31] = (0x088E17CCu);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E17CCu) goto L_088E17CC;
    return;
L_088E17CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u | 2u);
    goto L_088E17E0;
L_088E17E0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E1818;
      }
      goto L_088E17E8;
    }
L_088E17E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E180C;
      }
      goto L_088E17F8;
    }
L_088E17F8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[31] = (0x088E1804u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1804u) goto L_088E1804;
    return;
L_088E1804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E1818;
      }
      goto L_088E180C;
    }
L_088E180C:
    ctx.gpr[31] = (0x088E1814u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1814u) goto L_088E1814;
    return;
L_088E1814:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E1818;
L_088E1818:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E184C;
      }
      goto L_088E1820;
    }
L_088E1820:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1844;
      }
      goto L_088E1830;
    }
L_088E1830:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x088E183Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E183Cu) goto L_088E183C;
    return;
L_088E183C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E184C;
      }
      goto L_088E1844;
    }
L_088E1844:
    ctx.gpr[31] = (0x088E184Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E184Cu) goto L_088E184C;
    return;
L_088E184C:
    ctx.gpr[31] = (0x088E1854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E58B4u>(ctx, &aot_mem) && ctx.pc == 0x088E1854u) goto L_088E1854;
    return;
L_088E1854:
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
L_088E1878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[20] = (1u << 16u);
      if (branch_taken) {
          goto L_088E1934;
      }
      goto L_088E18C0;
    }
L_088E18C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088E1964;
      }
      goto L_088E18C8;
    }
L_088E18C8:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E18DCu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E18DCu) goto L_088E18DC;
    return;
L_088E18DC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18292)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18296));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18428)));
    ctx.gpr[31] = (0x088E1900u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1900u) goto L_088E1900;
    return;
L_088E1900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32040)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x088E191Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088E191Cu) goto L_088E191C;
    return;
L_088E191C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32040)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E1960;
      }
      goto L_088E1934;
    }
L_088E1934:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088E1964;
      }
      goto L_088E1940;
    }
L_088E1940:
    ctx.gpr[31] = (0x088E1948u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088E1948u) goto L_088E1948;
    return;
L_088E1948:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E1960;
      }
      goto L_088E1954;
    }
L_088E1954:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32040)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088E1960;
L_088E1960:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088E1964;
L_088E1964:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32044)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
        goto L_088E19AC;
    }
    goto L_088E1974;
L_088E1974:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088E19D8;
      }
      goto L_088E197C;
    }
L_088E197C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(18400));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088E1994u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088E1994u) goto L_088E1994;
    return;
L_088E1994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32044)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E19D4;
      }
      goto L_088E19AC;
    }
L_088E19AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088E19D8;
      }
      goto L_088E19B4;
    }
L_088E19B4:
    ctx.gpr[31] = (0x088E19BCu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088E19BCu) goto L_088E19BC;
    return;
L_088E19BC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E19D4;
      }
      goto L_088E19C8;
    }
L_088E19C8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32044)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088E19D4;
L_088E19D4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088E19D8;
L_088E19D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32040)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088E1A88;
      }
      goto L_088E19E8;
    }
L_088E19E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32044)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E1A88;
      }
      goto L_088E19F8;
    }
L_088E19F8:
    ctx.gpr[31] = (0x088E1A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 141u, 0x088DC73Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1A00u) goto L_088E1A00;
    return;
L_088E1A00:
    ctx.gpr[31] = (0x088E1A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 475u, 0x088DD814u>(ctx, &aot_mem) && ctx.pc == 0x088E1A08u) goto L_088E1A08;
    return;
L_088E1A08:
    ctx.gpr[31] = (0x088E1A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 430u, 0x088D70D8u>(ctx, &aot_mem) && ctx.pc == 0x088E1A10u) goto L_088E1A10;
    return;
L_088E1A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32036)));
    ctx.gpr[31] = (0x088E1A30u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088E1A30u) goto L_088E1A30;
    return;
L_088E1A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E1A40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32036)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088E1A40u) goto L_088E1A40;
    return;
L_088E1A40:
    ctx.gpr[31] = (0x088E1A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 5u, 0x088D8068u>(ctx, &aot_mem) && ctx.pc == 0x088E1A48u) goto L_088E1A48;
    return;
L_088E1A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32048), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32040)));
    ctx.gpr[31] = (0x088E1A74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088E1A74u) goto L_088E1A74;
    return;
L_088E1A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32044)));
    ctx.gpr[31] = (0x088E1A88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088E1A88u) goto L_088E1A88;
    return;
L_088E1A88:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 376u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E1B0Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1B0Cu) goto L_088E1B0C;
    return;
L_088E1B0C:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32056), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E1B30u);
    ctx.gpr[6] = (0u | 376u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E1B30u) goto L_088E1B30;
    return;
L_088E1B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32056)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088E1B48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32056)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x0883A26Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1B48u) goto L_088E1B48;
    return;
L_088E1B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32056)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32056)));
    ctx.gpr[31] = (0x088E1B68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x0883A26Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1B68u) goto L_088E1B68;
    return;
L_088E1B68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 204u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E1B7Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1B7Cu) goto L_088E1B7C;
    return;
L_088E1B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32060), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E1B9Cu);
    ctx.gpr[6] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E1B9Cu) goto L_088E1B9C;
    return;
L_088E1B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32060)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32060)));
    ctx.gpr[6] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32060)));
    ctx.gpr[7] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32060)));
    ctx.gpr[6] = (0u | 220u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32060)));
    ctx.gpr[7] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x088E1BE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32060)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 391u, 0x0883B184u>(ctx, &aot_mem) && ctx.pc == 0x088E1BE4u) goto L_088E1BE4;
    return;
L_088E1BE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 644u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E1BF8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1BF8u) goto L_088E1BF8;
    return;
L_088E1BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32064), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E1C18u);
    ctx.gpr[6] = (0u | 644u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E1C18u) goto L_088E1C18;
    return;
L_088E1C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088E1C28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 56u, 0x088387C8u>(ctx, &aot_mem) && ctx.pc == 0x088E1C28u) goto L_088E1C28;
    return;
L_088E1C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (17361u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16872u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[31] = (0x088E1C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088E1C64u) goto L_088E1C64;
    return;
L_088E1C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (17362u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[31] = (0x088E1CA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088E1CA0u) goto L_088E1CA0;
    return;
L_088E1CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[31] = (0x088E1CB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 182u, 0x08839714u>(ctx, &aot_mem) && ctx.pc == 0x088E1CB4u) goto L_088E1CB4;
    return;
L_088E1CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[31] = (0x088E1CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 203u, 0x08839A04u>(ctx, &aot_mem) && ctx.pc == 0x088E1CC8u) goto L_088E1CC8;
    return;
L_088E1CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (17012u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17156u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5344));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(496), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[6] = (16776u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16896u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5328));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(588), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    ctx.gpr[30] = (ctx.gpr[4] << 24u);
    ctx.gpr[23] = (ctx.gpr[5] << 24u);
    ctx.gpr[22] = (ctx.gpr[6] << 24u);
    ctx.gpr[21] = (ctx.gpr[7] << 24u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (1u << 16u);
    goto L_088E1DB0;
L_088E1DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32036)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(488), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(484), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(480));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32064)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E1E10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E1E10u) goto L_088E1E10;
    return;
L_088E1E10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088E1DB0;
      }
      goto L_088E1E20;
    }
L_088E1E20:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 720u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E1E38u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1E38u) goto L_088E1E38;
    return;
L_088E1E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32068), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E1E54u);
    ctx.gpr[6] = (0u | 720u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E1E54u) goto L_088E1E54;
    return;
L_088E1E54:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5580));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (16904u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (16980u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (16984u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[7] << 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (17270u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(18436));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5316));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5300));
    goto L_088E1F00;
L_088E1F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E1F74;
      }
      goto L_088E1F14;
    }
L_088E1F14:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088E1F20u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(18436)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E1F20u) goto L_088E1F20;
    return;
L_088E1F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (16972u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[7] = (16816u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E1FDC;
      }
      goto L_088E1F74;
    }
L_088E1F74:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088E1FE0;
      }
      goto L_088E1F80;
    }
L_088E1F80:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088E1F8Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E1F8Cu) goto L_088E1F8C;
    return;
L_088E1F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[7] = (16720u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[7] = (16968u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_088E1FDC;
L_088E1FDC:
    ctx.gpr[6] = (0u | 2u);
    goto L_088E1FE0;
L_088E1FE0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088E2078;
      }
      goto L_088E1FE8;
    }
L_088E1FE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[31] = (0x088E1FFCu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 374u, 0x088D9C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1FFCu) goto L_088E1FFC;
    return;
L_088E1FFC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2008u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 393u, 0x088D9DD8u>(ctx, &aot_mem) && ctx.pc == 0x088E2008u) goto L_088E2008;
    return;
L_088E2008:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088E2024u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088E2024u) goto L_088E2024;
    return;
L_088E2024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088E20D8;
      }
      goto L_088E2078;
    }
L_088E2078:
    if (ctx.gpr[17] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_088E20DC;
    }
    goto L_088E2080;
L_088E2080:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088E2090u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 412u, 0x088D9E90u>(ctx, &aot_mem) && ctx.pc == 0x088E2090u) goto L_088E2090;
    return;
L_088E2090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_088E20D8;
L_088E20D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088E20DC;
L_088E20DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[31] = (0x088E2100u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2100u) goto L_088E2100;
    return;
L_088E2100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E211Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E211Cu) goto L_088E211C;
    return;
L_088E211C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32068)));
    ctx.gpr[31] = (0x088E2130u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E2130u) goto L_088E2130;
    return;
L_088E2130:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088E1F00;
      }
      goto L_088E2140;
    }
L_088E2140:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E21E0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E21E0u) goto L_088E21E0;
    return;
L_088E21E0:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32072), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E2204u);
    ctx.gpr[6] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E2204u) goto L_088E2204;
    return;
L_088E2204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32072)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32072)));
    ctx.gpr[8] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16900u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32072)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32072)));
    ctx.gpr[5] = (0u | 220u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32072)));
    ctx.gpr[7] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x088E2278u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32072)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 391u, 0x0883B184u>(ctx, &aot_mem) && ctx.pc == 0x088E2278u) goto L_088E2278;
    return;
L_088E2278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E228Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E228Cu) goto L_088E228C;
    return;
L_088E228C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[19] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32076), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E22ACu);
    ctx.gpr[6] = (0u | 368u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E22ACu) goto L_088E22AC;
    return;
L_088E22AC:
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] << 24u);
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (ctx.gpr[7] << 24u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18436));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17100u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17244u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[22] = (1u << 16u);
    goto L_088E2354;
L_088E2354:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32076)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32076)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32076)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32076)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32076)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32076)));
    ctx.gpr[31] = (0x088E23C8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E23C8u) goto L_088E23C8;
    return;
L_088E23C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088E2354;
      }
      goto L_088E23D8;
    }
L_088E23D8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 900u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E23F0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E23F0u) goto L_088E23F0;
    return;
L_088E23F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32080), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E240Cu);
    ctx.gpr[6] = (0u | 900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E240Cu) goto L_088E240C;
    return;
L_088E240C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17142u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5300));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (17054u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088E2454;
L_088E2454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E2470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E2470u) goto L_088E2470;
    return;
L_088E2470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088E24FC;
      }
      goto L_088E24D8;
    }
L_088E24D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_088E2520;
      }
      goto L_088E24FC;
    }
L_088E24FC:
    ctx.gpr[30] = (0u | 64u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088E2520;
L_088E2520:
    ctx.gpr[31] = (0x088E2528u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2528u) goto L_088E2528;
    return;
L_088E2528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E2544u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E2544u) goto L_088E2544;
    return;
L_088E2544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32080)));
    ctx.gpr[31] = (0x088E2558u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E2558u) goto L_088E2558;
    return;
L_088E2558:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2454;
      }
      goto L_088E256C;
    }
L_088E256C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E25E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1104u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E263Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E263Cu) goto L_088E263C;
    return;
L_088E263C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32092), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2668u);
    ctx.gpr[6] = (0u | 1104u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E2668u) goto L_088E2668;
    return;
L_088E2668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (17213u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (17242u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (16960u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088E26DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 310u, 0x0883A610u>(ctx, &aot_mem) && ctx.pc == 0x088E26DCu) goto L_088E26DC;
    return;
L_088E26DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (16576u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[22] = (0u | 101u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[21] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2788u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E2788u) goto L_088E2788;
    return;
L_088E2788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[5] = (16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (17058u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (16964u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (17054u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 293u, 0x0883A464u>(ctx, &aot_mem) && ctx.pc == 0x088E2820u) goto L_088E2820;
    return;
L_088E2820:
    ctx.gpr[5] = (17088u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17040u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17235u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (0u | 64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088E2860;
L_088E2860:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E2910u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E2910u) goto L_088E2910;
    return;
L_088E2910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E2860;
      }
      goto L_088E292C;
    }
L_088E292C:
    ctx.gpr[5] = (17256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (17092u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E29C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E29C4u) goto L_088E29C4;
    return;
L_088E29C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (17255u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2A68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E2A68u) goto L_088E2A68;
    return;
L_088E2A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 196u, 0x08839908u>(ctx, &aot_mem) && ctx.pc == 0x088E2A7Cu) goto L_088E2A7C;
    return;
L_088E2A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (17226u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(828), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (17243u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2AF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 310u, 0x0883A610u>(ctx, &aot_mem) && ctx.pc == 0x088E2AF4u) goto L_088E2AF4;
    return;
L_088E2AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(924), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(940));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2B90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E2B90u) goto L_088E2B90;
    return;
L_088E2B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17028u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (17032u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17241u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (16924u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (16752u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1020), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1032));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E2C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088E2C60u) goto L_088E2C60;
    return;
L_088E2C60:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2880u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E2C78u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E2C78u) goto L_088E2C78;
    return;
L_088E2C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32088), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32088)));
    ctx.gpr[31] = (0x088E2CA0u);
    ctx.gpr[6] = (0u | 2880u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E2CA0u) goto L_088E2CA0;
    return;
L_088E2CA0:
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (17086u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088E2CB8;
L_088E2CB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[21] = (ctx.gpr[19] << 8u);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[20] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E2CE0;
L_088E2CE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32088)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32088)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32088)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32088)));
    ctx.gpr[31] = (0x088E2D48u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 253u, 0x08839F70u>(ctx, &aot_mem) && ctx.pc == 0x088E2D48u) goto L_088E2D48;
    return;
L_088E2D48:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_088E2CE0;
      }
      goto L_088E2D58;
    }
L_088E2D58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088E2CB8;
      }
      goto L_088E2D68;
    }
L_088E2D68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 900u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
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
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E2E08u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E2E08u) goto L_088E2E08;
    return;
L_088E2E08:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32096), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E2E2Cu);
    ctx.gpr[6] = (0u | 900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E2E2Cu) goto L_088E2E2C;
    return;
L_088E2E2C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5652));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5316));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5300));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[30] = (ctx.gpr[4] << 24u);
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[8] << 24u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(18436));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17142u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17225u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    goto L_088E2F00;
L_088E2F00:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088E2F10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E2F10u) goto L_088E2F10;
    return;
L_088E2F10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x088E2F8Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088E2F8Cu) goto L_088E2F8C;
    return;
L_088E2F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E2FA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E2FA8u) goto L_088E2FA8;
    return;
L_088E2FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E2FBCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E2FBCu) goto L_088E2FBC;
    return;
L_088E2FBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32096)));
      if (branch_taken) {
          goto L_088E2F00;
      }
      goto L_088E2FD8;
    }
L_088E2FD8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088E3004u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5292));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3004u) goto L_088E3004;
    return;
L_088E3004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(364), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[7] = (17228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E3080u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088E3080u) goto L_088E3080;
    return;
L_088E3080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3098u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E3098u) goto L_088E3098;
    return;
L_088E3098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E30ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E30ACu) goto L_088E30AC;
    return;
L_088E30AC:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (17028u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    ctx.gpr[4] = (17070u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (17243u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    goto L_088E30E0;
L_088E30E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E30FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E30FCu) goto L_088E30FC;
    return;
L_088E30FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(544), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(708));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088E3188;
      }
      goto L_088E3164;
    }
L_088E3164:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_088E31A8;
      }
      goto L_088E3188;
    }
L_088E3188:
    ctx.gpr[30] = (0u & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088E31A8;
L_088E31A8:
    ctx.gpr[31] = (0x088E31B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088E31B0u) goto L_088E31B0;
    return;
L_088E31B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E31CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(700));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E31CCu) goto L_088E31CC;
    return;
L_088E31CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E31E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E31E4u) goto L_088E31E4;
    return;
L_088E31E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E30E0;
      }
      goto L_088E31F8;
    }
L_088E31F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E326C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    ctx.gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_088E32D8;
      }
      goto L_088E32D0;
    }
L_088E32D0:
    ctx.gpr[6] = (16924u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_088E32D8;
L_088E32D8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (17213u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E3304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32092)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 323u, 0x0883A784u>(ctx, &aot_mem) && ctx.pc == 0x088E3304u) goto L_088E3304;
    return;
L_088E3304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088E3320u) goto L_088E3320;
    return;
L_088E3320:
    ctx.gpr[31] = (0x088E3328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 214u, 0x088D92F0u>(ctx, &aot_mem) && ctx.pc == 0x088E3328u) goto L_088E3328;
    return;
L_088E3328:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3514;
      }
      goto L_088E3338;
    }
L_088E3338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17032u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17028u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3378u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088E3378u) goto L_088E3378;
    return;
L_088E3378:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x088E339Cu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E339Cu) goto L_088E339C;
    return;
L_088E339C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(18540));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(18436));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088E33E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5292));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088E33E0u) goto L_088E33E0;
    return;
L_088E33E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E33F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E33F4u) goto L_088E33F4;
    return;
L_088E33F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088E3428;
L_088E3428:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E3450u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E3450u) goto L_088E3450;
    return;
L_088E3450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088E346Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E346Cu) goto L_088E346C;
    return;
L_088E346C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(708));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[18];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088E34C4;
      }
      goto L_088E3494;
    }
L_088E3494:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
      if (branch_taken) {
          goto L_088E34F0;
      }
      goto L_088E34C4;
    }
L_088E34C4:
    ctx.gpr[30] = (0u & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    goto L_088E34F0;
L_088E34F0:
    ctx.gpr[31] = (0x088E34F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088E34F8u) goto L_088E34F8;
    return;
L_088E34F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3428;
      }
      goto L_088E350C;
    }
L_088E350C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088E36A8;
      }
      goto L_088E3514;
    }
L_088E3514:
    ctx.gpr[31] = (0x088E351Cu);
    // nop
    goto L_088E3718;
L_088E351C:
    ctx.gpr[4] = (17040u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17235u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (17104u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (17232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[4] = (17234u << 16u);
    ctx.gpr[19] = (0u | 2u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[21] = (0u | 10u);
    ctx.gpr[20] = (0u | 7u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088E356C;
L_088E356C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E3594;
      }
      goto L_088E3588;
    }
L_088E3588:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E35C8;
      }
      goto L_088E3594;
    }
L_088E3594:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (17088u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E3678;
      }
      goto L_088E35C8;
    }
L_088E35C8:
    if (ctx.gpr[18] == ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_088E35DC;
    }
    goto L_088E35D0;
L_088E35D0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088E3648;
      }
      goto L_088E35D8;
    }
L_088E35D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_088E35DC;
L_088E35DC:
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_088E35F8;
    }
    goto L_088E35E4;
L_088E35E4:
    if (ctx.gpr[4] == ctx.gpr[22]) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_088E35F8;
    }
    goto L_088E35EC;
L_088E35EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E3614;
      }
      goto L_088E35F4;
    }
L_088E35F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_088E35F8;
L_088E35F8:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E3638;
      }
      goto L_088E3614;
    }
L_088E3614:
    if (ctx.gpr[4] != ctx.gpr[20]) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088E363C;
    }
    goto L_088E361C;
L_088E361C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_088E3638;
L_088E3638:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088E363C;
L_088E363C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E3678;
      }
      goto L_088E3648;
    }
L_088E3648:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E3678;
      }
      goto L_088E3650;
    }
L_088E3650:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_088E3678;
L_088E3678:
    ctx.gpr[31] = (0x088E3680u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088E3680u) goto L_088E3680;
    return;
L_088E3680:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088E356C;
      }
      goto L_088E3690;
    }
L_088E3690:
    ctx.gpr[31] = (0x088E3698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 188u, 0x088D90ACu>(ctx, &aot_mem) && ctx.pc == 0x088E3698u) goto L_088E3698;
    return;
L_088E3698:
    ctx.gpr[31] = (0x088E36A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 151u, 0x088D8D98u>(ctx, &aot_mem) && ctx.pc == 0x088E36A0u) goto L_088E36A0;
    return;
L_088E36A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E36D0;
      }
      goto L_088E36A8;
    }
L_088E36A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_088E36D0;
L_088E36D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E3754;
      }
      goto L_088E3748;
    }
L_088E3748:
    ctx.gpr[9] = (0u | 3u);
    if (ctx.gpr[11] != ctx.gpr[9]) {
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
        goto L_088E37FC;
    }
    goto L_088E3754;
L_088E3754:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_088E376C;
      }
      goto L_088E3764;
    }
L_088E3764:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 6u);
      if (branch_taken) {
          goto L_088E3774;
      }
      goto L_088E376C;
    }
L_088E376C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E37A0;
      }
      goto L_088E3774;
    }
L_088E3774:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 9u);
      if (branch_taken) {
          goto L_088E3784;
      }
      goto L_088E377C;
    }
L_088E377C:
    if (ctx.gpr[8] != ctx.gpr[7]) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
        goto L_088E37A4;
    }
    goto L_088E3784;
L_088E3784:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[10] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_088E37A0;
      }
      goto L_088E3790;
    }
L_088E3790:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u - ctx.gpr[10]);
      if (branch_taken) {
          goto L_088E37A0;
      }
      goto L_088E37A0;
    }
L_088E37A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    goto L_088E37A4;
L_088E37A4:
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16864u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17058u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16964u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17054u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E3A44;
      }
      goto L_088E37FC;
    }
L_088E37FC:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    ctx.gpr[8] = (0u | 2u);
      if (branch_taken) {
          goto L_088E3810;
      }
      goto L_088E3804;
    }
L_088E3804:
    ctx.gpr[10] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088E3960;
      }
      goto L_088E3810;
    }
L_088E3810:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[7] = (0u | 5u);
      if (branch_taken) {
          goto L_088E3828;
      }
      goto L_088E3820;
    }
L_088E3820:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[9] = (0u | 7u);
      if (branch_taken) {
          goto L_088E388C;
      }
      goto L_088E3828;
    }
L_088E3828:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16792u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.hi);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E393C;
      }
      goto L_088E388C;
    }
L_088E388C:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 10u);
      if (branch_taken) {
          goto L_088E38D4;
      }
      goto L_088E3894;
    }
L_088E3894:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (16984u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16816u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17110u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E393C;
      }
      goto L_088E38D4;
    }
L_088E38D4:
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.gpr[6] = (16936u << 16u);
        goto L_088E3940;
    }
    goto L_088E38DC;
L_088E38DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16792u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.hi);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    goto L_088E393C;
L_088E393C:
    ctx.gpr[6] = (16936u << 16u);
    goto L_088E3940;
L_088E3940:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16944u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E3A44;
      }
      goto L_088E3960;
    }
L_088E3960:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E3A44;
      }
      goto L_088E3968;
    }
L_088E3968:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (16944u << 16u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
      if (branch_taken) {
          goto L_088E39B4;
      }
      goto L_088E3978;
    }
L_088E3978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (17034u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16792u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.hi);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[7] = (ctx.lo);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E3A04;
      }
      goto L_088E39B4;
    }
L_088E39B4:
    ctx.gpr[9] = (0u | 8u);
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
        goto L_088E3A08;
    }
    goto L_088E39C0;
L_088E39C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[7] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_088E39D4;
      }
      goto L_088E39CC;
    }
L_088E39CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u - ctx.gpr[7]);
      if (branch_taken) {
          goto L_088E39D4;
      }
      goto L_088E39D4;
    }
L_088E39D4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (17072u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[8] >> 31u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    goto L_088E3A04;
L_088E3A04:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_088E3A08;
L_088E3A08:
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17046u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (17036u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32092)));
    goto L_088E3A44;
L_088E3A44:
    ctx.gpr[31] = (0x088E3A4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 306u, 0x0883A5D8u>(ctx, &aot_mem) && ctx.pc == 0x088E3A4Cu) goto L_088E3A4C;
    return;
L_088E3A4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E3A94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 334u, 0x0883A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088E3A94u) goto L_088E3A94;
    return;
L_088E3A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3AA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3AA8u) goto L_088E3AA8;
    return;
L_088E3AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[19] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088E3ABCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3ABCu) goto L_088E3ABC;
    return;
L_088E3ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E3CA4;
      }
      goto L_088E3ACC;
    }
L_088E3ACC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3CA4;
      }
      goto L_088E3AD4;
    }
L_088E3AD4:
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3AE0;
    }
L_088E3AE0:
    ctx.gpr[6] = (ctx.gpr[17] << 6u);
    ctx.gpr[7] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088E3B70;
      }
      goto L_088E3B1C;
    }
L_088E3B1C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088E3BC0;
      }
      goto L_088E3B24;
    }
L_088E3B24:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3C10;
      }
      goto L_088E3B2C;
    }
L_088E3B2C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088E3C54;
      }
      goto L_088E3B34;
    }
L_088E3B34:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(792));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3B54;
    }
L_088E3B54:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3B64u) goto L_088E3B64;
    return;
L_088E3B64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E3CD0;
      }
      goto L_088E3B70;
    }
L_088E3B70:
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27368)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3BA4;
    }
L_088E3BA4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3BB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3BB4u) goto L_088E3BB4;
    return;
L_088E3BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E3CD0;
      }
      goto L_088E3BC0;
    }
L_088E3BC0:
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15384)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3BF4;
    }
L_088E3BF4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3C04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3C04u) goto L_088E3C04;
    return;
L_088E3C04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E3CD0;
      }
      goto L_088E3C10;
    }
L_088E3C10:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3C38;
    }
L_088E3C38:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3C48u) goto L_088E3C48;
    return;
L_088E3C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E3CD0;
      }
      goto L_088E3C54;
    }
L_088E3C54:
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(9908)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3C88;
    }
L_088E3C88:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3C98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3C98u) goto L_088E3C98;
    return;
L_088E3C98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E3CD0;
      }
      goto L_088E3CA4;
    }
L_088E3CA4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3CAC;
    }
L_088E3CAC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E3CD4;
      }
      goto L_088E3CB8;
    }
L_088E3CB8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3CC8u) goto L_088E3CC8;
    return;
L_088E3CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_088E3CD0;
L_088E3CD0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088E3CD4;
L_088E3CD4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
      if (branch_taken) {
          goto L_088E3D6C;
      }
      goto L_088E3CE4;
    }
L_088E3CE4:
    ctx.gpr[31] = (0x088E3CECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 201u, 0x088399E8u>(ctx, &aot_mem) && ctx.pc == 0x088E3CECu) goto L_088E3CEC;
    return;
L_088E3CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3D00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 334u, 0x0883A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088E3D00u) goto L_088E3D00;
    return;
L_088E3D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3D14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3D14u) goto L_088E3D14;
    return;
L_088E3D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3D28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3D28u) goto L_088E3D28;
    return;
L_088E3D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3D3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3D3Cu) goto L_088E3D3C;
    return;
L_088E3D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3D50u) goto L_088E3D50;
    return;
L_088E3D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32096)));
    ctx.gpr[31] = (0x088E3D64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3D64u) goto L_088E3D64;
    return;
L_088E3D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E98;
      }
      goto L_088E3D6C;
    }
L_088E3D6C:
    ctx.gpr[31] = (0x088E3D74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 308u, 0x0883A5F4u>(ctx, &aot_mem) && ctx.pc == 0x088E3D74u) goto L_088E3D74;
    return;
L_088E3D74:
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E3D9C;
      }
      goto L_088E3D80;
    }
L_088E3D80:
    ctx.gpr[5] = (0u | 3u);
    if (ctx.gpr[17] == ctx.gpr[5]) {
    ctx.gpr[19] = (0u | 2u);
        goto L_088E3DA0;
    }
    goto L_088E3D8C;
L_088E3D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E3DA4;
      }
      goto L_088E3D9C;
    }
L_088E3D9C:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E3DA0;
L_088E3DA0:
    ctx.gpr[20] = (0u | 0u);
    goto L_088E3DA4;
L_088E3DA4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088E3DD8;
      }
      goto L_088E3DB0;
    }
L_088E3DB0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x088E3DC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3DC4u) goto L_088E3DC4;
    return;
L_088E3DC4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
      if (branch_taken) {
          goto L_088E3DB0;
      }
      goto L_088E3DD8;
    }
L_088E3DD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_088E3E1C;
      }
      goto L_088E3DE4;
    }
L_088E3DE4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_088E3E1C;
      }
      goto L_088E3DF0;
    }
L_088E3DF0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3E00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3E00u) goto L_088E3E00;
    return;
L_088E3E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3E14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3E14u) goto L_088E3E14;
    return;
L_088E3E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E98;
      }
      goto L_088E3E1C;
    }
L_088E3E1C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_088E3E98;
      }
      goto L_088E3E24;
    }
L_088E3E24:
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(31028)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(796));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-3612)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088E3E98;
      }
      goto L_088E3E78;
    }
L_088E3E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3E84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3E84u) goto L_088E3E84;
    return;
L_088E3E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32092)));
    ctx.gpr[31] = (0x088E3E98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088E3E98u) goto L_088E3E98;
    return;
L_088E3E98:
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
L_088E3EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E3F10u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E3F10u) goto L_088E3F10;
    return;
L_088E3F10:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32104), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3F34u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E3F34u) goto L_088E3F34;
    return;
L_088E3F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088E3F44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 189u, 0x0883980Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3F44u) goto L_088E3F44;
    return;
L_088E3F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (16920u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16992u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17190u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32104)));
    ctx.gpr[31] = (0x088E3F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 29u, 0x088384B4u>(ctx, &aot_mem) && ctx.pc == 0x088E3F98u) goto L_088E3F98;
    return;
L_088E3F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x088E3FBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 210u, 0x08839B00u>(ctx, &aot_mem) && ctx.pc == 0x088E3FBCu) goto L_088E3FBC;
    return;
L_088E3FBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1800u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E3FD0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E3FD0u) goto L_088E3FD0;
    return;
L_088E3FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18424)));
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32108), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3FF0u);
    ctx.gpr[6] = (0u | 1800u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E3FF0u) goto L_088E3FF0;
    return;
L_088E3FF0:
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 13u);
    ctx.pc = 0x088E4000u; return;
}

void recomp_unit_0055(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0055_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_55(Runtime &runtime) {
    runtime.register_generated_unit(55u, 0x088E0000u, 16384u, &recomp_unit_0055, &recomp_unit_0055_entry);
    runtime.register_function(0x088E0000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0028u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0030u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0034u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E003Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0054u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0074u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0098u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E009Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0108u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0110u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0138u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0170u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0180u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0194u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E019Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0224u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0234u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0250u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0258u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E025Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0264u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E026Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0274u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E028Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E029Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0304u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E030Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0314u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E031Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0328u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0330u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0338u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E034Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0360u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E036Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0378u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0418u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0420u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0438u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0440u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0480u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0488u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E048Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0494u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0500u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0504u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E050Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E051Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0530u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0538u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0568u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0604u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E060Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0618u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0628u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0668u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0670u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0678u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0700u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0708u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0738u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0740u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0758u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0814u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E081Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0828u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0840u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0854u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0858u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0890u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E089Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0934u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E093Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0950u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0974u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E097Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0988u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E098Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0990u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E099Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ABCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ACCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ED0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1028u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1030u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E103Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E104Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1054u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E105Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1064u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E106Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1088u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1100u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1108u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1110u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1118u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1120u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1128u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1144u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E115Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1164u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1170u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1178u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1198u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E120Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1214u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1218u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1220u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1238u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E125Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1268u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1270u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1298u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E130Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1328u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1330u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1358u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1368u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1384u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E138Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1390u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1398u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E139Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1404u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1414u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E141Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1428u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1434u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E143Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1444u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E144Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1450u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1458u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1488u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1510u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1518u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E153Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1554u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1564u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E156Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1598u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1600u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1604u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E160Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1624u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1630u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1654u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E168Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1690u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1698u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1740u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1748u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1750u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1758u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1760u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E176Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1804u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E180Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1814u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1818u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1830u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E183Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1844u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E184Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1854u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1878u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1900u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E191Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1934u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1940u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1948u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1954u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1964u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1974u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E197Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1994u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2008u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2024u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2078u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2080u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2100u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E211Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2130u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2140u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2188u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2204u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2278u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E228Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E240Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2454u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2470u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2520u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2544u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2558u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E256Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E263Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2668u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2860u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2910u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E292Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3004u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3080u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3098u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3164u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3188u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E326Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3304u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3328u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3338u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3378u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E339Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3428u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3450u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E346Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3494u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E350Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3514u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E351Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E356Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3588u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3594u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3614u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E361Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3638u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E363Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3648u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3650u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3678u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3680u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3690u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3698u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3718u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3748u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3754u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3764u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E376Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E377Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3784u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3790u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3804u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3810u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3828u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E388Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3894u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E393Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3940u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3978u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3ABCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3ACCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FF0u, &recomp_unit_0055, "recomp_unit_0055");
}
} // namespace psprecomp

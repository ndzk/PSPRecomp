#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0038[4085] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0,
    0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 97, 0, 0, 98, 0, 99,
    0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0,
    109, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129,
    0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0,
    159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182,
    0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    287, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 300,
    0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    325, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 335,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0,
    363, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370,
    0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0,
    383, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 438, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0,
    0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0,
    0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 0, 489,
    490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0,
    0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0,
    0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0,
    571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0,
    0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0,
    0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0,
    0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0,
    0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 618, 0,
    619, 0, 0, 0, 0, 620, 621, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0,
    0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0,
    640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0,
    0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 670,
    0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684,
    0, 685, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0,
    691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 700,
    0, 0, 0, 0, 0, 0, 0, 0, 701, 702, 0, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706,
};
void recomp_unit_0038_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0889C000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0038[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889C000;
    case 2u: goto L_0889C044;
    case 3u: goto L_0889C058;
    case 4u: goto L_0889C070;
    case 5u: goto L_0889C088;
    case 6u: goto L_0889C0A4;
    case 7u: goto L_0889C0C4;
    case 8u: goto L_0889C0F0;
    case 9u: goto L_0889C0F8;
    case 10u: goto L_0889C104;
    case 11u: goto L_0889C118;
    case 12u: goto L_0889C128;
    case 13u: goto L_0889C130;
    case 14u: goto L_0889C140;
    case 15u: goto L_0889C164;
    case 16u: goto L_0889C1C0;
    case 17u: goto L_0889C20C;
    case 18u: goto L_0889C230;
    case 19u: goto L_0889C23C;
    case 20u: goto L_0889C244;
    case 21u: goto L_0889C24C;
    case 22u: goto L_0889C254;
    case 23u: goto L_0889C25C;
    case 24u: goto L_0889C26C;
    case 25u: goto L_0889C280;
    case 26u: goto L_0889C294;
    case 27u: goto L_0889C2A0;
    case 28u: goto L_0889C2AC;
    case 29u: goto L_0889C2B4;
    case 30u: goto L_0889C2BC;
    case 31u: goto L_0889C308;
    case 32u: goto L_0889C324;
    case 33u: goto L_0889C32C;
    case 34u: goto L_0889C358;
    case 35u: goto L_0889C380;
    case 36u: goto L_0889C388;
    case 37u: goto L_0889C398;
    case 38u: goto L_0889C404;
    case 39u: goto L_0889C424;
    case 40u: goto L_0889C434;
    case 41u: goto L_0889C444;
    case 42u: goto L_0889C45C;
    case 43u: goto L_0889C480;
    case 44u: goto L_0889C488;
    case 45u: goto L_0889C498;
    case 46u: goto L_0889C4B0;
    case 47u: goto L_0889C4C4;
    case 48u: goto L_0889C4D8;
    case 49u: goto L_0889C4F0;
    case 50u: goto L_0889C4F8;
    case 51u: goto L_0889C50C;
    case 52u: goto L_0889C528;
    case 53u: goto L_0889C538;
    case 54u: goto L_0889C544;
    case 55u: goto L_0889C554;
    case 56u: goto L_0889C580;
    case 57u: goto L_0889C588;
    case 58u: goto L_0889C5A0;
    case 59u: goto L_0889C5B4;
    case 60u: goto L_0889C5C8;
    case 61u: goto L_0889C5DC;
    case 62u: goto L_0889C5F0;
    case 63u: goto L_0889C604;
    case 64u: goto L_0889C60C;
    case 65u: goto L_0889C624;
    case 66u: goto L_0889C634;
    case 67u: goto L_0889C63C;
    case 68u: goto L_0889C658;
    case 69u: goto L_0889C67C;
    case 70u: goto L_0889C688;
    case 71u: goto L_0889C694;
    case 72u: goto L_0889C69C;
    case 73u: goto L_0889C6AC;
    case 74u: goto L_0889C6BC;
    case 75u: goto L_0889C6D4;
    case 76u: goto L_0889C6F4;
    case 77u: goto L_0889C70C;
    case 78u: goto L_0889C718;
    case 79u: goto L_0889C720;
    case 80u: goto L_0889C728;
    case 81u: goto L_0889C730;
    case 82u: goto L_0889C738;
    case 83u: goto L_0889C748;
    case 84u: goto L_0889C750;
    case 85u: goto L_0889C75C;
    case 86u: goto L_0889C764;
    case 87u: goto L_0889C770;
    case 88u: goto L_0889C784;
    case 89u: goto L_0889C78C;
    case 90u: goto L_0889C794;
    case 91u: goto L_0889C79C;
    case 92u: goto L_0889C7B0;
    case 93u: goto L_0889C7B8;
    case 94u: goto L_0889C7C8;
    case 95u: goto L_0889C7D0;
    case 96u: goto L_0889C7E4;
    case 97u: goto L_0889C7E8;
    case 98u: goto L_0889C7F4;
    case 99u: goto L_0889C7FC;
    case 100u: goto L_0889C808;
    case 101u: goto L_0889C810;
    case 102u: goto L_0889C818;
    case 103u: goto L_0889C830;
    case 104u: goto L_0889C844;
    case 105u: goto L_0889C850;
    case 106u: goto L_0889C858;
    case 107u: goto L_0889C860;
    case 108u: goto L_0889C878;
    case 109u: goto L_0889C880;
    case 110u: goto L_0889C888;
    case 111u: goto L_0889C894;
    case 112u: goto L_0889C89C;
    case 113u: goto L_0889C8A4;
    case 114u: goto L_0889C8BC;
    case 115u: goto L_0889C8D0;
    case 116u: goto L_0889C8DC;
    case 117u: goto L_0889C8E4;
    case 118u: goto L_0889C8EC;
    case 119u: goto L_0889C904;
    case 120u: goto L_0889C918;
    case 121u: goto L_0889C924;
    case 122u: goto L_0889C92C;
    case 123u: goto L_0889C934;
    case 124u: goto L_0889C944;
    case 125u: goto L_0889C95C;
    case 126u: goto L_0889C964;
    case 127u: goto L_0889C96C;
    case 128u: goto L_0889C974;
    case 129u: goto L_0889C97C;
    case 130u: goto L_0889C984;
    case 131u: goto L_0889C98C;
    case 132u: goto L_0889C9A8;
    case 133u: goto L_0889C9CC;
    case 134u: goto L_0889C9E8;
    case 135u: goto L_0889CA7C;
    case 136u: goto L_0889CA90;
    case 137u: goto L_0889CA9C;
    case 138u: goto L_0889CAA4;
    case 139u: goto L_0889CAAC;
    case 140u: goto L_0889CAB4;
    case 141u: goto L_0889CABC;
    case 142u: goto L_0889CAF0;
    case 143u: goto L_0889CB24;
    case 144u: goto L_0889CB58;
    case 145u: goto L_0889CB8C;
    case 146u: goto L_0889CBC0;
    case 147u: goto L_0889CBF0;
    case 148u: goto L_0889CBFC;
    case 149u: goto L_0889CC20;
    case 150u: goto L_0889CC40;
    case 151u: goto L_0889CC50;
    case 152u: goto L_0889CC80;
    case 153u: goto L_0889CCAC;
    case 154u: goto L_0889CCC8;
    case 155u: goto L_0889CCDC;
    case 156u: goto L_0889CCE8;
    case 157u: goto L_0889CCF0;
    case 158u: goto L_0889CCF8;
    case 159u: goto L_0889CD00;
    case 160u: goto L_0889CD08;
    case 161u: goto L_0889CD1C;
    case 162u: goto L_0889CD30;
    case 163u: goto L_0889CD44;
    case 164u: goto L_0889CD5C;
    case 165u: goto L_0889CD70;
    case 166u: goto L_0889CD84;
    case 167u: goto L_0889CDA4;
    case 168u: goto L_0889CE3C;
    case 169u: goto L_0889CE50;
    case 170u: goto L_0889CE68;
    case 171u: goto L_0889CED8;
    case 172u: goto L_0889CF20;
    case 173u: goto L_0889CF38;
    case 174u: goto L_0889CF44;
    case 175u: goto L_0889CF58;
    case 176u: goto L_0889CF70;
    case 177u: goto L_0889CF90;
    case 178u: goto L_0889CFA8;
    case 179u: goto L_0889CFC4;
    case 180u: goto L_0889CFDC;
    case 181u: goto L_0889CFF4;
    case 182u: goto L_0889CFFC;
    case 183u: goto L_0889D004;
    case 184u: goto L_0889D00C;
    case 185u: goto L_0889D014;
    case 186u: goto L_0889D030;
    case 187u: goto L_0889D04C;
    case 188u: goto L_0889D068;
    case 189u: goto L_0889D088;
    case 190u: goto L_0889D0A4;
    case 191u: goto L_0889D0C0;
    case 192u: goto L_0889D0E8;
    case 193u: goto L_0889D144;
    case 194u: goto L_0889D1B0;
    case 195u: goto L_0889D1D8;
    case 196u: goto L_0889D1E4;
    case 197u: goto L_0889D1F4;
    case 198u: goto L_0889D238;
    case 199u: goto L_0889D24C;
    case 200u: goto L_0889D260;
    case 201u: goto L_0889D278;
    case 202u: goto L_0889D28C;
    case 203u: goto L_0889D2A4;
    case 204u: goto L_0889D2C4;
    case 205u: goto L_0889D2D8;
    case 206u: goto L_0889D2F0;
    case 207u: goto L_0889D3D8;
    case 208u: goto L_0889D3F4;
    case 209u: goto L_0889D428;
    case 210u: goto L_0889D458;
    case 211u: goto L_0889D460;
    case 212u: goto L_0889D468;
    case 213u: goto L_0889D480;
    case 214u: goto L_0889D490;
    case 215u: goto L_0889D4A4;
    case 216u: goto L_0889D500;
    case 217u: goto L_0889D514;
    case 218u: goto L_0889D53C;
    case 219u: goto L_0889D554;
    case 220u: goto L_0889D568;
    case 221u: goto L_0889D580;
    case 222u: goto L_0889D594;
    case 223u: goto L_0889D59C;
    case 224u: goto L_0889D5A4;
    case 225u: goto L_0889D5AC;
    case 226u: goto L_0889D5BC;
    case 227u: goto L_0889D5CC;
    case 228u: goto L_0889D5DC;
    case 229u: goto L_0889D5F0;
    case 230u: goto L_0889D608;
    case 231u: goto L_0889D610;
    case 232u: goto L_0889D620;
    case 233u: goto L_0889D638;
    case 234u: goto L_0889D650;
    case 235u: goto L_0889D668;
    case 236u: goto L_0889D670;
    case 237u: goto L_0889D690;
    case 238u: goto L_0889D698;
    case 239u: goto L_0889D6A4;
    case 240u: goto L_0889D6E0;
    case 241u: goto L_0889D6EC;
    case 242u: goto L_0889D70C;
    case 243u: goto L_0889D71C;
    case 244u: goto L_0889D728;
    case 245u: goto L_0889D738;
    case 246u: goto L_0889D744;
    case 247u: goto L_0889D754;
    case 248u: goto L_0889D76C;
    case 249u: goto L_0889D794;
    case 250u: goto L_0889D7A4;
    case 251u: goto L_0889D7E8;
    case 252u: goto L_0889D7FC;
    case 253u: goto L_0889D818;
    case 254u: goto L_0889D824;
    case 255u: goto L_0889D838;
    case 256u: goto L_0889D844;
    case 257u: goto L_0889D854;
    case 258u: goto L_0889D864;
    case 259u: goto L_0889D874;
    case 260u: goto L_0889D888;
    case 261u: goto L_0889D898;
    case 262u: goto L_0889D8B0;
    case 263u: goto L_0889D8B4;
    case 264u: goto L_0889D8C4;
    case 265u: goto L_0889D8E8;
    case 266u: goto L_0889D900;
    case 267u: goto L_0889D910;
    case 268u: goto L_0889D938;
    case 269u: goto L_0889D96C;
    case 270u: goto L_0889D988;
    case 271u: goto L_0889D99C;
    case 272u: goto L_0889D9B4;
    case 273u: goto L_0889D9D8;
    case 274u: goto L_0889DA00;
    case 275u: goto L_0889DA18;
    case 276u: goto L_0889DA28;
    case 277u: goto L_0889DA3C;
    case 278u: goto L_0889DA48;
    case 279u: goto L_0889DA58;
    case 280u: goto L_0889DA64;
    case 281u: goto L_0889DA94;
    case 282u: goto L_0889DAA4;
    case 283u: goto L_0889DAAC;
    case 284u: goto L_0889DAB4;
    case 285u: goto L_0889DAC0;
    case 286u: goto L_0889DAE4;
    case 287u: goto L_0889DB00;
    case 288u: goto L_0889DB08;
    case 289u: goto L_0889DB10;
    case 290u: goto L_0889DB18;
    case 291u: goto L_0889DB24;
    case 292u: goto L_0889DB2C;
    case 293u: goto L_0889DB34;
    case 294u: goto L_0889DB48;
    case 295u: goto L_0889DB50;
    case 296u: goto L_0889DB58;
    case 297u: goto L_0889DB60;
    case 298u: goto L_0889DB68;
    case 299u: goto L_0889DB70;
    case 300u: goto L_0889DB7C;
    case 301u: goto L_0889DB84;
    case 302u: goto L_0889DB9C;
    case 303u: goto L_0889DBA4;
    case 304u: goto L_0889DBAC;
    case 305u: goto L_0889DBB4;
    case 306u: goto L_0889DBC8;
    case 307u: goto L_0889DBD0;
    case 308u: goto L_0889DBD8;
    case 309u: goto L_0889DBE0;
    case 310u: goto L_0889DBF8;
    case 311u: goto L_0889DC00;
    case 312u: goto L_0889DC08;
    case 313u: goto L_0889DC10;
    case 314u: goto L_0889DC28;
    case 315u: goto L_0889DC30;
    case 316u: goto L_0889DC3C;
    case 317u: goto L_0889DC4C;
    case 318u: goto L_0889DC5C;
    case 319u: goto L_0889DC6C;
    case 320u: goto L_0889DC98;
    case 321u: goto L_0889DCA0;
    case 322u: goto L_0889DCB0;
    case 323u: goto L_0889DCD4;
    case 324u: goto L_0889DCEC;
    case 325u: goto L_0889DD00;
    case 326u: goto L_0889DD0C;
    case 327u: goto L_0889DD14;
    case 328u: goto L_0889DD1C;
    case 329u: goto L_0889DD24;
    case 330u: goto L_0889DD30;
    case 331u: goto L_0889DD50;
    case 332u: goto L_0889DD5C;
    case 333u: goto L_0889DD64;
    case 334u: goto L_0889DD74;
    case 335u: goto L_0889DD7C;
    case 336u: goto L_0889DD98;
    case 337u: goto L_0889DDC0;
    case 338u: goto L_0889DDDC;
    case 339u: goto L_0889DDFC;
    case 340u: goto L_0889DE0C;
    case 341u: goto L_0889DE20;
    case 342u: goto L_0889DE30;
    case 343u: goto L_0889DE38;
    case 344u: goto L_0889DE40;
    case 345u: goto L_0889DE48;
    case 346u: goto L_0889DE50;
    case 347u: goto L_0889DE58;
    case 348u: goto L_0889DE60;
    case 349u: goto L_0889DE68;
    case 350u: goto L_0889DE70;
    case 351u: goto L_0889DE7C;
    case 352u: goto L_0889DEA4;
    case 353u: goto L_0889DEAC;
    case 354u: goto L_0889DEB4;
    case 355u: goto L_0889DEBC;
    case 356u: goto L_0889DEC4;
    case 357u: goto L_0889DECC;
    case 358u: goto L_0889DED4;
    case 359u: goto L_0889DEDC;
    case 360u: goto L_0889DEE4;
    case 361u: goto L_0889DEEC;
    case 362u: goto L_0889DEF4;
    case 363u: goto L_0889DF00;
    case 364u: goto L_0889DF04;
    case 365u: goto L_0889DF18;
    case 366u: goto L_0889DF30;
    case 367u: goto L_0889DF48;
    case 368u: goto L_0889DF64;
    case 369u: goto L_0889DF74;
    case 370u: goto L_0889DF7C;
    case 371u: goto L_0889DF84;
    case 372u: goto L_0889DF98;
    case 373u: goto L_0889DFA0;
    case 374u: goto L_0889DFA8;
    case 375u: goto L_0889DFB4;
    case 376u: goto L_0889DFBC;
    case 377u: goto L_0889DFC4;
    case 378u: goto L_0889DFCC;
    case 379u: goto L_0889DFD8;
    case 380u: goto L_0889DFE8;
    case 381u: goto L_0889DFF0;
    case 382u: goto L_0889DFF8;
    case 383u: goto L_0889E000;
    case 384u: goto L_0889E008;
    case 385u: goto L_0889E01C;
    case 386u: goto L_0889E024;
    case 387u: goto L_0889E02C;
    case 388u: goto L_0889E038;
    case 389u: goto L_0889E040;
    case 390u: goto L_0889E048;
    case 391u: goto L_0889E050;
    case 392u: goto L_0889E05C;
    case 393u: goto L_0889E08C;
    case 394u: goto L_0889E0AC;
    case 395u: goto L_0889E13C;
    case 396u: goto L_0889E150;
    case 397u: goto L_0889E16C;
    case 398u: goto L_0889E238;
    case 399u: goto L_0889E254;
    case 400u: goto L_0889E274;
    case 401u: goto L_0889E28C;
    case 402u: goto L_0889E2A0;
    case 403u: goto L_0889E2B4;
    case 404u: goto L_0889E2D0;
    case 405u: goto L_0889E2EC;
    case 406u: goto L_0889E2F8;
    case 407u: goto L_0889E308;
    case 408u: goto L_0889E32C;
    case 409u: goto L_0889E34C;
    case 410u: goto L_0889E424;
    case 411u: goto L_0889E434;
    case 412u: goto L_0889E444;
    case 413u: goto L_0889E460;
    case 414u: goto L_0889E470;
    case 415u: goto L_0889E488;
    case 416u: goto L_0889E4A0;
    case 417u: goto L_0889E4C0;
    case 418u: goto L_0889E4CC;
    case 419u: goto L_0889E4DC;
    case 420u: goto L_0889E4F8;
    case 421u: goto L_0889E508;
    case 422u: goto L_0889E518;
    case 423u: goto L_0889E528;
    case 424u: goto L_0889E538;
    case 425u: goto L_0889E550;
    case 426u: goto L_0889E568;
    case 427u: goto L_0889E5D8;
    case 428u: goto L_0889E5F4;
    case 429u: goto L_0889E638;
    case 430u: goto L_0889E654;
    case 431u: goto L_0889E65C;
    case 432u: goto L_0889E670;
    case 433u: goto L_0889E68C;
    case 434u: goto L_0889E69C;
    case 435u: goto L_0889E6A4;
    case 436u: goto L_0889E6B0;
    case 437u: goto L_0889E6BC;
    case 438u: goto L_0889E6C0;
    case 439u: goto L_0889E6C4;
    case 440u: goto L_0889E6CC;
    case 441u: goto L_0889E6DC;
    case 442u: goto L_0889E6EC;
    case 443u: goto L_0889E6FC;
    case 444u: goto L_0889E724;
    case 445u: goto L_0889E72C;
    case 446u: goto L_0889E744;
    case 447u: goto L_0889E758;
    case 448u: goto L_0889E778;
    case 449u: goto L_0889E7A0;
    case 450u: goto L_0889E7D4;
    case 451u: goto L_0889E7EC;
    case 452u: goto L_0889E848;
    case 453u: goto L_0889E8A0;
    case 454u: goto L_0889E8B8;
    case 455u: goto L_0889E934;
    case 456u: goto L_0889E93C;
    case 457u: goto L_0889E94C;
    case 458u: goto L_0889E95C;
    case 459u: goto L_0889E97C;
    case 460u: goto L_0889E98C;
    case 461u: goto L_0889E99C;
    case 462u: goto L_0889E9A8;
    case 463u: goto L_0889E9B8;
    case 464u: goto L_0889E9C8;
    case 465u: goto L_0889E9D8;
    case 466u: goto L_0889E9E8;
    case 467u: goto L_0889E9F8;
    case 468u: goto L_0889EA08;
    case 469u: goto L_0889EA18;
    case 470u: goto L_0889EA28;
    case 471u: goto L_0889EA38;
    case 472u: goto L_0889EA48;
    case 473u: goto L_0889EA58;
    case 474u: goto L_0889EA68;
    case 475u: goto L_0889EA78;
    case 476u: goto L_0889EA88;
    case 477u: goto L_0889EAB0;
    case 478u: goto L_0889EAB8;
    case 479u: goto L_0889EAD0;
    case 480u: goto L_0889EAE4;
    case 481u: goto L_0889EB04;
    case 482u: goto L_0889EB34;
    case 483u: goto L_0889EB3C;
    case 484u: goto L_0889EB48;
    case 485u: goto L_0889EB50;
    case 486u: goto L_0889EB58;
    case 487u: goto L_0889EB68;
    case 488u: goto L_0889EB70;
    case 489u: goto L_0889EB7C;
    case 490u: goto L_0889EB80;
    case 491u: goto L_0889EB8C;
    case 492u: goto L_0889EBAC;
    case 493u: goto L_0889EBD4;
    case 494u: goto L_0889EBDC;
    case 495u: goto L_0889EBF4;
    case 496u: goto L_0889EC08;
    case 497u: goto L_0889EC28;
    case 498u: goto L_0889EC94;
    case 499u: goto L_0889ECB4;
    case 500u: goto L_0889ECC4;
    case 501u: goto L_0889ECEC;
    case 502u: goto L_0889ED04;
    case 503u: goto L_0889ED34;
    case 504u: goto L_0889ED60;
    case 505u: goto L_0889ED68;
    case 506u: goto L_0889ED8C;
    case 507u: goto L_0889EDB0;
    case 508u: goto L_0889EE10;
    case 509u: goto L_0889EE24;
    case 510u: goto L_0889EE34;
    case 511u: goto L_0889EE68;
    case 512u: goto L_0889EE90;
    case 513u: goto L_0889EEA0;
    case 514u: goto L_0889EEB4;
    case 515u: goto L_0889EEC8;
    case 516u: goto L_0889EED8;
    case 517u: goto L_0889EF10;
    case 518u: goto L_0889EF18;
    case 519u: goto L_0889EF28;
    case 520u: goto L_0889EF2C;
    case 521u: goto L_0889EF3C;
    case 522u: goto L_0889EF44;
    case 523u: goto L_0889EF60;
    case 524u: goto L_0889EFB8;
    case 525u: goto L_0889EFD4;
    case 526u: goto L_0889F010;
    case 527u: goto L_0889F028;
    case 528u: goto L_0889F034;
    case 529u: goto L_0889F04C;
    case 530u: goto L_0889F05C;
    case 531u: goto L_0889F09C;
    case 532u: goto L_0889F0E4;
    case 533u: goto L_0889F0F0;
    case 534u: goto L_0889F168;
    case 535u: goto L_0889F1C4;
    case 536u: goto L_0889F1FC;
    case 537u: goto L_0889F214;
    case 538u: goto L_0889F224;
    case 539u: goto L_0889F234;
    case 540u: goto L_0889F278;
    case 541u: goto L_0889F2A0;
    case 542u: goto L_0889F2A8;
    case 543u: goto L_0889F2C0;
    case 544u: goto L_0889F2D4;
    case 545u: goto L_0889F2F4;
    case 546u: goto L_0889F328;
    case 547u: goto L_0889F338;
    case 548u: goto L_0889F348;
    case 549u: goto L_0889F35C;
    case 550u: goto L_0889F36C;
    case 551u: goto L_0889F388;
    case 552u: goto L_0889F3AC;
    case 553u: goto L_0889F3C8;
    case 554u: goto L_0889F420;
    case 555u: goto L_0889F434;
    case 556u: goto L_0889F43C;
    case 557u: goto L_0889F4D0;
    case 558u: goto L_0889F4E0;
    case 559u: goto L_0889F528;
    case 560u: goto L_0889F530;
    case 561u: goto L_0889F538;
    case 562u: goto L_0889F540;
    case 563u: goto L_0889F558;
    case 564u: goto L_0889F570;
    case 565u: goto L_0889F5B4;
    case 566u: goto L_0889F604;
    case 567u: goto L_0889F610;
    case 568u: goto L_0889F630;
    case 569u: goto L_0889F668;
    case 570u: goto L_0889F670;
    case 571u: goto L_0889F680;
    case 572u: goto L_0889F6A8;
    case 573u: goto L_0889F6B0;
    case 574u: goto L_0889F6C8;
    case 575u: goto L_0889F6DC;
    case 576u: goto L_0889F6FC;
    case 577u: goto L_0889F730;
    case 578u: goto L_0889F74C;
    case 579u: goto L_0889F758;
    case 580u: goto L_0889F770;
    case 581u: goto L_0889F7A8;
    case 582u: goto L_0889F7B8;
    case 583u: goto L_0889F7D0;
    case 584u: goto L_0889F7E4;
    case 585u: goto L_0889F7F4;
    case 586u: goto L_0889F80C;
    case 587u: goto L_0889F844;
    case 588u: goto L_0889F854;
    case 589u: goto L_0889F890;
    case 590u: goto L_0889F8A0;
    case 591u: goto L_0889F8BC;
    case 592u: goto L_0889F910;
    case 593u: goto L_0889F924;
    case 594u: goto L_0889F934;
    case 595u: goto L_0889F950;
    case 596u: goto L_0889F978;
    case 597u: goto L_0889F988;
    case 598u: goto L_0889F998;
    case 599u: goto L_0889F9A8;
    case 600u: goto L_0889F9E4;
    case 601u: goto L_0889F9F4;
    case 602u: goto L_0889FA08;
    case 603u: goto L_0889FA18;
    case 604u: goto L_0889FA34;
    case 605u: goto L_0889FA60;
    case 606u: goto L_0889FA68;
    case 607u: goto L_0889FA70;
    case 608u: goto L_0889FA78;
    case 609u: goto L_0889FA84;
    case 610u: goto L_0889FA8C;
    case 611u: goto L_0889FA94;
    case 612u: goto L_0889FAA0;
    case 613u: goto L_0889FAAC;
    case 614u: goto L_0889FAC0;
    case 615u: goto L_0889FAC8;
    case 616u: goto L_0889FAD8;
    case 617u: goto L_0889FAE0;
    case 618u: goto L_0889FAF8;
    case 619u: goto L_0889FB00;
    case 620u: goto L_0889FB14;
    case 621u: goto L_0889FB18;
    case 622u: goto L_0889FB28;
    case 623u: goto L_0889FB30;
    case 624u: goto L_0889FB38;
    case 625u: goto L_0889FB40;
    case 626u: goto L_0889FB48;
    case 627u: goto L_0889FB50;
    case 628u: goto L_0889FB58;
    case 629u: goto L_0889FB78;
    case 630u: goto L_0889FB84;
    case 631u: goto L_0889FB98;
    case 632u: goto L_0889FBA0;
    case 633u: goto L_0889FBC0;
    case 634u: goto L_0889FBC8;
    case 635u: goto L_0889FBD4;
    case 636u: goto L_0889FBDC;
    case 637u: goto L_0889FBE4;
    case 638u: goto L_0889FBEC;
    case 639u: goto L_0889FBF8;
    case 640u: goto L_0889FC00;
    case 641u: goto L_0889FC1C;
    case 642u: goto L_0889FC24;
    case 643u: goto L_0889FC2C;
    case 644u: goto L_0889FC34;
    case 645u: goto L_0889FC3C;
    case 646u: goto L_0889FC44;
    case 647u: goto L_0889FC50;
    case 648u: goto L_0889FC60;
    case 649u: goto L_0889FC70;
    case 650u: goto L_0889FC78;
    case 651u: goto L_0889FC84;
    case 652u: goto L_0889FC8C;
    case 653u: goto L_0889FC94;
    case 654u: goto L_0889FC9C;
    case 655u: goto L_0889FCAC;
    case 656u: goto L_0889FCB4;
    case 657u: goto L_0889FCC0;
    case 658u: goto L_0889FCC8;
    case 659u: goto L_0889FCD0;
    case 660u: goto L_0889FCD8;
    case 661u: goto L_0889FCE0;
    case 662u: goto L_0889FCF4;
    case 663u: goto L_0889FD00;
    case 664u: goto L_0889FD3C;
    case 665u: goto L_0889FD44;
    case 666u: goto L_0889FD58;
    case 667u: goto L_0889FD60;
    case 668u: goto L_0889FD68;
    case 669u: goto L_0889FD70;
    case 670u: goto L_0889FD7C;
    case 671u: goto L_0889FD84;
    case 672u: goto L_0889FD98;
    case 673u: goto L_0889FDA0;
    case 674u: goto L_0889FDA8;
    case 675u: goto L_0889FDC0;
    case 676u: goto L_0889FE04;
    case 677u: goto L_0889FE0C;
    case 678u: goto L_0889FE1C;
    case 679u: goto L_0889FE28;
    case 680u: goto L_0889FE38;
    case 681u: goto L_0889FE50;
    case 682u: goto L_0889FE64;
    case 683u: goto L_0889FE70;
    case 684u: goto L_0889FE7C;
    case 685u: goto L_0889FE84;
    case 686u: goto L_0889FE8C;
    case 687u: goto L_0889FE98;
    case 688u: goto L_0889FEB4;
    case 689u: goto L_0889FECC;
    case 690u: goto L_0889FEE8;
    case 691u: goto L_0889FF00;
    case 692u: goto L_0889FF10;
    case 693u: goto L_0889FF28;
    case 694u: goto L_0889FF30;
    case 695u: goto L_0889FF38;
    case 696u: goto L_0889FF48;
    case 697u: goto L_0889FF60;
    case 698u: goto L_0889FF68;
    case 699u: goto L_0889FF70;
    case 700u: goto L_0889FF7C;
    case 701u: goto L_0889FFA0;
    case 702u: goto L_0889FFA4;
    case 703u: goto L_0889FFB0;
    case 704u: goto L_0889FFB8;
    case 705u: goto L_0889FFC8;
    case 706u: goto L_0889FFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889C000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0889C044u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0889C044u) goto L_0889C044;
    return;
L_0889C044:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 636u, 0x0889BFFCu>(ctx, &aot_mem); return;
      }
      goto L_0889C058;
    }
L_0889C058:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889C070u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C070u) goto L_0889C070;
    return;
L_0889C070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889C088u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889C088u) goto L_0889C088;
    return;
L_0889C088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[31] = (0x0889C0A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x0889C0A4u) goto L_0889C0A4;
    return;
L_0889C0A4:
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
L_0889C0C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0889C130;
      }
      goto L_0889C0F0;
    }
L_0889C0F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0889C0F8;
L_0889C0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0889C104u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889C104u) goto L_0889C104;
    return;
L_0889C104:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
      if (branch_taken) {
          goto L_0889C0F8;
      }
      goto L_0889C118;
    }
L_0889C118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C128u) goto L_0889C128;
    return;
L_0889C128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    goto L_0889C130;
L_0889C130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C140u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C140u) goto L_0889C140;
    return;
L_0889C140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
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
L_0889C164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22720)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889C1C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C1C0u) goto L_0889C1C0;
    return;
L_0889C1C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (17238u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17300u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (17269u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (17329u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0889C20C;
L_0889C20C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_0889C2B4;
      }
      goto L_0889C230;
    }
L_0889C230:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889C26C;
      }
      goto L_0889C23C;
    }
L_0889C23C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0889C280;
      }
      goto L_0889C244;
    }
L_0889C244:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C2A0;
      }
      goto L_0889C24C;
    }
L_0889C24C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0889C294;
      }
      goto L_0889C254;
    }
L_0889C254:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889C2AC;
      }
      goto L_0889C25C;
    }
L_0889C25C:
    ctx.gpr[8] = (17078u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_0889C2B4;
      }
      goto L_0889C26C;
    }
L_0889C26C:
    ctx.gpr[8] = (17159u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17240u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_0889C2B4;
      }
      goto L_0889C280;
    }
L_0889C280:
    ctx.gpr[8] = (17215u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17239u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_0889C2B4;
      }
      goto L_0889C294;
    }
L_0889C294:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0889C2B4;
      }
      goto L_0889C2A0;
    }
L_0889C2A0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0889C2B4;
      }
      goto L_0889C2AC;
    }
L_0889C2AC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0889C2B4;
L_0889C2B4:
    if (ctx.gpr[17] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0889C308;
    }
    goto L_0889C2BC;
L_0889C2BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0889C324;
      }
      goto L_0889C308;
    }
L_0889C308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    goto L_0889C324;
L_0889C324:
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[22] = (ctx.gpr[7] | 0u);
        goto L_0889C358;
    }
    goto L_0889C32C;
L_0889C32C:
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889C380;
      }
      goto L_0889C358;
    }
L_0889C358:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[20] = (0u | 153u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0889C380;
L_0889C380:
    ctx.gpr[31] = (0x0889C388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889C388u) goto L_0889C388;
    return;
L_0889C388:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889C20C;
      }
      goto L_0889C398;
    }
L_0889C398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_0889C404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0889C424;
L_0889C424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0889C434u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889C434u) goto L_0889C434;
    return;
L_0889C434:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889C424;
      }
      goto L_0889C444;
    }
L_0889C444:
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
L_0889C45C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C4F8;
      }
      goto L_0889C480;
    }
L_0889C480:
    ctx.gpr[31] = (0x0889C488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889C488u) goto L_0889C488;
    return;
L_0889C488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0889C498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0889C498u) goto L_0889C498;
    return;
L_0889C498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C4B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C4B0u) goto L_0889C4B0;
    return;
L_0889C4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x0889C4C4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C4C4u) goto L_0889C4C4;
    return;
L_0889C4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C4D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C4D8u) goto L_0889C4D8;
    return;
L_0889C4D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C4F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C4F0u) goto L_0889C4F0;
    return;
L_0889C4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    goto L_0889C4F8;
L_0889C4F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C50C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889C528u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889C528u) goto L_0889C528;
    return;
L_0889C528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0889C538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0889C538u) goto L_0889C538;
    return;
L_0889C538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[31] = (0x0889C544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889C544u) goto L_0889C544;
    return;
L_0889C544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C63C;
      }
      goto L_0889C580;
    }
L_0889C580:
    ctx.gpr[31] = (0x0889C588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 50u, 0x08838774u>(ctx, &aot_mem) && ctx.pc == 0x0889C588u) goto L_0889C588;
    return;
L_0889C588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C5A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C5A0u) goto L_0889C5A0;
    return;
L_0889C5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[31] = (0x0889C5B4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C5B4u) goto L_0889C5B4;
    return;
L_0889C5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C5C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C5C8u) goto L_0889C5C8;
    return;
L_0889C5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[31] = (0x0889C5DCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 89u, 0x0883CBF0u>(ctx, &aot_mem) && ctx.pc == 0x0889C5DCu) goto L_0889C5DC;
    return;
L_0889C5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C5F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C5F0u) goto L_0889C5F0;
    return;
L_0889C5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0889C604;
L_0889C604:
    ctx.gpr[31] = (0x0889C60Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C60Cu) goto L_0889C60C;
    return;
L_0889C60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0889C604;
      }
      goto L_0889C624;
    }
L_0889C624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C634u) goto L_0889C634;
    return;
L_0889C634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    goto L_0889C63C;
L_0889C63C:
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
L_0889C658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889C67Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 54u, 0x088387ACu>(ctx, &aot_mem) && ctx.pc == 0x0889C67Cu) goto L_0889C67C;
    return;
L_0889C67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[31] = (0x0889C688u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x0889C688u) goto L_0889C688;
    return;
L_0889C688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[31] = (0x0889C694u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 94u, 0x0883CC48u>(ctx, &aot_mem) && ctx.pc == 0x0889C694u) goto L_0889C694;
    return;
L_0889C694:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0889C69C;
L_0889C69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0889C6ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889C6ACu) goto L_0889C6AC;
    return;
L_0889C6AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889C69C;
      }
      goto L_0889C6BC;
    }
L_0889C6BC:
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
L_0889C6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889C6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 225u, 0x08835114u>(ctx, &aot_mem) && ctx.pc == 0x0889C6F4u) goto L_0889C6F4;
    return;
L_0889C6F4:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_0889C964;
      }
      goto L_0889C70C;
    }
L_0889C70C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889C808;
      }
      goto L_0889C718;
    }
L_0889C718:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0889C850;
      }
      goto L_0889C720;
    }
L_0889C720:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C8DC;
      }
      goto L_0889C728;
    }
L_0889C728:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0889C894;
      }
      goto L_0889C730;
    }
L_0889C730:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889C924;
      }
      goto L_0889C738;
    }
L_0889C738:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0889C748u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18980));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x0889C748u) goto L_0889C748;
    return;
L_0889C748:
    ctx.gpr[31] = (0x0889C750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 49u, 0x0893437Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C750u) goto L_0889C750;
    return;
L_0889C750:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_0889C7D0;
      }
      goto L_0889C75C;
    }
L_0889C75C:
    ctx.gpr[31] = (0x0889C764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 151u, 0x08934B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C764u) goto L_0889C764;
    return;
L_0889C764:
    ctx.gpr[18] = (2196u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26864));
      if (branch_taken) {
          goto L_0889C78C;
      }
      goto L_0889C770;
    }
L_0889C770:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0889C784u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27612));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C784u) goto L_0889C784;
    return;
L_0889C784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
      if (branch_taken) {
          goto L_0889C7E8;
      }
      goto L_0889C78C;
    }
L_0889C78C:
    ctx.gpr[31] = (0x0889C794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 159u, 0x08934BC8u>(ctx, &aot_mem) && ctx.pc == 0x0889C794u) goto L_0889C794;
    return;
L_0889C794:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (2196u << 16u);
      if (branch_taken) {
          goto L_0889C7B8;
      }
      goto L_0889C79C;
    }
L_0889C79C:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0889C7B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27568));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C7B0u) goto L_0889C7B0;
    return;
L_0889C7B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
      if (branch_taken) {
          goto L_0889C7E8;
      }
      goto L_0889C7B8;
    }
L_0889C7B8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0889C7C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27524));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C7C8u) goto L_0889C7C8;
    return;
L_0889C7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
      if (branch_taken) {
          goto L_0889C7E8;
      }
      goto L_0889C7D0;
    }
L_0889C7D0:
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17012));
    ctx.gpr[31] = (0x0889C7E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C7E4u) goto L_0889C7E4;
    return;
L_0889C7E4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    goto L_0889C7E8;
L_0889C7E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0889C7F4u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x0889C7F4u) goto L_0889C7F4;
    return;
L_0889C7F4:
    ctx.gpr[31] = (0x0889C7FCu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806EA0u>(ctx, &aot_mem) && ctx.pc == 0x0889C7FCu) goto L_0889C7FC;
    return;
L_0889C7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889C964;
      }
      goto L_0889C808;
    }
L_0889C808:
    ctx.gpr[31] = (0x0889C810u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C810u) goto L_0889C810;
    return;
L_0889C810:
    ctx.gpr[31] = (0x0889C818u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0889C818u) goto L_0889C818;
    return;
L_0889C818:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10988));
    ctx.gpr[31] = (0x0889C830u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10768));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C830u) goto L_0889C830;
    return;
L_0889C830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C844u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x0889C844u) goto L_0889C844;
    return;
L_0889C844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889C964;
      }
      goto L_0889C850;
    }
L_0889C850:
    ctx.gpr[31] = (0x0889C858u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 175u, 0x08944CBCu>(ctx, &aot_mem) && ctx.pc == 0x0889C858u) goto L_0889C858;
    return;
L_0889C858:
    ctx.gpr[31] = (0x0889C860u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0889C860u) goto L_0889C860;
    return;
L_0889C860:
    ctx.gpr[4] = (2193u << 16u);
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8680));
    ctx.gpr[31] = (0x0889C878u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8228));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C878u) goto L_0889C878;
    return;
L_0889C878:
    ctx.gpr[31] = (0x0889C880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 94u, 0x0884C5ECu>(ctx, &aot_mem) && ctx.pc == 0x0889C880u) goto L_0889C880;
    return;
L_0889C880:
    ctx.gpr[31] = (0x0889C888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 87u, 0x0884C578u>(ctx, &aot_mem) && ctx.pc == 0x0889C888u) goto L_0889C888;
    return;
L_0889C888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889C964;
      }
      goto L_0889C894;
    }
L_0889C894:
    ctx.gpr[31] = (0x0889C89Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C89Cu) goto L_0889C89C;
    return;
L_0889C89C:
    ctx.gpr[31] = (0x0889C8A4u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0889C8A4u) goto L_0889C8A4;
    return;
L_0889C8A4:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28924));
    ctx.gpr[31] = (0x0889C8BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29180));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C8BCu) goto L_0889C8BC;
    return;
L_0889C8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C8D0u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x0889C8D0u) goto L_0889C8D0;
    return;
L_0889C8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889C964;
      }
      goto L_0889C8DC;
    }
L_0889C8DC:
    ctx.gpr[31] = (0x0889C8E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C8E4u) goto L_0889C8E4;
    return;
L_0889C8E4:
    ctx.gpr[31] = (0x0889C8ECu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0889C8ECu) goto L_0889C8EC;
    return;
L_0889C8EC:
    ctx.gpr[4] = (2185u << 16u);
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30224));
    ctx.gpr[31] = (0x0889C904u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30456));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C904u) goto L_0889C904;
    return;
L_0889C904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C918u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x0889C918u) goto L_0889C918;
    return;
L_0889C918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889C964;
      }
      goto L_0889C924;
    }
L_0889C924:
    ctx.gpr[31] = (0x0889C92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 606u, 0x08832F60u>(ctx, &aot_mem) && ctx.pc == 0x0889C92Cu) goto L_0889C92C;
    return;
L_0889C92C:
    ctx.gpr[31] = (0x0889C934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 696u, 0x08936C74u>(ctx, &aot_mem) && ctx.pc == 0x0889C934u) goto L_0889C934;
    return;
L_0889C934:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0889C944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18980));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x0889C944u) goto L_0889C944;
    return;
L_0889C944:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27656));
    ctx.gpr[31] = (0x0889C95Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26864));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889C95Cu) goto L_0889C95C;
    return;
L_0889C95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889C964;
L_0889C964:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889C974;
      }
      goto L_0889C96C;
    }
L_0889C96C:
    ctx.gpr[31] = (0x0889C974u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889C974u) goto L_0889C974;
    return;
L_0889C974:
    ctx.gpr[31] = (0x0889C97Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x0889C97Cu) goto L_0889C97C;
    return;
L_0889C97C:
    ctx.gpr[31] = (0x0889C984u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x0889C984u) goto L_0889C984;
    return;
L_0889C984:
    ctx.gpr[31] = (0x0889C98Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C98Cu) goto L_0889C98C;
    return;
L_0889C98C:
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
L_0889C9A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 552u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889C9CCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C9CCu) goto L_0889C9CC;
    return;
L_0889C9CC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889C9E8u);
    ctx.gpr[6] = (0u | 552u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889C9E8u) goto L_0889C9E8;
    return;
L_0889C9E8:
    ctx.gpr[4] = (17078u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17238u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17159u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17240u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16912u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17215u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17239u << 16u);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16908u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (17300u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (17269u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (17329u << 16u);
    ctx.gpr[15] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[13] = (0u | 255u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[14] = (0u | 0u);
    goto L_0889CA7C;
L_0889CA7C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[25] = (ctx.gpr[15] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[4] = (ctx.gpr[13] & 255u);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CA90;
    }
L_0889CA90:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889CAF0;
      }
      goto L_0889CA9C;
    }
L_0889CA9C:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0889CB24;
      }
      goto L_0889CAA4;
    }
L_0889CAA4:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889CB8C;
      }
      goto L_0889CAAC;
    }
L_0889CAAC:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0889CB58;
      }
      goto L_0889CAB4;
    }
L_0889CAB4:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889CBC0;
      }
      goto L_0889CABC;
    }
L_0889CABC:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CAF0;
    }
L_0889CAF0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CB24;
    }
L_0889CB24:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CB58;
    }
L_0889CB58:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CB8C;
    }
L_0889CB8C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CBC0;
    }
L_0889CBC0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    goto L_0889CBF0;
L_0889CBF0:
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[25];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0889CC20;
      }
      goto L_0889CBFC;
    }
L_0889CBFC:
    ctx.gpr[12] = (ctx.gpr[4] | 0u);
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[11]));
      if (branch_taken) {
          goto L_0889CC40;
      }
      goto L_0889CC20;
    }
L_0889CC20:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0889CC40;
L_0889CC40:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[15]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889CA7C;
      }
      goto L_0889CC50;
    }
L_0889CC50:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889CCACu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CCACu) goto L_0889CCAC;
    return;
L_0889CCAC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889CCC8u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889CCC8u) goto L_0889CCC8;
    return;
L_0889CCC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889CD84;
      }
      goto L_0889CCDC;
    }
L_0889CCDC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889CD1C;
      }
      goto L_0889CCE8;
    }
L_0889CCE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0889CD30;
      }
      goto L_0889CCF0;
    }
L_0889CCF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889CD5C;
      }
      goto L_0889CCF8;
    }
L_0889CCF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0889CD44;
      }
      goto L_0889CD00;
    }
L_0889CD00:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889CD70;
      }
      goto L_0889CD08;
    }
L_0889CD08:
    ctx.gpr[4] = (17020u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889CD84;
      }
      goto L_0889CD1C;
    }
L_0889CD1C:
    ctx.gpr[4] = (17120u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889CD84;
      }
      goto L_0889CD30;
    }
L_0889CD30:
    ctx.gpr[4] = (17192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889CD84;
      }
      goto L_0889CD44;
    }
L_0889CD44:
    ctx.gpr[4] = (17291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889CD84;
      }
      goto L_0889CD5C;
    }
L_0889CD5C:
    ctx.gpr[4] = (17247u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889CD84;
      }
      goto L_0889CD70;
    }
L_0889CD70:
    ctx.gpr[4] = (17318u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    goto L_0889CD84;
L_0889CD84:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (17272u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x0889CDA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0889CDA4u) goto L_0889CDA4;
    return;
L_0889CDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17058u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[18] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (16784u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0889CE3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0889CE3Cu) goto L_0889CE3C;
    return;
L_0889CE3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 180u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889CE50u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CE50u) goto L_0889CE50;
    return;
L_0889CE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889CE68u);
    ctx.gpr[6] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889CE68u) goto L_0889CE68;
    return;
L_0889CE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[6] = (16956u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (17275u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16704u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13548));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0889CED8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889CED8u) goto L_0889CED8;
    return;
L_0889CED8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x0889CF20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18928));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0889CF20u) goto L_0889CF20;
    return;
L_0889CF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18912));
    ctx.gpr[31] = (0x0889CF38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889CF38u) goto L_0889CF38;
    return;
L_0889CF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[31] = (0x0889CF44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0889CF44u) goto L_0889CF44;
    return;
L_0889CF44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889CF58u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CF58u) goto L_0889CF58;
    return;
L_0889CF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889CF70u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889CF70u) goto L_0889CF70;
    return;
L_0889CF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0889CF90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x0889CF90u) goto L_0889CF90;
    return;
L_0889CF90:
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
L_0889CFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889CFC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CFC4u) goto L_0889CFC4;
    return;
L_0889CFC4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889CFDC;
    }
L_0889CFDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889D030;
      }
      goto L_0889CFF4;
    }
L_0889CFF4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0889D04C;
      }
      goto L_0889CFFC;
    }
L_0889CFFC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889D088;
      }
      goto L_0889D004;
    }
L_0889D004:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0889D068;
      }
      goto L_0889D00C;
    }
L_0889D00C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889D0A4;
      }
      goto L_0889D014;
    }
L_0889D014:
    ctx.gpr[5] = (17020u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889D030;
    }
L_0889D030:
    ctx.gpr[5] = (17120u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889D04C;
    }
L_0889D04C:
    ctx.gpr[5] = (17192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889D068;
    }
L_0889D068:
    ctx.gpr[5] = (17291u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889D088;
    }
L_0889D088:
    ctx.gpr[5] = (17247u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889D0A4;
    }
L_0889D0A4:
    ctx.gpr[5] = (17318u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    goto L_0889D0C0;
L_0889D0C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (17272u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0889D0E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D0E8u) goto L_0889D0E8;
    return;
L_0889D0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0889D144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889D144u) goto L_0889D144;
    return;
L_0889D144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16956u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (17275u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0889D1B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D1B0u) goto L_0889D1B0;
    return;
L_0889D1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13548));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0889D1D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889D1D8u) goto L_0889D1D8;
    return;
L_0889D1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[31] = (0x0889D1E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0889D1E4u) goto L_0889D1E4;
    return;
L_0889D1E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D1F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D238u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D238u) goto L_0889D238;
    return;
L_0889D238:
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889D24Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 47u, 0x088386E0u>(ctx, &aot_mem) && ctx.pc == 0x0889D24Cu) goto L_0889D24C;
    return;
L_0889D24C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D260u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D260u) goto L_0889D260;
    return;
L_0889D260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889D278u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x0889D278u) goto L_0889D278;
    return;
L_0889D278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 464u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D28Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D28Cu) goto L_0889D28C;
    return;
L_0889D28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889D2A4u);
    ctx.gpr[6] = (0u | 464u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D2A4u) goto L_0889D2A4;
    return;
L_0889D2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[31] = (0x0889D2C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 158u, 0x0883E09Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D2C4u) goto L_0889D2C4;
    return;
L_0889D2C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 540u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D2D8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D2D8u) goto L_0889D2D8;
    return;
L_0889D2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889D2F0u);
    ctx.gpr[6] = (0u | 540u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D2F0u) goto L_0889D2F0;
    return;
L_0889D2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (17126u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17048u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16784u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17132u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16720u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(364), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17160u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18928));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-18912));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13572));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0889D3D8;
L_0889D3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0889D428;
      }
      goto L_0889D3F4;
    }
L_0889D3F4:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0889D458;
      }
      goto L_0889D428;
    }
L_0889D428:
    ctx.gpr[30] = (0u & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_0889D458;
L_0889D458:
    ctx.gpr[31] = (0x0889D460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889D460u) goto L_0889D460;
    return;
L_0889D460:
    ctx.gpr[31] = (0x0889D468u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0889D468u) goto L_0889D468;
    return;
L_0889D468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0889D480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889D480u) goto L_0889D480;
    return;
L_0889D480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0889D490u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D490u) goto L_0889D490;
    return;
L_0889D490:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889D3D8;
      }
      goto L_0889D4A4;
    }
L_0889D4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[22]));
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
L_0889D500:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13432)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13436), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 776u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D53Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D53Cu) goto L_0889D53C;
    return;
L_0889D53C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(13704), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889D554u);
    ctx.gpr[6] = (0u | 776u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D554u) goto L_0889D554;
    return;
L_0889D554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D568u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D568u) goto L_0889D568;
    return;
L_0889D568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889D580u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D580u) goto L_0889D580;
    return;
L_0889D580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[31] = (0x0889D594u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x0889D594u) goto L_0889D594;
    return;
L_0889D594:
    ctx.gpr[31] = (0x0889D59Cu);
    // nop
    goto L_0889D6A4;
L_0889D59C:
    ctx.gpr[31] = (0x0889D5A4u);
    // nop
    goto L_0889D938;
L_0889D5A4:
    ctx.gpr[31] = (0x0889D5ACu);
    // nop
    goto L_0889DD98;
L_0889D5AC:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0889D5BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1484));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x0889D5BCu) goto L_0889D5BC;
    return;
L_0889D5BC:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0889D5CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10648));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D5CCu) goto L_0889D5CC;
    return;
L_0889D5CC:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0889D5DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10640));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x0889D5DCu) goto L_0889D5DC;
    return;
L_0889D5DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D608u);
    // nop
    goto L_0889DE7C;
L_0889D608:
    ctx.gpr[31] = (0x0889D610u);
    // nop
    goto L_0889D9D8;
L_0889D610:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889D620u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x0889D620u) goto L_0889D620;
    return;
L_0889D620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889D638u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D638u) goto L_0889D638;
    return;
L_0889D638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889D650u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D650u) goto L_0889D650;
    return;
L_0889D650:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13704), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D668:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D698;
      }
      goto L_0889D690;
    }
L_0889D690:
    ctx.gpr[31] = (0x0889D698u);
    // nop
    goto L_0889DFD8;
L_0889D698:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D6A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(732), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(728), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D6E0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(724), 0u);
    goto L_0889D6EC;
L_0889D6E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (0x0889D70Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 158u, 0x088349FCu>(ctx, &aot_mem) && ctx.pc == 0x0889D70Cu) goto L_0889D70C;
    return;
L_0889D70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0889D71C;
L_0889D71C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[8] == ctx.gpr[5]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_0889D738;
    }
    goto L_0889D728;
L_0889D728:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0889D738;
L_0889D738:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 171 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889D71C;
      }
      goto L_0889D744;
    }
L_0889D744:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0889D754u);
    ctx.gpr[6] = (0u | 684u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0889D754u) goto L_0889D754;
    return;
L_0889D754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_0889D794;
      }
      goto L_0889D76C;
    }
L_0889D76C:
    ctx.gpr[7] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889D794;
    }
L_0889D794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D7A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(27616));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D7E8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D7E8u) goto L_0889D7E8;
    return;
L_0889D7E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889D7FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D7FCu) goto L_0889D7FC;
    return;
L_0889D7FC:
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(712)));
      if (branch_taken) {
          goto L_0889D888;
      }
      goto L_0889D818;
    }
L_0889D818:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[18] + ctx.gpr[22]);
    goto L_0889D824;
L_0889D824:
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[21]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    goto L_0889D838;
L_0889D838:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[11];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889D864;
      }
      goto L_0889D844;
    }
L_0889D844:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0889D854u);
    ctx.gpr[6] = (0u | 928u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0889D854u) goto L_0889D854;
    return;
L_0889D854:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(712)));
      if (branch_taken) {
          goto L_0889D874;
      }
      goto L_0889D864;
    }
L_0889D864:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(928));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < 171 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(928));
      if (branch_taken) {
          goto L_0889D838;
      }
      goto L_0889D874;
    }
L_0889D874:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(928));
      if (branch_taken) {
          goto L_0889D824;
      }
      goto L_0889D888;
    }
L_0889D888:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889D898u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D898u) goto L_0889D898;
    return;
L_0889D898:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D900;
      }
      goto L_0889D8B0;
    }
L_0889D8B0:
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[5]);
    goto L_0889D8B4;
L_0889D8B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(712)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[9] = (0u | 116u);
    goto L_0889D8C4;
L_0889D8C4:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889D8C4;
      }
      goto L_0889D8E8;
    }
L_0889D8E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(928));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(928));
      if (branch_taken) {
          goto L_0889D8B4;
      }
      goto L_0889D900;
    }
L_0889D900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889D910u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D910u) goto L_0889D910;
    return;
L_0889D910:
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
L_0889D938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(27616));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D96Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D96Cu) goto L_0889D96C;
    return;
L_0889D96C:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(712), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889D988u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D988u) goto L_0889D988;
    return;
L_0889D988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889D99Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D99Cu) goto L_0889D99C;
    return;
L_0889D99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(724), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x0889D9B4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889D9B4u) goto L_0889D9B4;
    return;
L_0889D9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
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
L_0889D9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889DA00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889DA00u) goto L_0889DA00;
    return;
L_0889DA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(712), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DA18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x0889DA28u) goto L_0889DA28;
    return;
L_0889DA28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0889DA3C;
    }
    goto L_0889DA3C;
L_0889DA3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DA48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DA58u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x0889DA58u) goto L_0889DA58;
    return;
L_0889DA58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_0889DA94;
L_0889DA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0889DAA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x0889DAA4u) goto L_0889DAA4;
    return;
L_0889DAA4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889DAB4;
      }
      goto L_0889DAAC;
    }
L_0889DAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0889DAC0;
      }
      goto L_0889DAB4;
    }
L_0889DAB4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 171 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889DA94;
      }
      goto L_0889DAC0;
    }
L_0889DAC0:
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
L_0889DAE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DB00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10768));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x0889DB00u) goto L_0889DB00;
    return;
L_0889DB00:
    ctx.gpr[31] = (0x0889DB08u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x0889DB08u) goto L_0889DB08;
    return;
L_0889DB08:
    ctx.gpr[31] = (0x0889DB10u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x0889DB10u) goto L_0889DB10;
    return;
L_0889DB10:
    ctx.gpr[31] = (0x0889DB18u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DB18u) goto L_0889DB18;
    return;
L_0889DB18:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x0889DB24u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DB24u) goto L_0889DB24;
    return;
L_0889DB24:
    ctx.gpr[31] = (0x0889DB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 190u, 0x08934E28u>(ctx, &aot_mem) && ctx.pc == 0x0889DB2Cu) goto L_0889DB2C;
    return;
L_0889DB2C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2186u << 16u);
      if (branch_taken) {
          goto L_0889DB58;
      }
      goto L_0889DB34;
    }
L_0889DB34:
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19272));
    ctx.gpr[31] = (0x0889DB48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18980));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889DB48u) goto L_0889DB48;
    return;
L_0889DB48:
    ctx.gpr[31] = (0x0889DB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 191u, 0x08934E40u>(ctx, &aot_mem) && ctx.pc == 0x0889DB50u) goto L_0889DB50;
    return;
L_0889DB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DB58;
    }
L_0889DB58:
    ctx.gpr[31] = (0x0889DB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 192u, 0x08934E54u>(ctx, &aot_mem) && ctx.pc == 0x0889DB60u) goto L_0889DB60;
    return;
L_0889DB60:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889DC00;
      }
      goto L_0889DB68;
    }
L_0889DB68:
    ctx.gpr[31] = (0x0889DB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 145u, 0x08934AFCu>(ctx, &aot_mem) && ctx.pc == 0x0889DB70u) goto L_0889DB70;
    return;
L_0889DB70:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889DBA4;
      }
      goto L_0889DB7C;
    }
L_0889DB7C:
    ctx.gpr[31] = (0x0889DB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 193u, 0x08934E64u>(ctx, &aot_mem) && ctx.pc == 0x0889DB84u) goto L_0889DB84;
    return;
L_0889DB84:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[31] = (0x0889DB9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889DB9Cu) goto L_0889DB9C;
    return;
L_0889DB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DBA4;
    }
L_0889DBA4:
    ctx.gpr[31] = (0x0889DBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 197u, 0x08934EB8u>(ctx, &aot_mem) && ctx.pc == 0x0889DBACu) goto L_0889DBAC;
    return;
L_0889DBAC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2188u << 16u);
      if (branch_taken) {
          goto L_0889DBD0;
      }
      goto L_0889DBB4;
    }
L_0889DBB4:
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[31] = (0x0889DBC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889DBC8u) goto L_0889DBC8;
    return;
L_0889DBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DBD0;
    }
L_0889DBD0:
    ctx.gpr[31] = (0x0889DBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 193u, 0x08934E64u>(ctx, &aot_mem) && ctx.pc == 0x0889DBD8u) goto L_0889DBD8;
    return;
L_0889DBD8:
    ctx.gpr[31] = (0x0889DBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 1009u, 0x08937FF4u>(ctx, &aot_mem) && ctx.pc == 0x0889DBE0u) goto L_0889DBE0;
    return;
L_0889DBE0:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x0889DBF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889DBF8u) goto L_0889DBF8;
    return;
L_0889DBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DC00;
    }
L_0889DC00:
    ctx.gpr[31] = (0x0889DC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 564u, 0x0889B9A8u>(ctx, &aot_mem) && ctx.pc == 0x0889DC08u) goto L_0889DC08;
    return;
L_0889DC08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2186u << 16u);
      if (branch_taken) {
          goto L_0889DC30;
      }
      goto L_0889DC10;
    }
L_0889DC10:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19272));
    ctx.gpr[31] = (0x0889DC28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18980));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0889DC28u) goto L_0889DC28;
    return;
L_0889DC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DC30;
    }
L_0889DC30:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0889DC3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18764));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x0889DC3Cu) goto L_0889DC3C;
    return;
L_0889DC3C:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x0889DC4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18084));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x0889DC4Cu) goto L_0889DC4C;
    return;
L_0889DC4C:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x0889DC5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18076));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x0889DC5Cu) goto L_0889DC5C;
    return;
L_0889DC5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0889DD00;
      }
      goto L_0889DC98;
    }
L_0889DC98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0889DD7C;
      }
      goto L_0889DCA0;
    }
L_0889DCA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889DCB0u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889DCB0u) goto L_0889DCB0;
    return;
L_0889DCB0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13588)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13592));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13708)));
    ctx.gpr[31] = (0x0889DCD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x0889DCD4u) goto L_0889DCD4;
    return;
L_0889DCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x0889DCECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0889DCECu) goto L_0889DCEC;
    return;
L_0889DCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0889DD7C;
      }
      goto L_0889DD00;
    }
L_0889DD00:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889DD1C;
      }
      goto L_0889DD0C;
    }
L_0889DD0C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0889DD7C;
    }
    goto L_0889DD14;
L_0889DD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD7C;
      }
      goto L_0889DD1C;
    }
L_0889DD1C:
    ctx.gpr[31] = (0x0889DD24u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0889DD24u) goto L_0889DD24;
    return;
L_0889DD24:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889DD7C;
      }
      goto L_0889DD30;
    }
L_0889DD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[31] = (0x0889DD50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x0889DD50u) goto L_0889DD50;
    return;
L_0889DD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889DD5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0889DD5Cu) goto L_0889DD5C;
    return;
L_0889DD5C:
    ctx.gpr[31] = (0x0889DD64u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x0889DD64u) goto L_0889DD64;
    return;
L_0889DD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.gpr[31] = (0x0889DD74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0889DD74u) goto L_0889DD74;
    return;
L_0889DD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD7C;
      }
      goto L_0889DD7C;
    }
L_0889DD7C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DD98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889DDC0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889DDC0u) goto L_0889DDC0;
    return;
L_0889DDC0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x0889DDDCu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889DDDCu) goto L_0889DDDC;
    return;
L_0889DDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889DDFCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889DDFCu) goto L_0889DDFC;
    return;
L_0889DDFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889DE0Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(716), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0889DE0Cu) goto L_0889DE0C;
    return;
L_0889DE0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DE30u);
    // nop
    goto L_0889E05C;
L_0889DE30:
    ctx.gpr[31] = (0x0889DE38u);
    // nop
    goto L_0889E308;
L_0889DE38:
    ctx.gpr[31] = (0x0889DE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 2u, 0x088A0004u>(ctx, &aot_mem) && ctx.pc == 0x0889DE40u) goto L_0889DE40;
    return;
L_0889DE40:
    ctx.gpr[31] = (0x0889DE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 14u, 0x088A0330u>(ctx, &aot_mem) && ctx.pc == 0x0889DE48u) goto L_0889DE48;
    return;
L_0889DE48:
    ctx.gpr[31] = (0x0889DE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 30u, 0x088A0CC4u>(ctx, &aot_mem) && ctx.pc == 0x0889DE50u) goto L_0889DE50;
    return;
L_0889DE50:
    ctx.gpr[31] = (0x0889DE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 81u, 0x088A13E8u>(ctx, &aot_mem) && ctx.pc == 0x0889DE58u) goto L_0889DE58;
    return;
L_0889DE58:
    ctx.gpr[31] = (0x0889DE60u);
    // nop
    goto L_0889EF60;
L_0889DE60:
    ctx.gpr[31] = (0x0889DE68u);
    // nop
    goto L_0889F388;
L_0889DE68:
    ctx.gpr[31] = (0x0889DE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 123u, 0x088A1DD0u>(ctx, &aot_mem) && ctx.pc == 0x0889DE70u) goto L_0889DE70;
    return;
L_0889DE70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
        goto L_0889DF04;
    }
    goto L_0889DEA4;
L_0889DEA4:
    ctx.gpr[31] = (0x0889DEACu);
    // nop
    goto L_0889E254;
L_0889DEAC:
    ctx.gpr[31] = (0x0889DEB4u);
    // nop
    goto L_0889E444;
L_0889DEB4:
    ctx.gpr[31] = (0x0889DEBCu);
    // nop
    goto L_0889E4DC;
L_0889DEBC:
    ctx.gpr[31] = (0x0889DEC4u);
    // nop
    goto L_0889E6FC;
L_0889DEC4:
    ctx.gpr[31] = (0x0889DECCu);
    // nop
    goto L_0889EA88;
L_0889DECC:
    ctx.gpr[31] = (0x0889DED4u);
    // nop
    goto L_0889EBAC;
L_0889DED4:
    ctx.gpr[31] = (0x0889DEDCu);
    // nop
    goto L_0889F278;
L_0889DEDC:
    ctx.gpr[31] = (0x0889DEE4u);
    // nop
    goto L_0889F4E0;
L_0889DEE4:
    ctx.gpr[31] = (0x0889DEECu);
    // nop
    goto L_0889F680;
L_0889DEEC:
    ctx.gpr[31] = (0x0889DEF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0889DEF4u) goto L_0889DEF4;
    return;
L_0889DEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889DF00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0889DF00u) goto L_0889DF00;
    return;
L_0889DF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    goto L_0889DF04;
L_0889DF04:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889DF18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889DF18u) goto L_0889DF18;
    return;
L_0889DF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889DF30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889DF30u) goto L_0889DF30;
    return;
L_0889DF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(724), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889DF48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889DF48u) goto L_0889DF48;
    return;
L_0889DF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(716), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DF74u);
    // nop
    goto L_0889E568;
L_0889DF74:
    ctx.gpr[31] = (0x0889DF7Cu);
    // nop
    goto L_0889E778;
L_0889DF7C:
    ctx.gpr[31] = (0x0889DF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 58u, 0x088A10BCu>(ctx, &aot_mem) && ctx.pc == 0x0889DF84u) goto L_0889DF84;
    return;
L_0889DF84:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0889DFB4;
      }
      goto L_0889DF98;
    }
L_0889DF98:
    ctx.gpr[31] = (0x0889DFA0u);
    // nop
    goto L_0889EC28;
L_0889DFA0:
    ctx.gpr[31] = (0x0889DFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 92u, 0x088A1948u>(ctx, &aot_mem) && ctx.pc == 0x0889DFA8u) goto L_0889DFA8;
    return;
L_0889DFA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DFB4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DFCC;
      }
      goto L_0889DFBC;
    }
L_0889DFBC:
    ctx.gpr[31] = (0x0889DFC4u);
    // nop
    goto L_0889F570;
L_0889DFC4:
    ctx.gpr[31] = (0x0889DFCCu);
    // nop
    goto L_0889F6FC;
L_0889DFCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DFD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DFE8u);
    // nop
    goto L_0889E2D0;
L_0889DFE8:
    ctx.gpr[31] = (0x0889DFF0u);
    // nop
    goto L_0889E4A0;
L_0889DFF0:
    ctx.gpr[31] = (0x0889DFF8u);
    // nop
    goto L_0889E95C;
L_0889DFF8:
    ctx.gpr[31] = (0x0889E000u);
    // nop
    goto L_0889E670;
L_0889E000:
    ctx.gpr[31] = (0x0889E008u);
    // nop
    goto L_0889EB04;
L_0889E008:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E038;
      }
      goto L_0889E01C;
    }
L_0889E01C:
    ctx.gpr[31] = (0x0889E024u);
    // nop
    goto L_0889EE68;
L_0889E024:
    ctx.gpr[31] = (0x0889E02Cu);
    // nop
    goto L_0889F2F4;
L_0889E02C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E038:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E050;
      }
      goto L_0889E040;
    }
L_0889E040:
    ctx.gpr[31] = (0x0889E048u);
    // nop
    goto L_0889F610;
L_0889E048:
    ctx.gpr[31] = (0x0889E050u);
    // nop
    goto L_0889F950;
L_0889E050:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E05C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889E08Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E08Cu) goto L_0889E08C;
    return;
L_0889E08C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0889E0ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889E0ACu) goto L_0889E0AC;
    return;
L_0889E0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889E13Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0889E13Cu) goto L_0889E13C;
    return;
L_0889E13C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889E150u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E150u) goto L_0889E150;
    return;
L_0889E150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(740), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0889E16Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889E16Cu) goto L_0889E16C;
    return;
L_0889E16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (17388u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (17281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889E238u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0889E238u) goto L_0889E238;
    return;
L_0889E238:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E274u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E274u) goto L_0889E274;
    return;
L_0889E274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E28Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E28Cu) goto L_0889E28C;
    return;
L_0889E28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), 0u);
    ctx.gpr[31] = (0x0889E2A0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E2A0u) goto L_0889E2A0;
    return;
L_0889E2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E2B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E2B4u) goto L_0889E2B4;
    return;
L_0889E2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(740), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E2ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E2ECu) goto L_0889E2EC;
    return;
L_0889E2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889E2F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(740)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E2F8u) goto L_0889E2F8;
    return;
L_0889E2F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889E32Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E32Cu) goto L_0889E32C;
    return;
L_0889E32C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[6] = (0u | 184u);
    ctx.gpr[31] = (0x0889E34Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889E34Cu) goto L_0889E34C;
    return;
L_0889E34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (17223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889E424u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0889E424u) goto L_0889E424;
    return;
L_0889E424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x0889E434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 56u, 0x088387C8u>(ctx, &aot_mem) && ctx.pc == 0x0889E434u) goto L_0889E434;
    return;
L_0889E434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E460u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E460u) goto L_0889E460;
    return;
L_0889E460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x0889E470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 60u, 0x08838878u>(ctx, &aot_mem) && ctx.pc == 0x0889E470u) goto L_0889E470;
    return;
L_0889E470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E488u) goto L_0889E488;
    return;
L_0889E488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E4A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x0889E4C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x0889E4C0u) goto L_0889E4C0;
    return;
L_0889E4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889E4CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E4CCu) goto L_0889E4CC;
    return;
L_0889E4CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E4F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E4F8u) goto L_0889E4F8;
    return;
L_0889E4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E508u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E508u) goto L_0889E508;
    return;
L_0889E508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E518u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0889E518u) goto L_0889E518;
    return;
L_0889E518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E528u) goto L_0889E528;
    return;
L_0889E528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E538u) goto L_0889E538;
    return;
L_0889E538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E550u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E550u) goto L_0889E550;
    return;
L_0889E550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16688u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17315u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17048u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0889E5D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889E5D8u) goto L_0889E5D8;
    return;
L_0889E5D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0889E638;
      }
      goto L_0889E5F4;
    }
L_0889E5F4:
    ctx.gpr[6] = (17280u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (17050u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889E654;
      }
      goto L_0889E638;
    }
L_0889E638:
    ctx.gpr[6] = (17318u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    goto L_0889E654;
L_0889E654:
    ctx.gpr[31] = (0x0889E65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E65Cu) goto L_0889E65C;
    return;
L_0889E65C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E68Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E68Cu) goto L_0889E68C;
    return;
L_0889E68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
        goto L_0889E6C4;
    }
    goto L_0889E69C;
L_0889E69C:
    ctx.gpr[31] = (0x0889E6A4u);
    // nop
    goto L_0889DA64;
L_0889E6A4:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
      if (branch_taken) {
          goto L_0889E6C0;
      }
      goto L_0889E6B0;
    }
L_0889E6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E6BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E6BCu) goto L_0889E6BC;
    return;
L_0889E6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    goto L_0889E6C0;
L_0889E6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    goto L_0889E6C4;
L_0889E6C4:
    ctx.gpr[31] = (0x0889E6CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0889E6CCu) goto L_0889E6CC;
    return;
L_0889E6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E6DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E6DCu) goto L_0889E6DC;
    return;
L_0889E6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0889E6ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E6ECu) goto L_0889E6EC;
    return;
L_0889E6EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E6FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0889E724;
L_0889E724:
    ctx.gpr[31] = (0x0889E72Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889E72Cu) goto L_0889E72C;
    return;
L_0889E72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
      if (branch_taken) {
          goto L_0889E724;
      }
      goto L_0889E744;
    }
L_0889E744:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E758u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E758u) goto L_0889E758;
    return;
L_0889E758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(752), 0u);
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
L_0889E778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
      if (branch_taken) {
          goto L_0889E848;
      }
      goto L_0889E7A0;
    }
L_0889E7A0:
    ctx.gpr[6] = (17072u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (17078u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17080u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
      if (branch_taken) {
          goto L_0889E7EC;
      }
      goto L_0889E7D4;
    }
L_0889E7D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1380));
      if (branch_taken) {
          goto L_0889E934;
      }
      goto L_0889E7EC;
    }
L_0889E7EC:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (16576u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1380));
      if (branch_taken) {
          goto L_0889E934;
      }
      goto L_0889E848;
    }
L_0889E848:
    ctx.gpr[6] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (17142u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17008u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_0889E8B8;
      }
      goto L_0889E8A0;
    }
L_0889E8A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1380));
      if (branch_taken) {
          goto L_0889E934;
      }
      goto L_0889E8B8;
    }
L_0889E8B8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17012u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(752)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1380));
    goto L_0889E934;
L_0889E934:
    ctx.gpr[31] = (0x0889E93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889E93Cu) goto L_0889E93C;
    return;
L_0889E93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E94Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1288));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889E94Cu) goto L_0889E94C;
    return;
L_0889E94C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E95C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E97Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E97Cu) goto L_0889E97C;
    return;
L_0889E97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E98Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E98Cu) goto L_0889E98C;
    return;
L_0889E98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E99Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E99Cu) goto L_0889E99C;
    return;
L_0889E99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889E9A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E9A8u) goto L_0889E9A8;
    return;
L_0889E9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E9B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E9B8u) goto L_0889E9B8;
    return;
L_0889E9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E9C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E9C8u) goto L_0889E9C8;
    return;
L_0889E9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E9D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E9D8u) goto L_0889E9D8;
    return;
L_0889E9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E9E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E9E8u) goto L_0889E9E8;
    return;
L_0889E9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889E9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889E9F8u) goto L_0889E9F8;
    return;
L_0889E9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA08u) goto L_0889EA08;
    return;
L_0889EA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA18u) goto L_0889EA18;
    return;
L_0889EA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1196));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA28u) goto L_0889EA28;
    return;
L_0889EA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA38u) goto L_0889EA38;
    return;
L_0889EA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA48u) goto L_0889EA48;
    return;
L_0889EA48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1288));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA58u) goto L_0889EA58;
    return;
L_0889EA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1380));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA68u) goto L_0889EA68;
    return;
L_0889EA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.gpr[31] = (0x0889EA78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA78u) goto L_0889EA78;
    return;
L_0889EA78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0889EAB0;
L_0889EAB0:
    ctx.gpr[31] = (0x0889EAB8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EAB8u) goto L_0889EAB8;
    return;
L_0889EAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
      if (branch_taken) {
          goto L_0889EAB0;
      }
      goto L_0889EAD0;
    }
L_0889EAD0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889EAE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EAE4u) goto L_0889EAE4;
    return;
L_0889EAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), 0u);
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
L_0889EB04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_0889EB34;
L_0889EB34:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
      if (branch_taken) {
          goto L_0889EB70;
      }
      goto L_0889EB3C;
    }
L_0889EB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0889EB80;
    }
    goto L_0889EB48;
L_0889EB48:
    ctx.gpr[31] = (0x0889EB50u);
    // nop
    goto L_0889DA64;
L_0889EB50:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0889EB80;
    }
    goto L_0889EB58;
L_0889EB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    ctx.gpr[31] = (0x0889EB68u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889EB68u) goto L_0889EB68;
    return;
L_0889EB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889EB80;
      }
      goto L_0889EB70;
    }
L_0889EB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    ctx.gpr[31] = (0x0889EB7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889EB7Cu) goto L_0889EB7C;
    return;
L_0889EB7C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0889EB80;
L_0889EB80:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889EB34;
      }
      goto L_0889EB8C;
    }
L_0889EB8C:
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
L_0889EBAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0889EBD4;
L_0889EBD4:
    ctx.gpr[31] = (0x0889EBDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889EBDCu) goto L_0889EBDC;
    return;
L_0889EBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EBF4;
    }
L_0889EBF4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889EC08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EC08u) goto L_0889EC08;
    return;
L_0889EC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(760), 0u);
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
L_0889EC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17078u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EC94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889EC94u) goto L_0889EC94;
    return;
L_0889EC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 6u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
        goto L_0889ECB4;
    }
    goto L_0889ECB4;
L_0889ECB4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0889EDB0;
      }
      goto L_0889ECC4;
    }
L_0889ECC4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0889ECEC;
L_0889ECEC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0889ED34;
      }
      goto L_0889ED04;
    }
L_0889ED04:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889ED60;
      }
      goto L_0889ED34;
    }
L_0889ED34:
    ctx.gpr[22] = (0u & 255u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    goto L_0889ED60;
L_0889ED60:
    ctx.gpr[31] = (0x0889ED68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889ED68u) goto L_0889ED68;
    return;
L_0889ED68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
      if (branch_taken) {
          goto L_0889ECEC;
      }
      goto L_0889ED8C;
    }
L_0889ED8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_0889EDB0;
L_0889EDB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17072u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (2221u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889EE10;
L_0889EE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0889EE24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0889EE24u) goto L_0889EE24;
    return;
L_0889EE24:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889EE10;
      }
      goto L_0889EE34;
    }
L_0889EE34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_0889EE68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0889EE90;
L_0889EE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0889EEA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EEA0u) goto L_0889EEA0;
    return;
L_0889EEA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
      if (branch_taken) {
          goto L_0889EE90;
      }
      goto L_0889EEB4;
    }
L_0889EEB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_0889EEC8;
    }
    goto L_0889EEC8;
L_0889EEC8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EF3C;
      }
      goto L_0889EED8;
    }
L_0889EED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889EF10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889DA18;
L_0889EF10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
      if (branch_taken) {
          goto L_0889EF2C;
      }
      goto L_0889EF18;
    }
L_0889EF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0889EF28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EF28u) goto L_0889EF28;
    return;
L_0889EF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    goto L_0889EF2C;
L_0889EF2C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889EED8;
      }
      goto L_0889EF3C;
    }
L_0889EF3C:
    ctx.gpr[31] = (0x0889EF44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889EF44u) goto L_0889EF44;
    return;
L_0889EF44:
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
L_0889EF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2160u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889EFB8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EFB8u) goto L_0889EFB8;
    return;
L_0889EFB8:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(764), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889EFD4u);
    ctx.gpr[6] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889EFD4u) goto L_0889EFD4;
    return;
L_0889EFD4:
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17166u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17078u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-18380));
    goto L_0889F010;
L_0889F010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0889F05C;
      }
      goto L_0889F028;
    }
L_0889F028:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0889F034u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F034u) goto L_0889F034;
    return;
L_0889F034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0889F04Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1112));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F04Cu) goto L_0889F04C;
    return;
L_0889F04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889F0F0;
      }
      goto L_0889F05C;
    }
L_0889F05C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0889F09Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F09Cu) goto L_0889F09C;
    return;
L_0889F09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1112));
    ctx.gpr[31] = (0x0889F0E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F0E4u) goto L_0889F0E4;
    return;
L_0889F0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_0889F0F0;
L_0889F0F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1084), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889F010;
      }
      goto L_0889F168;
    }
L_0889F168:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[30] = (ctx.gpr[4] << 24u);
    ctx.gpr[23] = (ctx.gpr[5] << 24u);
    ctx.gpr[22] = (ctx.gpr[6] << 24u);
    ctx.gpr[21] = (ctx.gpr[7] << 24u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-18376));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-18360));
    goto L_0889F1C4;
L_0889F1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x0889F1FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0889F1FCu) goto L_0889F1FC;
    return;
L_0889F1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0889F214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F214u) goto L_0889F214;
    return;
L_0889F214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[31] = (0x0889F224u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0889F224u) goto L_0889F224;
    return;
L_0889F224:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889F1C4;
      }
      goto L_0889F234;
    }
L_0889F234:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_0889F278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0889F2A0;
L_0889F2A0:
    ctx.gpr[31] = (0x0889F2A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F2A8u) goto L_0889F2A8;
    return;
L_0889F2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
      if (branch_taken) {
          goto L_0889F2A0;
      }
      goto L_0889F2C0;
    }
L_0889F2C0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889F2D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F2D4u) goto L_0889F2D4;
    return;
L_0889F2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(764), 0u);
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
L_0889F2F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_0889F328;
    }
    goto L_0889F328;
L_0889F328:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F36C;
      }
      goto L_0889F338;
    }
L_0889F338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[31] = (0x0889F348u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F348u) goto L_0889F348;
    return;
L_0889F348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0889F35Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F35Cu) goto L_0889F35C;
    return;
L_0889F35C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889F338;
      }
      goto L_0889F36C;
    }
L_0889F36C:
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
L_0889F388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889F3ACu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F3ACu) goto L_0889F3AC;
    return;
L_0889F3AC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(768), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889F3C8u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889F3C8u) goto L_0889F3C8;
    return;
L_0889F3C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (17080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17068u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
      if (branch_taken) {
          goto L_0889F43C;
      }
      goto L_0889F420;
    }
L_0889F420:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0889F434u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 362u, 0x08849F04u>(ctx, &aot_mem) && ctx.pc == 0x0889F434u) goto L_0889F434;
    return;
L_0889F434:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    goto L_0889F43C;
L_0889F43C:
    ctx.gpr[4] = (17062u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17066u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17311u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    ctx.gpr[7] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 206u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (0u | 223u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 237u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(768)));
    ctx.gpr[31] = (0x0889F4D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0889F4D0u) goto L_0889F4D0;
    return;
L_0889F4D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F4E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
      if (branch_taken) {
          goto L_0889F538;
      }
      goto L_0889F528;
    }
L_0889F528:
    ctx.gpr[31] = (0x0889F530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 348u, 0x08849E24u>(ctx, &aot_mem) && ctx.pc == 0x0889F530u) goto L_0889F530;
    return;
L_0889F530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    goto L_0889F538;
L_0889F538:
    ctx.gpr[31] = (0x0889F540u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0889F540u) goto L_0889F540;
    return;
L_0889F540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889F558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F558u) goto L_0889F558;
    return;
L_0889F558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(768), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889F604;
      }
      goto L_0889F5B4;
    }
L_0889F5B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.gpr[6] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0889F604u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 395u, 0x0884A308u>(ctx, &aot_mem) && ctx.pc == 0x0889F604u) goto L_0889F604;
    return;
L_0889F604:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.gpr[31] = (0x0889F630u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0889F630u) goto L_0889F630;
    return;
L_0889F630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889F670;
      }
      goto L_0889F668;
    }
L_0889F668:
    ctx.gpr[31] = (0x0889F670u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 357u, 0x08849EBCu>(ctx, &aot_mem) && ctx.pc == 0x0889F670u) goto L_0889F670;
    return;
L_0889F670:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0889F6A8;
L_0889F6A8:
    ctx.gpr[31] = (0x0889F6B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F6B0u) goto L_0889F6B0;
    return;
L_0889F6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
      if (branch_taken) {
          goto L_0889F6A8;
      }
      goto L_0889F6C8;
    }
L_0889F6C8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889F6DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F6DCu) goto L_0889F6DC;
    return;
L_0889F6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(772), 0u);
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
L_0889F6FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[6] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889F730u) goto L_0889F730;
    return;
L_0889F730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(13712));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0889F74Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F74Cu) goto L_0889F74C;
    return;
L_0889F74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[31] = (0x0889F758u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0889F758u) goto L_0889F758;
    return;
L_0889F758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0889F770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889F770u) goto L_0889F770;
    return;
L_0889F770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[8] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(212));
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889F7A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F7A8u) goto L_0889F7A8;
    return;
L_0889F7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F7B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0889F7B8u) goto L_0889F7B8;
    return;
L_0889F7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0889F7D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889F7D0u) goto L_0889F7D0;
    return;
L_0889F7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F7E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F7E4u) goto L_0889F7E4;
    return;
L_0889F7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0889F7F4u) goto L_0889F7F4;
    return;
L_0889F7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x0889F80Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889F80Cu) goto L_0889F80C;
    return;
L_0889F80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[8] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(572));
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889F844u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F844u) goto L_0889F844;
    return;
L_0889F844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0889F854u) goto L_0889F854;
    return;
L_0889F854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_0889F890;
    }
    goto L_0889F890;
L_0889F890:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F934;
      }
      goto L_0889F8A0;
    }
L_0889F8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0889F8BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(752));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889F8BCu) goto L_0889F8BC;
    return;
L_0889F8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(772)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(752));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(712)));
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889F910u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F910u) goto L_0889F910;
    return;
L_0889F910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0889F924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0889F924u) goto L_0889F924;
    return;
L_0889F924:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889F8A0;
      }
      goto L_0889F934;
    }
L_0889F934:
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
L_0889F950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F978u) goto L_0889F978;
    return;
L_0889F978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F988u) goto L_0889F988;
    return;
L_0889F988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F998u) goto L_0889F998;
    return;
L_0889F998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0889F9A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F9A8u) goto L_0889F9A8;
    return;
L_0889F9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_0889F9E4;
    }
    goto L_0889F9E4;
L_0889F9E4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FA18;
      }
      goto L_0889F9F4;
    }
L_0889F9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0889FA08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889FA08u) goto L_0889FA08;
    return;
L_0889FA08:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0889F9F4;
      }
      goto L_0889FA18;
    }
L_0889FA18:
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
L_0889FA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0889FAA0;
    }
    goto L_0889FA60;
L_0889FA60:
    ctx.gpr[31] = (0x0889FA68u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x0889FA68u) goto L_0889FA68;
    return;
L_0889FA68:
    ctx.gpr[31] = (0x0889FA70u);
    // nop
    goto L_0889DC6C;
L_0889FA70:
    ctx.gpr[31] = (0x0889FA78u);
    ctx.gpr[18] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0889FDC0;
L_0889FA78:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FDA8;
      }
      goto L_0889FA84;
    }
L_0889FA84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889FDA8;
      }
      goto L_0889FA8C;
    }
L_0889FA8C:
    ctx.gpr[31] = (0x0889FA94u);
    // nop
    goto L_0889DE20;
L_0889FA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(732), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889FDA8;
      }
      goto L_0889FAA0;
    }
L_0889FAA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 128u);
      if (branch_taken) {
          goto L_0889FCD0;
      }
      goto L_0889FAAC;
    }
L_0889FAAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
        goto L_0889FAC0;
    }
    goto L_0889FAC0;
L_0889FAC0:
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0889FB78;
    }
    goto L_0889FAC8;
L_0889FAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889FB28;
      }
      goto L_0889FAD8;
    }
L_0889FAD8:
    ctx.gpr[31] = (0x0889FAE0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FAE0u) goto L_0889FAE0;
    return;
L_0889FAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889FAF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0889DA18;
L_0889FAF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
      if (branch_taken) {
          goto L_0889FB18;
      }
      goto L_0889FB00;
    }
L_0889FB00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889FB14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0889DA48;
L_0889FB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    goto L_0889FB18;
L_0889FB18:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FB28;
    }
L_0889FB28:
    ctx.gpr[31] = (0x0889FB30u);
    // nop
    goto L_0889DA64;
L_0889FB30:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889FB48;
      }
      goto L_0889FB38;
    }
L_0889FB38:
    ctx.gpr[31] = (0x0889FB40u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FB40u) goto L_0889FB40;
    return;
L_0889FB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FB48;
    }
L_0889FB48:
    ctx.gpr[31] = (0x0889FB50u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FB50u) goto L_0889FB50;
    return;
L_0889FB50:
    ctx.gpr[31] = (0x0889FB58u);
    // nop
    goto L_0889DAE4;
L_0889FB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
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
L_0889FB78:
    ctx.gpr[7] = (ctx.gpr[6] & 8u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[6] & 4u);
        goto L_0889FBE4;
    }
    goto L_0889FB84;
L_0889FB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889FB98;
    }
L_0889FB98:
    ctx.gpr[31] = (0x0889FBA0u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FBA0u) goto L_0889FBA0;
    return;
L_0889FBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FBD4;
      }
      goto L_0889FBC0;
    }
L_0889FBC0:
    ctx.gpr[31] = (0x0889FBC8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FBC8u) goto L_0889FBC8;
    return;
L_0889FBC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0889FBD4;
L_0889FBD4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FBDC;
    }
L_0889FBDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FBE4;
    }
L_0889FBE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FC3C;
      }
      goto L_0889FBEC;
    }
L_0889FBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889FC1C;
      }
      goto L_0889FBF8;
    }
L_0889FBF8:
    ctx.gpr[31] = (0x0889FC00u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FC00u) goto L_0889FC00;
    return;
L_0889FC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889FC2C;
      }
      goto L_0889FC1C;
    }
L_0889FC1C:
    ctx.gpr[31] = (0x0889FC24u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FC24u) goto L_0889FC24;
    return;
L_0889FC24:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0889FC2C;
L_0889FC2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FC34;
    }
L_0889FC34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FC3C;
    }
L_0889FC3C:
    ctx.gpr[31] = (0x0889FC44u);
    // nop
    goto L_0889DA64;
L_0889FC44:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FC50;
    }
L_0889FC50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0889FC94;
      }
      goto L_0889FC60;
    }
L_0889FC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0889FC84;
      }
      goto L_0889FC70;
    }
L_0889FC70:
    ctx.gpr[31] = (0x0889FC78u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FC78u) goto L_0889FC78;
    return;
L_0889FC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FC84;
    }
L_0889FC84:
    ctx.gpr[31] = (0x0889FC8Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FC8Cu) goto L_0889FC8C;
    return;
L_0889FC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FC94;
    }
L_0889FC94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FC9C;
    }
L_0889FC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FCC0;
      }
      goto L_0889FCAC;
    }
L_0889FCAC:
    ctx.gpr[31] = (0x0889FCB4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FCB4u) goto L_0889FCB4;
    return;
L_0889FCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FCC0;
    }
L_0889FCC0:
    ctx.gpr[31] = (0x0889FCC8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FCC8u) goto L_0889FCC8;
    return;
L_0889FCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FCD0;
    }
L_0889FCD0:
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0889FCF4;
    }
    goto L_0889FCD8;
L_0889FCD8:
    ctx.gpr[31] = (0x0889FCE0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FCE0u) goto L_0889FCE0;
    return;
L_0889FCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FCF4;
    }
L_0889FCF4:
    ctx.gpr[5] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 4u);
      if (branch_taken) {
          goto L_0889FD68;
      }
      goto L_0889FD00;
    }
L_0889FD00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FD58;
      }
      goto L_0889FD3C;
    }
L_0889FD3C:
    ctx.gpr[31] = (0x0889FD44u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FD44u) goto L_0889FD44;
    return;
L_0889FD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FD58;
    }
L_0889FD58:
    ctx.gpr[31] = (0x0889FD60u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FD60u) goto L_0889FD60;
    return;
L_0889FD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FD68;
    }
L_0889FD68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FD70;
    }
L_0889FD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889FD98;
      }
      goto L_0889FD7C;
    }
L_0889FD7C:
    ctx.gpr[31] = (0x0889FD84u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FD84u) goto L_0889FD84;
    return;
L_0889FD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0889FDA0;
      }
      goto L_0889FD98;
    }
L_0889FD98:
    ctx.gpr[31] = (0x0889FDA0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0889FDA0u) goto L_0889FDA0;
    return;
L_0889FDA0:
    ctx.gpr[31] = (0x0889FDA8u);
    // nop
    goto L_0889DF64;
L_0889FDA8:
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
L_0889FDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4676), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4672), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4680), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4684), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4688), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4692), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4696), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4700), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4704), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4708), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FE64;
      }
      goto L_0889FE04;
    }
L_0889FE04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0889FFD0;
      }
      goto L_0889FE0C;
    }
L_0889FE0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889FE1Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889FE1Cu) goto L_0889FE1C;
    return;
L_0889FE1C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x0889FE28u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18352));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x0889FE28u) goto L_0889FE28;
    return;
L_0889FE28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889FE38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0889FE38u) goto L_0889FE38;
    return;
L_0889FE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[6] = (0u | 129u);
    ctx.gpr[31] = (0x0889FE50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0889FE50u) goto L_0889FE50;
    return;
L_0889FE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0889FFD0;
      }
      goto L_0889FE64;
    }
L_0889FE64:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FE84;
      }
      goto L_0889FE70;
    }
L_0889FE70:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0889FFD0;
    }
    goto L_0889FE7C;
L_0889FE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFD0;
      }
      goto L_0889FE84;
    }
L_0889FE84:
    ctx.gpr[31] = (0x0889FE8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0889FE8Cu) goto L_0889FE8C;
    return;
L_0889FE8C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889FFD0;
      }
      goto L_0889FE98;
    }
L_0889FE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0889FEB4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27616));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0889FEB4u) goto L_0889FEB4;
    return;
L_0889FEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x0889FECCu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 179u, 0x0884CBF8u>(ctx, &aot_mem) && ctx.pc == 0x0889FECCu) goto L_0889FECC;
    return;
L_0889FECC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 82u);
    ctx.gpr[22] = (0u | 83u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[23] = (2221u << 16u);
    goto L_0889FEE8;
L_0889FEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0889FF30;
      }
      goto L_0889FF00;
    }
L_0889FF00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889FF10u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889FF10u) goto L_0889FF10;
    return;
L_0889FF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(13696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0889FF28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889FF28u) goto L_0889FF28;
    return;
L_0889FF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889FFA4;
      }
      goto L_0889FF30;
    }
L_0889FF30:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889FF68;
      }
      goto L_0889FF38;
    }
L_0889FF38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889FF48u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889FF48u) goto L_0889FF48;
    return;
L_0889FF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(13700)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0889FF60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889FF60u) goto L_0889FF60;
    return;
L_0889FF60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889FFA4;
      }
      goto L_0889FF68;
    }
L_0889FF68:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0889FFA0;
      }
      goto L_0889FF70;
    }
L_0889FF70:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889FF7Cu);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0889FF7Cu) goto L_0889FF7C;
    return;
L_0889FF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889FFA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0889FFA0u) goto L_0889FFA0;
    return;
L_0889FFA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0889FFA4;
L_0889FFA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 171 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(928));
      if (branch_taken) {
          goto L_0889FEE8;
      }
      goto L_0889FFB0;
    }
L_0889FFB0:
    ctx.gpr[31] = (0x0889FFB8u);
    // nop
    goto L_0889D7A4;
L_0889FFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.gpr[31] = (0x0889FFC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0889FFC8u) goto L_0889FFC8;
    return;
L_0889FFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFD0;
      }
      goto L_0889FFD0;
    }
L_0889FFD0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0038(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0038_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_38(Runtime &runtime) {
    runtime.register_generated_unit(38u, 0x0889C000u, 16384u, &recomp_unit_0038, &recomp_unit_0038_entry);
    runtime.register_function(0x0889C000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C044u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C058u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C070u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C104u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C118u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C128u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C130u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C140u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C164u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C20Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C230u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C23Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C244u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C24Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C254u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C25Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C26Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C280u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C294u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C324u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C32Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C358u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C380u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C388u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C398u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C404u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C424u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C434u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C45Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C480u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C498u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C528u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C544u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C554u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C580u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C588u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C604u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C60Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C624u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C634u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C63Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C658u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C67Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C688u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C694u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C69Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C70Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C718u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C720u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C728u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C730u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C738u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C748u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C750u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C75Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C764u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C770u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C784u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C78Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C794u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C79Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C808u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C810u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C830u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C844u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C850u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C858u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C860u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C880u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C888u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C894u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C89Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C904u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C918u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C924u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C92Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C944u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C95Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C964u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C96Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C974u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C97Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C984u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CABCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CED8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D004u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D00Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D014u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D04Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D068u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D144u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D238u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D24Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D260u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D278u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D28Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D428u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D458u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D460u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D480u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D490u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D500u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D514u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D53Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D554u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D568u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D580u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D594u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D59Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D608u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D610u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D668u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D670u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D690u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D698u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D70Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D71Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D728u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D738u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D744u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D754u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D76Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D794u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D824u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D838u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D844u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D864u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D874u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D888u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D898u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D900u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D910u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D938u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D96Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D988u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D99Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DECCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E008u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E01Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E02Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E038u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E040u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E048u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E050u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E05Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E08Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E13Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E150u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E16Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E238u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E254u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E274u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E28Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E32Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E34Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E424u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E434u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E460u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E470u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E508u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E518u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E528u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E550u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E568u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E654u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E65Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E670u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E68Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E69Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E724u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E744u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E778u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E848u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E93Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E95Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E97Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E99Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EED8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F010u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F028u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F034u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F04Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F05Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F09Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F168u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F214u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F224u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F234u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F278u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F328u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F338u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F348u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F35Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F36Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F388u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F434u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F43Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F528u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F530u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F540u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F558u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F570u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F604u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F610u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F630u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F668u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F670u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F680u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F730u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F74Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F770u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F80Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F844u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F890u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F910u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F924u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F950u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F978u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F988u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F998u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FECCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFD0u, &recomp_unit_0038, "recomp_unit_0038");
}
} // namespace psprecomp

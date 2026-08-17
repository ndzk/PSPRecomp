#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0157[4003] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9,
    0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 20, 21, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34,
    0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0,
    75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 95,
    0, 96, 0, 0, 0, 0, 97, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    119, 120, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165,
    0, 0, 166, 0, 167, 0, 168, 0, 169, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177,
    0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 225, 0, 0, 0, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0,
    0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 287, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 296, 0, 0, 297,
    0, 0, 298, 0, 299, 300, 0, 301, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307,
    0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 313, 0, 0, 0, 0, 0, 0, 314, 315, 0, 0, 0, 316, 317, 0, 0, 0,
    318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 329, 0, 330, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 0, 0, 342,
    0, 0, 343, 0, 344, 345, 0, 346, 0, 347, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 0,
    0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 363, 364, 0, 0, 0,
    0, 365, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0,
    0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 403, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409,
    0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0,
    428, 0, 429, 0, 0, 430, 0, 431, 0, 0, 432, 0, 433, 0, 434, 0, 435, 436, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 442,
    0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 451, 0, 0, 452, 0, 0, 453, 0,
    0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 0, 0, 456, 0, 457, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462,
    0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 474,
    0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0,
    483, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 513,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 525, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0,
    533, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0,
    545, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0,
    0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 0, 562, 563, 0, 0, 0,
    0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 579, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586,
    0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 599, 0, 0, 0, 0, 0,
    600, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0,
    0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621,
    0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 629, 630, 0, 631, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 632, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640,
    0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 655, 0, 0, 0, 656, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 660, 0, 0,
    0, 661, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667,
    0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 677,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 679, 0, 0, 680, 0, 681, 0, 682, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0,
    0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0,
    691, 0, 692,
};
void recomp_unit_0157_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A78000u;
        entry_id = (entry_delta < 16012u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0157[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A78000;
    case 2u: goto L_08A78008;
    case 3u: goto L_08A78010;
    case 4u: goto L_08A78038;
    case 5u: goto L_08A78044;
    case 6u: goto L_08A78050;
    case 7u: goto L_08A78060;
    case 8u: goto L_08A78074;
    case 9u: goto L_08A7807C;
    case 10u: goto L_08A78088;
    case 11u: goto L_08A7809C;
    case 12u: goto L_08A780AC;
    case 13u: goto L_08A780BC;
    case 14u: goto L_08A780C4;
    case 15u: goto L_08A780C8;
    case 16u: goto L_08A780D0;
    case 17u: goto L_08A780D8;
    case 18u: goto L_08A780E0;
    case 19u: goto L_08A780EC;
    case 20u: goto L_08A780F4;
    case 21u: goto L_08A780F8;
    case 22u: goto L_08A78104;
    case 23u: goto L_08A78128;
    case 24u: goto L_08A78174;
    case 25u: goto L_08A78180;
    case 26u: goto L_08A78188;
    case 27u: goto L_08A78194;
    case 28u: goto L_08A781A8;
    case 29u: goto L_08A781B8;
    case 30u: goto L_08A781CC;
    case 31u: goto L_08A781D0;
    case 32u: goto L_08A781E0;
    case 33u: goto L_08A781F0;
    case 34u: goto L_08A781FC;
    case 35u: goto L_08A78204;
    case 36u: goto L_08A78218;
    case 37u: goto L_08A78234;
    case 38u: goto L_08A7823C;
    case 39u: goto L_08A78250;
    case 40u: goto L_08A78258;
    case 41u: goto L_08A78264;
    case 42u: goto L_08A78274;
    case 43u: goto L_08A782A4;
    case 44u: goto L_08A782C0;
    case 45u: goto L_08A782F4;
    case 46u: goto L_08A78300;
    case 47u: goto L_08A7830C;
    case 48u: goto L_08A78314;
    case 49u: goto L_08A78330;
    case 50u: goto L_08A78350;
    case 51u: goto L_08A78358;
    case 52u: goto L_08A78364;
    case 53u: goto L_08A7836C;
    case 54u: goto L_08A78374;
    case 55u: goto L_08A78398;
    case 56u: goto L_08A783A8;
    case 57u: goto L_08A783C0;
    case 58u: goto L_08A783D0;
    case 59u: goto L_08A783D8;
    case 60u: goto L_08A783F4;
    case 61u: goto L_08A783FC;
    case 62u: goto L_08A78400;
    case 63u: goto L_08A78410;
    case 64u: goto L_08A78420;
    case 65u: goto L_08A78428;
    case 66u: goto L_08A78448;
    case 67u: goto L_08A78458;
    case 68u: goto L_08A7847C;
    case 69u: goto L_08A78498;
    case 70u: goto L_08A784A0;
    case 71u: goto L_08A784A8;
    case 72u: goto L_08A784B8;
    case 73u: goto L_08A784F0;
    case 74u: goto L_08A784F8;
    case 75u: goto L_08A78500;
    case 76u: goto L_08A78508;
    case 77u: goto L_08A78510;
    case 78u: goto L_08A78544;
    case 79u: goto L_08A7857C;
    case 80u: goto L_08A78584;
    case 81u: goto L_08A78590;
    case 82u: goto L_08A785A0;
    case 83u: goto L_08A785A8;
    case 84u: goto L_08A785B4;
    case 85u: goto L_08A785C4;
    case 86u: goto L_08A785CC;
    case 87u: goto L_08A785D8;
    case 88u: goto L_08A785E8;
    case 89u: goto L_08A785F0;
    case 90u: goto L_08A785FC;
    case 91u: goto L_08A7864C;
    case 92u: goto L_08A78650;
    case 93u: goto L_08A78658;
    case 94u: goto L_08A78678;
    case 95u: goto L_08A7867C;
    case 96u: goto L_08A78684;
    case 97u: goto L_08A78698;
    case 98u: goto L_08A7869C;
    case 99u: goto L_08A786A4;
    case 100u: goto L_08A786B0;
    case 101u: goto L_08A786B8;
    case 102u: goto L_08A786C0;
    case 103u: goto L_08A786F4;
    case 104u: goto L_08A7871C;
    case 105u: goto L_08A7872C;
    case 106u: goto L_08A7873C;
    case 107u: goto L_08A78748;
    case 108u: goto L_08A7876C;
    case 109u: goto L_08A78774;
    case 110u: goto L_08A787A4;
    case 111u: goto L_08A787C8;
    case 112u: goto L_08A787DC;
    case 113u: goto L_08A78800;
    case 114u: goto L_08A78838;
    case 115u: goto L_08A78888;
    case 116u: goto L_08A788BC;
    case 117u: goto L_08A788D8;
    case 118u: goto L_08A788F8;
    case 119u: goto L_08A78900;
    case 120u: goto L_08A78904;
    case 121u: goto L_08A78914;
    case 122u: goto L_08A7891C;
    case 123u: goto L_08A78928;
    case 124u: goto L_08A78930;
    case 125u: goto L_08A78934;
    case 126u: goto L_08A7894C;
    case 127u: goto L_08A7897C;
    case 128u: goto L_08A7898C;
    case 129u: goto L_08A789A4;
    case 130u: goto L_08A789B0;
    case 131u: goto L_08A789BC;
    case 132u: goto L_08A789C0;
    case 133u: goto L_08A789CC;
    case 134u: goto L_08A789D4;
    case 135u: goto L_08A789DC;
    case 136u: goto L_08A78A30;
    case 137u: goto L_08A78A40;
    case 138u: goto L_08A78A48;
    case 139u: goto L_08A78A54;
    case 140u: goto L_08A78AD8;
    case 141u: goto L_08A78AEC;
    case 142u: goto L_08A78B18;
    case 143u: goto L_08A78B20;
    case 144u: goto L_08A78B5C;
    case 145u: goto L_08A78B90;
    case 146u: goto L_08A78C10;
    case 147u: goto L_08A78C2C;
    case 148u: goto L_08A78C38;
    case 149u: goto L_08A78C70;
    case 150u: goto L_08A78C78;
    case 151u: goto L_08A78C7C;
    case 152u: goto L_08A78CA0;
    case 153u: goto L_08A78CA8;
    case 154u: goto L_08A78CD4;
    case 155u: goto L_08A78CF0;
    case 156u: goto L_08A78D34;
    case 157u: goto L_08A78D7C;
    case 158u: goto L_08A78DB8;
    case 159u: goto L_08A78DC0;
    case 160u: goto L_08A78DCC;
    case 161u: goto L_08A78DD4;
    case 162u: goto L_08A78DDC;
    case 163u: goto L_08A78DE4;
    case 164u: goto L_08A78DF4;
    case 165u: goto L_08A78DFC;
    case 166u: goto L_08A78E08;
    case 167u: goto L_08A78E10;
    case 168u: goto L_08A78E18;
    case 169u: goto L_08A78E20;
    case 170u: goto L_08A78E24;
    case 171u: goto L_08A78E2C;
    case 172u: goto L_08A78E34;
    case 173u: goto L_08A78E40;
    case 174u: goto L_08A78E58;
    case 175u: goto L_08A78E60;
    case 176u: goto L_08A78E6C;
    case 177u: goto L_08A78E7C;
    case 178u: goto L_08A78E88;
    case 179u: goto L_08A78EA0;
    case 180u: goto L_08A78EB0;
    case 181u: goto L_08A78EE4;
    case 182u: goto L_08A78EEC;
    case 183u: goto L_08A78EF4;
    case 184u: goto L_08A78F28;
    case 185u: goto L_08A78F3C;
    case 186u: goto L_08A78F48;
    case 187u: goto L_08A78F58;
    case 188u: goto L_08A78F60;
    case 189u: goto L_08A78F68;
    case 190u: goto L_08A78F70;
    case 191u: goto L_08A78F78;
    case 192u: goto L_08A78FE0;
    case 193u: goto L_08A78FF4;
    case 194u: goto L_08A78FFC;
    case 195u: goto L_08A79044;
    case 196u: goto L_08A7904C;
    case 197u: goto L_08A79064;
    case 198u: goto L_08A7906C;
    case 199u: goto L_08A79078;
    case 200u: goto L_08A79084;
    case 201u: goto L_08A79090;
    case 202u: goto L_08A790A4;
    case 203u: goto L_08A790B4;
    case 204u: goto L_08A790C8;
    case 205u: goto L_08A790FC;
    case 206u: goto L_08A79134;
    case 207u: goto L_08A79188;
    case 208u: goto L_08A79244;
    case 209u: goto L_08A7926C;
    case 210u: goto L_08A79278;
    case 211u: goto L_08A79288;
    case 212u: goto L_08A792E8;
    case 213u: goto L_08A792F8;
    case 214u: goto L_08A79338;
    case 215u: goto L_08A79348;
    case 216u: goto L_08A79370;
    case 217u: goto L_08A79380;
    case 218u: goto L_08A793D0;
    case 219u: goto L_08A793F8;
    case 220u: goto L_08A79408;
    case 221u: goto L_08A7941C;
    case 222u: goto L_08A79440;
    case 223u: goto L_08A79458;
    case 224u: goto L_08A79464;
    case 225u: goto L_08A79468;
    case 226u: goto L_08A7947C;
    case 227u: goto L_08A79484;
    case 228u: goto L_08A794B8;
    case 229u: goto L_08A794BC;
    case 230u: goto L_08A794D0;
    case 231u: goto L_08A794E4;
    case 232u: goto L_08A79508;
    case 233u: goto L_08A79550;
    case 234u: goto L_08A79564;
    case 235u: goto L_08A79578;
    case 236u: goto L_08A7958C;
    case 237u: goto L_08A795B0;
    case 238u: goto L_08A795F8;
    case 239u: goto L_08A79638;
    case 240u: goto L_08A7963C;
    case 241u: goto L_08A79650;
    case 242u: goto L_08A79664;
    case 243u: goto L_08A79684;
    case 244u: goto L_08A796CC;
    case 245u: goto L_08A796E0;
    case 246u: goto L_08A796F4;
    case 247u: goto L_08A79708;
    case 248u: goto L_08A79728;
    case 249u: goto L_08A7975C;
    case 250u: goto L_08A79788;
    case 251u: goto L_08A797B4;
    case 252u: goto L_08A797C4;
    case 253u: goto L_08A797CC;
    case 254u: goto L_08A797D8;
    case 255u: goto L_08A79824;
    case 256u: goto L_08A79834;
    case 257u: goto L_08A79844;
    case 258u: goto L_08A79868;
    case 259u: goto L_08A79898;
    case 260u: goto L_08A798EC;
    case 261u: goto L_08A79900;
    case 262u: goto L_08A79908;
    case 263u: goto L_08A79918;
    case 264u: goto L_08A7992C;
    case 265u: goto L_08A79934;
    case 266u: goto L_08A7994C;
    case 267u: goto L_08A79B60;
    case 268u: goto L_08A79B9C;
    case 269u: goto L_08A79BB0;
    case 270u: goto L_08A79BC8;
    case 271u: goto L_08A79BD4;
    case 272u: goto L_08A79BEC;
    case 273u: goto L_08A79C04;
    case 274u: goto L_08A79C24;
    case 275u: goto L_08A79C30;
    case 276u: goto L_08A79C54;
    case 277u: goto L_08A79C64;
    case 278u: goto L_08A79C78;
    case 279u: goto L_08A79C84;
    case 280u: goto L_08A79C8C;
    case 281u: goto L_08A79C94;
    case 282u: goto L_08A79CA0;
    case 283u: goto L_08A79CAC;
    case 284u: goto L_08A79CB4;
    case 285u: goto L_08A79CBC;
    case 286u: goto L_08A79CC8;
    case 287u: goto L_08A79CD0;
    case 288u: goto L_08A79CD4;
    case 289u: goto L_08A79CDC;
    case 290u: goto L_08A79D1C;
    case 291u: goto L_08A79D2C;
    case 292u: goto L_08A79D38;
    case 293u: goto L_08A79D48;
    case 294u: goto L_08A79D50;
    case 295u: goto L_08A79D6C;
    case 296u: goto L_08A79D70;
    case 297u: goto L_08A79D7C;
    case 298u: goto L_08A79D88;
    case 299u: goto L_08A79D90;
    case 300u: goto L_08A79D94;
    case 301u: goto L_08A79D9C;
    case 302u: goto L_08A79DA0;
    case 303u: goto L_08A79DC8;
    case 304u: goto L_08A79DD4;
    case 305u: goto L_08A79DDC;
    case 306u: goto L_08A79DEC;
    case 307u: goto L_08A79DFC;
    case 308u: goto L_08A79E08;
    case 309u: goto L_08A79E1C;
    case 310u: goto L_08A79E28;
    case 311u: goto L_08A79E30;
    case 312u: goto L_08A79E38;
    case 313u: goto L_08A79E3C;
    case 314u: goto L_08A79E58;
    case 315u: goto L_08A79E5C;
    case 316u: goto L_08A79E6C;
    case 317u: goto L_08A79E70;
    case 318u: goto L_08A79E80;
    case 319u: goto L_08A79E88;
    case 320u: goto L_08A79EBC;
    case 321u: goto L_08A79EFC;
    case 322u: goto L_08A79F74;
    case 323u: goto L_08A7A028;
    case 324u: goto L_08A7A074;
    case 325u: goto L_08A7A0A4;
    case 326u: goto L_08A7A0B0;
    case 327u: goto L_08A7A0B8;
    case 328u: goto L_08A7A0C0;
    case 329u: goto L_08A7A0CC;
    case 330u: goto L_08A7A0D4;
    case 331u: goto L_08A7A0D8;
    case 332u: goto L_08A7A0E0;
    case 333u: goto L_08A7A0E8;
    case 334u: goto L_08A7A10C;
    case 335u: goto L_08A7A114;
    case 336u: goto L_08A7A11C;
    case 337u: goto L_08A7A124;
    case 338u: goto L_08A7A150;
    case 339u: goto L_08A7A158;
    case 340u: goto L_08A7A160;
    case 341u: goto L_08A7A16C;
    case 342u: goto L_08A7A17C;
    case 343u: goto L_08A7A188;
    case 344u: goto L_08A7A190;
    case 345u: goto L_08A7A194;
    case 346u: goto L_08A7A19C;
    case 347u: goto L_08A7A1A4;
    case 348u: goto L_08A7A1A8;
    case 349u: goto L_08A7A1B0;
    case 350u: goto L_08A7A1BC;
    case 351u: goto L_08A7A1C4;
    case 352u: goto L_08A7A1D0;
    case 353u: goto L_08A7A1D8;
    case 354u: goto L_08A7A1E4;
    case 355u: goto L_08A7A1EC;
    case 356u: goto L_08A7A1F4;
    case 357u: goto L_08A7A210;
    case 358u: goto L_08A7A218;
    case 359u: goto L_08A7A248;
    case 360u: goto L_08A7A254;
    case 361u: goto L_08A7A25C;
    case 362u: goto L_08A7A264;
    case 363u: goto L_08A7A26C;
    case 364u: goto L_08A7A270;
    case 365u: goto L_08A7A284;
    case 366u: goto L_08A7A288;
    case 367u: goto L_08A7A298;
    case 368u: goto L_08A7A2A0;
    case 369u: goto L_08A7A2D8;
    case 370u: goto L_08A7A2F8;
    case 371u: goto L_08A7A304;
    case 372u: goto L_08A7A314;
    case 373u: goto L_08A7A31C;
    case 374u: goto L_08A7A338;
    case 375u: goto L_08A7A354;
    case 376u: goto L_08A7A35C;
    case 377u: goto L_08A7A378;
    case 378u: goto L_08A7A384;
    case 379u: goto L_08A7A390;
    case 380u: goto L_08A7A39C;
    case 381u: goto L_08A7A3A4;
    case 382u: goto L_08A7A3A8;
    case 383u: goto L_08A7A3B4;
    case 384u: goto L_08A7A3BC;
    case 385u: goto L_08A7A3C4;
    case 386u: goto L_08A7A3E0;
    case 387u: goto L_08A7A3EC;
    case 388u: goto L_08A7A3F8;
    case 389u: goto L_08A7A404;
    case 390u: goto L_08A7A410;
    case 391u: goto L_08A7A418;
    case 392u: goto L_08A7A420;
    case 393u: goto L_08A7A42C;
    case 394u: goto L_08A7A438;
    case 395u: goto L_08A7A444;
    case 396u: goto L_08A7A44C;
    case 397u: goto L_08A7A454;
    case 398u: goto L_08A7A488;
    case 399u: goto L_08A7A490;
    case 400u: goto L_08A7A498;
    case 401u: goto L_08A7A4A4;
    case 402u: goto L_08A7A4FC;
    case 403u: goto L_08A7A514;
    case 404u: goto L_08A7A518;
    case 405u: goto L_08A7A530;
    case 406u: goto L_08A7A538;
    case 407u: goto L_08A7A544;
    case 408u: goto L_08A7A570;
    case 409u: goto L_08A7A57C;
    case 410u: goto L_08A7A584;
    case 411u: goto L_08A7A594;
    case 412u: goto L_08A7A600;
    case 413u: goto L_08A7A608;
    case 414u: goto L_08A7A610;
    case 415u: goto L_08A7A648;
    case 416u: goto L_08A7A658;
    case 417u: goto L_08A7A670;
    case 418u: goto L_08A7A680;
    case 419u: goto L_08A7A6A4;
    case 420u: goto L_08A7A6C4;
    case 421u: goto L_08A7A6D0;
    case 422u: goto L_08A7A6E4;
    case 423u: goto L_08A7A704;
    case 424u: goto L_08A7A724;
    case 425u: goto L_08A7A764;
    case 426u: goto L_08A7A76C;
    case 427u: goto L_08A7A778;
    case 428u: goto L_08A7A780;
    case 429u: goto L_08A7A788;
    case 430u: goto L_08A7A794;
    case 431u: goto L_08A7A79C;
    case 432u: goto L_08A7A7A8;
    case 433u: goto L_08A7A7B0;
    case 434u: goto L_08A7A7B8;
    case 435u: goto L_08A7A7C0;
    case 436u: goto L_08A7A7C4;
    case 437u: goto L_08A7A7CC;
    case 438u: goto L_08A7A7D8;
    case 439u: goto L_08A7A7E0;
    case 440u: goto L_08A7A7E8;
    case 441u: goto L_08A7A7F4;
    case 442u: goto L_08A7A7FC;
    case 443u: goto L_08A7A804;
    case 444u: goto L_08A7A810;
    case 445u: goto L_08A7A818;
    case 446u: goto L_08A7A820;
    case 447u: goto L_08A7A82C;
    case 448u: goto L_08A7A840;
    case 449u: goto L_08A7A854;
    case 450u: goto L_08A7A85C;
    case 451u: goto L_08A7A860;
    case 452u: goto L_08A7A86C;
    case 453u: goto L_08A7A878;
    case 454u: goto L_08A7A894;
    case 455u: goto L_08A7A898;
    case 456u: goto L_08A7A8B0;
    case 457u: goto L_08A7A8B8;
    case 458u: goto L_08A7A8BC;
    case 459u: goto L_08A7A8C8;
    case 460u: goto L_08A7A8E0;
    case 461u: goto L_08A7A8EC;
    case 462u: goto L_08A7A8FC;
    case 463u: goto L_08A7A904;
    case 464u: goto L_08A7A918;
    case 465u: goto L_08A7A920;
    case 466u: goto L_08A7A958;
    case 467u: goto L_08A7A9B4;
    case 468u: goto L_08A7A9B8;
    case 469u: goto L_08A7A9C8;
    case 470u: goto L_08A7A9D0;
    case 471u: goto L_08A7A9D8;
    case 472u: goto L_08A7A9E8;
    case 473u: goto L_08A7A9F0;
    case 474u: goto L_08A7A9FC;
    case 475u: goto L_08A7AA04;
    case 476u: goto L_08A7AA0C;
    case 477u: goto L_08A7AA14;
    case 478u: goto L_08A7AA1C;
    case 479u: goto L_08A7AA2C;
    case 480u: goto L_08A7AA48;
    case 481u: goto L_08A7AA60;
    case 482u: goto L_08A7AA74;
    case 483u: goto L_08A7AA80;
    case 484u: goto L_08A7AA88;
    case 485u: goto L_08A7AA9C;
    case 486u: goto L_08A7AAA4;
    case 487u: goto L_08A7AAB8;
    case 488u: goto L_08A7AAC0;
    case 489u: goto L_08A7AAC8;
    case 490u: goto L_08A7AAD0;
    case 491u: goto L_08A7AADC;
    case 492u: goto L_08A7AB14;
    case 493u: goto L_08A7AB28;
    case 494u: goto L_08A7AB4C;
    case 495u: goto L_08A7AB60;
    case 496u: goto L_08A7AB8C;
    case 497u: goto L_08A7AC10;
    case 498u: goto L_08A7AC20;
    case 499u: goto L_08A7AC2C;
    case 500u: goto L_08A7AC34;
    case 501u: goto L_08A7AC3C;
    case 502u: goto L_08A7AC4C;
    case 503u: goto L_08A7AC54;
    case 504u: goto L_08A7AC5C;
    case 505u: goto L_08A7AC90;
    case 506u: goto L_08A7ACAC;
    case 507u: goto L_08A7ACEC;
    case 508u: goto L_08A7AD14;
    case 509u: goto L_08A7AD30;
    case 510u: goto L_08A7AD60;
    case 511u: goto L_08A7AD68;
    case 512u: goto L_08A7AD74;
    case 513u: goto L_08A7AD7C;
    case 514u: goto L_08A7ADB0;
    case 515u: goto L_08A7ADE4;
    case 516u: goto L_08A7AE08;
    case 517u: goto L_08A7AE20;
    case 518u: goto L_08A7AE28;
    case 519u: goto L_08A7AE3C;
    case 520u: goto L_08A7AE48;
    case 521u: goto L_08A7AE68;
    case 522u: goto L_08A7AEAC;
    case 523u: goto L_08A7AEB4;
    case 524u: goto L_08A7AEBC;
    case 525u: goto L_08A7AED0;
    case 526u: goto L_08A7AED4;
    case 527u: goto L_08A7AF34;
    case 528u: goto L_08A7AF3C;
    case 529u: goto L_08A7AF54;
    case 530u: goto L_08A7AF5C;
    case 531u: goto L_08A7AF68;
    case 532u: goto L_08A7AF74;
    case 533u: goto L_08A7AF80;
    case 534u: goto L_08A7AF94;
    case 535u: goto L_08A7AFA4;
    case 536u: goto L_08A7AFB8;
    case 537u: goto L_08A7AFEC;
    case 538u: goto L_08A7B054;
    case 539u: goto L_08A7B060;
    case 540u: goto L_08A7B078;
    case 541u: goto L_08A7B098;
    case 542u: goto L_08A7B0B0;
    case 543u: goto L_08A7B0E4;
    case 544u: goto L_08A7B0F8;
    case 545u: goto L_08A7B100;
    case 546u: goto L_08A7B108;
    case 547u: goto L_08A7B118;
    case 548u: goto L_08A7B124;
    case 549u: goto L_08A7B12C;
    case 550u: goto L_08A7B138;
    case 551u: goto L_08A7B17C;
    case 552u: goto L_08A7B190;
    case 553u: goto L_08A7B19C;
    case 554u: goto L_08A7B1C0;
    case 555u: goto L_08A7B1C8;
    case 556u: goto L_08A7B1E0;
    case 557u: goto L_08A7B204;
    case 558u: goto L_08A7B224;
    case 559u: goto L_08A7B238;
    case 560u: goto L_08A7B248;
    case 561u: goto L_08A7B24C;
    case 562u: goto L_08A7B26C;
    case 563u: goto L_08A7B270;
    case 564u: goto L_08A7B284;
    case 565u: goto L_08A7B290;
    case 566u: goto L_08A7B2A0;
    case 567u: goto L_08A7B2DC;
    case 568u: goto L_08A7B2F4;
    case 569u: goto L_08A7B33C;
    case 570u: goto L_08A7B354;
    case 571u: goto L_08A7B364;
    case 572u: goto L_08A7B3AC;
    case 573u: goto L_08A7B3B8;
    case 574u: goto L_08A7B3BC;
    case 575u: goto L_08A7B3D0;
    case 576u: goto L_08A7B3E4;
    case 577u: goto L_08A7B3EC;
    case 578u: goto L_08A7B424;
    case 579u: goto L_08A7B428;
    case 580u: goto L_08A7B43C;
    case 581u: goto L_08A7B44C;
    case 582u: goto L_08A7B48C;
    case 583u: goto L_08A7B4B0;
    case 584u: goto L_08A7B4C8;
    case 585u: goto L_08A7B4D0;
    case 586u: goto L_08A7B4FC;
    case 587u: goto L_08A7B504;
    case 588u: goto L_08A7B54C;
    case 589u: goto L_08A7B554;
    case 590u: goto L_08A7B5A0;
    case 591u: goto L_08A7B5AC;
    case 592u: goto L_08A7B5BC;
    case 593u: goto L_08A7B5C4;
    case 594u: goto L_08A7B624;
    case 595u: goto L_08A7B638;
    case 596u: goto L_08A7B648;
    case 597u: goto L_08A7B654;
    case 598u: goto L_08A7B664;
    case 599u: goto L_08A7B668;
    case 600u: goto L_08A7B680;
    case 601u: goto L_08A7B68C;
    case 602u: goto L_08A7B6A4;
    case 603u: goto L_08A7B6C0;
    case 604u: goto L_08A7B6F4;
    case 605u: goto L_08A7B704;
    case 606u: goto L_08A7B710;
    case 607u: goto L_08A7B71C;
    case 608u: goto L_08A7B730;
    case 609u: goto L_08A7B738;
    case 610u: goto L_08A7B75C;
    case 611u: goto L_08A7B764;
    case 612u: goto L_08A7B76C;
    case 613u: goto L_08A7B790;
    case 614u: goto L_08A7B7D4;
    case 615u: goto L_08A7B7E0;
    case 616u: goto L_08A7B81C;
    case 617u: goto L_08A7B824;
    case 618u: goto L_08A7B834;
    case 619u: goto L_08A7B840;
    case 620u: goto L_08A7B85C;
    case 621u: goto L_08A7B87C;
    case 622u: goto L_08A7B888;
    case 623u: goto L_08A7B894;
    case 624u: goto L_08A7B89C;
    case 625u: goto L_08A7B8A4;
    case 626u: goto L_08A7B8B4;
    case 627u: goto L_08A7B8C0;
    case 628u: goto L_08A7B8C8;
    case 629u: goto L_08A7B8D8;
    case 630u: goto L_08A7B8DC;
    case 631u: goto L_08A7B8E4;
    case 632u: goto L_08A7B90C;
    case 633u: goto L_08A7B910;
    case 634u: goto L_08A7B920;
    case 635u: goto L_08A7B928;
    case 636u: goto L_08A7B93C;
    case 637u: goto L_08A7B948;
    case 638u: goto L_08A7B95C;
    case 639u: goto L_08A7B964;
    case 640u: goto L_08A7B97C;
    case 641u: goto L_08A7B994;
    case 642u: goto L_08A7B9A0;
    case 643u: goto L_08A7B9B8;
    case 644u: goto L_08A7B9C8;
    case 645u: goto L_08A7B9D8;
    case 646u: goto L_08A7B9E4;
    case 647u: goto L_08A7BA04;
    case 648u: goto L_08A7BA68;
    case 649u: goto L_08A7BA94;
    case 650u: goto L_08A7BA9C;
    case 651u: goto L_08A7BAC0;
    case 652u: goto L_08A7BAD4;
    case 653u: goto L_08A7BB0C;
    case 654u: goto L_08A7BB28;
    case 655u: goto L_08A7BB2C;
    case 656u: goto L_08A7BB3C;
    case 657u: goto L_08A7BB40;
    case 658u: goto L_08A7BBD4;
    case 659u: goto L_08A7BBF0;
    case 660u: goto L_08A7BBF4;
    case 661u: goto L_08A7BC04;
    case 662u: goto L_08A7BC08;
    case 663u: goto L_08A7BC9C;
    case 664u: goto L_08A7BCAC;
    case 665u: goto L_08A7BCBC;
    case 666u: goto L_08A7BCD4;
    case 667u: goto L_08A7BCFC;
    case 668u: goto L_08A7BD04;
    case 669u: goto L_08A7BD18;
    case 670u: goto L_08A7BD38;
    case 671u: goto L_08A7BD44;
    case 672u: goto L_08A7BD50;
    case 673u: goto L_08A7BD58;
    case 674u: goto L_08A7BD60;
    case 675u: goto L_08A7BD68;
    case 676u: goto L_08A7BD74;
    case 677u: goto L_08A7BD7C;
    case 678u: goto L_08A7BDB4;
    case 679u: goto L_08A7BDB8;
    case 680u: goto L_08A7BDC4;
    case 681u: goto L_08A7BDCC;
    case 682u: goto L_08A7BDD4;
    case 683u: goto L_08A7BDD8;
    case 684u: goto L_08A7BDE8;
    case 685u: goto L_08A7BE08;
    case 686u: goto L_08A7BE28;
    case 687u: goto L_08A7BE3C;
    case 688u: goto L_08A7BE58;
    case 689u: goto L_08A7BE68;
    case 690u: goto L_08A7BE74;
    case 691u: goto L_08A7BE80;
    case 692u: goto L_08A7BE88;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A78000:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A78038;
      }
      goto L_08A78008;
    }
L_08A78008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A780C8;
      }
      goto L_08A78010;
    }
L_08A78010:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78038:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_08A78044;
L_08A78044:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A780C8;
    }
    goto L_08A78050;
L_08A78050:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7807C;
      }
      goto L_08A78060;
    }
L_08A78060:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A78074u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 616u, 0x08A77C48u>(ctx, &aot_mem) && ctx.pc == 0x08A78074u) goto L_08A78074;
    return;
L_08A78074:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_08A7807C;
L_08A7807C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7809C;
      }
      goto L_08A78088;
    }
L_08A78088:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A780AC;
      }
      goto L_08A7809C;
    }
L_08A7809C:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A780AC;
L_08A780AC:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[16] - ctx.gpr[6]);
        goto L_08A780BC;
    }
    goto L_08A780BC;
L_08A780BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A78044;
      }
      goto L_08A780C4;
    }
L_08A780C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A780C8;
L_08A780C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A780D8;
      }
      goto L_08A780D0;
    }
L_08A780D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    goto L_08A780D8;
L_08A780D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A780F8;
      }
      goto L_08A780E0;
    }
L_08A780E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[16]);
        goto L_08A780F4;
    }
    goto L_08A780EC;
L_08A780EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A780F4;
      }
      goto L_08A780F4;
    }
L_08A780F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A780F8;
L_08A780F8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[2] = (ctx.gpr[18] - ctx.gpr[4]);
        goto L_08A78104;
    }
    goto L_08A78104;
L_08A78104:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A78174u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 641u, 0x08A77EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A78174u) goto L_08A78174;
    return;
L_08A78174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A78274;
      }
      goto L_08A78180;
    }
L_08A78180:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A781FC;
      }
      goto L_08A78188;
    }
L_08A78188:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08A78194;
L_08A78194:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A781FC;
      }
      goto L_08A781A8;
    }
L_08A781A8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A781D0;
      }
      goto L_08A781B8;
    }
L_08A781B8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A781CCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 616u, 0x08A77C48u>(ctx, &aot_mem) && ctx.pc == 0x08A781CCu) goto L_08A781CC;
    return;
L_08A781CC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08A781D0;
L_08A781D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A781E0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 627u, 0x08A77D94u>(ctx, &aot_mem) && ctx.pc == 0x08A781E0u) goto L_08A781E0;
    return;
L_08A781E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A781F0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 641u, 0x08A77EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A781F0u) goto L_08A781F0;
    return;
L_08A781F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A78194;
      }
      goto L_08A781FC;
    }
L_08A781FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A78234;
      }
      goto L_08A78204;
    }
L_08A78204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A78218u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A78218u) goto L_08A78218;
    return;
L_08A78218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A78234;
L_08A78234:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A78274;
      }
      goto L_08A7823C;
    }
L_08A7823C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A78258;
      }
      goto L_08A78250;
    }
L_08A78250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A78258;
      }
      goto L_08A78258;
    }
L_08A78258:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A78264u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 261u, 0x08A71414u>(ctx, &aot_mem) && ctx.pc == 0x08A78264u) goto L_08A78264;
    return;
L_08A78264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08A78274;
L_08A78274:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A782A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (14720u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A782C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A78314;
      }
      goto L_08A782F4;
    }
L_08A782F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A78300u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 645u, 0x08A77FB0u>(ctx, &aot_mem) && ctx.pc == 0x08A78300u) goto L_08A78300;
    return;
L_08A78300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A78350;
      }
      goto L_08A7830C;
    }
L_08A7830C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78364;
      }
      goto L_08A78314;
    }
L_08A78314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A78330u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78330u) goto L_08A78330;
    return;
L_08A78330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78350:
    ctx.gpr[31] = (0x08A78358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1u, 0x08A7C210u>(ctx, &aot_mem) && ctx.pc == 0x08A78358u) goto L_08A78358;
    return;
L_08A78358:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78374;
      }
      goto L_08A78364;
    }
L_08A78364:
    if (static_cast<std::int32_t>(ctx.gpr[19]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6192)));
        goto L_08A78398;
    }
    goto L_08A7836C;
L_08A7836C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A78400;
      }
      goto L_08A78374;
    }
L_08A78374:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78398:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_08A783D8;
      }
      goto L_08A783A8;
    }
L_08A783A8:
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A783D0;
      }
      goto L_08A783C0;
    }
L_08A783C0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(6184));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(6188));
    ctx.gpr[31] = (0x08A783D0u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 53u, 0x08A7CC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A783D0u) goto L_08A783D0;
    return;
L_08A783D0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6184)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_08A783D8;
L_08A783D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A783F4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A783F4u) goto L_08A783F4;
    return;
L_08A783F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A78428;
      }
      goto L_08A783FC;
    }
L_08A783FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A78400;
L_08A78400:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A78410u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08A78128;
L_08A78410:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_08A78448;
      }
      goto L_08A78420;
    }
L_08A78420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78458;
      }
      goto L_08A78428;
    }
L_08A78428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78448:
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A78458u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08A7857C;
L_08A78458:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7847C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784A8;
      }
      goto L_08A78498;
    }
L_08A78498:
    ctx.gpr[31] = (0x08A784A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A784A0u) goto L_08A784A0;
    return;
L_08A784A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6184), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6188), 0u);
    goto L_08A784A8;
L_08A784A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A784B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2216u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32064));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (2216u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31620));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A78508;
      }
      goto L_08A784F0;
    }
L_08A784F0:
    ctx.gpr[31] = (0x08A784F8u);
    // nop
    goto L_08A78EB0;
L_08A784F8:
    ctx.gpr[31] = (0x08A78500u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A7BD7C;
L_08A78500:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A78510;
      }
      goto L_08A78508;
    }
L_08A78508:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A78510;
L_08A78510:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A78544u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08A7B840;
L_08A78544:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6184), 0u);
    ctx.gpr[4] = (0u | 4300u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6188), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6192), ctx.gpr[4]);
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
L_08A7857C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A785A0;
      }
      goto L_08A78584;
    }
L_08A78584:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A785A0;
      }
      goto L_08A78590;
    }
L_08A78590:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    goto L_08A785A0;
L_08A785A0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A785C4;
      }
      goto L_08A785A8;
    }
L_08A785A8:
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A785C4;
      }
      goto L_08A785B4;
    }
L_08A785B4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    goto L_08A785C4;
L_08A785C4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A785E8;
      }
      goto L_08A785CC;
    }
L_08A785CC:
    ctx.gpr[6] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A785E8;
      }
      goto L_08A785D8;
    }
L_08A785D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    goto L_08A785E8;
L_08A785E8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78650;
      }
      goto L_08A785F0;
    }
L_08A785F0:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(7636)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(7632)));
    goto L_08A785FC;
L_08A785FC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A785FC;
      }
      goto L_08A7864C;
    }
L_08A7864C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    goto L_08A78650;
L_08A78650:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7867C;
      }
      goto L_08A78658;
    }
L_08A78658:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A78658;
      }
      goto L_08A78678;
    }
L_08A78678:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    goto L_08A7867C;
L_08A7867C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7869C;
      }
      goto L_08A78684;
    }
L_08A78684:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A78684;
      }
      goto L_08A78698;
    }
L_08A78698:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    goto L_08A7869C;
L_08A7869C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A786B0;
      }
      goto L_08A786A4;
    }
L_08A786A4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    goto L_08A786B0;
L_08A786B0:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08A786B8;
    }
    goto L_08A786B8;
L_08A786B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A786C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A786F4u);
    ctx.gpr[23] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 74u, 0x08AB0934u>(ctx, &aot_mem) && ctx.pc == 0x08A786F4u) goto L_08A786F4;
    return;
L_08A786F4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22680));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1820));
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(21312));
    goto L_08A7871C;
L_08A7871C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A7891C;
      }
      goto L_08A7872C;
    }
L_08A7872C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 4u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A78934;
    }
    goto L_08A7873C;
L_08A7873C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A787A4;
      }
      goto L_08A78748;
    }
L_08A78748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(40))))));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A78774;
    }
    goto L_08A7876C;
L_08A7876C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(40))))));
      if (branch_taken) {
          goto L_08A78774;
      }
      goto L_08A78774;
    }
L_08A78774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[20] << 7u);
    ctx.gpr[9] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    ctx.gpr[20] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    goto L_08A787A4;
L_08A787A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[5] = (0u | 4096u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A78930;
      }
      goto L_08A787C8;
    }
L_08A787C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A78930;
      }
      goto L_08A787DC;
    }
L_08A787DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
        goto L_08A788D8;
    }
    goto L_08A78800;
L_08A78800:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1822))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
        goto L_08A788BC;
    }
    goto L_08A78838;
L_08A78838:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1822), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A78888u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 47u, 0x08AB0544u>(ctx, &aot_mem) && ctx.pc == 0x08A78888u) goto L_08A78888;
    return;
L_08A78888:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1824), ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    goto L_08A788BC;
L_08A788BC:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    goto L_08A788D8;
L_08A788D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(109))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
        goto L_08A78904;
    }
    goto L_08A788F8;
L_08A788F8:
    ctx.gpr[31] = (0x08A78900u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 534u, 0x08A6E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08A78900u) goto L_08A78900;
    return;
L_08A78900:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    goto L_08A78904;
L_08A78904:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A787DC;
      }
      goto L_08A78914;
    }
L_08A78914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A78934;
      }
      goto L_08A7891C;
    }
L_08A7891C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A78934;
    }
    goto L_08A78928;
L_08A78928:
    ctx.gpr[31] = (0x08A78930u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 47u, 0x08AB0544u>(ctx, &aot_mem) && ctx.pc == 0x08A78930u) goto L_08A78930;
    return;
L_08A78930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A78934;
L_08A78934:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A7871C;
      }
      goto L_08A7894C;
    }
L_08A7894C:
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
L_08A7897C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08A789CC;
      }
      goto L_08A7898C;
    }
L_08A7898C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08A789A4;
L_08A789A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1824)));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08A789C0;
    }
    goto L_08A789B0;
L_08A789B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1822))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A789D4;
      }
      goto L_08A789BC;
    }
L_08A789BC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A789C0;
L_08A789C0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A789A4;
      }
      goto L_08A789CC;
    }
L_08A789CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A789D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A789DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A78AEC;
      }
      goto L_08A78A30;
    }
L_08A78A30:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22680));
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08A78A40;
L_08A78A40:
    ctx.gpr[31] = (0x08A78A48u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A7897C;
L_08A78A48:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A78B18;
      }
      goto L_08A78A54;
    }
L_08A78A54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[22] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1824), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1821), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1822), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1832), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08A78AD8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08A7B078;
L_08A78AD8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A78A40;
      }
      goto L_08A78AEC;
    }
L_08A78AEC:
    ctx.gpr[2] = (0u | 0u);
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
L_08A78B18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A78B5C;
      }
      goto L_08A78B20;
    }
L_08A78B20:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1824), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A78B20;
      }
      goto L_08A78B5C;
    }
L_08A78B5C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
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
L_08A78B90:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (0u | 22050u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[9] = (0u | 44100u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21312), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 36u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (0u | 544u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A78C2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 534u, 0x08A6E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08A78C2Cu) goto L_08A78C2C;
    return;
L_08A78C2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78C38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(63)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 2u);
        goto L_08A78C78;
    }
    goto L_08A78C70;
L_08A78C70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A78C7C;
      }
      goto L_08A78C78;
    }
L_08A78C78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A78C7C;
L_08A78C7C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (2216u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29680));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A78CA0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 473u, 0x08A77138u>(ctx, &aot_mem) && ctx.pc == 0x08A78CA0u) goto L_08A78CA0;
    return;
L_08A78CA0:
    ctx.gpr[31] = (0x08A78CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A78CA8u) goto L_08A78CA8;
    return;
L_08A78CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (0u | 44100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2048));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    ctx.gpr[31] = (0x08A78CD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A78CD4u) goto L_08A78CD4;
    return;
L_08A78CD4:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1796), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A78CF0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A78CF0u) goto L_08A78CF0;
    return;
L_08A78CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(22680), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1800), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A78D34u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1804), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A78D34u) goto L_08A78D34;
    return;
L_08A78D34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78D7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (153u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27008));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1816), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A78DB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4564u;
    return;
L_08A78DB8:
    ctx.gpr[31] = (0x08A78DC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1768)));
    ctx.pc = 0x08AB4684u;
    return;
L_08A78DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[31] = (0x08A78DCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4564u;
    return;
L_08A78DCC:
    ctx.gpr[31] = (0x08A78DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1772)));
    ctx.pc = 0x08AB4684u;
    return;
L_08A78DD4:
    ctx.gpr[31] = (0x08A78DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 96u, 0x08AB0AE8u>(ctx, &aot_mem) && ctx.pc == 0x08A78DDCu) goto L_08A78DDC;
    return;
L_08A78DDC:
    ctx.gpr[31] = (0x08A78DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 528u, 0x08AAF0E4u>(ctx, &aot_mem) && ctx.pc == 0x08A78DE4u) goto L_08A78DE4;
    return;
L_08A78DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[16] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
      if (branch_taken) {
          goto L_08A78DFC;
      }
      goto L_08A78DF4;
    }
L_08A78DF4:
    ctx.gpr[31] = (0x08A78DFCu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1776), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 396u, 0x08A76B44u>(ctx, &aot_mem) && ctx.pc == 0x08A78DFCu) goto L_08A78DFC;
    return;
L_08A78DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1796)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(361))))));
        goto L_08A78E24;
    }
    goto L_08A78E08;
L_08A78E08:
    ctx.gpr[31] = (0x08A78E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A78E10u) goto L_08A78E10;
    return;
L_08A78E10:
    ctx.gpr[31] = (0x08A78E18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1796)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78E18u) goto L_08A78E18;
    return;
L_08A78E18:
    ctx.gpr[31] = (0x08A78E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A78E20u) goto L_08A78E20;
    return;
L_08A78E20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(361))))));
    goto L_08A78E24;
L_08A78E24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78E40;
      }
      goto L_08A78E2C;
    }
L_08A78E2C:
    ctx.gpr[31] = (0x08A78E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A78E34u) goto L_08A78E34;
    return;
L_08A78E34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(361))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78E2C;
      }
      goto L_08A78E40;
    }
L_08A78E40:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E60:
    ctx.gpr[7] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A78E7C;
      }
      goto L_08A78E6C;
    }
L_08A78E6C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08A78E7C;
L_08A78E7C:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A78EA0;
      }
      goto L_08A78E88;
    }
L_08A78E88:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A78EA0;
L_08A78EA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78EB0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A78EEC;
      }
      goto L_08A78EE4;
    }
L_08A78EE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78EEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78EF4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_08A78F58;
      }
      goto L_08A78F28;
    }
L_08A78F28:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A78F3C;
L_08A78F3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A78F60;
      }
      goto L_08A78F48;
    }
L_08A78F48:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A78F3C;
      }
      goto L_08A78F58;
    }
L_08A78F58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78F60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78F68:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78F70:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A790C8;
      }
      goto L_08A78FE0;
    }
L_08A78FE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A79064;
      }
      goto L_08A78FF4;
    }
L_08A78FF4:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    goto L_08A78FFC;
L_08A78FFC:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(46)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A79044u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 516u, 0x08A77490u>(ctx, &aot_mem) && ctx.pc == 0x08A79044u) goto L_08A79044;
    return;
L_08A79044:
    ctx.gpr[31] = (0x08A7904Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    goto L_08A7A4A4;
L_08A7904C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A78FFC;
      }
      goto L_08A79064;
    }
L_08A79064:
    ctx.gpr[31] = (0x08A7906Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    goto L_08A79380;
L_08A7906C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A79078u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08A79508;
L_08A79078:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A79084u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08A795B0;
L_08A79084:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A79090u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A79684;
L_08A79090:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A790C8;
      }
      goto L_08A790A4;
    }
L_08A790A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(46)));
    ctx.gpr[31] = (0x08A790B4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 423u, 0x08A76C90u>(ctx, &aot_mem) && ctx.pc == 0x08A790B4u) goto L_08A790B4;
    return;
L_08A790B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A790A4;
      }
      goto L_08A790C8;
    }
L_08A790C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A790FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[9] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22680));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A79278;
      }
      goto L_08A79188;
    }
L_08A79188:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(95))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[9] = (16897u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1820));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A7926C;
      }
      goto L_08A79244;
    }
L_08A79244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A7926Cu);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 50u, 0x08AB0660u>(ctx, &aot_mem) && ctx.pc == 0x08A7926Cu) goto L_08A7926C;
    return;
L_08A7926C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79278:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22680));
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[9] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(21312));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] & 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
        goto L_08A79348;
    }
    goto L_08A792E8;
L_08A792E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
      if (branch_taken) {
          goto L_08A79370;
      }
      goto L_08A792F8;
    }
L_08A792F8:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1820));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A79338u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A79134;
L_08A79338:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79348:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A79370u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 442u, 0x08A76EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A79370u) goto L_08A79370;
    return;
L_08A79370:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] & 512u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(142)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
      if (branch_taken) {
          goto L_08A79484;
      }
      goto L_08A793D0;
    }
L_08A793D0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (0u | 44100u);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[11] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[11] = (0u | 16383u);
        goto L_08A793F8;
    }
    goto L_08A793F8;
L_08A793F8:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A794E4;
      }
      goto L_08A79408;
    }
L_08A79408:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22680));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1820));
    goto L_08A7941C;
L_08A7941C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[2] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_08A79468;
      }
      goto L_08A79440;
    }
L_08A79440:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A79464;
      }
      goto L_08A79458;
    }
L_08A79458:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[2] = (ctx.gpr[2] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A79464;
L_08A79464:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    goto L_08A79468;
L_08A79468:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7941C;
      }
      goto L_08A7947C;
    }
L_08A7947C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794E4;
      }
      goto L_08A79484;
    }
L_08A79484:
    ctx.gpr[6] = (ctx.gpr[11] << 15u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] >> 11u);
      if (branch_taken) {
          goto L_08A794E4;
      }
      goto L_08A794B8;
    }
L_08A794B8:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08A794BC;
L_08A794BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A794D0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 403u, 0x08A7EFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A794D0u) goto L_08A794D0;
    return;
L_08A794D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A794BC;
      }
      goto L_08A794E4;
    }
L_08A794E4:
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
L_08A79508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(468)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7958C;
      }
      goto L_08A79550;
    }
L_08A79550:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A7958C;
      }
      goto L_08A79564;
    }
L_08A79564:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79578u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 412u, 0x08A7F0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A79578u) goto L_08A79578;
    return;
L_08A79578:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A79564;
      }
      goto L_08A7958C;
    }
L_08A7958C:
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
L_08A795B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(21312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79664;
      }
      goto L_08A795F8;
    }
L_08A795F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(38)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(35)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A79664;
      }
      goto L_08A79638;
    }
L_08A79638:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08A7963C;
L_08A7963C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(46)));
    ctx.gpr[31] = (0x08A79650u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 390u, 0x08A7EEF4u>(ctx, &aot_mem) && ctx.pc == 0x08A79650u) goto L_08A79650;
    return;
L_08A79650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(35)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7963C;
      }
      goto L_08A79664;
    }
L_08A79664:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(468)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A79708;
      }
      goto L_08A796CC;
    }
L_08A796CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A79708;
      }
      goto L_08A796E0;
    }
L_08A796E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A796F4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 377u, 0x08A7EE14u>(ctx, &aot_mem) && ctx.pc == 0x08A796F4u) goto L_08A796F4;
    return;
L_08A796F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A796E0;
      }
      goto L_08A79708;
    }
L_08A79708:
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
L_08A79728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
        goto L_08A797C4;
    }
    goto L_08A7975C;
L_08A7975C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A797B4;
      }
      goto L_08A79788;
    }
L_08A79788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1820));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] >> 12u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A797B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A797C4:
    ctx.gpr[31] = (0x08A797CCu);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 373u, 0x08A7EDBCu>(ctx, &aot_mem) && ctx.pc == 0x08A797CCu) goto L_08A797CC;
    return;
L_08A797CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A797D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] & 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
      if (branch_taken) {
          goto L_08A79908;
      }
      goto L_08A79824;
    }
L_08A79824:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7994C;
      }
      goto L_08A79834;
    }
L_08A79834:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22680));
    goto L_08A79844;
L_08A79844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08A798EC;
      }
      goto L_08A79868;
    }
L_08A79868:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1822), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08A79898u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 47u, 0x08AB0544u>(ctx, &aot_mem) && ctx.pc == 0x08A79898u) goto L_08A79898;
    return;
L_08A79898:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1824), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A798ECu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 534u, 0x08A6E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08A798ECu) goto L_08A798EC;
    return;
L_08A798EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A79844;
      }
      goto L_08A79900;
    }
L_08A79900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7994C;
      }
      goto L_08A79908;
    }
L_08A79908:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7994C;
      }
      goto L_08A79918;
    }
L_08A79918:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    ctx.gpr[31] = (0x08A7992Cu);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 431u, 0x08A76D74u>(ctx, &aot_mem) && ctx.pc == 0x08A7992Cu) goto L_08A7992C;
    return;
L_08A7992C:
    ctx.gpr[31] = (0x08A79934u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 534u, 0x08A6E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08A79934u) goto L_08A79934;
    return;
L_08A79934:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A79918;
      }
      goto L_08A7994C;
    }
L_08A7994C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(22680));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A79B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12560));
    ctx.pc = 0x08AB4554u;
    return;
L_08A79B9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79BB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A79BC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    ctx.pc = 0x08AB45A4u;
    return;
L_08A79BC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A79BECu);
    // nop
    ctx.pc = 0x08AB45ACu;
    return;
L_08A79BEC:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
        goto L_08A79C24;
    }
    goto L_08A79C04;
L_08A79C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79C24:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A79C30u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_08A79C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A79C64u);
    // nop
    ctx.pc = 0x08AB45ACu;
    return;
L_08A79C64:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22680));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1788)));
      if (branch_taken) {
          goto L_08A79C8C;
      }
      goto L_08A79C78;
    }
L_08A79C78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A79C8C;
      }
      goto L_08A79C84;
    }
L_08A79C84:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1784), ctx.gpr[6]);
    goto L_08A79C8C;
L_08A79C8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79CA0;
      }
      goto L_08A79C94;
    }
L_08A79C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[31] = (0x08A79CA0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08A79CA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79CAC:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
        goto L_08A79CC8;
    }
    goto L_08A79CB4;
L_08A79CB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A79CD4;
      }
      goto L_08A79CBC;
    }
L_08A79CBC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79CC8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A79CD4;
      }
      goto L_08A79CD0;
    }
L_08A79CD0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A79CD4;
L_08A79CD4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A79E70;
      }
      goto L_08A79D1C;
    }
L_08A79D1C:
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(1820));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (0u | 32768u);
    ctx.gpr[17] = (2222u << 16u);
    goto L_08A79D2C;
L_08A79D2C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[22]);
    goto L_08A79D38;
L_08A79D38:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A79DA0;
      }
      goto L_08A79D48;
    }
L_08A79D48:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
        goto L_08A79D70;
    }
    goto L_08A79D50;
L_08A79D50:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A79D6Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 50u, 0x08AB0660u>(ctx, &aot_mem) && ctx.pc == 0x08A79D6Cu) goto L_08A79D6C;
    return;
L_08A79D6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    goto L_08A79D70;
L_08A79D70:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A79D94;
      }
      goto L_08A79D7C;
    }
L_08A79D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A79D94;
      }
      goto L_08A79D88;
    }
L_08A79D88:
    ctx.gpr[31] = (0x08A79D90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08A79134;
L_08A79D90:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A79D94;
L_08A79D94:
    ctx.gpr[31] = (0x08A79D9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 54u, 0x08AB06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A79D9Cu) goto L_08A79D9C;
    return;
L_08A79D9C:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08A79DA0;
L_08A79DA0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_08A79DD4;
    }
    goto L_08A79DC8;
L_08A79DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08A79DD4;
L_08A79DD4:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08A79DFC;
    }
    goto L_08A79DDC;
L_08A79DDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08A79DFC;
    }
    goto L_08A79DEC;
L_08A79DEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A79DFC;
L_08A79DFC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A79D38;
      }
      goto L_08A79E08;
    }
L_08A79E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1808)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08A79E1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1800)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 24u, 0x08AB034Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79E1Cu) goto L_08A79E1C;
    return;
L_08A79E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7692)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1808)));
        goto L_08A79E3C;
    }
    goto L_08A79E28;
L_08A79E28:
    ctx.gpr[31] = (0x08A79E30u);
    ctx.gpr[4] = (0u | 5500u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A79E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1808)));
      if (branch_taken) {
          goto L_08A79E5C;
      }
      goto L_08A79E38;
    }
L_08A79E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1808)));
    goto L_08A79E3C;
L_08A79E3C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A79E58u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A79E58u) goto L_08A79E58;
    return;
L_08A79E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1808)));
    goto L_08A79E5C;
L_08A79E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1816)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1808), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A79D2C;
      }
      goto L_08A79E6C;
    }
L_08A79E6C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A79E70;
L_08A79E70:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A79E80u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A79E80u) goto L_08A79E80;
    return;
L_08A79E80:
    ctx.gpr[31] = (0x08A79E88u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08A79E88:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79EBC:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22680));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(1020))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(1022))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(512));
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    ctx.gpr[9] = (ctx.gpr[8] << 1u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    { const bool signed_ok = ctx.execute_signed_add(8u, 8u, 10u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A79EECu, 0x010A4020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(9u, 9u, 10u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A79EF0u, 0x012A4820u); return; } }
    { const bool signed_ok = ctx.execute_signed_add_immediate(9u, 9u, -32);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A79EF4u, 0x2129FFE0u); return; } }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, -16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A79EF8u, 0x2108FFF0u); return; } }
    goto L_08A79EFC;
L_08A79EFC:
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    ctx.execute_vfpu_vx2i(2u, 64u, 2u, 3u);
    ctx.execute_vfpu_vx2i(4u, 4u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<4u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<35u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(35u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<34u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(16u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(34u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<33u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(15u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(33u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(15u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(32u, 4u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { const bool signed_ok = ctx.execute_signed_add_immediate(8u, 8u, -16);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A79F4Cu, 0x2108FFF0u); return; } }
    rt.unsupported(0x08A79F50u, 0xD03F8080u, "vfpu4 not lowered yet"); return;
L_08A79F74:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1816)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7A288;
      }
      goto L_08A7A074;
    }
L_08A7A074:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(21312));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[19] = (0u | 32768u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A7A0A4;
L_08A7A0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5432)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A7A0B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A0B0u) goto L_08A7A0B0;
    return;
L_08A7A0B0:
    ctx.gpr[31] = (0x08A7A0B8u);
    // nop
    goto L_08A786C0;
L_08A7A0B8:
    ctx.gpr[31] = (0x08A7A0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 314u, 0x08A81F50u>(ctx, &aot_mem) && ctx.pc == 0x08A7A0C0u) goto L_08A7A0C0;
    return;
L_08A7A0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(552)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
        goto L_08A7A0D8;
    }
    goto L_08A7A0CC;
L_08A7A0CC:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A7A0D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A0D4u) goto L_08A7A0D4;
    return;
L_08A7A0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    goto L_08A7A0D8;
L_08A7A0D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A114;
      }
      goto L_08A7A0E0;
    }
L_08A7A0E0:
    ctx.gpr[31] = (0x08A7A0E8u);
    ctx.gpr[4] = (0u | 86u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 342u, 0x08A71C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7A0E8u) goto L_08A7A0E8;
    return;
L_08A7A0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 44100u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A7A10Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 443u, 0x08A76F00u>(ctx, &aot_mem) && ctx.pc == 0x08A7A10Cu) goto L_08A7A10C;
    return;
L_08A7A10C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A11C;
      }
      goto L_08A7A114;
    }
L_08A7A114:
    ctx.gpr[31] = (0x08A7A11Cu);
    ctx.gpr[4] = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 342u, 0x08A71C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7A11Cu) goto L_08A7A11C;
    return;
L_08A7A11C:
    ctx.gpr[31] = (0x08A7A124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 34u, 0x08A7C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A124u) goto L_08A7A124;
    return;
L_08A7A124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7712)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(7712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22008), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A158;
      }
      goto L_08A7A150;
    }
L_08A7A150:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(7712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7A158;
L_08A7A158:
    ctx.gpr[31] = (0x08A7A160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 336u, 0x08A71BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A7A160u) goto L_08A7A160;
    return;
L_08A7A160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7684)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(556)));
        goto L_08A7A194;
    }
    goto L_08A7A16C;
L_08A7A16C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 22050u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(556)));
        goto L_08A7A194;
    }
    goto L_08A7A17C;
L_08A7A17C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A7A190;
      }
      goto L_08A7A188;
    }
L_08A7A188:
    ctx.gpr[31] = (0x08A7A190u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08A79EBC;
L_08A7A190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(556)));
    goto L_08A7A194;
L_08A7A194:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5436)));
        goto L_08A7A1A8;
    }
    goto L_08A7A19C;
L_08A7A19C:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A7A1A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A1A4u) goto L_08A7A1A4;
    return;
L_08A7A1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5436)));
    goto L_08A7A1A8;
L_08A7A1A8:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08A7A1B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A1B0u) goto L_08A7A1B0;
    return;
L_08A7A1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7684)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A264;
      }
      goto L_08A7A1BC;
    }
L_08A7A1BC:
    ctx.gpr[31] = (0x08A7A1C4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08AB417Cu;
    return;
L_08A7A1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7A1D8;
      }
      goto L_08A7A1D0;
    }
L_08A7A1D0:
    ctx.gpr[31] = (0x08A7A1D8u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A7A1D8u) goto L_08A7A1D8;
    return;
L_08A7A1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(7692)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
        goto L_08A7A1F4;
    }
    goto L_08A7A1E4;
L_08A7A1E4:
    ctx.gpr[31] = (0x08A7A1ECu);
    ctx.gpr[4] = (0u | 11000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7A1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A210;
      }
      goto L_08A7A1F4;
    }
L_08A7A1F4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A7A210u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A7A210u) goto L_08A7A210;
    return;
L_08A7A210:
    ctx.gpr[31] = (0x08A7A218u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB417Cu;
    return;
L_08A7A218:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7A26C;
      }
      goto L_08A7A248;
    }
L_08A7A248:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(150) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
        goto L_08A7A270;
    }
    goto L_08A7A254;
L_08A7A254:
    ctx.gpr[31] = (0x08A7A25Cu);
    ctx.gpr[4] = (0u | 8000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7A25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
      if (branch_taken) {
          goto L_08A7A270;
      }
      goto L_08A7A264;
    }
L_08A7A264:
    ctx.gpr[31] = (0x08A7A26Cu);
    ctx.gpr[4] = (0u | 11000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A7A26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
    goto L_08A7A270;
L_08A7A270:
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1792), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A7A0A4;
      }
      goto L_08A7A284;
    }
L_08A7A284:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7A288;
L_08A7A288:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A7A298u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x08A7A298u) goto L_08A7A298;
    return;
L_08A7A298:
    ctx.gpr[31] = (0x08A7A2A0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08A7A2A0:
    ctx.gpr[2] = (0u | 0u);
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
L_08A7A2D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7A338;
      }
      goto L_08A7A2F8;
    }
L_08A7A2F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 111 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7A31C;
      }
      goto L_08A7A304;
    }
L_08A7A304:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A7A354;
      }
      goto L_08A7A314;
    }
L_08A7A314:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(7680), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A7A3C4;
      }
      goto L_08A7A31C;
    }
L_08A7A31C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
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
L_08A7A338:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-8));
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
L_08A7A354:
    ctx.gpr[31] = (0x08A7A35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7A35Cu) goto L_08A7A35C;
    return;
L_08A7A35C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(7680), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1768)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A7A378u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4624u;
    return;
L_08A7A378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[31] = (0x08A7A384u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4624u;
    return;
L_08A7A384:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(7640));
    goto L_08A7A390;
L_08A7A390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A7A3A8;
    }
    goto L_08A7A39C;
L_08A7A39C:
    ctx.gpr[31] = (0x08A7A3A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4624u;
    return;
L_08A7A3A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A7A3A8;
L_08A7A3A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7A390;
      }
      goto L_08A7A3B4;
    }
L_08A7A3B4:
    ctx.gpr[31] = (0x08A7A3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7A3BCu) goto L_08A7A3BC;
    return;
L_08A7A3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A3C4;
      }
      goto L_08A7A3C4;
    }
L_08A7A3C4:
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
L_08A7A3E0:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7680)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A3EC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7640));
    goto L_08A7A3F8;
L_08A7A3F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7A418;
      }
      goto L_08A7A404;
    }
L_08A7A404:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7A3F8;
      }
      goto L_08A7A410;
    }
L_08A7A410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A418:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A420:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7640));
    goto L_08A7A42C;
L_08A7A42C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7A44C;
      }
      goto L_08A7A438;
    }
L_08A7A438:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7A42C;
      }
      goto L_08A7A444;
    }
L_08A7A444:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A44C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_08A7A490;
      }
      goto L_08A7A488;
    }
L_08A7A488:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A498;
      }
      goto L_08A7A490;
    }
L_08A7A490:
    ctx.gpr[31] = (0x08A7A498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 126u, 0x08A7512Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A498u) goto L_08A7A498;
    return;
L_08A7A498:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A4A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22680));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7A538;
      }
      goto L_08A7A4FC;
    }
L_08A7A4FC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22092)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A57C;
      }
      goto L_08A7A514;
    }
L_08A7A514:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A7A518;
L_08A7A518:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22092)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7A518;
      }
      goto L_08A7A530;
    }
L_08A7A530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A57C;
      }
      goto L_08A7A538;
    }
L_08A7A538:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22096)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7A570;
      }
      goto L_08A7A544;
    }
L_08A7A544:
    ctx.gpr[5] = (16181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 1268u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7A57C;
      }
      goto L_08A7A570;
    }
L_08A7A570:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A7A57Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A7B078;
L_08A7A57C:
    ctx.gpr[31] = (0x08A7A584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 126u, 0x08A7512Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A584u) goto L_08A7A584;
    return;
L_08A7A584:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21312));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[19] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22680));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7A610;
      }
      goto L_08A7A600;
    }
L_08A7A600:
    ctx.gpr[31] = (0x08A7A608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A79134;
L_08A7A608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A680;
      }
      goto L_08A7A610;
    }
L_08A7A610:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(95))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (15361u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 516u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(63)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08A7A648;
    }
    goto L_08A7A648;
L_08A7A648:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A680;
      }
      goto L_08A7A658;
    }
L_08A7A658:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A7A670u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 441u, 0x08A76E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A670u) goto L_08A7A670;
    return;
L_08A7A670:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7A658;
      }
      goto L_08A7A680;
    }
L_08A7A680:
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
L_08A7A6A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    ctx.gpr[31] = (0x08A7A6C4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 422u, 0x08A76C80u>(ctx, &aot_mem) && ctx.pc == 0x08A7A6C4u) goto L_08A7A6C4;
    return;
L_08A7A6C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(360))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(63)));
        goto L_08A7A724;
    }
    goto L_08A7A6D0;
L_08A7A6D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 19u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(204)));
    goto L_08A7A6E4;
L_08A7A6E4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08A7A6E4;
      }
      goto L_08A7A704;
    }
L_08A7A704:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08A7A724:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21312)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(62)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(46)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[14] = (16672u << 16u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[14]);
      if (branch_taken) {
          goto L_08A7A76C;
      }
      goto L_08A7A764;
    }
L_08A7A764:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(63)));
    goto L_08A7A76C;
L_08A7A76C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7A780;
      }
      goto L_08A7A778;
    }
L_08A7A778:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(63)));
    goto L_08A7A780;
L_08A7A780:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7A794;
      }
      goto L_08A7A788;
    }
L_08A7A788:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_08A7A794;
L_08A7A794:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7A7A8;
      }
      goto L_08A7A79C;
    }
L_08A7A79C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_08A7A7A8;
L_08A7A7A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7A7B8;
      }
      goto L_08A7A7B0;
    }
L_08A7A7B0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    goto L_08A7A7B8;
L_08A7A7B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_08A7A7C4;
      }
      goto L_08A7A7C0;
    }
L_08A7A7C0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A7A7C4;
L_08A7A7C4:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08A7A7E0;
      }
      goto L_08A7A7CC;
    }
L_08A7A7CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08A7A7E0;
      }
      goto L_08A7A7D8;
    }
L_08A7A7D8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 4u);
    goto L_08A7A7E0;
L_08A7A7E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7A7FC;
      }
      goto L_08A7A7E8;
    }
L_08A7A7E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7A7FC;
      }
      goto L_08A7A7F4;
    }
L_08A7A7F4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 2u);
    goto L_08A7A7FC;
L_08A7A7FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A7A818;
      }
      goto L_08A7A804;
    }
L_08A7A804:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A7A818;
      }
      goto L_08A7A810;
    }
L_08A7A810:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 6u);
    goto L_08A7A818;
L_08A7A818:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7A840;
      }
      goto L_08A7A820;
    }
L_08A7A820:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7A840;
      }
      goto L_08A7A82C;
    }
L_08A7A82C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[2]);
    goto L_08A7A840;
L_08A7A840:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(364), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(364))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7A860;
      }
      goto L_08A7A854;
    }
L_08A7A854:
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(364), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A7A85C;
L_08A7A85C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7A860;
L_08A7A860:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7A8C8;
      }
      goto L_08A7A86C;
    }
L_08A7A86C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(70)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A7A8BC;
    }
    goto L_08A7A878;
L_08A7A878:
    ctx.gpr[5] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A85C;
      }
      goto L_08A7A894;
    }
L_08A7A894:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A7A898;
L_08A7A898:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7A898;
      }
      goto L_08A7A8B0;
    }
L_08A7A8B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7A860;
      }
      goto L_08A7A8B8;
    }
L_08A7A8B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A7A8BC;
L_08A7A8BC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7A86C;
      }
      goto L_08A7A8C8;
    }
L_08A7A8C8:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(21308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7A8EC;
      }
      goto L_08A7A8E0;
    }
L_08A7A8E0:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(21308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7A8EC;
L_08A7A8EC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A8FC;
    }
L_08A7A8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A7A920;
      }
      goto L_08A7A904;
    }
L_08A7A904:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7A920;
      }
      goto L_08A7A918;
    }
L_08A7A918:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A7A920;
      }
      goto L_08A7A920;
    }
L_08A7A920:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(21308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16697u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49784u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22680));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1812), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
L_08A7A958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(22680));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1776), 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1768), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1772), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1796), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7A9FC;
      }
      goto L_08A7A9B4;
    }
L_08A7A9B4:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A7A9B8;
L_08A7A9B8:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(70)));
    ctx.gpr[8] = (ctx.gpr[8] & 4u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08A7A9F0;
    }
    goto L_08A7A9C8;
L_08A7A9C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7A9F0;
      }
      goto L_08A7A9D0;
    }
L_08A7A9D0:
    ctx.gpr[31] = (0x08A7A9D8u);
    // nop
    goto L_08A78C38;
L_08A7A9D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1776), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A7A9E8u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A7A9E8u) goto L_08A7A9E8;
    return;
L_08A7A9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1776)));
      if (branch_taken) {
          goto L_08A7A9FC;
      }
      goto L_08A7A9F0;
    }
L_08A7A9F0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7A9B8;
      }
      goto L_08A7A9FC;
    }
L_08A7A9FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1820));
      if (branch_taken) {
          goto L_08A7AA74;
      }
      goto L_08A7AA04;
    }
L_08A7AA04:
    ctx.gpr[31] = (0x08A7AA0Cu);
    ctx.gpr[21] = (0u | 3135u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA0Cu) goto L_08A7AA0C;
    return;
L_08A7AA0C:
    ctx.gpr[31] = (0x08A7AA14u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA14u) goto L_08A7AA14;
    return;
L_08A7AA14:
    ctx.gpr[31] = (0x08A7AA1Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1796), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA1Cu) goto L_08A7AA1C;
    return;
L_08A7AA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AA2Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA2Cu) goto L_08A7AA2C;
    return;
L_08A7AA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[21] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AA48u);
    ctx.gpr[5] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA48u) goto L_08A7AA48;
    return;
L_08A7AA48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22680), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AA60u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA60u) goto L_08A7AA60;
    return;
L_08A7AA60:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1024));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1804), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1820));
    goto L_08A7AA74;
L_08A7AA74:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AA80u);
    ctx.gpr[6] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA80u) goto L_08A7AA80;
    return;
L_08A7AA80:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A7AA88;
L_08A7AA88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1824), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A7AA88;
      }
      goto L_08A7AA9C;
    }
L_08A7AA9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A7AAA4;
L_08A7AAA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A7AAA4;
      }
      goto L_08A7AAB8;
    }
L_08A7AAB8:
    ctx.gpr[31] = (0x08A7AAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 484u, 0x08AAE5ACu>(ctx, &aot_mem) && ctx.pc == 0x08A7AAC0u) goto L_08A7AAC0;
    return;
L_08A7AAC0:
    ctx.gpr[31] = (0x08A7AAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 94u, 0x08AB0ACCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AAC8u) goto L_08A7AAC8;
    return;
L_08A7AAC8:
    ctx.gpr[31] = (0x08A7AAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 296u, 0x08A818D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7AAD0u) goto L_08A7AAD0;
    return;
L_08A7AAD0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A7AADCu);
    ctx.gpr[5] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08A7AADCu) goto L_08A7AADC;
    return;
L_08A7AADC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1792), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1808), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1816), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12548));
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24536));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7680)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x08A7AB14u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08AB45E4u;
    return;
L_08A7AB14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1768), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AB28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A7AB28:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12544));
    ctx.gpr[5] = (2216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25380));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7680)));
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AB4Cu);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08AB45E4u;
    return;
L_08A7AB4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1772), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A7AB60u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A7AB60:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[20]));
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
L_08A7AB8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21312));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(468)));
    ctx.gpr[10] = (ctx.gpr[6] << 7u);
    ctx.gpr[11] = (ctx.gpr[6] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (ctx.gpr[10] & 512u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A7AEBC;
      }
      goto L_08A7AC10;
    }
L_08A7AC10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(34)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AFB8;
      }
      goto L_08A7AC20;
    }
L_08A7AC20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    ctx.gpr[31] = (0x08A7AC2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7AC2Cu) goto L_08A7AC2C;
    return;
L_08A7AC2C:
    ctx.gpr[31] = (0x08A7AC34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08A789DC;
L_08A7AC34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7AC54;
      }
      goto L_08A7AC3C;
    }
L_08A7AC3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7AC90;
      }
      goto L_08A7AC4C;
    }
L_08A7AC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AE20;
      }
      goto L_08A7AC54;
    }
L_08A7AC54:
    ctx.gpr[31] = (0x08A7AC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7AC5Cu) goto L_08A7AC5C;
    return;
L_08A7AC5C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7AC90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22680));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1820));
    ctx.gpr[22] = (0u | 28u);
    ctx.gpr[30] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A7ACAC;
L_08A7ACAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7AD14;
      }
      goto L_08A7ACEC;
    }
L_08A7ACEC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] << 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A7AD30;
      }
      goto L_08A7AD14;
    }
L_08A7AD14:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[8] << 12u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    goto L_08A7AD30;
L_08A7AD30:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A7AD60u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 58u, 0x08AB0714u>(ctx, &aot_mem) && ctx.pc == 0x08A7AD60u) goto L_08A7AD60;
    return;
L_08A7AD60:
    ctx.gpr[31] = (0x08A7AD68u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    goto L_08A7A4A4;
L_08A7AD68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A7AD74u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A79288;
L_08A7AD74:
    ctx.gpr[31] = (0x08A7AD7Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 126u, 0x08A7512Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AD7Cu) goto L_08A7AD7C;
    return;
L_08A7AD7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A7ADB0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 62u, 0x08AB07BCu>(ctx, &aot_mem) && ctx.pc == 0x08A7ADB0u) goto L_08A7ADB0;
    return;
L_08A7ADB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A7ADE4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 66u, 0x08AB0828u>(ctx, &aot_mem) && ctx.pc == 0x08A7ADE4u) goto L_08A7ADE4;
    return;
L_08A7ADE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A7AE08u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 70u, 0x08AB0894u>(ctx, &aot_mem) && ctx.pc == 0x08A7AE08u) goto L_08A7AE08;
    return;
L_08A7AE08:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7ACAC;
      }
      goto L_08A7AE20;
    }
L_08A7AE20:
    ctx.gpr[31] = (0x08A7AE28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08A79380;
L_08A7AE28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7AEAC;
      }
      goto L_08A7AE3C;
    }
L_08A7AE3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22680));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    goto L_08A7AE48;
L_08A7AE48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A7AE68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 44u, 0x08AB0508u>(ctx, &aot_mem) && ctx.pc == 0x08A7AE68u) goto L_08A7AE68;
    return;
L_08A7AE68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1820), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7AE48;
      }
      goto L_08A7AEAC;
    }
L_08A7AEAC:
    ctx.gpr[31] = (0x08A7AEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7AEB4u) goto L_08A7AEB4;
    return;
L_08A7AEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AFB8;
      }
      goto L_08A7AEBC;
    }
L_08A7AEBC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A7AF54;
      }
      goto L_08A7AED0;
    }
L_08A7AED0:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08A7AED4;
L_08A7AED4:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(46)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(19)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (ctx.gpr[23] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[8] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    ctx.gpr[31] = (0x08A7AF34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 516u, 0x08A77490u>(ctx, &aot_mem) && ctx.pc == 0x08A7AF34u) goto L_08A7AF34;
    return;
L_08A7AF34:
    ctx.gpr[31] = (0x08A7AF3Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    goto L_08A7A4A4;
L_08A7AF3C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7AED4;
      }
      goto L_08A7AF54;
    }
L_08A7AF54:
    ctx.gpr[31] = (0x08A7AF5Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    goto L_08A79380;
L_08A7AF5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A7AF68u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A79508;
L_08A7AF68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A7AF74u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A795B0;
L_08A7AF74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[31] = (0x08A7AF80u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A79684;
L_08A7AF80:
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A7AFB8;
      }
      goto L_08A7AF94;
    }
L_08A7AF94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(46)));
    ctx.gpr[31] = (0x08A7AFA4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 423u, 0x08A76C90u>(ctx, &aot_mem) && ctx.pc == 0x08A7AFA4u) goto L_08A7AFA4;
    return;
L_08A7AFA4:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(35)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7AF94;
      }
      goto L_08A7AFB8;
    }
L_08A7AFB8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7AFEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (15158u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 2913u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08A7B054u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A7BBD4;
L_08A7B054:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A7B060u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A7BB0C;
L_08A7B060:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B078:
    ctx.gpr[7] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(63)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
      if (branch_taken) {
          goto L_08A7B0E4;
      }
      goto L_08A7B098;
    }
L_08A7B098:
    ctx.gpr[9] = (15232u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 32897u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(25272));
    goto L_08A7B0B0;
L_08A7B0B0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(63)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7B0B0;
      }
      goto L_08A7B0E4;
    }
L_08A7B0E4:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22096)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7B100;
      }
      goto L_08A7B0F8;
    }
L_08A7B0F8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7B100;
L_08A7B100:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7B118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B118u) goto L_08A7B118;
    return;
L_08A7B118:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A7B124u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25268)));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 277u, 0x08A7158Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B124u) goto L_08A7B124;
    return;
L_08A7B124:
    ctx.gpr[31] = (0x08A7B12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7B12Cu) goto L_08A7B12C;
    return;
L_08A7B12C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    ctx.gpr[31] = (0x08A7B17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 349u, 0x08A71CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B17Cu) goto L_08A7B17C;
    return;
L_08A7B17C:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    ctx.gpr[31] = (0x08A7B190u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 285u, 0x08A71650u>(ctx, &aot_mem) && ctx.pc == 0x08A7B190u) goto L_08A7B190;
    return;
L_08A7B190:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A7B19Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25268), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 351u, 0x08A71CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7B19Cu) goto L_08A7B19C;
    return;
L_08A7B19C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(25272));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22104));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7B1E0;
      }
      goto L_08A7B1C0;
    }
L_08A7B1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25268)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A7B1C8;
L_08A7B1C8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7B1C8;
      }
      goto L_08A7B1E0;
    }
L_08A7B1E0:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (15284u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] << 8u);
    goto L_08A7B204;
L_08A7B204:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A7B238;
      }
      goto L_08A7B224;
    }
L_08A7B224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(25272)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A7B43C;
      }
      goto L_08A7B238;
    }
L_08A7B238:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7B270;
      }
      goto L_08A7B248;
    }
L_08A7B248:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A7B24C;
L_08A7B24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7B24C;
      }
      goto L_08A7B26C;
    }
L_08A7B26C:
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A7B270;
L_08A7B270:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22104)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A7B33C;
      }
      goto L_08A7B284;
    }
L_08A7B284:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A7B2DC;
      }
      goto L_08A7B290;
    }
L_08A7B290:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A7B2A0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A7AFEC;
L_08A7B2A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(25272)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B43C;
      }
      goto L_08A7B2DC;
    }
L_08A7B2DC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A7B2F4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A7AFEC;
L_08A7B2F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(25272)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B43C;
      }
      goto L_08A7B33C;
    }
L_08A7B33C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7B3AC;
      }
      goto L_08A7B354;
    }
L_08A7B354:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[31] = (0x08A7B364u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A7AFEC;
L_08A7B364:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(25272)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B43C;
      }
      goto L_08A7B3AC;
    }
L_08A7B3AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A7B43C;
      }
      goto L_08A7B3B8;
    }
L_08A7B3B8:
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    goto L_08A7B3BC;
L_08A7B3BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
        goto L_08A7B428;
    }
    goto L_08A7B3D0;
L_08A7B3D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A7B424;
      }
      goto L_08A7B3E4;
    }
L_08A7B3E4:
    ctx.gpr[31] = (0x08A7B3ECu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A7AFEC;
L_08A7B3EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7B424;
L_08A7B424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(63)));
    goto L_08A7B428;
L_08A7B428:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7B3BC;
      }
      goto L_08A7B43C;
    }
L_08A7B43C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 8u);
      if (branch_taken) {
          goto L_08A7B204;
      }
      goto L_08A7B44C;
    }
L_08A7B44C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08A7B48C:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(22092)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[5] = (0u | 57344u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[4] = (0u | 8192u);
      if (branch_taken) {
          goto L_08A7B4C8;
      }
      goto L_08A7B4B0;
    }
L_08A7B4B0:
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22096), 0u);
    ctx.gpr[8] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7B5A0;
      }
      goto L_08A7B4C8;
    }
L_08A7B4C8:
    if (ctx.gpr[9] != ctx.gpr[7]) {
    ctx.gpr[8] = (0u | 4u);
        goto L_08A7B4FC;
    }
    goto L_08A7B4D0;
L_08A7B4D0:
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(22096), ctx.gpr[8]);
    ctx.gpr[8] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (17287u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22104));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7B5A0;
      }
      goto L_08A7B4FC;
    }
L_08A7B4FC:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 6u);
      if (branch_taken) {
          goto L_08A7B54C;
      }
      goto L_08A7B504;
    }
L_08A7B504:
    ctx.gpr[8] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22096), ctx.gpr[7]);
    ctx.gpr[8] = (17309u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (16948u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(22104));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (17159u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17249u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7B5A0;
      }
      goto L_08A7B54C;
    }
L_08A7B54C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B5A0;
      }
      goto L_08A7B554;
    }
L_08A7B554:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(22096), ctx.gpr[8]);
    ctx.gpr[8] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (16948u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22104));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (17159u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (17249u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (17309u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 32768u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7B5A0;
L_08A7B5A0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 49152u);
      if (branch_taken) {
          goto L_08A7B5BC;
      }
      goto L_08A7B5AC;
    }
L_08A7B5AC:
    ctx.gpr[8] = (0u | 16384u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(492), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(494), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A7B5C4;
      }
      goto L_08A7B5BC;
    }
L_08A7B5BC:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(492), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(494), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A7B5C4;
L_08A7B5C4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(140)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(504), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(138)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(506), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(508), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (0u | 40960u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (0u | 24576u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(520), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(522), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(528), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(530), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(534), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(536), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(540), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(542), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(546), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(548), static_cast<std::uint16_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(550), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B624:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (0u | 4096u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7784));
      if (branch_taken) {
          goto L_08A7B648;
      }
      goto L_08A7B638;
    }
L_08A7B638:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1200));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_08A7B638;
      }
      goto L_08A7B648;
    }
L_08A7B648:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1199 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(13981));
      if (branch_taken) {
          goto L_08A7B668;
      }
      goto L_08A7B654;
    }
L_08A7B654:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1199 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
      if (branch_taken) {
          goto L_08A7B654;
      }
      goto L_08A7B664;
    }
L_08A7B664:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(13981));
    goto L_08A7B668;
L_08A7B668:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < -255 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-255));
        goto L_08A7B680;
    }
    goto L_08A7B680;
L_08A7B680:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A7B6A4;
      }
      goto L_08A7B68C;
    }
L_08A7B68C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 9u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(138)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(138)));
        goto L_08A7B76C;
    }
    goto L_08A7B6F4;
L_08A7B6F4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(136))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(134))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08A7B730;
      }
      goto L_08A7B704;
    }
L_08A7B704:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
      if (branch_taken) {
          goto L_08A7B71C;
      }
      goto L_08A7B710;
    }
L_08A7B710:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A7B71C;
      }
      goto L_08A7B71C;
    }
L_08A7B71C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 6u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A7B730;
L_08A7B730:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B75C;
      }
      goto L_08A7B738;
    }
L_08A7B738:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 6u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    goto L_08A7B75C;
L_08A7B75C:
    ctx.gpr[31] = (0x08A7B764u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_08A7B624;
L_08A7B764:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(138)));
    goto L_08A7B76C;
L_08A7B76C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B790:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(35)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22096)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8040));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A7B81C;
      }
      goto L_08A7B7D4;
    }
L_08A7B7D4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21312));
    goto L_08A7B7E0;
L_08A7B7E0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(468)));
    ctx.gpr[11] = (ctx.gpr[9] << 7u);
    ctx.gpr[9] = (ctx.gpr[9] << 4u);
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[11] << 8u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(35)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7B7E0;
      }
      goto L_08A7B81C;
    }
L_08A7B81C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7B834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 463u, 0x08A72508u>(ctx, &aot_mem) && ctx.pc == 0x08A7B834u) goto L_08A7B834;
    return;
L_08A7B834:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B840:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7B87C;
      }
      goto L_08A7B85C;
    }
L_08A7B85C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7B85C;
      }
      goto L_08A7B87C;
    }
L_08A7B87C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7B89C;
      }
      goto L_08A7B888;
    }
L_08A7B888:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7B89C;
      }
      goto L_08A7B894;
    }
L_08A7B894:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B89C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B8C0;
      }
      goto L_08A7B8A4;
    }
L_08A7B8A4:
    ctx.gpr[4] = (0u | 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B8C0;
      }
      goto L_08A7B8B4;
    }
L_08A7B8B4:
    ctx.gpr[4] = (1u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B8C0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (128u << 16u);
      if (branch_taken) {
          goto L_08A7B8DC;
      }
      goto L_08A7B8C8;
    }
L_08A7B8C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (256u << 16u);
      if (branch_taken) {
          goto L_08A7B8DC;
      }
      goto L_08A7B8D8;
    }
L_08A7B8D8:
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    goto L_08A7B8DC;
L_08A7B8DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B8E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 252u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08A7B920;
      }
      goto L_08A7B90C;
    }
L_08A7B90C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A7B910;
L_08A7B910:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08A7B910;
    }
    goto L_08A7B920;
L_08A7B920:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A7B97C;
      }
      goto L_08A7B928;
    }
L_08A7B928:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 253u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B964;
      }
      goto L_08A7B93C;
    }
L_08A7B93C:
    ctx.gpr[5] = (0u | 254u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B964;
      }
      goto L_08A7B948;
    }
L_08A7B948:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B994;
      }
      goto L_08A7B95C;
    }
L_08A7B95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7B9B8;
      }
      goto L_08A7B964;
    }
L_08A7B964:
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
L_08A7B97C:
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
L_08A7B994:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A7B9A0u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08A7B840;
L_08A7B9A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A7B9B8;
L_08A7B9B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7B9E4;
      }
      goto L_08A7B9C8;
    }
L_08A7B9C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A7B9D8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A7B840;
L_08A7B9D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A7B9E4;
L_08A7B9E4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08A7BA04:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (14466u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1552u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(124)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7BA94;
      }
      goto L_08A7BA68;
    }
L_08A7BA68:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(107)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (15361u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 516u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7BA94;
L_08A7BA94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (17150u << 16u);
      if (branch_taken) {
          goto L_08A7BAC0;
      }
      goto L_08A7BA9C;
    }
L_08A7BA9C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<0u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7BAC0;
L_08A7BAC0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5992)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BAD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21312));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB0C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08A7BB40;
    }
    goto L_08A7BB28;
L_08A7BB28:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A7BB2C;
L_08A7BB2C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A7BB2C;
    }
    goto L_08A7BB3C;
L_08A7BB3C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A7BB40;
L_08A7BB40:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (15658u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (15030u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | 2913u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (14288u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 3329u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (13459u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 62078u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[7] = (12559u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[7] | 30408u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBD4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_08A7BC08;
    }
    goto L_08A7BBF0;
L_08A7BBF0:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A7BBF4;
L_08A7BBF4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A7BBF4;
    }
    goto L_08A7BC04;
L_08A7BC04:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_08A7BC08;
L_08A7BC08:
    ctx.gpr[4] = (15914u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (14672u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (15368u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34949u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 3329u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (13880u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 61213u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (13015u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[6] | 12843u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[7] = (12080u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[7] | 37393u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BC9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A7BCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BCACu) goto L_08A7BCAC;
    return;
L_08A7BCAC:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BCBC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8224));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BCD4:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(21312));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7BD60;
      }
      goto L_08A7BCFC;
    }
L_08A7BCFC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A7BD04;
L_08A7BD04:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(364))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD74;
      }
      goto L_08A7BD18;
    }
L_08A7BD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(468)));
    ctx.gpr[9] = (ctx.gpr[6] << 7u);
    ctx.gpr[10] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A7BD50;
      }
      goto L_08A7BD38;
    }
L_08A7BD38:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(109))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7BD50;
      }
      goto L_08A7BD44;
    }
L_08A7BD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A7BD58;
      }
      goto L_08A7BD50;
    }
L_08A7BD50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A7BD04;
      }
      goto L_08A7BD58;
    }
L_08A7BD58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BD60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A7BD74;
      }
      goto L_08A7BD68;
    }
L_08A7BD68:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BD74:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21312));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7BDE8;
      }
      goto L_08A7BDB4;
    }
L_08A7BDB4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(25296));
    goto L_08A7BDB8;
L_08A7BDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(772)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
        goto L_08A7BDD8;
    }
    goto L_08A7BDC4;
L_08A7BDC4:
    ctx.gpr[31] = (0x08A7BDCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 555u, 0x08A6E44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BDCCu) goto L_08A7BDCC;
    return;
L_08A7BDCC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A7BE08;
      }
      goto L_08A7BDD4;
    }
L_08A7BDD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    goto L_08A7BDD8;
L_08A7BDD8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A7BDB8;
      }
      goto L_08A7BDE8;
    }
L_08A7BDE8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08A7BE08:
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
L_08A7BE28:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A7BE80;
      }
      goto L_08A7BE3C;
    }
L_08A7BE3C:
    ctx.gpr[8] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(21312));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    goto L_08A7BE58;
L_08A7BE58:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08A7BE74;
    }
    goto L_08A7BE68;
L_08A7BE68:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A7BE74;
L_08A7BE74:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A7BE58;
      }
      goto L_08A7BE80;
    }
L_08A7BE80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BE88:
    ctx.gpr[2] = (ctx.gpr[4] << 5u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0157(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0157_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_157(Runtime &runtime) {
    runtime.register_generated_unit(157u, 0x08A78000u, 16384u, &recomp_unit_0157, &recomp_unit_0157_entry);
    runtime.register_function(0x08A78000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78008u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78010u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78038u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78044u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78050u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78060u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7807Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78088u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7809Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78104u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78128u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78174u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78180u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78194u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78204u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78218u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78234u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7823Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78258u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78264u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78274u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78300u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7830Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78314u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78330u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78350u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78358u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78364u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7836Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78374u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78400u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78410u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78420u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78428u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78448u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78458u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7847Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78498u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78500u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78508u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78510u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78544u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7857Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78584u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78590u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7864Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78650u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78658u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78678u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7867Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78684u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7869Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7871Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7872Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7873Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78748u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7876Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78774u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78800u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78838u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78888u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78900u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78904u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78914u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7891Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78928u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78930u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78934u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7894Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7897Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7898Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79044u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7904Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79064u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7906Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79078u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79084u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79090u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79134u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79244u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7926Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79278u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79288u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79338u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79348u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79370u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79380u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79408u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7941Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79440u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79458u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79464u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79468u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7947Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79484u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79508u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79550u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79564u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79578u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7958Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79638u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7963Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79650u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79664u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79684u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79708u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79728u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7975Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79788u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79844u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79868u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79898u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79900u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79908u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79918u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7992Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79934u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7994Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A028u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A10Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A114u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A11Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A124u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A150u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A158u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A160u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A16Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A190u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A194u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A19Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A210u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A218u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A248u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A254u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A25Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A264u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A26Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A270u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A284u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A288u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A298u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A304u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A314u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A31Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A338u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A35Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A378u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A384u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A390u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A39Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A404u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A410u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A418u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A420u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A42Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A438u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A444u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A44Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A454u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A488u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A490u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A498u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A518u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A530u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A538u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A544u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A570u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A57Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A584u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A594u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A600u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A608u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A610u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A648u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A658u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A670u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A680u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A724u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A764u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A76Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A778u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A780u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A788u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A794u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A79Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A804u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A820u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A82Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A840u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A854u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A85Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A860u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A86Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A878u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A898u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A904u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A918u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A920u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A958u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AADCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AED0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AED4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B054u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B060u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B078u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B098u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B100u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B108u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B118u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B124u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B12Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B138u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B190u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B19Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B204u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B224u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B238u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B248u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B24Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B26Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B270u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B284u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B290u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B33Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B364u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B424u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B428u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B43Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B44Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B48Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B504u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B54Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B624u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B638u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B648u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B654u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B664u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B668u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B680u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B68Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B710u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B71Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B730u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B738u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B75Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B764u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B76Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B790u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B81Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B840u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B85Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B87Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B888u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B89Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B90Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B910u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B920u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B928u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B93Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B948u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B95Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B964u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B97Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B994u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE88u, &recomp_unit_0157, "recomp_unit_0157");
}
} // namespace psprecomp

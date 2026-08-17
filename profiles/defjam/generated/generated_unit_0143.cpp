#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0143[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0,
    46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126,
    0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    148, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177,
    0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233,
    0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0,
    0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0,
    280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290,
    0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0,
    0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369,
    0, 370, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0,
    0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0,
    0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510,
    0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0,
    517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0,
    0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0,
    0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0,
    0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0,
    0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0,
    565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0,
    0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0,
    0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587,
    0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0,
    0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 602,
    0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0,
    0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612,
    0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0,
    0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0,
    634, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0,
    0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0,
    0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657,
    0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0,
    0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665,
    0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0,
    0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0,
    0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0,
    687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0,
    0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707,
    0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712,
    0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716,
    0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0,
    721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727,
};
void recomp_unit_0143_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A40000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0143[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A40000;
    case 2u: goto L_08A40008;
    case 3u: goto L_08A40014;
    case 4u: goto L_08A40028;
    case 5u: goto L_08A4005C;
    case 6u: goto L_08A40074;
    case 7u: goto L_08A4008C;
    case 8u: goto L_08A40094;
    case 9u: goto L_08A400AC;
    case 10u: goto L_08A400C0;
    case 11u: goto L_08A400C8;
    case 12u: goto L_08A400D4;
    case 13u: goto L_08A400EC;
    case 14u: goto L_08A40104;
    case 15u: goto L_08A4011C;
    case 16u: goto L_08A40130;
    case 17u: goto L_08A40144;
    case 18u: goto L_08A40158;
    case 19u: goto L_08A40168;
    case 20u: goto L_08A40180;
    case 21u: goto L_08A4019C;
    case 22u: goto L_08A401B0;
    case 23u: goto L_08A401BC;
    case 24u: goto L_08A401C8;
    case 25u: goto L_08A401E4;
    case 26u: goto L_08A401F4;
    case 27u: goto L_08A40220;
    case 28u: goto L_08A40240;
    case 29u: goto L_08A40254;
    case 30u: goto L_08A40264;
    case 31u: goto L_08A4026C;
    case 32u: goto L_08A4027C;
    case 33u: goto L_08A40294;
    case 34u: goto L_08A402A4;
    case 35u: goto L_08A402BC;
    case 36u: goto L_08A402D0;
    case 37u: goto L_08A402E0;
    case 38u: goto L_08A402F8;
    case 39u: goto L_08A40308;
    case 40u: goto L_08A40320;
    case 41u: goto L_08A40330;
    case 42u: goto L_08A40340;
    case 43u: goto L_08A40358;
    case 44u: goto L_08A40368;
    case 45u: goto L_08A40378;
    case 46u: goto L_08A40380;
    case 47u: goto L_08A4039C;
    case 48u: goto L_08A403AC;
    case 49u: goto L_08A403D8;
    case 50u: goto L_08A403F8;
    case 51u: goto L_08A40408;
    case 52u: goto L_08A40420;
    case 53u: goto L_08A40430;
    case 54u: goto L_08A40448;
    case 55u: goto L_08A40458;
    case 56u: goto L_08A40470;
    case 57u: goto L_08A40480;
    case 58u: goto L_08A40498;
    case 59u: goto L_08A404A8;
    case 60u: goto L_08A404C0;
    case 61u: goto L_08A404D0;
    case 62u: goto L_08A404E0;
    case 63u: goto L_08A404F4;
    case 64u: goto L_08A40508;
    case 65u: goto L_08A40518;
    case 66u: goto L_08A40528;
    case 67u: goto L_08A40540;
    case 68u: goto L_08A40550;
    case 69u: goto L_08A40564;
    case 70u: goto L_08A40578;
    case 71u: goto L_08A4058C;
    case 72u: goto L_08A405A0;
    case 73u: goto L_08A405B0;
    case 74u: goto L_08A405C0;
    case 75u: goto L_08A405D8;
    case 76u: goto L_08A405E8;
    case 77u: goto L_08A40600;
    case 78u: goto L_08A40610;
    case 79u: goto L_08A40620;
    case 80u: goto L_08A40638;
    case 81u: goto L_08A40648;
    case 82u: goto L_08A40660;
    case 83u: goto L_08A40670;
    case 84u: goto L_08A40688;
    case 85u: goto L_08A40698;
    case 86u: goto L_08A406B0;
    case 87u: goto L_08A406C0;
    case 88u: goto L_08A406D8;
    case 89u: goto L_08A406E8;
    case 90u: goto L_08A406F8;
    case 91u: goto L_08A40710;
    case 92u: goto L_08A40720;
    case 93u: goto L_08A40738;
    case 94u: goto L_08A40748;
    case 95u: goto L_08A40760;
    case 96u: goto L_08A40770;
    case 97u: goto L_08A40788;
    case 98u: goto L_08A4079C;
    case 99u: goto L_08A407AC;
    case 100u: goto L_08A407C4;
    case 101u: goto L_08A407D4;
    case 102u: goto L_08A407EC;
    case 103u: goto L_08A407FC;
    case 104u: goto L_08A40814;
    case 105u: goto L_08A40824;
    case 106u: goto L_08A4083C;
    case 107u: goto L_08A4084C;
    case 108u: goto L_08A40864;
    case 109u: goto L_08A40874;
    case 110u: goto L_08A4088C;
    case 111u: goto L_08A4089C;
    case 112u: goto L_08A408B4;
    case 113u: goto L_08A408C4;
    case 114u: goto L_08A408D4;
    case 115u: goto L_08A408E4;
    case 116u: goto L_08A40934;
    case 117u: goto L_08A40978;
    case 118u: goto L_08A40990;
    case 119u: goto L_08A409A0;
    case 120u: goto L_08A409AC;
    case 121u: goto L_08A409B4;
    case 122u: goto L_08A409C4;
    case 123u: goto L_08A409D4;
    case 124u: goto L_08A409DC;
    case 125u: goto L_08A409EC;
    case 126u: goto L_08A409FC;
    case 127u: goto L_08A40A0C;
    case 128u: goto L_08A40A14;
    case 129u: goto L_08A40A2C;
    case 130u: goto L_08A40A3C;
    case 131u: goto L_08A40A48;
    case 132u: goto L_08A40A74;
    case 133u: goto L_08A40A9C;
    case 134u: goto L_08A40AA8;
    case 135u: goto L_08A40AC8;
    case 136u: goto L_08A40ADC;
    case 137u: goto L_08A40AF0;
    case 138u: goto L_08A40B08;
    case 139u: goto L_08A40B1C;
    case 140u: goto L_08A40B30;
    case 141u: goto L_08A40B50;
    case 142u: goto L_08A40B78;
    case 143u: goto L_08A40B84;
    case 144u: goto L_08A40BA4;
    case 145u: goto L_08A40BB8;
    case 146u: goto L_08A40BD0;
    case 147u: goto L_08A40BF0;
    case 148u: goto L_08A40C00;
    case 149u: goto L_08A40C04;
    case 150u: goto L_08A40C1C;
    case 151u: goto L_08A40C38;
    case 152u: goto L_08A40C44;
    case 153u: goto L_08A40C64;
    case 154u: goto L_08A40C74;
    case 155u: goto L_08A40C88;
    case 156u: goto L_08A40CA0;
    case 157u: goto L_08A40CBC;
    case 158u: goto L_08A40CD0;
    case 159u: goto L_08A40CF8;
    case 160u: goto L_08A40D10;
    case 161u: goto L_08A40D24;
    case 162u: goto L_08A40D50;
    case 163u: goto L_08A40D64;
    case 164u: goto L_08A40D94;
    case 165u: goto L_08A40DB8;
    case 166u: goto L_08A40DCC;
    case 167u: goto L_08A40DE4;
    case 168u: goto L_08A40DF8;
    case 169u: goto L_08A40E1C;
    case 170u: goto L_08A40E58;
    case 171u: goto L_08A40E64;
    case 172u: goto L_08A40E8C;
    case 173u: goto L_08A40EA4;
    case 174u: goto L_08A40EB4;
    case 175u: goto L_08A40EC8;
    case 176u: goto L_08A40EEC;
    case 177u: goto L_08A40EFC;
    case 178u: goto L_08A40F0C;
    case 179u: goto L_08A40F1C;
    case 180u: goto L_08A40F7C;
    case 181u: goto L_08A40F9C;
    case 182u: goto L_08A40FB8;
    case 183u: goto L_08A40FCC;
    case 184u: goto L_08A40FD4;
    case 185u: goto L_08A40FE4;
    case 186u: goto L_08A40FF4;
    case 187u: goto L_08A41004;
    case 188u: goto L_08A41030;
    case 189u: goto L_08A41044;
    case 190u: goto L_08A41058;
    case 191u: goto L_08A4108C;
    case 192u: goto L_08A41098;
    case 193u: goto L_08A410B4;
    case 194u: goto L_08A410CC;
    case 195u: goto L_08A410D8;
    case 196u: goto L_08A410EC;
    case 197u: goto L_08A41108;
    case 198u: goto L_08A4111C;
    case 199u: goto L_08A41150;
    case 200u: goto L_08A41164;
    case 201u: goto L_08A41178;
    case 202u: goto L_08A4118C;
    case 203u: goto L_08A411A0;
    case 204u: goto L_08A411D4;
    case 205u: goto L_08A411E0;
    case 206u: goto L_08A411FC;
    case 207u: goto L_08A41210;
    case 208u: goto L_08A41224;
    case 209u: goto L_08A4123C;
    case 210u: goto L_08A41248;
    case 211u: goto L_08A41258;
    case 212u: goto L_08A41268;
    case 213u: goto L_08A41290;
    case 214u: goto L_08A412A4;
    case 215u: goto L_08A412B8;
    case 216u: goto L_08A412CC;
    case 217u: goto L_08A41300;
    case 218u: goto L_08A4131C;
    case 219u: goto L_08A41330;
    case 220u: goto L_08A4134C;
    case 221u: goto L_08A4135C;
    case 222u: goto L_08A41370;
    case 223u: goto L_08A41384;
    case 224u: goto L_08A413A8;
    case 225u: goto L_08A413B8;
    case 226u: goto L_08A413C8;
    case 227u: goto L_08A413D8;
    case 228u: goto L_08A413F4;
    case 229u: goto L_08A4142C;
    case 230u: goto L_08A41438;
    case 231u: goto L_08A41454;
    case 232u: goto L_08A41468;
    case 233u: goto L_08A4147C;
    case 234u: goto L_08A41488;
    case 235u: goto L_08A41494;
    case 236u: goto L_08A414EC;
    case 237u: goto L_08A41588;
    case 238u: goto L_08A41590;
    case 239u: goto L_08A415BC;
    case 240u: goto L_08A415C8;
    case 241u: goto L_08A415F8;
    case 242u: goto L_08A41630;
    case 243u: goto L_08A41654;
    case 244u: goto L_08A41668;
    case 245u: goto L_08A41678;
    case 246u: goto L_08A41690;
    case 247u: goto L_08A416A4;
    case 248u: goto L_08A416C0;
    case 249u: goto L_08A416D8;
    case 250u: goto L_08A416EC;
    case 251u: goto L_08A41704;
    case 252u: goto L_08A41710;
    case 253u: goto L_08A41728;
    case 254u: goto L_08A41730;
    case 255u: goto L_08A41748;
    case 256u: goto L_08A41754;
    case 257u: goto L_08A41760;
    case 258u: goto L_08A4176C;
    case 259u: goto L_08A41784;
    case 260u: goto L_08A41790;
    case 261u: goto L_08A417A4;
    case 262u: goto L_08A417BC;
    case 263u: goto L_08A417C8;
    case 264u: goto L_08A417DC;
    case 265u: goto L_08A417EC;
    case 266u: goto L_08A417F8;
    case 267u: goto L_08A4180C;
    case 268u: goto L_08A41818;
    case 269u: goto L_08A41820;
    case 270u: goto L_08A41830;
    case 271u: goto L_08A41838;
    case 272u: goto L_08A41860;
    case 273u: goto L_08A41874;
    case 274u: goto L_08A41898;
    case 275u: goto L_08A418A8;
    case 276u: goto L_08A418D0;
    case 277u: goto L_08A418DC;
    case 278u: goto L_08A418E8;
    case 279u: goto L_08A418F4;
    case 280u: goto L_08A41900;
    case 281u: goto L_08A4190C;
    case 282u: goto L_08A41918;
    case 283u: goto L_08A41924;
    case 284u: goto L_08A41934;
    case 285u: goto L_08A41940;
    case 286u: goto L_08A4194C;
    case 287u: goto L_08A41958;
    case 288u: goto L_08A41964;
    case 289u: goto L_08A41970;
    case 290u: goto L_08A4197C;
    case 291u: goto L_08A41988;
    case 292u: goto L_08A41994;
    case 293u: goto L_08A419A0;
    case 294u: goto L_08A419AC;
    case 295u: goto L_08A419B8;
    case 296u: goto L_08A419C4;
    case 297u: goto L_08A419D0;
    case 298u: goto L_08A419E8;
    case 299u: goto L_08A419F4;
    case 300u: goto L_08A41A18;
    case 301u: goto L_08A41A28;
    case 302u: goto L_08A41A38;
    case 303u: goto L_08A41A4C;
    case 304u: goto L_08A41A78;
    case 305u: goto L_08A41A88;
    case 306u: goto L_08A41AA8;
    case 307u: goto L_08A41AC4;
    case 308u: goto L_08A41AD8;
    case 309u: goto L_08A41B00;
    case 310u: goto L_08A41B28;
    case 311u: goto L_08A41B34;
    case 312u: goto L_08A41B50;
    case 313u: goto L_08A41B5C;
    case 314u: goto L_08A41B68;
    case 315u: goto L_08A41B78;
    case 316u: goto L_08A41B8C;
    case 317u: goto L_08A41BAC;
    case 318u: goto L_08A41BDC;
    case 319u: goto L_08A41BFC;
    case 320u: goto L_08A41C08;
    case 321u: goto L_08A41C14;
    case 322u: goto L_08A41C28;
    case 323u: goto L_08A41C44;
    case 324u: goto L_08A41C58;
    case 325u: goto L_08A41C78;
    case 326u: goto L_08A41C98;
    case 327u: goto L_08A41CA8;
    case 328u: goto L_08A41CBC;
    case 329u: goto L_08A41CEC;
    case 330u: goto L_08A41CFC;
    case 331u: goto L_08A41D30;
    case 332u: goto L_08A41D50;
    case 333u: goto L_08A41D7C;
    case 334u: goto L_08A41D9C;
    case 335u: goto L_08A41DBC;
    case 336u: goto L_08A41DC4;
    case 337u: goto L_08A41DD0;
    case 338u: goto L_08A41DE4;
    case 339u: goto L_08A41E00;
    case 340u: goto L_08A41E0C;
    case 341u: goto L_08A41E18;
    case 342u: goto L_08A41E2C;
    case 343u: goto L_08A41E48;
    case 344u: goto L_08A41E54;
    case 345u: goto L_08A41E68;
    case 346u: goto L_08A41EA4;
    case 347u: goto L_08A41EB4;
    case 348u: goto L_08A41ED4;
    case 349u: goto L_08A41EE4;
    case 350u: goto L_08A41EF8;
    case 351u: goto L_08A41F28;
    case 352u: goto L_08A41F48;
    case 353u: goto L_08A41F5C;
    case 354u: goto L_08A41F70;
    case 355u: goto L_08A41F88;
    case 356u: goto L_08A41F98;
    case 357u: goto L_08A41FB4;
    case 358u: goto L_08A41FC0;
    case 359u: goto L_08A41FD4;
    case 360u: goto L_08A41FE8;
    case 361u: goto L_08A41FF8;
    case 362u: goto L_08A4200C;
    case 363u: goto L_08A4201C;
    case 364u: goto L_08A42024;
    case 365u: goto L_08A42034;
    case 366u: goto L_08A42048;
    case 367u: goto L_08A42058;
    case 368u: goto L_08A4206C;
    case 369u: goto L_08A4207C;
    case 370u: goto L_08A42084;
    case 371u: goto L_08A4208C;
    case 372u: goto L_08A42098;
    case 373u: goto L_08A420B0;
    case 374u: goto L_08A420C0;
    case 375u: goto L_08A420DC;
    case 376u: goto L_08A420F0;
    case 377u: goto L_08A42114;
    case 378u: goto L_08A42124;
    case 379u: goto L_08A42140;
    case 380u: goto L_08A42150;
    case 381u: goto L_08A42164;
    case 382u: goto L_08A42194;
    case 383u: goto L_08A421A4;
    case 384u: goto L_08A421D8;
    case 385u: goto L_08A421F8;
    case 386u: goto L_08A4220C;
    case 387u: goto L_08A42228;
    case 388u: goto L_08A4223C;
    case 389u: goto L_08A42260;
    case 390u: goto L_08A4226C;
    case 391u: goto L_08A42274;
    case 392u: goto L_08A42284;
    case 393u: goto L_08A42294;
    case 394u: goto L_08A4229C;
    case 395u: goto L_08A422B0;
    case 396u: goto L_08A422C4;
    case 397u: goto L_08A422FC;
    case 398u: goto L_08A42308;
    case 399u: goto L_08A42320;
    case 400u: goto L_08A42338;
    case 401u: goto L_08A4234C;
    case 402u: goto L_08A42370;
    case 403u: goto L_08A4237C;
    case 404u: goto L_08A4239C;
    case 405u: goto L_08A423B8;
    case 406u: goto L_08A423E8;
    case 407u: goto L_08A423F0;
    case 408u: goto L_08A42438;
    case 409u: goto L_08A42458;
    case 410u: goto L_08A4246C;
    case 411u: goto L_08A4247C;
    case 412u: goto L_08A42490;
    case 413u: goto L_08A424B0;
    case 414u: goto L_08A424C0;
    case 415u: goto L_08A424C8;
    case 416u: goto L_08A424E4;
    case 417u: goto L_08A424EC;
    case 418u: goto L_08A42504;
    case 419u: goto L_08A42518;
    case 420u: goto L_08A42534;
    case 421u: goto L_08A42544;
    case 422u: goto L_08A42570;
    case 423u: goto L_08A4258C;
    case 424u: goto L_08A425B8;
    case 425u: goto L_08A425C4;
    case 426u: goto L_08A425D0;
    case 427u: goto L_08A425D8;
    case 428u: goto L_08A425E8;
    case 429u: goto L_08A425F8;
    case 430u: goto L_08A42600;
    case 431u: goto L_08A42620;
    case 432u: goto L_08A42630;
    case 433u: goto L_08A42638;
    case 434u: goto L_08A42650;
    case 435u: goto L_08A4265C;
    case 436u: goto L_08A42680;
    case 437u: goto L_08A42690;
    case 438u: goto L_08A426A4;
    case 439u: goto L_08A426B8;
    case 440u: goto L_08A426C0;
    case 441u: goto L_08A426E8;
    case 442u: goto L_08A426F4;
    case 443u: goto L_08A42714;
    case 444u: goto L_08A42728;
    case 445u: goto L_08A42738;
    case 446u: goto L_08A42740;
    case 447u: goto L_08A42758;
    case 448u: goto L_08A42768;
    case 449u: goto L_08A427A4;
    case 450u: goto L_08A427B8;
    case 451u: goto L_08A427C8;
    case 452u: goto L_08A427E4;
    case 453u: goto L_08A427F4;
    case 454u: goto L_08A42820;
    case 455u: goto L_08A4283C;
    case 456u: goto L_08A42868;
    case 457u: goto L_08A42884;
    case 458u: goto L_08A428A4;
    case 459u: goto L_08A428B4;
    case 460u: goto L_08A428BC;
    case 461u: goto L_08A428D4;
    case 462u: goto L_08A428E0;
    case 463u: goto L_08A42904;
    case 464u: goto L_08A42914;
    case 465u: goto L_08A42928;
    case 466u: goto L_08A4293C;
    case 467u: goto L_08A42944;
    case 468u: goto L_08A4296C;
    case 469u: goto L_08A42978;
    case 470u: goto L_08A42998;
    case 471u: goto L_08A429AC;
    case 472u: goto L_08A429BC;
    case 473u: goto L_08A429C4;
    case 474u: goto L_08A429DC;
    case 475u: goto L_08A429F0;
    case 476u: goto L_08A42A04;
    case 477u: goto L_08A42A2C;
    case 478u: goto L_08A42A48;
    case 479u: goto L_08A42A50;
    case 480u: goto L_08A42A74;
    case 481u: goto L_08A42A90;
    case 482u: goto L_08A42AA0;
    case 483u: goto L_08A42AB0;
    case 484u: goto L_08A42AC4;
    case 485u: goto L_08A42AF0;
    case 486u: goto L_08A42AF8;
    case 487u: goto L_08A42B0C;
    case 488u: goto L_08A42B24;
    case 489u: goto L_08A42B48;
    case 490u: goto L_08A42B54;
    case 491u: goto L_08A42B70;
    case 492u: goto L_08A42B80;
    case 493u: goto L_08A42BA4;
    case 494u: goto L_08A42BB0;
    case 495u: goto L_08A42BCC;
    case 496u: goto L_08A42BDC;
    case 497u: goto L_08A42BF4;
    case 498u: goto L_08A42C04;
    case 499u: goto L_08A42C14;
    case 500u: goto L_08A42C38;
    case 501u: goto L_08A42C44;
    case 502u: goto L_08A42C60;
    case 503u: goto L_08A42C70;
    case 504u: goto L_08A42C94;
    case 505u: goto L_08A42CA0;
    case 506u: goto L_08A42CBC;
    case 507u: goto L_08A42CCC;
    case 508u: goto L_08A42CE4;
    case 509u: goto L_08A42CF4;
    case 510u: goto L_08A42CFC;
    case 511u: goto L_08A42D14;
    case 512u: goto L_08A42D20;
    case 513u: goto L_08A42D34;
    case 514u: goto L_08A42D54;
    case 515u: goto L_08A42D64;
    case 516u: goto L_08A42D78;
    case 517u: goto L_08A42D80;
    case 518u: goto L_08A42D94;
    case 519u: goto L_08A42DAC;
    case 520u: goto L_08A42DC4;
    case 521u: goto L_08A42DD4;
    case 522u: goto L_08A42DE4;
    case 523u: goto L_08A42E08;
    case 524u: goto L_08A42E14;
    case 525u: goto L_08A42E30;
    case 526u: goto L_08A42E40;
    case 527u: goto L_08A42E64;
    case 528u: goto L_08A42E70;
    case 529u: goto L_08A42E8C;
    case 530u: goto L_08A42E9C;
    case 531u: goto L_08A42EB4;
    case 532u: goto L_08A42EC4;
    case 533u: goto L_08A42ECC;
    case 534u: goto L_08A42EE4;
    case 535u: goto L_08A42EF0;
    case 536u: goto L_08A42F04;
    case 537u: goto L_08A42F24;
    case 538u: goto L_08A42F34;
    case 539u: goto L_08A42F48;
    case 540u: goto L_08A42F50;
    case 541u: goto L_08A42F84;
    case 542u: goto L_08A42F90;
    case 543u: goto L_08A42FB0;
    case 544u: goto L_08A42FC4;
    case 545u: goto L_08A42FD0;
    case 546u: goto L_08A42FE0;
    case 547u: goto L_08A43020;
    case 548u: goto L_08A43040;
    case 549u: goto L_08A43054;
    case 550u: goto L_08A43064;
    case 551u: goto L_08A43078;
    case 552u: goto L_08A4308C;
    case 553u: goto L_08A430B8;
    case 554u: goto L_08A430C4;
    case 555u: goto L_08A430E0;
    case 556u: goto L_08A43104;
    case 557u: goto L_08A43118;
    case 558u: goto L_08A43128;
    case 559u: goto L_08A4315C;
    case 560u: goto L_08A43168;
    case 561u: goto L_08A43184;
    case 562u: goto L_08A43198;
    case 563u: goto L_08A431D0;
    case 564u: goto L_08A431F4;
    case 565u: goto L_08A43200;
    case 566u: goto L_08A43220;
    case 567u: goto L_08A43238;
    case 568u: goto L_08A43254;
    case 569u: goto L_08A43274;
    case 570u: goto L_08A43288;
    case 571u: goto L_08A432AC;
    case 572u: goto L_08A432B8;
    case 573u: goto L_08A432C4;
    case 574u: goto L_08A432D4;
    case 575u: goto L_08A432F0;
    case 576u: goto L_08A4330C;
    case 577u: goto L_08A43330;
    case 578u: goto L_08A43344;
    case 579u: goto L_08A43360;
    case 580u: goto L_08A43370;
    case 581u: goto L_08A43384;
    case 582u: goto L_08A43398;
    case 583u: goto L_08A433B0;
    case 584u: goto L_08A433BC;
    case 585u: goto L_08A433D0;
    case 586u: goto L_08A433E8;
    case 587u: goto L_08A433FC;
    case 588u: goto L_08A4340C;
    case 589u: goto L_08A43418;
    case 590u: goto L_08A4342C;
    case 591u: goto L_08A43440;
    case 592u: goto L_08A43460;
    case 593u: goto L_08A43474;
    case 594u: goto L_08A43484;
    case 595u: goto L_08A4348C;
    case 596u: goto L_08A4349C;
    case 597u: goto L_08A434B0;
    case 598u: goto L_08A434C4;
    case 599u: goto L_08A434D0;
    case 600u: goto L_08A434DC;
    case 601u: goto L_08A434F0;
    case 602u: goto L_08A434FC;
    case 603u: goto L_08A43508;
    case 604u: goto L_08A4351C;
    case 605u: goto L_08A43538;
    case 606u: goto L_08A4354C;
    case 607u: goto L_08A43564;
    case 608u: goto L_08A43578;
    case 609u: goto L_08A43598;
    case 610u: goto L_08A435B4;
    case 611u: goto L_08A435C8;
    case 612u: goto L_08A435FC;
    case 613u: goto L_08A43608;
    case 614u: goto L_08A43624;
    case 615u: goto L_08A4363C;
    case 616u: goto L_08A43648;
    case 617u: goto L_08A4365C;
    case 618u: goto L_08A4366C;
    case 619u: goto L_08A43674;
    case 620u: goto L_08A43684;
    case 621u: goto L_08A43694;
    case 622u: goto L_08A436C8;
    case 623u: goto L_08A436D4;
    case 624u: goto L_08A436F0;
    case 625u: goto L_08A43708;
    case 626u: goto L_08A43718;
    case 627u: goto L_08A43728;
    case 628u: goto L_08A43730;
    case 629u: goto L_08A43740;
    case 630u: goto L_08A43748;
    case 631u: goto L_08A43758;
    case 632u: goto L_08A43768;
    case 633u: goto L_08A43778;
    case 634u: goto L_08A43780;
    case 635u: goto L_08A43790;
    case 636u: goto L_08A437A4;
    case 637u: goto L_08A437B4;
    case 638u: goto L_08A437BC;
    case 639u: goto L_08A437CC;
    case 640u: goto L_08A437DC;
    case 641u: goto L_08A437E8;
    case 642u: goto L_08A437F4;
    case 643u: goto L_08A43804;
    case 644u: goto L_08A43814;
    case 645u: goto L_08A43828;
    case 646u: goto L_08A4383C;
    case 647u: goto L_08A4384C;
    case 648u: goto L_08A43854;
    case 649u: goto L_08A43864;
    case 650u: goto L_08A43874;
    case 651u: goto L_08A43888;
    case 652u: goto L_08A43898;
    case 653u: goto L_08A438A0;
    case 654u: goto L_08A438B0;
    case 655u: goto L_08A438C0;
    case 656u: goto L_08A438D0;
    case 657u: goto L_08A438FC;
    case 658u: goto L_08A4391C;
    case 659u: goto L_08A43940;
    case 660u: goto L_08A43960;
    case 661u: goto L_08A43978;
    case 662u: goto L_08A43988;
    case 663u: goto L_08A439B0;
    case 664u: goto L_08A439C8;
    case 665u: goto L_08A439FC;
    case 666u: goto L_08A43A0C;
    case 667u: goto L_08A43A30;
    case 668u: goto L_08A43A58;
    case 669u: goto L_08A43A64;
    case 670u: goto L_08A43A98;
    case 671u: goto L_08A43AAC;
    case 672u: goto L_08A43AB8;
    case 673u: goto L_08A43AD4;
    case 674u: goto L_08A43AEC;
    case 675u: goto L_08A43B04;
    case 676u: goto L_08A43B28;
    case 677u: goto L_08A43B34;
    case 678u: goto L_08A43B54;
    case 679u: goto L_08A43B68;
    case 680u: goto L_08A43B78;
    case 681u: goto L_08A43B8C;
    case 682u: goto L_08A43B94;
    case 683u: goto L_08A43BAC;
    case 684u: goto L_08A43BBC;
    case 685u: goto L_08A43BE0;
    case 686u: goto L_08A43BEC;
    case 687u: goto L_08A43C00;
    case 688u: goto L_08A43C1C;
    case 689u: goto L_08A43C30;
    case 690u: goto L_08A43C38;
    case 691u: goto L_08A43C4C;
    case 692u: goto L_08A43C70;
    case 693u: goto L_08A43C7C;
    case 694u: goto L_08A43CBC;
    case 695u: goto L_08A43CC4;
    case 696u: goto L_08A43CD8;
    case 697u: goto L_08A43CFC;
    case 698u: goto L_08A43D08;
    case 699u: goto L_08A43D48;
    case 700u: goto L_08A43D6C;
    case 701u: goto L_08A43D84;
    case 702u: goto L_08A43D94;
    case 703u: goto L_08A43DAC;
    case 704u: goto L_08A43DB4;
    case 705u: goto L_08A43DC8;
    case 706u: goto L_08A43DF0;
    case 707u: goto L_08A43DFC;
    case 708u: goto L_08A43E1C;
    case 709u: goto L_08A43E30;
    case 710u: goto L_08A43E54;
    case 711u: goto L_08A43E68;
    case 712u: goto L_08A43E7C;
    case 713u: goto L_08A43E90;
    case 714u: goto L_08A43EB0;
    case 715u: goto L_08A43ED0;
    case 716u: goto L_08A43EFC;
    case 717u: goto L_08A43F08;
    case 718u: goto L_08A43F1C;
    case 719u: goto L_08A43F30;
    case 720u: goto L_08A43F64;
    case 721u: goto L_08A43F80;
    case 722u: goto L_08A43F94;
    case 723u: goto L_08A43FA8;
    case 724u: goto L_08A43FBC;
    case 725u: goto L_08A43FD4;
    case 726u: goto L_08A43FEC;
    case 727u: goto L_08A43FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A40000:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40008;
L_08A40008:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A40014;
    }
L_08A40014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5608)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40074;
      }
      goto L_08A40028;
    }
L_08A40028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5612)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A400EC;
      }
      goto L_08A4005C;
    }
L_08A4005C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5608)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5608), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A400EC;
      }
      goto L_08A40074;
    }
L_08A40074:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40094;
      }
      goto L_08A4008C;
    }
L_08A4008C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40094;
L_08A40094:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A400C0;
      }
      goto L_08A400AC;
    }
L_08A400AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A400C8;
      }
      goto L_08A400C0;
    }
L_08A400C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A400C8;
L_08A400C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A400EC;
      }
      goto L_08A400D4;
    }
L_08A400D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5608)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5608), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A400EC;
L_08A400EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5608)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40180;
      }
      goto L_08A40104;
    }
L_08A40104:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40180;
      }
      goto L_08A4011C;
    }
L_08A4011C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40144;
      }
      goto L_08A40130;
    }
L_08A40130:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40168;
      }
      goto L_08A40144;
    }
L_08A40144:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40168;
      }
      goto L_08A40158;
    }
L_08A40158:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40168;
L_08A40168:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    goto L_08A40180;
L_08A40180:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A401B0;
      }
      goto L_08A4019C;
    }
L_08A4019C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5608)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401BC;
      }
      goto L_08A401B0;
    }
L_08A401B0:
    ctx.gpr[2] = (0u | 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A401BC:
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A401C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A401E4;
    }
L_08A401E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A401F4;
    }
L_08A401F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40220;
    }
L_08A40220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4026C;
      }
      goto L_08A40254;
    }
L_08A40254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40264;
    }
L_08A40264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4027C;
      }
      goto L_08A4026C;
    }
L_08A4026C:
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A4027C;
    }
L_08A4027C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40294;
    }
L_08A40294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A402A4;
    }
L_08A402A4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A402BC;
    }
L_08A402BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A402D0;
    }
L_08A402D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A402E0;
    }
L_08A402E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A402F8;
    }
L_08A402F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40308;
    }
L_08A40308:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40320;
    }
L_08A40320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40340;
      }
      goto L_08A40330;
    }
L_08A40330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 81u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40340;
    }
L_08A40340:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40358;
    }
L_08A40358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40378;
      }
      goto L_08A40368;
    }
L_08A40368:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40378;
L_08A40378:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A4039C;
    }
L_08A4039C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A403AC;
    }
L_08A403AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A403D8;
    }
L_08A403D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23288)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A403F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 73u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40408;
    }
L_08A40408:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40420;
    }
L_08A40420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 74u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40430;
    }
L_08A40430:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40448;
    }
L_08A40448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 76u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40458;
    }
L_08A40458:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40470;
    }
L_08A40470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40480;
    }
L_08A40480:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40498;
    }
L_08A40498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A404A8;
    }
L_08A404A8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A404C0;
    }
L_08A404C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40518;
      }
      goto L_08A404D0;
    }
L_08A404D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A404F4;
      }
      goto L_08A404E0;
    }
L_08A404E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40508;
      }
      goto L_08A404F4;
    }
L_08A404F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40518;
      }
      goto L_08A40508;
    }
L_08A40508:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40518;
L_08A40518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40528;
    }
L_08A40528:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40540;
    }
L_08A40540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A405B0;
      }
      goto L_08A40550;
    }
L_08A40550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40578;
      }
      goto L_08A40564;
    }
L_08A40564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A405A0;
      }
      goto L_08A40578;
    }
L_08A40578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A405B0;
      }
      goto L_08A4058C;
    }
L_08A4058C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 38 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A405B0;
      }
      goto L_08A405A0;
    }
L_08A405A0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A405B0;
L_08A405B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A405C0;
    }
L_08A405C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A405D8;
    }
L_08A405D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A405E8;
    }
L_08A405E8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40600;
    }
L_08A40600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40620;
      }
      goto L_08A40610;
    }
L_08A40610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40620;
    }
L_08A40620:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40638;
    }
L_08A40638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40648;
    }
L_08A40648:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40660;
    }
L_08A40660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40670;
    }
L_08A40670:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40688;
    }
L_08A40688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40698;
    }
L_08A40698:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A406B0;
    }
L_08A406B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 85u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A406C0;
    }
L_08A406C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A406D8;
    }
L_08A406D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A406F8;
      }
      goto L_08A406E8;
    }
L_08A406E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A406F8;
    }
L_08A406F8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40710;
    }
L_08A40710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40720;
    }
L_08A40720:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40738;
    }
L_08A40738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40748;
    }
L_08A40748:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40760;
    }
L_08A40760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40770;
    }
L_08A40770:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40788;
    }
L_08A40788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A4079C;
    }
L_08A4079C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 94 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A407AC;
    }
L_08A407AC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A407C4;
    }
L_08A407C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 110u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A407D4;
    }
L_08A407D4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A407EC;
    }
L_08A407EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A407FC;
    }
L_08A407FC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40814;
    }
L_08A40814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40824;
    }
L_08A40824:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A4083C;
    }
L_08A4083C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 105u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A4084C;
    }
L_08A4084C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40864;
    }
L_08A40864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A40874;
    }
L_08A40874:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A4088C;
    }
L_08A4088C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A4089C;
    }
L_08A4089C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A408B4;
    }
L_08A408B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408D4;
      }
      goto L_08A408C4;
    }
L_08A408C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 81u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A408E4;
      }
      goto L_08A408D4;
    }
L_08A408D4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10868)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10868), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A408E4;
L_08A408E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A40978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A40978u) goto L_08A40978;
    return;
L_08A40978:
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A40990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A40990u) goto L_08A40990;
    return;
L_08A40990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A409B4;
      }
      goto L_08A409A0;
    }
L_08A409A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A40C04;
      }
      goto L_08A409AC;
    }
L_08A409AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A409DC;
      }
      goto L_08A409B4;
    }
L_08A409B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A74;
      }
      goto L_08A409C4;
    }
L_08A409C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B50;
      }
      goto L_08A409D4;
    }
L_08A409D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40C04;
      }
      goto L_08A409DC;
    }
L_08A409DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A409ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A409ECu) goto L_08A409EC;
    return;
L_08A409EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A0C;
      }
      goto L_08A409FC;
    }
L_08A409FC:
    ctx.gpr[4] = (0u | 10492u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A14;
      }
      goto L_08A40A0C;
    }
L_08A40A0C:
    ctx.gpr[4] = (0u | 10490u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A40A14;
L_08A40A14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A40A2Cu) goto L_08A40A2C;
    return;
L_08A40A2C:
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A40A3Cu) goto L_08A40A3C;
    return;
L_08A40A3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40A48u);
    // nop
    goto L_08A40380;
L_08A40A48:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40C04;
      }
      goto L_08A40A74;
    }
L_08A40A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40AA8;
      }
      goto L_08A40A9C;
    }
L_08A40A9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40AA8;
L_08A40AA8:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40ADC;
      }
      goto L_08A40AC8;
    }
L_08A40AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40C04;
      }
      goto L_08A40ADC;
    }
L_08A40ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B1C;
      }
      goto L_08A40AF0;
    }
L_08A40AF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10496u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A40B08u) goto L_08A40B08;
    return;
L_08A40B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40C04;
      }
      goto L_08A40B1C;
    }
L_08A40B1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A40B30u) goto L_08A40B30;
    return;
L_08A40B30:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40B84;
      }
      goto L_08A40B78;
    }
L_08A40B78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40B84;
L_08A40B84:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40BB8;
      }
      goto L_08A40BA4;
    }
L_08A40BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40C04;
      }
      goto L_08A40BB8;
    }
L_08A40BB8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A40BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A40BD0u) goto L_08A40BD0;
    return;
L_08A40BD0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 10464u);
    ctx.gpr[16] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A40BF0u) goto L_08A40BF0;
    return;
L_08A40BF0:
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A40C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C00u) goto L_08A40C00;
    return;
L_08A40C00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_08A40C04;
L_08A40C04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A40C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 209u, 0x08A2F274u>(ctx, &aot_mem) && ctx.pc == 0x08A40C38u) goto L_08A40C38;
    return;
L_08A40C38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40C44;
    }
L_08A40C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08A40C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C64u) goto L_08A40C64;
    return;
L_08A40C64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A40C88;
      }
      goto L_08A40C74;
    }
L_08A40C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40C88;
L_08A40C88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40CA0;
    }
L_08A40CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40CBC;
    }
L_08A40CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40D10;
      }
      goto L_08A40CD0;
    }
L_08A40CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40CF8;
    }
L_08A40CF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4268), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40D10;
    }
L_08A40D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40EB4;
      }
      goto L_08A40D24;
    }
L_08A40D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1456));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4048)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A40D64;
      }
      goto L_08A40D50;
    }
L_08A40D50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40D64;
L_08A40D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DE4;
      }
      goto L_08A40D94;
    }
L_08A40D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40DE4;
      }
      goto L_08A40DB8;
    }
L_08A40DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DE4;
      }
      goto L_08A40DCC;
    }
L_08A40DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4268), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40DE4;
L_08A40DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40EB4;
      }
      goto L_08A40DF8;
    }
L_08A40DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40EB4;
      }
      goto L_08A40E1C;
    }
L_08A40E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4268), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40E64;
      }
      goto L_08A40E58;
    }
L_08A40E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A40E64;
L_08A40E64:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40EB4;
      }
      goto L_08A40E8C;
    }
L_08A40E8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40EB4;
      }
      goto L_08A40EA4;
    }
L_08A40EA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4268), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A40EB4;
L_08A40EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4268)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40EC8;
    }
L_08A40EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40F0C;
      }
      goto L_08A40EEC;
    }
L_08A40EEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A40EFCu) goto L_08A40EFC;
    return;
L_08A40EFC:
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A40F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 466u, 0x08A4E054u>(ctx, &aot_mem) && ctx.pc == 0x08A40F0Cu) goto L_08A40F0C;
    return;
L_08A40F0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40F1C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1888)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1884), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40FF4;
      }
      goto L_08A40F9C;
    }
L_08A40F9C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40FD4;
      }
      goto L_08A40FB8;
    }
L_08A40FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40FD4;
      }
      goto L_08A40FCC;
    }
L_08A40FCC:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A40FD4;
L_08A40FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A40FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A40FE4u) goto L_08A40FE4;
    return;
L_08A40FE4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40FF4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41108;
      }
      goto L_08A41030;
    }
L_08A41030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 48u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41108;
      }
      goto L_08A41044;
    }
L_08A41044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41108;
      }
      goto L_08A41058;
    }
L_08A41058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41098;
      }
      goto L_08A4108C;
    }
L_08A4108C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A41098;
L_08A41098:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41108;
      }
      goto L_08A410B4;
    }
L_08A410B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (16776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A410CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 490u, 0x08A4E3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A410CCu) goto L_08A410CC;
    return;
L_08A410CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41108;
      }
      goto L_08A410D8;
    }
L_08A410D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A410ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A410ECu) goto L_08A410EC;
    return;
L_08A410EC:
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41108:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4111C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41258;
      }
      goto L_08A41150;
    }
L_08A41150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41258;
      }
      goto L_08A41164;
    }
L_08A41164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 56u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41258;
      }
      goto L_08A41178;
    }
L_08A41178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 48u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A411A0;
      }
      goto L_08A4118C;
    }
L_08A4118C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41258;
      }
      goto L_08A411A0;
    }
L_08A411A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A411E0;
      }
      goto L_08A411D4;
    }
L_08A411D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A411E0;
L_08A411E0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41258;
      }
      goto L_08A411FC;
    }
L_08A411FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41258;
      }
      goto L_08A41210;
    }
L_08A41210:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41248;
      }
      goto L_08A41224;
    }
L_08A41224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A4123Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 490u, 0x08A4E3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A4123Cu) goto L_08A4123C;
    return;
L_08A4123C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A41248;
L_08A41248:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41258:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41370;
      }
      goto L_08A41290;
    }
L_08A41290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4318)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41370;
      }
      goto L_08A412A4;
    }
L_08A412A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41370;
      }
      goto L_08A412B8;
    }
L_08A412B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4504)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4508)));
    ctx.gpr[31] = (0x08A412CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08A412CCu) goto L_08A412CC;
    return;
L_08A412CC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 533u, 0x08A53494u>(ctx, &aot_mem) && ctx.pc == 0x08A41300u) goto L_08A41300;
    return;
L_08A41300:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3264), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4134C;
      }
      goto L_08A4131C;
    }
L_08A4131C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A41330u) goto L_08A41330;
    return;
L_08A41330:
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4134C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x08A4135Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A4135Cu) goto L_08A4135C;
    return;
L_08A4135C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41370:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A413C8;
      }
      goto L_08A413A8;
    }
L_08A413A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 90u);
    ctx.gpr[31] = (0x08A413B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A413B8u) goto L_08A413B8;
    return;
L_08A413B8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A413C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A413D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41488;
      }
      goto L_08A413F4;
    }
L_08A413F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41438;
      }
      goto L_08A4142C;
    }
L_08A4142C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A41438;
L_08A41438:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41488;
      }
      goto L_08A41454;
    }
L_08A41454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41488;
      }
      goto L_08A41468;
    }
L_08A41468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41488;
      }
      goto L_08A4147C;
    }
L_08A4147C:
    ctx.gpr[2] = (0u | 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41488:
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41588;
      }
      goto L_08A414EC;
    }
L_08A414EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(204));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A414EC;
      }
      goto L_08A41588;
    }
L_08A41588:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A415BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A415BCu) goto L_08A415BC;
    return;
L_08A415BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A415F8;
      }
      goto L_08A415C8;
    }
L_08A415C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A415F8;
L_08A415F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4080));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41654;
    }
L_08A41654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41678;
      }
      goto L_08A41668;
    }
L_08A41668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4306), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A41678;
L_08A41678:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41710;
      }
      goto L_08A41690;
    }
L_08A41690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A416EC;
      }
      goto L_08A416A4;
    }
L_08A416A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A416EC;
      }
      goto L_08A416C0;
    }
L_08A416C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A416EC;
      }
      goto L_08A416D8;
    }
L_08A416D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    goto L_08A416EC;
L_08A416EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A41704u);
    // nop
    goto L_08A438D0;
L_08A41704:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41710:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41754;
      }
      goto L_08A41728;
    }
L_08A41728:
    ctx.gpr[31] = (0x08A41730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 451u, 0x08A36B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41730u) goto L_08A41730;
    return;
L_08A41730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A41748u);
    // nop
    goto L_08A438D0;
L_08A41748:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 538u, 0x08A3FE24u>(ctx, &aot_mem) && ctx.pc == 0x08A41760u) goto L_08A41760;
    return;
L_08A41760:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41790;
      }
      goto L_08A4176C;
    }
L_08A4176C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A41784u);
    // nop
    goto L_08A438D0;
L_08A41784:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A417C8;
      }
      goto L_08A417A4;
    }
L_08A417A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A417BCu);
    // nop
    goto L_08A438D0;
L_08A417BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A417C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A417F8;
      }
      goto L_08A417DC;
    }
L_08A417DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A417ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A417ECu) goto L_08A417EC;
    return;
L_08A417EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A417F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A41820;
      }
      goto L_08A4180C;
    }
L_08A4180C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41818;
    }
L_08A41818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41838;
      }
      goto L_08A41820;
    }
L_08A41820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A418A8;
      }
      goto L_08A41830;
    }
L_08A41830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41838;
    }
L_08A41838:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41898;
      }
      goto L_08A41860;
    }
L_08A41860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41898;
      }
      goto L_08A41874;
    }
L_08A41874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(924)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4476), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(928)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4492), ctx.gpr[4]);
    goto L_08A41898;
L_08A41898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A418A8;
L_08A418A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08A418D0u);
    // nop
    goto L_08A419F4;
L_08A418D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A418DC;
    }
L_08A418DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A418E8u);
    // nop
    goto L_08A41C58;
L_08A418E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A418F4;
    }
L_08A418F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41900u);
    // nop
    goto L_08A41E68;
L_08A41900:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A4190C;
    }
L_08A4190C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41918u);
    // nop
    goto L_08A420F0;
L_08A41918:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41924;
    }
L_08A41924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A41934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 517u, 0x08A571A4u>(ctx, &aot_mem) && ctx.pc == 0x08A41934u) goto L_08A41934;
    return;
L_08A41934:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41940;
    }
L_08A41940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A4194Cu);
    // nop
    goto L_08A40F7C;
L_08A4194C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41958;
    }
L_08A41958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41964u);
    // nop
    goto L_08A43578;
L_08A41964:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41970;
    }
L_08A41970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A4197Cu);
    // nop
    goto L_08A4330C;
L_08A4197C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A41988;
    }
L_08A41988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41994u);
    // nop
    goto L_08A42FE0;
L_08A41994:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A419A0;
    }
L_08A419A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A419ACu);
    // nop
    goto L_08A41268;
L_08A419AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A419B8;
    }
L_08A419B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A419C4u);
    // nop
    goto L_08A41384;
L_08A419C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A419D0;
    }
L_08A419D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A419E8u);
    // nop
    goto L_08A438D0;
L_08A419E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A419F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41A18;
    }
L_08A41A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41A28;
    }
L_08A41A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A41A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A41A38u) goto L_08A41A38;
    return;
L_08A41A38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41A4C;
    }
L_08A41A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A41A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A41A78u) goto L_08A41A78;
    return;
L_08A41A78:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A41A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 3u, 0x08A2C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41A88u) goto L_08A41A88;
    return;
L_08A41A88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B8C;
      }
      goto L_08A41AA8;
    }
L_08A41AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (16647u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50103u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A41AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 123u, 0x08A289D0u>(ctx, &aot_mem) && ctx.pc == 0x08A41AC4u) goto L_08A41AC4;
    return;
L_08A41AC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3096), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41AD8;
    }
L_08A41AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5120));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A41B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A41B00u) goto L_08A41B00;
    return;
L_08A41B00:
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
          goto L_08A41B34;
      }
      goto L_08A41B28;
    }
L_08A41B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A41B34;
L_08A41B34:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41B50;
    }
L_08A41B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 652u, 0x08A4F750u>(ctx, &aot_mem) && ctx.pc == 0x08A41B5Cu) goto L_08A41B5C;
    return;
L_08A41B5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41B68;
    }
L_08A41B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 94u);
    ctx.gpr[31] = (0x08A41B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A41B78u) goto L_08A41B78;
    return;
L_08A41B78:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41BAC;
    }
L_08A41BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7760));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A41BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A41BDCu) goto L_08A41BDC;
    return;
L_08A41BDC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41BFC;
    }
L_08A41BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 652u, 0x08A4F750u>(ctx, &aot_mem) && ctx.pc == 0x08A41C08u) goto L_08A41C08;
    return;
L_08A41C08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C44;
      }
      goto L_08A41C14;
    }
L_08A41C14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A41C28u) goto L_08A41C28;
    return;
L_08A41C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41C44:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E54;
      }
      goto L_08A41C78;
    }
L_08A41C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (48u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E54;
      }
      goto L_08A41C98;
    }
L_08A41C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A41CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A41CA8u) goto L_08A41CA8;
    return;
L_08A41CA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41E48;
      }
      goto L_08A41CBC;
    }
L_08A41CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A41CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A41CECu) goto L_08A41CEC;
    return;
L_08A41CEC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A41CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 3u, 0x08A2C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41CFCu) goto L_08A41CFC;
    return;
L_08A41CFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7760));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A41D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A41D30u) goto L_08A41D30;
    return;
L_08A41D30:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41E48;
      }
      goto L_08A41D50;
    }
L_08A41D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3140)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D9C;
      }
      goto L_08A41D7C;
    }
L_08A41D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3140)));
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41E54;
      }
      goto L_08A41D9C;
    }
L_08A41D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E00;
      }
      goto L_08A41DBC;
    }
L_08A41DBC:
    ctx.gpr[31] = (0x08A41DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 28u, 0x08A3C2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A41DC4u) goto L_08A41DC4;
    return;
L_08A41DC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E54;
      }
      goto L_08A41DD0;
    }
L_08A41DD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A41DE4u) goto L_08A41DE4;
    return;
L_08A41DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 44u, 0x08A3C4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A41E0Cu) goto L_08A41E0C;
    return;
L_08A41E0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E48;
      }
      goto L_08A41E18;
    }
L_08A41E18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A41E2Cu) goto L_08A41E2C;
    return;
L_08A41E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41E48:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A41E54;
L_08A41E54:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A41EA4;
    }
L_08A41EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A41EB4;
    }
L_08A41EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A41ED4;
    }
L_08A41ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A41EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A41EE4u) goto L_08A41EE4;
    return;
L_08A41EE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A41EF8;
    }
L_08A41EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7760));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A41F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A41F28u) goto L_08A41F28;
    return;
L_08A41F28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A41F48;
    }
L_08A41F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 448u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A41F5C;
    }
L_08A41F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FB4;
      }
      goto L_08A41F70;
    }
L_08A41F70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 10005u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A41F88u) goto L_08A41F88;
    return;
L_08A41F88:
    ctx.gpr[5] = (0u | 95u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A41F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A41F98u) goto L_08A41F98;
    return;
L_08A41F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A41FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 56u, 0x08A68538u>(ctx, &aot_mem) && ctx.pc == 0x08A41FC0u) goto L_08A41FC0;
    return;
L_08A41FC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 124u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42034;
      }
      goto L_08A41FD4;
    }
L_08A41FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FF8;
      }
      goto L_08A41FE8;
    }
L_08A41FE8:
    ctx.gpr[4] = (0u | 124u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42024;
      }
      goto L_08A41FF8;
    }
L_08A41FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4201C;
      }
      goto L_08A4200C;
    }
L_08A4200C:
    ctx.gpr[4] = (0u | 125u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42024;
      }
      goto L_08A4201C;
    }
L_08A4201C:
    ctx.gpr[4] = (0u | 126u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A42024;
L_08A42024:
    ctx.gpr[4] = (0u | 95u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4208C;
      }
      goto L_08A42034;
    }
L_08A42034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42058;
      }
      goto L_08A42048;
    }
L_08A42048:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42084;
      }
      goto L_08A42058;
    }
L_08A42058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4207C;
      }
      goto L_08A4206C;
    }
L_08A4206C:
    ctx.gpr[4] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42084;
      }
      goto L_08A4207C;
    }
L_08A4207C:
    ctx.gpr[4] = (0u | 129u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A42084;
L_08A42084:
    ctx.gpr[4] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A4208C;
L_08A4208C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420DC;
      }
      goto L_08A42098;
    }
L_08A42098:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A420B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A420B0u) goto L_08A420B0;
    return;
L_08A420B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A420C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A420C0u) goto L_08A420C0;
    return;
L_08A420C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A420DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A420F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42228;
      }
      goto L_08A42114;
    }
L_08A42114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42228;
      }
      goto L_08A42124;
    }
L_08A42124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42228;
      }
      goto L_08A42140;
    }
L_08A42140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A42150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A42150u) goto L_08A42150;
    return;
L_08A42150:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42228;
      }
      goto L_08A42164;
    }
L_08A42164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A42194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A42194u) goto L_08A42194;
    return;
L_08A42194:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A421A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 3u, 0x08A2C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A421A4u) goto L_08A421A4;
    return;
L_08A421A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7760));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4640)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A421D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A421D8u) goto L_08A421D8;
    return;
L_08A421D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42228;
      }
      goto L_08A421F8;
    }
L_08A421F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 117u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4220Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A4220Cu) goto L_08A4220C;
    return;
L_08A4220C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42228:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4223C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A42274;
      }
      goto L_08A42260;
    }
L_08A42260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A42518;
      }
      goto L_08A4226C;
    }
L_08A4226C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4229C;
      }
      goto L_08A42274;
    }
L_08A42274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42320;
      }
      goto L_08A42284;
    }
L_08A42284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42458;
      }
      goto L_08A42294;
    }
L_08A42294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42518;
      }
      goto L_08A4229C;
    }
L_08A4229C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A422B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A422B0u) goto L_08A422B0;
    return;
L_08A422B0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A422C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A422C4u) goto L_08A422C4;
    return;
L_08A422C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3024)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A422FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A422FCu) goto L_08A422FC;
    return;
L_08A422FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42518;
      }
      goto L_08A42308;
    }
L_08A42308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42518;
      }
      goto L_08A42320;
    }
L_08A42320:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10228u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A42338u) goto L_08A42338;
    return;
L_08A42338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[31] = (0x08A4234Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A4234Cu) goto L_08A4234C;
    return;
L_08A4234C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4237C;
      }
      goto L_08A42370;
    }
L_08A42370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4237C;
L_08A4237C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A423B8;
      }
      goto L_08A4239C;
    }
L_08A4239C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A423F0;
      }
      goto L_08A423B8;
    }
L_08A423B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4080));
    ctx.gpr[31] = (0x08A423E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A423E8u) goto L_08A423E8;
    return;
L_08A423E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42438;
      }
      goto L_08A423F0;
    }
L_08A423F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4080));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A42438;
L_08A42438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42518;
      }
      goto L_08A42458;
    }
L_08A42458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4246Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 153u, 0x08A3D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08A4246Cu) goto L_08A4246C;
    return;
L_08A4246C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42504;
      }
      goto L_08A4247C;
    }
L_08A4247C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424EC;
      }
      goto L_08A42490;
    }
L_08A42490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16832u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A424C8;
      }
      goto L_08A424B0;
    }
L_08A424B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4080));
    ctx.gpr[31] = (0x08A424C0u);
    // nop
    goto L_08A41494;
L_08A424C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42504;
      }
      goto L_08A424C8;
    }
L_08A424C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A424E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A424E4u) goto L_08A424E4;
    return;
L_08A424E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42504;
      }
      goto L_08A424EC;
    }
L_08A424EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A42504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A42504u) goto L_08A42504;
    return;
L_08A42504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A42518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A42518u) goto L_08A42518;
    return;
L_08A42518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A42534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A42534u) goto L_08A42534;
    return;
L_08A42534:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A42570u) goto L_08A42570;
    return;
L_08A42570:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4258Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A4258Cu) goto L_08A4258C;
    return;
L_08A4258C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A425D8;
      }
      goto L_08A425B8;
    }
L_08A425B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A427E4;
      }
      goto L_08A425C4;
    }
L_08A425C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A42600;
      }
      goto L_08A425D0;
    }
L_08A425D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4265C;
      }
      goto L_08A425D8;
    }
L_08A425D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42740;
      }
      goto L_08A425E8;
    }
L_08A425E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A427A4;
      }
      goto L_08A425F8;
    }
L_08A425F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A427E4;
      }
      goto L_08A42600;
    }
L_08A42600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42630;
      }
      goto L_08A42620;
    }
L_08A42620:
    ctx.gpr[4] = (0u | 10306u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42638;
      }
      goto L_08A42630;
    }
L_08A42630:
    ctx.gpr[4] = (0u | 10303u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A42638;
L_08A42638:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A42650u) goto L_08A42650;
    return;
L_08A42650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A4265C;
L_08A4265C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42690;
      }
      goto L_08A42680;
    }
L_08A42680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A42690;
L_08A42690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A426C0;
      }
      goto L_08A426A4;
    }
L_08A426A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A426B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A426B8u) goto L_08A426B8;
    return;
L_08A426B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A427E4;
      }
      goto L_08A426C0;
    }
L_08A426C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A426F4;
      }
      goto L_08A426E8;
    }
L_08A426E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A426F4;
L_08A426F4:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42728;
      }
      goto L_08A42714;
    }
L_08A42714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A427E4;
      }
      goto L_08A42728;
    }
L_08A42728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A42738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 476u, 0x08A4E270u>(ctx, &aot_mem) && ctx.pc == 0x08A42738u) goto L_08A42738;
    return;
L_08A42738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A427E4;
      }
      goto L_08A42740;
    }
L_08A42740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10304u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A42758u) goto L_08A42758;
    return;
L_08A42758:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4004)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A42768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A42768u) goto L_08A42768;
    return;
L_08A42768:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A427E4;
      }
      goto L_08A427A4;
    }
L_08A427A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A427B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A427B8u) goto L_08A427B8;
    return;
L_08A427B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[31] = (0x08A427C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A427C8u) goto L_08A427C8;
    return;
L_08A427C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A427E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A427E4u) goto L_08A427E4;
    return;
L_08A427E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A427F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A42820u) goto L_08A42820;
    return;
L_08A42820:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4283Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A4283Cu) goto L_08A4283C;
    return;
L_08A4283C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A42868;
    }
L_08A42868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428B4;
      }
      goto L_08A428A4;
    }
L_08A428A4:
    ctx.gpr[4] = (0u | 10306u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428BC;
      }
      goto L_08A428B4;
    }
L_08A428B4:
    ctx.gpr[4] = (0u | 10303u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A428BC;
L_08A428BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A428D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A428D4u) goto L_08A428D4;
    return;
L_08A428D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A428E0;
L_08A428E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42914;
      }
      goto L_08A42904;
    }
L_08A42904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A42914;
L_08A42914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42944;
      }
      goto L_08A42928;
    }
L_08A42928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4293Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A4293Cu) goto L_08A4293C;
    return;
L_08A4293C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A42944;
    }
L_08A42944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42978;
      }
      goto L_08A4296C;
    }
L_08A4296C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42978;
L_08A42978:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A429AC;
      }
      goto L_08A42998;
    }
L_08A42998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A429AC;
    }
L_08A429AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A429BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 476u, 0x08A4E270u>(ctx, &aot_mem) && ctx.pc == 0x08A429BCu) goto L_08A429BC;
    return;
L_08A429BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A429C4;
    }
L_08A429C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10304u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A429DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A429DCu) goto L_08A429DC;
    return;
L_08A429DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A429F0;
    }
L_08A429F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A42A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A42A04u) goto L_08A42A04;
    return;
L_08A42A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x08A42A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 4u, 0x08A2C0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A42A2Cu) goto L_08A42A2C;
    return;
L_08A42A2C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A42A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A42A48u) goto L_08A42A48;
    return;
L_08A42A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A42A50;
    }
L_08A42A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42AA0;
      }
      goto L_08A42A74;
    }
L_08A42A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4516)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A42A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A42A90u) goto L_08A42A90;
    return;
L_08A42A90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42AF8;
      }
      goto L_08A42AA0;
    }
L_08A42AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A42AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A42AB0u) goto L_08A42AB0;
    return;
L_08A42AB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A42AF8;
      }
      goto L_08A42AC4;
    }
L_08A42AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A42AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A42AF0u) goto L_08A42AF0;
    return;
L_08A42AF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42AF8;
L_08A42AF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A42B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A42B0Cu) goto L_08A42B0C;
    return;
L_08A42B0C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42C14;
      }
      goto L_08A42B24;
    }
L_08A42B24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42B54;
      }
      goto L_08A42B48;
    }
L_08A42B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42B54;
L_08A42B54:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42B80;
      }
      goto L_08A42B70;
    }
L_08A42B70:
    ctx.gpr[4] = (0u | 10305u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42B80;
    }
L_08A42B80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42BB0;
      }
      goto L_08A42BA4;
    }
L_08A42BA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42BB0;
L_08A42BB0:
    ctx.gpr[4] = (17169u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42BDC;
      }
      goto L_08A42BCC;
    }
L_08A42BCC:
    ctx.gpr[4] = (0u | 10306u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42BDC;
    }
L_08A42BDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42C04;
      }
      goto L_08A42BF4;
    }
L_08A42BF4:
    ctx.gpr[4] = (0u | 10307u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42C04;
    }
L_08A42C04:
    ctx.gpr[4] = (0u | 10308u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42C14;
    }
L_08A42C14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42C44;
      }
      goto L_08A42C38;
    }
L_08A42C38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42C44;
L_08A42C44:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42C70;
      }
      goto L_08A42C60;
    }
L_08A42C60:
    ctx.gpr[4] = (0u | 10312u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42C70;
    }
L_08A42C70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42CA0;
      }
      goto L_08A42C94;
    }
L_08A42C94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42CA0;
L_08A42CA0:
    ctx.gpr[4] = (17169u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42CCC;
      }
      goto L_08A42CBC;
    }
L_08A42CBC:
    ctx.gpr[4] = (0u | 10311u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42CCC;
    }
L_08A42CCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42CF4;
      }
      goto L_08A42CE4;
    }
L_08A42CE4:
    ctx.gpr[4] = (0u | 10309u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CFC;
      }
      goto L_08A42CF4;
    }
L_08A42CF4:
    ctx.gpr[4] = (0u | 10310u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A42CFC;
L_08A42CFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A42D14u) goto L_08A42D14;
    return;
L_08A42D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A42D20;
L_08A42D20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A42D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A42D34u) goto L_08A42D34;
    return;
L_08A42D34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42D64;
      }
      goto L_08A42D54;
    }
L_08A42D54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A42D64;
L_08A42D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A42D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A42D78u) goto L_08A42D78;
    return;
L_08A42D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A42D80;
    }
L_08A42D80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08A42D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A42D94u) goto L_08A42D94;
    return;
L_08A42D94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DE4;
      }
      goto L_08A42DAC;
    }
L_08A42DAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42DD4;
      }
      goto L_08A42DC4;
    }
L_08A42DC4:
    ctx.gpr[4] = (0u | 10314u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42ECC;
      }
      goto L_08A42DD4;
    }
L_08A42DD4:
    ctx.gpr[4] = (0u | 10313u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42ECC;
      }
      goto L_08A42DE4;
    }
L_08A42DE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42E14;
      }
      goto L_08A42E08;
    }
L_08A42E08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42E14;
L_08A42E14:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42E40;
      }
      goto L_08A42E30;
    }
L_08A42E30:
    ctx.gpr[4] = (0u | 10312u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42ECC;
      }
      goto L_08A42E40;
    }
L_08A42E40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42E70;
      }
      goto L_08A42E64;
    }
L_08A42E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42E70;
L_08A42E70:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42E9C;
      }
      goto L_08A42E8C;
    }
L_08A42E8C:
    ctx.gpr[4] = (0u | 10311u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42ECC;
      }
      goto L_08A42E9C;
    }
L_08A42E9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42EC4;
      }
      goto L_08A42EB4;
    }
L_08A42EB4:
    ctx.gpr[4] = (0u | 10310u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42ECC;
      }
      goto L_08A42EC4;
    }
L_08A42EC4:
    ctx.gpr[4] = (0u | 10309u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A42ECC;
L_08A42ECC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A42EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A42EE4u) goto L_08A42EE4;
    return;
L_08A42EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A42EF0;
L_08A42EF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A42F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A42F04u) goto L_08A42F04;
    return;
L_08A42F04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42F34;
      }
      goto L_08A42F24;
    }
L_08A42F24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A42F34;
L_08A42F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A42F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A42F48u) goto L_08A42F48;
    return;
L_08A42F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A42F50;
    }
L_08A42F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42F90;
      }
      goto L_08A42F84;
    }
L_08A42F84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A42F90;
L_08A42F90:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42FC4;
      }
      goto L_08A42FB0;
    }
L_08A42FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD0;
      }
      goto L_08A42FC4;
    }
L_08A42FC4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A42FD0;
L_08A42FD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4318)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43040;
      }
      goto L_08A43020;
    }
L_08A43020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A432F0;
      }
      goto L_08A43040;
    }
L_08A43040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4496)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432F0;
      }
      goto L_08A43054;
    }
L_08A43054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[31] = (0x08A43064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A43064u) goto L_08A43064;
    return;
L_08A43064:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4308C;
      }
      goto L_08A43078;
    }
L_08A43078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A430C4;
      }
      goto L_08A4308C;
    }
L_08A4308C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A430B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A430B8u) goto L_08A430B8;
    return;
L_08A430B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A430C4;
L_08A430C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A430E0u);
    // nop
    goto L_08A43FFC;
L_08A430E0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A43104u) goto L_08A43104;
    return;
L_08A43104:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A43118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 153u, 0x08A3D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08A43118u) goto L_08A43118;
    return;
L_08A43118:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43254;
      }
      goto L_08A43128;
    }
L_08A43128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43168;
      }
      goto L_08A4315C;
    }
L_08A4315C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43168;
L_08A43168:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A432F0;
      }
      goto L_08A43184;
    }
L_08A43184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432F0;
      }
      goto L_08A43198;
    }
L_08A43198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10376));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[31] = (0x08A431D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A431D0u) goto L_08A431D0;
    return;
L_08A431D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43200;
      }
      goto L_08A431F4;
    }
L_08A431F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43200;
L_08A43200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A432F0;
      }
      goto L_08A43220;
    }
L_08A43220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[31] = (0x08A43238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A43238u) goto L_08A43238;
    return;
L_08A43238:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4016)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A432AC;
      }
      goto L_08A43274;
    }
L_08A43274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A43288u) goto L_08A43288;
    return;
L_08A43288:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A432AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A432B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 442u, 0x08A5A7D8u>(ctx, &aot_mem) && ctx.pc == 0x08A432B8u) goto L_08A432B8;
    return;
L_08A432B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432F0;
      }
      goto L_08A432C4;
    }
L_08A432C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08A432D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A432D4u) goto L_08A432D4;
    return;
L_08A432D4:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A432F0:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4330C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4496)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43564;
      }
      goto L_08A43330;
    }
L_08A43330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43384;
      }
      goto L_08A43344;
    }
L_08A43344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4496)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43384;
      }
      goto L_08A43360;
    }
L_08A43360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 110u);
    ctx.gpr[31] = (0x08A43370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A43370u) goto L_08A43370;
    return;
L_08A43370:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43384:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 460u, 0x08A4704Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43398u) goto L_08A43398;
    return;
L_08A43398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4496)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A433FC;
      }
      goto L_08A433B0;
    }
L_08A433B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A433BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 449u, 0x08A46EC0u>(ctx, &aot_mem) && ctx.pc == 0x08A433BCu) goto L_08A433BC;
    return;
L_08A433BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A433FC;
      }
      goto L_08A433D0;
    }
L_08A433D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4212), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 109u);
    ctx.gpr[31] = (0x08A433E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A433E8u) goto L_08A433E8;
    return;
L_08A433E8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A433FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A4340Cu);
    // nop
    goto L_08A4111C;
L_08A4340C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A434C4;
      }
      goto L_08A43418;
    }
L_08A43418:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A43440;
      }
      goto L_08A4342C;
    }
L_08A4342C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4313)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A434C4;
      }
      goto L_08A43440;
    }
L_08A43440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[7] = (0u | 58u);
    ctx.gpr[31] = (0x08A43460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 469u, 0x08A4E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A43460u) goto L_08A43460;
    return;
L_08A43460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4348C;
      }
      goto L_08A43474;
    }
L_08A43474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A434B0;
      }
      goto L_08A43484;
    }
L_08A43484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4349C;
      }
      goto L_08A4348C;
    }
L_08A4348C:
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A434B0;
      }
      goto L_08A4349C;
    }
L_08A4349C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A434B0;
L_08A434B0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A434C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A434D0u);
    // nop
    goto L_08A41004;
L_08A434D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A434F0;
      }
      goto L_08A434DC;
    }
L_08A434DC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A434F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A434FCu);
    // nop
    goto L_08A413D8;
L_08A434FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43538;
      }
      goto L_08A43508;
    }
L_08A43508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4351Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A4351Cu) goto L_08A4351C;
    return;
L_08A4351C:
    ctx.gpr[4] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43538:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4354Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A4354Cu) goto L_08A4354C;
    return;
L_08A4354C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4276), 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43564:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 320u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438C0;
      }
      goto L_08A43598;
    }
L_08A43598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43694;
      }
      goto L_08A435B4;
    }
L_08A435B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 56u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43694;
      }
      goto L_08A435C8;
    }
L_08A435C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43608;
      }
      goto L_08A435FC;
    }
L_08A435FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43608;
L_08A43608:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43694;
      }
      goto L_08A43624;
    }
L_08A43624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (16796u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A4363Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 490u, 0x08A4E3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A4363Cu) goto L_08A4363C;
    return;
L_08A4363C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43694;
      }
      goto L_08A43648;
    }
L_08A43648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4366C;
      }
      goto L_08A4365C;
    }
L_08A4365C:
    ctx.gpr[4] = (0u | 115u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43674;
      }
      goto L_08A4366C;
    }
L_08A4366C:
    ctx.gpr[4] = (0u | 78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A43674;
L_08A43674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A43684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A43684u) goto L_08A43684;
    return;
L_08A43684:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A436D4;
      }
      goto L_08A436C8;
    }
L_08A436C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A436D4;
L_08A436D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A437DC;
      }
      goto L_08A436F0;
    }
L_08A436F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 76 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43748;
      }
      goto L_08A43708;
    }
L_08A43708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43730;
      }
      goto L_08A43718;
    }
L_08A43718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A437DC;
      }
      goto L_08A43728;
    }
L_08A43728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43790;
      }
      goto L_08A43730;
    }
L_08A43730:
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A43790;
      }
      goto L_08A43740;
    }
L_08A43740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A437DC;
      }
      goto L_08A43748;
    }
L_08A43748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 83 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43780;
      }
      goto L_08A43758;
    }
L_08A43758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 77 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43790;
      }
      goto L_08A43768;
    }
L_08A43768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A437DC;
      }
      goto L_08A43778;
    }
L_08A43778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43790;
      }
      goto L_08A43780;
    }
L_08A43780:
    ctx.gpr[5] = (0u | 98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A437DC;
      }
      goto L_08A43790;
    }
L_08A43790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A437B4;
      }
      goto L_08A437A4;
    }
L_08A437A4:
    ctx.gpr[4] = (0u | 112u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A437BC;
      }
      goto L_08A437B4;
    }
L_08A437B4:
    ctx.gpr[4] = (0u | 77u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A437BC;
L_08A437BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A437CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A437CCu) goto L_08A437CC;
    return;
L_08A437CC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A437DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A437E8u);
    // nop
    goto L_08A413D8;
L_08A437E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43814;
      }
      goto L_08A437F4;
    }
L_08A437F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x08A43804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A43804u) goto L_08A43804;
    return;
L_08A43804:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43874;
      }
      goto L_08A43828;
    }
L_08A43828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4384C;
      }
      goto L_08A4383C;
    }
L_08A4383C:
    ctx.gpr[4] = (0u | 113u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43854;
      }
      goto L_08A4384C;
    }
L_08A4384C:
    ctx.gpr[4] = (0u | 74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A43854;
L_08A43854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A43864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A43864u) goto L_08A43864;
    return;
L_08A43864:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43898;
      }
      goto L_08A43888;
    }
L_08A43888:
    ctx.gpr[4] = (0u | 112u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438A0;
      }
      goto L_08A43898;
    }
L_08A43898:
    ctx.gpr[4] = (0u | 73u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A438A0;
L_08A438A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A438B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A438B0u) goto L_08A438B0;
    return;
L_08A438B0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A438C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A438D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43940;
      }
      goto L_08A438FC;
    }
L_08A438FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (16940u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43978;
      }
      goto L_08A4391C;
    }
L_08A4391C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43978;
      }
      goto L_08A43940;
    }
L_08A43940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43978;
      }
      goto L_08A43960;
    }
L_08A43960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43978;
L_08A43978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43DB4;
      }
      goto L_08A43988;
    }
L_08A43988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A439C8;
      }
      goto L_08A439B0;
    }
L_08A439B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3136), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A439C8;
L_08A439C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3128)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16832u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43A0C;
      }
      goto L_08A439FC;
    }
L_08A439FC:
    ctx.gpr[4] = (16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43A0C;
L_08A43A0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3128)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43A64;
      }
      goto L_08A43A30;
    }
L_08A43A30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3128)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43A64;
      }
      goto L_08A43A58;
    }
L_08A43A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43A64;
L_08A43A64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AAC;
      }
      goto L_08A43A98;
    }
L_08A43A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43AD4;
      }
      goto L_08A43AAC;
    }
L_08A43AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A43AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 417u, 0x08A36794u>(ctx, &aot_mem) && ctx.pc == 0x08A43AB8u) goto L_08A43AB8;
    return;
L_08A43AB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43AD4;
L_08A43AD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A43AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A43AECu) goto L_08A43AEC;
    return;
L_08A43AEC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3132)));
    ctx.gpr[31] = (0x08A43B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A43B04u) goto L_08A43B04;
    return;
L_08A43B04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43B34;
      }
      goto L_08A43B28;
    }
L_08A43B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43B34;
L_08A43B34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43B78;
      }
      goto L_08A43B54;
    }
L_08A43B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A43B68u);
    // nop
    goto L_08A43FFC;
L_08A43B68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43B94;
      }
      goto L_08A43B78;
    }
L_08A43B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A43B8Cu);
    // nop
    goto L_08A43FFC;
L_08A43B8C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43B94;
L_08A43B94:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A43BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 63u, 0x08A2CCECu>(ctx, &aot_mem) && ctx.pc == 0x08A43BACu) goto L_08A43BAC;
    return;
L_08A43BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A43BBCu) goto L_08A43BBC;
    return;
L_08A43BBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43BEC;
      }
      goto L_08A43BE0;
    }
L_08A43BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A43BEC;
L_08A43BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43CC4;
      }
      goto L_08A43C00;
    }
L_08A43C00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43C38;
      }
      goto L_08A43C1C;
    }
L_08A43C1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A43C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A43C30u) goto L_08A43C30;
    return;
L_08A43C30:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43C38;
L_08A43C38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A43C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A43C4Cu) goto L_08A43C4C;
    return;
L_08A43C4C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43C7C;
      }
      goto L_08A43C70;
    }
L_08A43C70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43C7C;
L_08A43C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3128)));
    ctx.gpr[5] = (16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43CBCu) goto L_08A43CBC;
    return;
L_08A43CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43D48;
      }
      goto L_08A43CC4;
    }
L_08A43CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A43CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A43CD8u) goto L_08A43CD8;
    return;
L_08A43CD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43D08;
      }
      goto L_08A43CFC;
    }
L_08A43CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43D08;
L_08A43D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3128)));
    ctx.gpr[5] = (16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43D48u) goto L_08A43D48;
    return;
L_08A43D48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A43D6Cu) goto L_08A43D6C;
    return;
L_08A43D6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43D84u);
    // nop
    goto L_08A41494;
L_08A43D84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 615u, 0x08A53D98u>(ctx, &aot_mem) && ctx.pc == 0x08A43D94u) goto L_08A43D94;
    return;
L_08A43D94:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A43DACu) goto L_08A43DAC;
    return;
L_08A43DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43FD4;
      }
      goto L_08A43DB4;
    }
L_08A43DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43E7C;
      }
      goto L_08A43DC8;
    }
L_08A43DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43DFC;
      }
      goto L_08A43DF0;
    }
L_08A43DF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A43DFC;
L_08A43DFC:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A43E30;
      }
      goto L_08A43E1C;
    }
L_08A43E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43E7C;
      }
      goto L_08A43E30;
    }
L_08A43E30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A43E54u) goto L_08A43E54;
    return;
L_08A43E54:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A43E68u) goto L_08A43E68;
    return;
L_08A43E68:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43E7Cu);
    // nop
    goto L_08A43FFC;
L_08A43E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43FBC;
      }
      goto L_08A43E90;
    }
L_08A43E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3136), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F1C;
      }
      goto L_08A43EB0;
    }
L_08A43EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F1C;
      }
      goto L_08A43ED0;
    }
L_08A43ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3976)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43EFCu) goto L_08A43EFC;
    return;
L_08A43EFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F1C;
      }
      goto L_08A43F08;
    }
L_08A43F08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A43F1C;
L_08A43F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F80;
      }
      goto L_08A43F30;
    }
L_08A43F30:
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
          goto L_08A43FBC;
      }
      goto L_08A43F64;
    }
L_08A43F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4252)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4252), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43FBC;
      }
      goto L_08A43F80;
    }
L_08A43F80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 670u, 0x08A4F964u>(ctx, &aot_mem) && ctx.pc == 0x08A43F94u) goto L_08A43F94;
    return;
L_08A43F94:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A43FA8u) goto L_08A43FA8;
    return;
L_08A43FA8:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A43FBCu);
    // nop
    goto L_08A43FFC;
L_08A43FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A43FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A43FD4u) goto L_08A43FD4;
    return;
L_08A43FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 3073u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A43FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A43FECu) goto L_08A43FEC;
    return;
L_08A43FEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.pc = 0x08A44000u; return;
}

void recomp_unit_0143(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0143_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_143(Runtime &runtime) {
    runtime.register_generated_unit(143u, 0x08A40000u, 16384u, &recomp_unit_0143, &recomp_unit_0143_entry);
    runtime.register_function(0x08A40000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40008u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40014u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40028u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4005Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40074u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4008Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40094u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40104u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4011Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40130u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40144u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40158u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40168u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40180u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4019Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40220u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40240u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40254u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40264u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4026Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4027Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40294u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40308u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40320u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40330u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40340u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40358u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40368u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40378u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40380u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4039Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40408u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40420u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40430u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40448u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40458u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40470u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40480u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40498u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40508u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40518u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40528u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40540u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40550u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40564u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40578u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4058Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40600u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40610u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40620u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40638u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40648u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40660u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40670u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40688u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40698u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40710u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40720u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40738u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40748u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40760u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40770u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40788u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4079Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40814u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40824u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4083Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4084Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40864u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4088Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4089Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40934u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40990u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ADCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41004u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41030u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41044u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41058u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4108Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41098u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41108u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4111Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41150u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41164u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41178u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4118Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41210u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41224u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4123Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41248u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41258u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41290u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41300u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4131Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41330u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4134Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4135Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41370u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41384u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4142Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41454u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41468u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4147Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41488u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41494u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41588u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41590u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41630u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41654u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41668u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41678u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41690u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41704u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41710u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41728u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41730u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41748u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41754u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41760u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4176Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41784u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41790u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4180Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41818u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41830u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41838u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41860u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41898u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41900u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4190Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41918u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41924u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41934u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41940u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4194Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41964u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41970u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4197Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41988u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41994u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41ED4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4200Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4201Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42024u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42034u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42048u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42058u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4206Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4207Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42084u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4208Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42098u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42114u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42124u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42140u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42150u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42164u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42194u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4220Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42228u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4223Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42260u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4226Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42274u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42284u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42294u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4229Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42308u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42320u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42338u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4234Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42370u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4237Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4239Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42458u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4246Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4247Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42490u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42504u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42518u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42534u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42544u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42570u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4258Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42600u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42620u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42630u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42638u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42650u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4265Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42680u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42690u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42714u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42728u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42738u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42740u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42758u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42768u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4283Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42868u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42884u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42904u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42914u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42928u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4293Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42944u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4296Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42998u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42ECCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43020u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43040u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43054u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43064u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43078u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4308Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43104u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43118u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43128u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4315Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43168u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43184u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43198u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A431D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A431F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43200u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43220u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43238u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43254u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43274u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43288u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4330Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43330u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43344u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43360u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43370u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43384u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43398u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4340Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43418u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4342Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43440u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43460u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43474u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4348Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4349Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43508u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4351Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43538u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4354Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43564u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43578u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43598u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43608u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43624u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4363Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43648u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4365Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4366Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43674u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43684u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43694u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43708u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43718u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43728u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43730u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43740u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43748u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43758u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43768u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43778u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43780u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43790u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43804u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43814u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43828u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4383Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4384Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43854u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43864u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43874u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43888u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43898u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4391Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43940u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43960u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43988u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ED0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FFCu, &recomp_unit_0143, "recomp_unit_0143");
}
} // namespace psprecomp

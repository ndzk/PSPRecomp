#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0127[4077] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0,
    0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0,
    0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 52, 0,
    0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0,
    0, 0, 68, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0,
    104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0,
    208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0,
    278, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287,
    0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0,
    0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0,
    0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344,
    0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0,
    0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0,
    0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0,
    0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487,
    0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517,
    0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 524,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0,
    0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600,
    0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0,
    0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0,
    0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0,
    0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632,
    0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0,
    0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0,
    0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658,
    0, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0,
    0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 0, 679,
    0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 690,
    0, 0, 0, 691, 0, 692, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 700, 0, 0,
    0, 701, 0, 702, 0, 0, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 710, 0, 0, 0, 711,
    0, 712, 0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 722,
    0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0,
    730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0,
    0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0,
    0, 0, 750, 0, 751, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0,
    0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764,
    0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766,
};
void recomp_unit_0127_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A00000u;
        entry_id = (entry_delta < 16308u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0127[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A00000;
    case 2u: goto L_08A00058;
    case 3u: goto L_08A0007C;
    case 4u: goto L_08A00088;
    case 5u: goto L_08A000A4;
    case 6u: goto L_08A000BC;
    case 7u: goto L_08A000CC;
    case 8u: goto L_08A000E0;
    case 9u: goto L_08A000F4;
    case 10u: goto L_08A00104;
    case 11u: goto L_08A00110;
    case 12u: goto L_08A00124;
    case 13u: goto L_08A00130;
    case 14u: goto L_08A00144;
    case 15u: goto L_08A00150;
    case 16u: goto L_08A00158;
    case 17u: goto L_08A00168;
    case 18u: goto L_08A00170;
    case 19u: goto L_08A0017C;
    case 20u: goto L_08A0018C;
    case 21u: goto L_08A00198;
    case 22u: goto L_08A001A8;
    case 23u: goto L_08A001B4;
    case 24u: goto L_08A001BC;
    case 25u: goto L_08A001D8;
    case 26u: goto L_08A001F8;
    case 27u: goto L_08A00200;
    case 28u: goto L_08A00210;
    case 29u: goto L_08A0021C;
    case 30u: goto L_08A0022C;
    case 31u: goto L_08A00234;
    case 32u: goto L_08A00248;
    case 33u: goto L_08A00258;
    case 34u: goto L_08A00264;
    case 35u: goto L_08A00274;
    case 36u: goto L_08A00280;
    case 37u: goto L_08A0029C;
    case 38u: goto L_08A002A8;
    case 39u: goto L_08A002B8;
    case 40u: goto L_08A002C4;
    case 41u: goto L_08A002D4;
    case 42u: goto L_08A002E0;
    case 43u: goto L_08A002F0;
    case 44u: goto L_08A002F8;
    case 45u: goto L_08A00308;
    case 46u: goto L_08A0031C;
    case 47u: goto L_08A0032C;
    case 48u: goto L_08A00338;
    case 49u: goto L_08A00354;
    case 50u: goto L_08A00364;
    case 51u: goto L_08A00374;
    case 52u: goto L_08A00378;
    case 53u: goto L_08A00384;
    case 54u: goto L_08A00398;
    case 55u: goto L_08A003A8;
    case 56u: goto L_08A003AC;
    case 57u: goto L_08A003DC;
    case 58u: goto L_08A003EC;
    case 59u: goto L_08A00400;
    case 60u: goto L_08A00410;
    case 61u: goto L_08A0041C;
    case 62u: goto L_08A00438;
    case 63u: goto L_08A00444;
    case 64u: goto L_08A00450;
    case 65u: goto L_08A0045C;
    case 66u: goto L_08A00468;
    case 67u: goto L_08A00478;
    case 68u: goto L_08A00488;
    case 69u: goto L_08A0048C;
    case 70u: goto L_08A00498;
    case 71u: goto L_08A004AC;
    case 72u: goto L_08A004BC;
    case 73u: goto L_08A004C0;
    case 74u: goto L_08A004F0;
    case 75u: goto L_08A00508;
    case 76u: goto L_08A0052C;
    case 77u: goto L_08A0054C;
    case 78u: goto L_08A00558;
    case 79u: goto L_08A00568;
    case 80u: goto L_08A00578;
    case 81u: goto L_08A0058C;
    case 82u: goto L_08A00598;
    case 83u: goto L_08A005A4;
    case 84u: goto L_08A005B0;
    case 85u: goto L_08A005BC;
    case 86u: goto L_08A005CC;
    case 87u: goto L_08A005F4;
    case 88u: goto L_08A00604;
    case 89u: goto L_08A00614;
    case 90u: goto L_08A00628;
    case 91u: goto L_08A00634;
    case 92u: goto L_08A00640;
    case 93u: goto L_08A0064C;
    case 94u: goto L_08A00658;
    case 95u: goto L_08A00664;
    case 96u: goto L_08A0068C;
    case 97u: goto L_08A00694;
    case 98u: goto L_08A006A0;
    case 99u: goto L_08A006BC;
    case 100u: goto L_08A006C8;
    case 101u: goto L_08A006D4;
    case 102u: goto L_08A006E0;
    case 103u: goto L_08A006EC;
    case 104u: goto L_08A00700;
    case 105u: goto L_08A0070C;
    case 106u: goto L_08A00718;
    case 107u: goto L_08A00724;
    case 108u: goto L_08A00738;
    case 109u: goto L_08A00744;
    case 110u: goto L_08A00750;
    case 111u: goto L_08A0075C;
    case 112u: goto L_08A00774;
    case 113u: goto L_08A00794;
    case 114u: goto L_08A007A8;
    case 115u: goto L_08A007B8;
    case 116u: goto L_08A007D0;
    case 117u: goto L_08A007D8;
    case 118u: goto L_08A007E8;
    case 119u: goto L_08A00808;
    case 120u: goto L_08A00830;
    case 121u: goto L_08A00840;
    case 122u: goto L_08A00848;
    case 123u: goto L_08A00858;
    case 124u: goto L_08A00868;
    case 125u: goto L_08A00870;
    case 126u: goto L_08A00888;
    case 127u: goto L_08A0089C;
    case 128u: goto L_08A008A8;
    case 129u: goto L_08A008C0;
    case 130u: goto L_08A008D4;
    case 131u: goto L_08A008E0;
    case 132u: goto L_08A00904;
    case 133u: goto L_08A0090C;
    case 134u: goto L_08A00920;
    case 135u: goto L_08A0092C;
    case 136u: goto L_08A00938;
    case 137u: goto L_08A00944;
    case 138u: goto L_08A00954;
    case 139u: goto L_08A00960;
    case 140u: goto L_08A00970;
    case 141u: goto L_08A0097C;
    case 142u: goto L_08A0098C;
    case 143u: goto L_08A00998;
    case 144u: goto L_08A009A8;
    case 145u: goto L_08A009B4;
    case 146u: goto L_08A009D8;
    case 147u: goto L_08A009E0;
    case 148u: goto L_08A009EC;
    case 149u: goto L_08A00A00;
    case 150u: goto L_08A00A10;
    case 151u: goto L_08A00A2C;
    case 152u: goto L_08A00A3C;
    case 153u: goto L_08A00A54;
    case 154u: goto L_08A00A68;
    case 155u: goto L_08A00A78;
    case 156u: goto L_08A00A94;
    case 157u: goto L_08A00AA4;
    case 158u: goto L_08A00AB4;
    case 159u: goto L_08A00ABC;
    case 160u: goto L_08A00AD4;
    case 161u: goto L_08A00AE8;
    case 162u: goto L_08A00AF8;
    case 163u: goto L_08A00B00;
    case 164u: goto L_08A00B1C;
    case 165u: goto L_08A00B44;
    case 166u: goto L_08A00B50;
    case 167u: goto L_08A00B60;
    case 168u: goto L_08A00B6C;
    case 169u: goto L_08A00B7C;
    case 170u: goto L_08A00B88;
    case 171u: goto L_08A00B94;
    case 172u: goto L_08A00BC0;
    case 173u: goto L_08A00BD4;
    case 174u: goto L_08A00BE4;
    case 175u: goto L_08A00C18;
    case 176u: goto L_08A00C24;
    case 177u: goto L_08A00C40;
    case 178u: goto L_08A00C4C;
    case 179u: goto L_08A00C60;
    case 180u: goto L_08A00C74;
    case 181u: goto L_08A00C8C;
    case 182u: goto L_08A00CA4;
    case 183u: goto L_08A00CC8;
    case 184u: goto L_08A00CD8;
    case 185u: goto L_08A00CE4;
    case 186u: goto L_08A00CF8;
    case 187u: goto L_08A00D04;
    case 188u: goto L_08A00D20;
    case 189u: goto L_08A00D30;
    case 190u: goto L_08A00D38;
    case 191u: goto L_08A00D4C;
    case 192u: goto L_08A00D60;
    case 193u: goto L_08A00D78;
    case 194u: goto L_08A00D8C;
    case 195u: goto L_08A00DB4;
    case 196u: goto L_08A00DC4;
    case 197u: goto L_08A00DE0;
    case 198u: goto L_08A00DF4;
    case 199u: goto L_08A00E08;
    case 200u: goto L_08A00E10;
    case 201u: goto L_08A00E20;
    case 202u: goto L_08A00E38;
    case 203u: goto L_08A00E44;
    case 204u: goto L_08A00E4C;
    case 205u: goto L_08A00E5C;
    case 206u: goto L_08A00E64;
    case 207u: goto L_08A00E78;
    case 208u: goto L_08A00E80;
    case 209u: goto L_08A00E90;
    case 210u: goto L_08A00E98;
    case 211u: goto L_08A00EAC;
    case 212u: goto L_08A00EC4;
    case 213u: goto L_08A00ED8;
    case 214u: goto L_08A00EE8;
    case 215u: goto L_08A00EF8;
    case 216u: goto L_08A00F18;
    case 217u: goto L_08A00F30;
    case 218u: goto L_08A00F40;
    case 219u: goto L_08A00F48;
    case 220u: goto L_08A00F78;
    case 221u: goto L_08A00F8C;
    case 222u: goto L_08A00F9C;
    case 223u: goto L_08A00FA4;
    case 224u: goto L_08A00FBC;
    case 225u: goto L_08A00FD0;
    case 226u: goto L_08A00FE0;
    case 227u: goto L_08A00FE8;
    case 228u: goto L_08A01000;
    case 229u: goto L_08A01014;
    case 230u: goto L_08A01024;
    case 231u: goto L_08A01044;
    case 232u: goto L_08A01050;
    case 233u: goto L_08A01060;
    case 234u: goto L_08A01074;
    case 235u: goto L_08A010A0;
    case 236u: goto L_08A010B0;
    case 237u: goto L_08A010B8;
    case 238u: goto L_08A010CC;
    case 239u: goto L_08A010E4;
    case 240u: goto L_08A010F4;
    case 241u: goto L_08A01104;
    case 242u: goto L_08A01110;
    case 243u: goto L_08A0111C;
    case 244u: goto L_08A01128;
    case 245u: goto L_08A01140;
    case 246u: goto L_08A01150;
    case 247u: goto L_08A01160;
    case 248u: goto L_08A01170;
    case 249u: goto L_08A01180;
    case 250u: goto L_08A0118C;
    case 251u: goto L_08A0119C;
    case 252u: goto L_08A011A8;
    case 253u: goto L_08A011C8;
    case 254u: goto L_08A011D4;
    case 255u: goto L_08A011FC;
    case 256u: goto L_08A01204;
    case 257u: goto L_08A01214;
    case 258u: goto L_08A01238;
    case 259u: goto L_08A0124C;
    case 260u: goto L_08A01260;
    case 261u: goto L_08A01270;
    case 262u: goto L_08A01284;
    case 263u: goto L_08A01298;
    case 264u: goto L_08A012A4;
    case 265u: goto L_08A012B4;
    case 266u: goto L_08A012BC;
    case 267u: goto L_08A012CC;
    case 268u: goto L_08A012E4;
    case 269u: goto L_08A012F0;
    case 270u: goto L_08A01304;
    case 271u: goto L_08A01318;
    case 272u: goto L_08A0132C;
    case 273u: goto L_08A0133C;
    case 274u: goto L_08A0134C;
    case 275u: goto L_08A01350;
    case 276u: goto L_08A0135C;
    case 277u: goto L_08A01370;
    case 278u: goto L_08A01380;
    case 279u: goto L_08A01384;
    case 280u: goto L_08A013A0;
    case 281u: goto L_08A013C8;
    case 282u: goto L_08A013E4;
    case 283u: goto L_08A01418;
    case 284u: goto L_08A0143C;
    case 285u: goto L_08A01454;
    case 286u: goto L_08A01470;
    case 287u: goto L_08A0147C;
    case 288u: goto L_08A0148C;
    case 289u: goto L_08A01494;
    case 290u: goto L_08A014C4;
    case 291u: goto L_08A014D4;
    case 292u: goto L_08A014E0;
    case 293u: goto L_08A014F0;
    case 294u: goto L_08A014F8;
    case 295u: goto L_08A01508;
    case 296u: goto L_08A01514;
    case 297u: goto L_08A01524;
    case 298u: goto L_08A0152C;
    case 299u: goto L_08A01540;
    case 300u: goto L_08A01554;
    case 301u: goto L_08A01568;
    case 302u: goto L_08A0157C;
    case 303u: goto L_08A015A4;
    case 304u: goto L_08A015B0;
    case 305u: goto L_08A015C0;
    case 306u: goto L_08A015C8;
    case 307u: goto L_08A015DC;
    case 308u: goto L_08A015F4;
    case 309u: goto L_08A01620;
    case 310u: goto L_08A01644;
    case 311u: goto L_08A01668;
    case 312u: goto L_08A01678;
    case 313u: goto L_08A0169C;
    case 314u: goto L_08A016B0;
    case 315u: goto L_08A016C8;
    case 316u: goto L_08A016D8;
    case 317u: goto L_08A016E0;
    case 318u: goto L_08A016E8;
    case 319u: goto L_08A016F8;
    case 320u: goto L_08A01700;
    case 321u: goto L_08A01710;
    case 322u: goto L_08A01718;
    case 323u: goto L_08A01730;
    case 324u: goto L_08A01744;
    case 325u: goto L_08A0174C;
    case 326u: goto L_08A01760;
    case 327u: goto L_08A0176C;
    case 328u: goto L_08A01778;
    case 329u: goto L_08A0178C;
    case 330u: goto L_08A01794;
    case 331u: goto L_08A017A8;
    case 332u: goto L_08A017C0;
    case 333u: goto L_08A017DC;
    case 334u: goto L_08A017F8;
    case 335u: goto L_08A01814;
    case 336u: goto L_08A01828;
    case 337u: goto L_08A0184C;
    case 338u: goto L_08A01858;
    case 339u: goto L_08A01870;
    case 340u: goto L_08A0189C;
    case 341u: goto L_08A018CC;
    case 342u: goto L_08A018DC;
    case 343u: goto L_08A018EC;
    case 344u: goto L_08A018FC;
    case 345u: goto L_08A01904;
    case 346u: goto L_08A0190C;
    case 347u: goto L_08A01938;
    case 348u: goto L_08A01948;
    case 349u: goto L_08A01950;
    case 350u: goto L_08A01960;
    case 351u: goto L_08A01990;
    case 352u: goto L_08A019A4;
    case 353u: goto L_08A019B8;
    case 354u: goto L_08A019EC;
    case 355u: goto L_08A019F8;
    case 356u: goto L_08A01A14;
    case 357u: goto L_08A01A28;
    case 358u: goto L_08A01A3C;
    case 359u: goto L_08A01A74;
    case 360u: goto L_08A01AE0;
    case 361u: goto L_08A01AEC;
    case 362u: goto L_08A01B0C;
    case 363u: goto L_08A01B1C;
    case 364u: goto L_08A01B28;
    case 365u: goto L_08A01B40;
    case 366u: goto L_08A01B4C;
    case 367u: goto L_08A01B60;
    case 368u: goto L_08A01B6C;
    case 369u: goto L_08A01B80;
    case 370u: goto L_08A01B90;
    case 371u: goto L_08A01B9C;
    case 372u: goto L_08A01BB4;
    case 373u: goto L_08A01BC0;
    case 374u: goto L_08A01BD4;
    case 375u: goto L_08A01BE0;
    case 376u: goto L_08A01BF0;
    case 377u: goto L_08A01C00;
    case 378u: goto L_08A01C20;
    case 379u: goto L_08A01C34;
    case 380u: goto L_08A01C64;
    case 381u: goto L_08A01C78;
    case 382u: goto L_08A01C8C;
    case 383u: goto L_08A01CF0;
    case 384u: goto L_08A01D10;
    case 385u: goto L_08A01D40;
    case 386u: goto L_08A01D60;
    case 387u: goto L_08A01D74;
    case 388u: goto L_08A01D94;
    case 389u: goto L_08A01DA8;
    case 390u: goto L_08A01DC8;
    case 391u: goto L_08A01DE0;
    case 392u: goto L_08A01DEC;
    case 393u: goto L_08A01DF8;
    case 394u: goto L_08A01E0C;
    case 395u: goto L_08A01E14;
    case 396u: goto L_08A01E30;
    case 397u: goto L_08A01E40;
    case 398u: goto L_08A01E50;
    case 399u: goto L_08A01E7C;
    case 400u: goto L_08A01E90;
    case 401u: goto L_08A01E9C;
    case 402u: goto L_08A01EA8;
    case 403u: goto L_08A01EB8;
    case 404u: goto L_08A01EDC;
    case 405u: goto L_08A01F40;
    case 406u: goto L_08A01F4C;
    case 407u: goto L_08A01F64;
    case 408u: goto L_08A01F78;
    case 409u: goto L_08A01FE0;
    case 410u: goto L_08A01FEC;
    case 411u: goto L_08A01FFC;
    case 412u: goto L_08A02014;
    case 413u: goto L_08A02024;
    case 414u: goto L_08A02034;
    case 415u: goto L_08A02058;
    case 416u: goto L_08A02074;
    case 417u: goto L_08A02084;
    case 418u: goto L_08A02090;
    case 419u: goto L_08A020AC;
    case 420u: goto L_08A020B8;
    case 421u: goto L_08A020C8;
    case 422u: goto L_08A020DC;
    case 423u: goto L_08A020E4;
    case 424u: goto L_08A020FC;
    case 425u: goto L_08A02120;
    case 426u: goto L_08A021C4;
    case 427u: goto L_08A021D0;
    case 428u: goto L_08A021EC;
    case 429u: goto L_08A02200;
    case 430u: goto L_08A02220;
    case 431u: goto L_08A0223C;
    case 432u: goto L_08A0224C;
    case 433u: goto L_08A02270;
    case 434u: goto L_08A02284;
    case 435u: goto L_08A022BC;
    case 436u: goto L_08A022C8;
    case 437u: goto L_08A022E4;
    case 438u: goto L_08A022F8;
    case 439u: goto L_08A0230C;
    case 440u: goto L_08A02380;
    case 441u: goto L_08A0238C;
    case 442u: goto L_08A023B8;
    case 443u: goto L_08A023CC;
    case 444u: goto L_08A023D8;
    case 445u: goto L_08A023E8;
    case 446u: goto L_08A023F8;
    case 447u: goto L_08A02424;
    case 448u: goto L_08A02438;
    case 449u: goto L_08A02478;
    case 450u: goto L_08A02484;
    case 451u: goto L_08A024A0;
    case 452u: goto L_08A024BC;
    case 453u: goto L_08A024DC;
    case 454u: goto L_08A024F0;
    case 455u: goto L_08A02504;
    case 456u: goto L_08A0250C;
    case 457u: goto L_08A02518;
    case 458u: goto L_08A02534;
    case 459u: goto L_08A025A8;
    case 460u: goto L_08A025CC;
    case 461u: goto L_08A025D8;
    case 462u: goto L_08A025E4;
    case 463u: goto L_08A025F8;
    case 464u: goto L_08A02608;
    case 465u: goto L_08A02614;
    case 466u: goto L_08A02688;
    case 467u: goto L_08A02694;
    case 468u: goto L_08A0269C;
    case 469u: goto L_08A026A8;
    case 470u: goto L_08A026BC;
    case 471u: goto L_08A026CC;
    case 472u: goto L_08A026D8;
    case 473u: goto L_08A026EC;
    case 474u: goto L_08A026F8;
    case 475u: goto L_08A02718;
    case 476u: goto L_08A02730;
    case 477u: goto L_08A02748;
    case 478u: goto L_08A02778;
    case 479u: goto L_08A0278C;
    case 480u: goto L_08A027A0;
    case 481u: goto L_08A02800;
    case 482u: goto L_08A0280C;
    case 483u: goto L_08A0282C;
    case 484u: goto L_08A02838;
    case 485u: goto L_08A0284C;
    case 486u: goto L_08A02870;
    case 487u: goto L_08A0287C;
    case 488u: goto L_08A02890;
    case 489u: goto L_08A02898;
    case 490u: goto L_08A028C0;
    case 491u: goto L_08A028E0;
    case 492u: goto L_08A02908;
    case 493u: goto L_08A02928;
    case 494u: goto L_08A02990;
    case 495u: goto L_08A029A8;
    case 496u: goto L_08A029B4;
    case 497u: goto L_08A029D0;
    case 498u: goto L_08A029EC;
    case 499u: goto L_08A02A08;
    case 500u: goto L_08A02A18;
    case 501u: goto L_08A02A3C;
    case 502u: goto L_08A02A50;
    case 503u: goto L_08A02A98;
    case 504u: goto L_08A02ACC;
    case 505u: goto L_08A02B30;
    case 506u: goto L_08A02B38;
    case 507u: goto L_08A02B64;
    case 508u: goto L_08A02B6C;
    case 509u: goto L_08A02BB0;
    case 510u: goto L_08A02BBC;
    case 511u: goto L_08A02BCC;
    case 512u: goto L_08A02BD8;
    case 513u: goto L_08A02C0C;
    case 514u: goto L_08A02C20;
    case 515u: goto L_08A02C54;
    case 516u: goto L_08A02C60;
    case 517u: goto L_08A02C7C;
    case 518u: goto L_08A02C98;
    case 519u: goto L_08A02CB0;
    case 520u: goto L_08A02CC0;
    case 521u: goto L_08A02CC8;
    case 522u: goto L_08A02CD8;
    case 523u: goto L_08A02CE8;
    case 524u: goto L_08A02CFC;
    case 525u: goto L_08A02D64;
    case 526u: goto L_08A02D70;
    case 527u: goto L_08A02DAC;
    case 528u: goto L_08A02DC0;
    case 529u: goto L_08A02DF0;
    case 530u: goto L_08A02E08;
    case 531u: goto L_08A02E20;
    case 532u: goto L_08A02E34;
    case 533u: goto L_08A02E58;
    case 534u: goto L_08A02E8C;
    case 535u: goto L_08A02E98;
    case 536u: goto L_08A02EB4;
    case 537u: goto L_08A02ED4;
    case 538u: goto L_08A02F0C;
    case 539u: goto L_08A02F34;
    case 540u: goto L_08A02F40;
    case 541u: goto L_08A02F48;
    case 542u: goto L_08A02F80;
    case 543u: goto L_08A02FA8;
    case 544u: goto L_08A02FB4;
    case 545u: goto L_08A02FBC;
    case 546u: goto L_08A02FF4;
    case 547u: goto L_08A0301C;
    case 548u: goto L_08A03028;
    case 549u: goto L_08A03030;
    case 550u: goto L_08A0303C;
    case 551u: goto L_08A03058;
    case 552u: goto L_08A03070;
    case 553u: goto L_08A0308C;
    case 554u: goto L_08A030A0;
    case 555u: goto L_08A030AC;
    case 556u: goto L_08A030F0;
    case 557u: goto L_08A03118;
    case 558u: goto L_08A03124;
    case 559u: goto L_08A0312C;
    case 560u: goto L_08A03160;
    case 561u: goto L_08A03188;
    case 562u: goto L_08A03194;
    case 563u: goto L_08A0319C;
    case 564u: goto L_08A031D0;
    case 565u: goto L_08A031F8;
    case 566u: goto L_08A03204;
    case 567u: goto L_08A0320C;
    case 568u: goto L_08A03218;
    case 569u: goto L_08A03234;
    case 570u: goto L_08A03244;
    case 571u: goto L_08A03268;
    case 572u: goto L_08A0329C;
    case 573u: goto L_08A032A8;
    case 574u: goto L_08A032C4;
    case 575u: goto L_08A032E4;
    case 576u: goto L_08A0331C;
    case 577u: goto L_08A03344;
    case 578u: goto L_08A03350;
    case 579u: goto L_08A03358;
    case 580u: goto L_08A03390;
    case 581u: goto L_08A033B8;
    case 582u: goto L_08A033C4;
    case 583u: goto L_08A033CC;
    case 584u: goto L_08A03404;
    case 585u: goto L_08A0342C;
    case 586u: goto L_08A03438;
    case 587u: goto L_08A03440;
    case 588u: goto L_08A0344C;
    case 589u: goto L_08A03498;
    case 590u: goto L_08A034A8;
    case 591u: goto L_08A034B8;
    case 592u: goto L_08A034C8;
    case 593u: goto L_08A034E4;
    case 594u: goto L_08A034F4;
    case 595u: goto L_08A03520;
    case 596u: goto L_08A0352C;
    case 597u: goto L_08A03538;
    case 598u: goto L_08A03554;
    case 599u: goto L_08A03564;
    case 600u: goto L_08A0357C;
    case 601u: goto L_08A0358C;
    case 602u: goto L_08A0359C;
    case 603u: goto L_08A035B0;
    case 604u: goto L_08A035C4;
    case 605u: goto L_08A035D4;
    case 606u: goto L_08A035DC;
    case 607u: goto L_08A035EC;
    case 608u: goto L_08A03610;
    case 609u: goto L_08A03620;
    case 610u: goto L_08A03634;
    case 611u: goto L_08A03644;
    case 612u: goto L_08A03654;
    case 613u: goto L_08A03664;
    case 614u: goto L_08A03674;
    case 615u: goto L_08A03684;
    case 616u: goto L_08A03694;
    case 617u: goto L_08A0369C;
    case 618u: goto L_08A036AC;
    case 619u: goto L_08A036BC;
    case 620u: goto L_08A036CC;
    case 621u: goto L_08A036DC;
    case 622u: goto L_08A036EC;
    case 623u: goto L_08A036F4;
    case 624u: goto L_08A03704;
    case 625u: goto L_08A03714;
    case 626u: goto L_08A03724;
    case 627u: goto L_08A03734;
    case 628u: goto L_08A03744;
    case 629u: goto L_08A0374C;
    case 630u: goto L_08A0375C;
    case 631u: goto L_08A0376C;
    case 632u: goto L_08A0377C;
    case 633u: goto L_08A0378C;
    case 634u: goto L_08A0379C;
    case 635u: goto L_08A037A4;
    case 636u: goto L_08A037B4;
    case 637u: goto L_08A037C4;
    case 638u: goto L_08A037D4;
    case 639u: goto L_08A037E4;
    case 640u: goto L_08A037F4;
    case 641u: goto L_08A03804;
    case 642u: goto L_08A0380C;
    case 643u: goto L_08A0381C;
    case 644u: goto L_08A0382C;
    case 645u: goto L_08A0383C;
    case 646u: goto L_08A0384C;
    case 647u: goto L_08A0385C;
    case 648u: goto L_08A03864;
    case 649u: goto L_08A03874;
    case 650u: goto L_08A03884;
    case 651u: goto L_08A03894;
    case 652u: goto L_08A038A4;
    case 653u: goto L_08A038B4;
    case 654u: goto L_08A038BC;
    case 655u: goto L_08A038CC;
    case 656u: goto L_08A038DC;
    case 657u: goto L_08A038EC;
    case 658u: goto L_08A038FC;
    case 659u: goto L_08A0390C;
    case 660u: goto L_08A03914;
    case 661u: goto L_08A03924;
    case 662u: goto L_08A0392C;
    case 663u: goto L_08A0393C;
    case 664u: goto L_08A03944;
    case 665u: goto L_08A03954;
    case 666u: goto L_08A0395C;
    case 667u: goto L_08A0396C;
    case 668u: goto L_08A03974;
    case 669u: goto L_08A03984;
    case 670u: goto L_08A0398C;
    case 671u: goto L_08A0399C;
    case 672u: goto L_08A039A4;
    case 673u: goto L_08A039B4;
    case 674u: goto L_08A039BC;
    case 675u: goto L_08A039CC;
    case 676u: goto L_08A039D4;
    case 677u: goto L_08A039E4;
    case 678u: goto L_08A039EC;
    case 679u: goto L_08A039FC;
    case 680u: goto L_08A03A04;
    case 681u: goto L_08A03A14;
    case 682u: goto L_08A03A1C;
    case 683u: goto L_08A03A2C;
    case 684u: goto L_08A03A34;
    case 685u: goto L_08A03A44;
    case 686u: goto L_08A03A4C;
    case 687u: goto L_08A03A5C;
    case 688u: goto L_08A03A64;
    case 689u: goto L_08A03A74;
    case 690u: goto L_08A03A7C;
    case 691u: goto L_08A03A8C;
    case 692u: goto L_08A03A94;
    case 693u: goto L_08A03AA4;
    case 694u: goto L_08A03AAC;
    case 695u: goto L_08A03ABC;
    case 696u: goto L_08A03AC4;
    case 697u: goto L_08A03AD4;
    case 698u: goto L_08A03ADC;
    case 699u: goto L_08A03AEC;
    case 700u: goto L_08A03AF4;
    case 701u: goto L_08A03B04;
    case 702u: goto L_08A03B0C;
    case 703u: goto L_08A03B1C;
    case 704u: goto L_08A03B24;
    case 705u: goto L_08A03B34;
    case 706u: goto L_08A03B3C;
    case 707u: goto L_08A03B4C;
    case 708u: goto L_08A03B54;
    case 709u: goto L_08A03B64;
    case 710u: goto L_08A03B6C;
    case 711u: goto L_08A03B7C;
    case 712u: goto L_08A03B84;
    case 713u: goto L_08A03B94;
    case 714u: goto L_08A03B9C;
    case 715u: goto L_08A03BAC;
    case 716u: goto L_08A03BB4;
    case 717u: goto L_08A03BC4;
    case 718u: goto L_08A03BCC;
    case 719u: goto L_08A03BDC;
    case 720u: goto L_08A03BE4;
    case 721u: goto L_08A03BF4;
    case 722u: goto L_08A03BFC;
    case 723u: goto L_08A03C0C;
    case 724u: goto L_08A03C14;
    case 725u: goto L_08A03C24;
    case 726u: goto L_08A03C2C;
    case 727u: goto L_08A03C3C;
    case 728u: goto L_08A03C4C;
    case 729u: goto L_08A03C70;
    case 730u: goto L_08A03C80;
    case 731u: goto L_08A03C8C;
    case 732u: goto L_08A03CB4;
    case 733u: goto L_08A03CC4;
    case 734u: goto L_08A03CDC;
    case 735u: goto L_08A03CFC;
    case 736u: goto L_08A03D40;
    case 737u: goto L_08A03D50;
    case 738u: goto L_08A03D84;
    case 739u: goto L_08A03D94;
    case 740u: goto L_08A03DB8;
    case 741u: goto L_08A03DD4;
    case 742u: goto L_08A03DF4;
    case 743u: goto L_08A03E08;
    case 744u: goto L_08A03E14;
    case 745u: goto L_08A03E40;
    case 746u: goto L_08A03E50;
    case 747u: goto L_08A03E60;
    case 748u: goto L_08A03E68;
    case 749u: goto L_08A03E78;
    case 750u: goto L_08A03E88;
    case 751u: goto L_08A03E90;
    case 752u: goto L_08A03E9C;
    case 753u: goto L_08A03EAC;
    case 754u: goto L_08A03EBC;
    case 755u: goto L_08A03EC8;
    case 756u: goto L_08A03ED8;
    case 757u: goto L_08A03EE8;
    case 758u: goto L_08A03F08;
    case 759u: goto L_08A03F14;
    case 760u: goto L_08A03F28;
    case 761u: goto L_08A03F30;
    case 762u: goto L_08A03F3C;
    case 763u: goto L_08A03F68;
    case 764u: goto L_08A03F7C;
    case 765u: goto L_08A03F98;
    case 766u: goto L_08A03FB0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A00000:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4576));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1532));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0007C;
      }
      goto L_08A00058;
    }
L_08A00058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00088;
      }
      goto L_08A0007C;
    }
L_08A0007C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00088;
L_08A00088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A000BC;
      }
      goto L_08A000A4;
    }
L_08A000A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A000BC;
L_08A000BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A00124;
      }
      goto L_08A000CC;
    }
L_08A000CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 386u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00124;
      }
      goto L_08A000E0;
    }
L_08A000E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 387u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00124;
      }
      goto L_08A000F4;
    }
L_08A000F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 93u, 0x08A10988u>(ctx, &aot_mem) && ctx.pc == 0x08A00104u) goto L_08A00104;
    return;
L_08A00104:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00124;
      }
      goto L_08A00110;
    }
L_08A00110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A00124;
L_08A00124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 485u, 0x08A0EEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A00130u) goto L_08A00130;
    return;
L_08A00130:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A00158;
      }
      goto L_08A00144;
    }
L_08A00144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A001A8;
      }
      goto L_08A00150;
    }
L_08A00150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00170;
      }
      goto L_08A00158;
    }
L_08A00158:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0018C;
      }
      goto L_08A00168;
    }
L_08A00168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A001A8;
      }
      goto L_08A00170;
    }
L_08A00170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0017Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 493u, 0x08A0EF80u>(ctx, &aot_mem) && ctx.pc == 0x08A0017Cu) goto L_08A0017C;
    return;
L_08A0017C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A001BC;
      }
      goto L_08A0018C;
    }
L_08A0018C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 513u, 0x08A0F12Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00198u) goto L_08A00198;
    return;
L_08A00198:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A001BC;
      }
      goto L_08A001A8;
    }
L_08A001A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A001B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 509u, 0x08A0F0E4u>(ctx, &aot_mem) && ctx.pc == 0x08A001B4u) goto L_08A001B4;
    return;
L_08A001B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A001BC;
L_08A001BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(117) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01744;
      }
      goto L_08A001D8;
    }
L_08A001D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A001F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    goto L_08A00200;
L_08A00200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 268u, 0x08A09B90u>(ctx, &aot_mem) && ctx.pc == 0x08A00210u) goto L_08A00210;
    return;
L_08A00210:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00234;
      }
      goto L_08A0021C;
    }
L_08A0021C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A0022Cu);
    // nop
    goto L_08A034F4;
L_08A0022C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00234;
    }
L_08A00234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A002A8;
      }
      goto L_08A00248;
    }
L_08A00248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A10D04u>(ctx, &aot_mem) && ctx.pc == 0x08A00258u) goto L_08A00258;
    return;
L_08A00258:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A002A8;
      }
      goto L_08A00264;
    }
L_08A00264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00274u);
    // nop
    goto L_08A01C34;
L_08A00274:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A002A8;
      }
      goto L_08A00280;
    }
L_08A00280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A0029Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 169u, 0x089FD2E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0029Cu) goto L_08A0029C;
    return;
L_08A0029C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A002A8;
L_08A002A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A002B8u);
    // nop
    goto L_08A0189C;
L_08A002B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A002C4;
    }
L_08A002C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A002D4u);
    // nop
    goto L_08A023F8;
L_08A002D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A002F8;
      }
      goto L_08A002E0;
    }
L_08A002E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A002F0u);
    // nop
    goto L_08A034F4;
L_08A002F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A002F8;
    }
L_08A002F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 538u, 0x08A0F420u>(ctx, &aot_mem) && ctx.pc == 0x08A00308u) goto L_08A00308;
    return;
L_08A00308:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4098u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0032C;
      }
      goto L_08A0031C;
    }
L_08A0031C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A003EC;
      }
      goto L_08A0032C;
    }
L_08A0032C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A00338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 243u, 0x08A0DAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A00338u) goto L_08A00338;
    return;
L_08A00338:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00354;
    }
L_08A00354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00374;
      }
      goto L_08A00364;
    }
L_08A00364:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00378;
      }
      goto L_08A00374;
    }
L_08A00374:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    goto L_08A00378;
L_08A00378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 592u, 0x08A0FA10u>(ctx, &aot_mem) && ctx.pc == 0x08A00384u) goto L_08A00384;
    return;
L_08A00384:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A003A8;
      }
      goto L_08A00398;
    }
L_08A00398:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A003AC;
      }
      goto L_08A003A8;
    }
L_08A003A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    goto L_08A003AC;
L_08A003AC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A003DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A003DCu) goto L_08A003DC;
    return;
L_08A003DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00694;
      }
      goto L_08A003EC;
    }
L_08A003EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00410;
      }
      goto L_08A00400;
    }
L_08A00400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00568;
      }
      goto L_08A00410;
    }
L_08A00410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A0041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0DCA8u>(ctx, &aot_mem) && ctx.pc == 0x08A0041Cu) goto L_08A0041C;
    return;
L_08A0041C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00468;
      }
      goto L_08A00438;
    }
L_08A00438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A00444u) goto L_08A00444;
    return;
L_08A00444:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00468;
      }
      goto L_08A00450;
    }
L_08A00450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0045Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 466u, 0x08A0EC34u>(ctx, &aot_mem) && ctx.pc == 0x08A0045Cu) goto L_08A0045C;
    return;
L_08A0045C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00468;
    }
L_08A00468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00488;
      }
      goto L_08A00478;
    }
L_08A00478:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0048C;
      }
      goto L_08A00488;
    }
L_08A00488:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    goto L_08A0048C;
L_08A0048C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 592u, 0x08A0FA10u>(ctx, &aot_mem) && ctx.pc == 0x08A00498u) goto L_08A00498;
    return;
L_08A00498:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A004BC;
      }
      goto L_08A004AC;
    }
L_08A004AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A004C0;
      }
      goto L_08A004BC;
    }
L_08A004BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    goto L_08A004C0;
L_08A004C0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A004F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A004F0u) goto L_08A004F0;
    return;
L_08A004F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00558;
      }
      goto L_08A00508;
    }
L_08A00508:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7528)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00558;
      }
      goto L_08A0052C;
    }
L_08A0052C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7528)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00558;
      }
      goto L_08A0054C;
    }
L_08A0054C:
    ctx.gpr[4] = (0u | 224u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A00558;
L_08A00558:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00694;
      }
      goto L_08A00568;
    }
L_08A00568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00604;
      }
      goto L_08A00578;
    }
L_08A00578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A005BC;
      }
      goto L_08A0058C;
    }
L_08A0058C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A00598u) goto L_08A00598;
    return;
L_08A00598:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A005BC;
      }
      goto L_08A005A4;
    }
L_08A005A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A005B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 466u, 0x08A0EC34u>(ctx, &aot_mem) && ctx.pc == 0x08A005B0u) goto L_08A005B0;
    return;
L_08A005B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A005BC;
    }
L_08A005BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A005CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 359u, 0x08A0E2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A005CCu) goto L_08A005CC;
    return;
L_08A005CC:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (0u | 14u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A005F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A005F4u) goto L_08A005F4;
    return;
L_08A005F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00694;
      }
      goto L_08A00604;
    }
L_08A00604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 4097u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00694;
      }
      goto L_08A00614;
    }
L_08A00614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00658;
      }
      goto L_08A00628;
    }
L_08A00628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A00634u) goto L_08A00634;
    return;
L_08A00634:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00658;
      }
      goto L_08A00640;
    }
L_08A00640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0064Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 466u, 0x08A0EC34u>(ctx, &aot_mem) && ctx.pc == 0x08A0064Cu) goto L_08A0064C;
    return;
L_08A0064C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00658;
    }
L_08A00658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A00664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 295u, 0x08A0DE58u>(ctx, &aot_mem) && ctx.pc == 0x08A00664u) goto L_08A00664;
    return;
L_08A00664:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A0068Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A0068Cu) goto L_08A0068C;
    return;
L_08A0068C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A00694;
L_08A00694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A006A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 154u, 0x08A0D4F8u>(ctx, &aot_mem) && ctx.pc == 0x08A006A0u) goto L_08A006A0;
    return;
L_08A006A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A006EC;
      }
      goto L_08A006BC;
    }
L_08A006BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A006C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A006C8u) goto L_08A006C8;
    return;
L_08A006C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A006EC;
      }
      goto L_08A006D4;
    }
L_08A006D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A006E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 466u, 0x08A0EC34u>(ctx, &aot_mem) && ctx.pc == 0x08A006E0u) goto L_08A006E0;
    return;
L_08A006E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A006EC;
    }
L_08A006EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00724;
      }
      goto L_08A00700;
    }
L_08A00700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0070Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A0070Cu) goto L_08A0070C;
    return;
L_08A0070C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00724;
      }
      goto L_08A00718;
    }
L_08A00718:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00724;
L_08A00724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 384u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0075C;
      }
      goto L_08A00738;
    }
L_08A00738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A00744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 48u, 0x08A10448u>(ctx, &aot_mem) && ctx.pc == 0x08A00744u) goto L_08A00744;
    return;
L_08A00744:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0075C;
      }
      goto L_08A00750;
    }
L_08A00750:
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A0075C;
L_08A0075C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 593u, 0x08A07630u>(ctx, &aot_mem) && ctx.pc == 0x08A00774u) goto L_08A00774;
    return;
L_08A00774:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A007D8;
      }
      goto L_08A00794;
    }
L_08A00794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 384u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A007D8;
      }
      goto L_08A007A8;
    }
L_08A007A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 4097u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A007D8;
      }
      goto L_08A007B8;
    }
L_08A007B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A007D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 174u, 0x08A11144u>(ctx, &aot_mem) && ctx.pc == 0x08A007D0u) goto L_08A007D0;
    return;
L_08A007D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A007D8;
L_08A007D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0090C;
      }
      goto L_08A007E8;
    }
L_08A007E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(346));
    ctx.gpr[7] = (0u | 7u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A00808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 169u, 0x089FD2E4u>(ctx, &aot_mem) && ctx.pc == 0x08A00808u) goto L_08A00808;
    return;
L_08A00808:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 385 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00848;
      }
      goto L_08A00830;
    }
L_08A00830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 384 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A008D4;
      }
      goto L_08A00840;
    }
L_08A00840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00870;
      }
      goto L_08A00848;
    }
L_08A00848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 386 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00888;
      }
      goto L_08A00858;
    }
L_08A00858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 388 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A008C0;
      }
      goto L_08A00868;
    }
L_08A00868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A008D4;
      }
      goto L_08A00870;
    }
L_08A00870:
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A00888;
    }
L_08A00888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A0089Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 559u, 0x08A0F674u>(ctx, &aot_mem) && ctx.pc == 0x08A0089Cu) goto L_08A0089C;
    return;
L_08A0089C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A008A8;
    }
L_08A008A8:
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A008C0;
    }
L_08A008C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A008D4;
    }
L_08A008D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A008E0;
    }
L_08A008E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A00904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A00904u) goto L_08A00904;
    return;
L_08A00904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A0090C;
    }
L_08A0090C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 384u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00938;
      }
      goto L_08A00920;
    }
L_08A00920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0092Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A0092Cu) goto L_08A0092C;
    return;
L_08A0092C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009E0;
      }
      goto L_08A00938;
    }
L_08A00938:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A00944;
    }
L_08A00944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 183u, 0x08A0930Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00954u) goto L_08A00954;
    return;
L_08A00954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A00960;
    }
L_08A00960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00970u);
    // nop
    goto L_08A0224C;
L_08A00970:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A0097C;
    }
L_08A0097C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A0098Cu);
    // nop
    goto L_08A02748;
L_08A0098C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A00998;
    }
L_08A00998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A009A8u);
    // nop
    goto L_08A02034;
L_08A009A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A009B4;
    }
L_08A009B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A009D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A009D8u) goto L_08A009D8;
    return;
L_08A009D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009EC;
      }
      goto L_08A009E0;
    }
L_08A009E0:
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A009EC;
L_08A009EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00A3C;
      }
      goto L_08A00A00;
    }
L_08A00A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A3C;
      }
      goto L_08A00A10;
    }
L_08A00A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00A3C;
      }
      goto L_08A00A2C;
    }
L_08A00A2C:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00A3C;
L_08A00A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A00A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00A54u) goto L_08A00A54;
    return;
L_08A00A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00AA4;
      }
      goto L_08A00A68;
    }
L_08A00A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00AA4;
      }
      goto L_08A00A78;
    }
L_08A00A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00AA4;
      }
      goto L_08A00A94;
    }
L_08A00A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 468u, 0x089FEF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00AA4u) goto L_08A00AA4;
    return;
L_08A00AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00AB4u);
    // nop
    goto L_08A034F4;
L_08A00AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00ABC;
    }
L_08A00ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00AE8;
      }
      goto L_08A00AD4;
    }
L_08A00AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A00AE8;
L_08A00AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 52u, 0x08A104ECu>(ctx, &aot_mem) && ctx.pc == 0x08A00AF8u) goto L_08A00AF8;
    return;
L_08A00AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00B00;
    }
L_08A00B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00B1C;
    }
L_08A00B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A00B44u);
    // nop
    goto L_08A02BD8;
L_08A00B44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00B50;
    }
L_08A00B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00B60u);
    // nop
    goto L_08A02DC0;
L_08A00B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00B6C;
    }
L_08A00B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00B7Cu);
    // nop
    goto L_08A03244;
L_08A00B7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00B88;
    }
L_08A00B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A00B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 233u, 0x08A0DA14u>(ctx, &aot_mem) && ctx.pc == 0x08A00B94u) goto L_08A00B94;
    return;
L_08A00B94:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A00BC0u) goto L_08A00BC0;
    return;
L_08A00BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 308 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C4C;
      }
      goto L_08A00BD4;
    }
L_08A00BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 311 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C4C;
      }
      goto L_08A00BE4;
    }
L_08A00BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00C24;
      }
      goto L_08A00C18;
    }
L_08A00C18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00C24;
L_08A00C24:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00C4C;
      }
      goto L_08A00C40;
    }
L_08A00C40:
    ctx.gpr[4] = (0u | 304u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A00C4C;
L_08A00C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 310u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00C60;
    }
L_08A00C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00C74;
    }
L_08A00C74:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00C8C;
    }
L_08A00C8C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00CA4;
    }
L_08A00CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00CC8;
    }
L_08A00CC8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00CD8u) goto L_08A00CD8;
    return;
L_08A00CD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00CF8;
      }
      goto L_08A00CE4;
    }
L_08A00CE4:
    ctx.gpr[4] = (0u | 308u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D04;
      }
      goto L_08A00CF8;
    }
L_08A00CF8:
    ctx.gpr[4] = (0u | 309u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A00D04;
L_08A00D04:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00D20u) goto L_08A00D20;
    return;
L_08A00D20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00D30u);
    // nop
    goto L_08A034F4;
L_08A00D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00D38;
    }
L_08A00D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00D4C;
    }
L_08A00D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 207u, 0x08A11554u>(ctx, &aot_mem) && ctx.pc == 0x08A00D60u) goto L_08A00D60;
    return;
L_08A00D60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 448u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00DF4;
      }
      goto L_08A00D78;
    }
L_08A00D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 514u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00DF4;
      }
      goto L_08A00D8C;
    }
L_08A00D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A00DB4u) goto L_08A00DB4;
    return;
L_08A00DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 514u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00DE0;
      }
      goto L_08A00DC4;
    }
L_08A00DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00DE0;
L_08A00DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A00DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00DF4u) goto L_08A00DF4;
    return;
L_08A00DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A00E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 361u, 0x08A06228u>(ctx, &aot_mem) && ctx.pc == 0x08A00E08u) goto L_08A00E08;
    return;
L_08A00E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00E10;
    }
L_08A00E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 107u, 0x08A08B40u>(ctx, &aot_mem) && ctx.pc == 0x08A00E20u) goto L_08A00E20;
    return;
L_08A00E20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00E4C;
      }
      goto L_08A00E38;
    }
L_08A00E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A00E98;
      }
      goto L_08A00E44;
    }
L_08A00E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00E64;
      }
      goto L_08A00E4C;
    }
L_08A00E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00E80;
      }
      goto L_08A00E5C;
    }
L_08A00E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00E98;
      }
      goto L_08A00E64;
    }
L_08A00E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 560u);
    ctx.gpr[31] = (0x08A00E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 361u, 0x08A06228u>(ctx, &aot_mem) && ctx.pc == 0x08A00E78u) goto L_08A00E78;
    return;
L_08A00E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00E80;
    }
L_08A00E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A00E90u);
    // nop
    goto L_08A034F4;
L_08A00E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00E98;
    }
L_08A00E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00EAC;
    }
L_08A00EAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 168u, 0x08A090ECu>(ctx, &aot_mem) && ctx.pc == 0x08A00EC4u) goto L_08A00EC4;
    return;
L_08A00EC4:
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00ED8u) goto L_08A00ED8;
    return;
L_08A00ED8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00EE8u);
    // nop
    goto L_08A034F4;
L_08A00EE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 52u, 0x08A104ECu>(ctx, &aot_mem) && ctx.pc == 0x08A00EF8u) goto L_08A00EF8;
    return;
L_08A00EF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00F18;
    }
L_08A00F18:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 14u, 0x08A08158u>(ctx, &aot_mem) && ctx.pc == 0x08A00F30u) goto L_08A00F30;
    return;
L_08A00F30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00F40u);
    // nop
    goto L_08A034F4;
L_08A00F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00F48;
    }
L_08A00F48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 41u, 0x08A083CCu>(ctx, &aot_mem) && ctx.pc == 0x08A00F78u) goto L_08A00F78;
    return;
L_08A00F78:
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00F8Cu) goto L_08A00F8C;
    return;
L_08A00F8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00F9Cu);
    // nop
    goto L_08A034F4;
L_08A00F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00FA4;
    }
L_08A00FA4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 609u, 0x08A0774Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00FBCu) goto L_08A00FBC;
    return;
L_08A00FBC:
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00FD0u) goto L_08A00FD0;
    return;
L_08A00FD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A00FE0u);
    // nop
    goto L_08A034F4;
L_08A00FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A00FE8;
    }
L_08A00FE8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 677u, 0x08A07E78u>(ctx, &aot_mem) && ctx.pc == 0x08A01000u) goto L_08A01000;
    return;
L_08A01000:
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 474u, 0x08A06C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01014u) goto L_08A01014;
    return;
L_08A01014:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01024u);
    // nop
    goto L_08A034F4;
L_08A01024:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01044;
    }
L_08A01044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A01050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 146u, 0x08A10EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A01050u) goto L_08A01050;
    return;
L_08A01050:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01060;
    }
L_08A01060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01074;
    }
L_08A01074:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(195));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A010A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A010A0u) goto L_08A010A0;
    return;
L_08A010A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A010B0u);
    // nop
    goto L_08A034F4;
L_08A010B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A010B8;
    }
L_08A010B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A010CC;
    }
L_08A010CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 592u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01128;
      }
      goto L_08A010E4;
    }
L_08A010E4:
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01128;
      }
      goto L_08A010F4;
    }
L_08A010F4:
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01128;
      }
      goto L_08A01104;
    }
L_08A01104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A01110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 517u, 0x08A0F174u>(ctx, &aot_mem) && ctx.pc == 0x08A01110u) goto L_08A01110;
    return;
L_08A01110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01128;
      }
      goto L_08A0111C;
    }
L_08A0111C:
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A01128;
L_08A01128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 641u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A01140;
    }
L_08A01140:
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A01150;
    }
L_08A01150:
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A01160;
    }
L_08A01160:
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A01170;
    }
L_08A01170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A01180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 239u, 0x08A09830u>(ctx, &aot_mem) && ctx.pc == 0x08A01180u) goto L_08A01180;
    return;
L_08A01180:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A0118C;
    }
L_08A0118C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A0119Cu);
    // nop
    goto L_08A01960;
L_08A0119C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A011A8;
    }
L_08A011A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01204;
      }
      goto L_08A011C8;
    }
L_08A011C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A011D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 334u, 0x08A0E0F8u>(ctx, &aot_mem) && ctx.pc == 0x08A011D4u) goto L_08A011D4;
    return;
L_08A011D4:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (0u | 9u);
    ctx.gpr[31] = (0x08A011FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A011FCu) goto L_08A011FC;
    return;
L_08A011FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01238;
      }
      goto L_08A01204;
    }
L_08A01204:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 208u, 0x08A0D864u>(ctx, &aot_mem) && ctx.pc == 0x08A01214u) goto L_08A01214;
    return;
L_08A01214:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08A01238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A01238u) goto L_08A01238;
    return;
L_08A01238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01298;
      }
      goto L_08A0124C;
    }
L_08A0124C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01284;
      }
      goto L_08A01260;
    }
L_08A01260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01284;
      }
      goto L_08A01270;
    }
L_08A01270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A01284;
    }
L_08A01284:
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A012A4;
      }
      goto L_08A01298;
    }
L_08A01298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A012A4;
L_08A012A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A012B4u);
    // nop
    goto L_08A034F4;
L_08A012B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A012BC;
    }
L_08A012BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A012CC;
    }
L_08A012CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 4080u);
    ctx.gpr[5] = (0u | 592u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A012F0;
      }
      goto L_08A012E4;
    }
L_08A012E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A012F0;
L_08A012F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01318;
      }
      goto L_08A01304;
    }
L_08A01304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01318;
    }
L_08A01318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A0132C;
    }
L_08A0132C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0134C;
      }
      goto L_08A0133C;
    }
L_08A0133C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01350;
      }
      goto L_08A0134C;
    }
L_08A0134C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    goto L_08A01350;
L_08A01350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0135Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 592u, 0x08A0FA10u>(ctx, &aot_mem) && ctx.pc == 0x08A0135Cu) goto L_08A0135C;
    return;
L_08A0135C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01380;
      }
      goto L_08A01370;
    }
L_08A01370:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01384;
      }
      goto L_08A01380;
    }
L_08A01380:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    goto L_08A01384;
L_08A01384:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A013A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 243u, 0x08A0DAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A013A0u) goto L_08A013A0;
    return;
L_08A013A0:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A013C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A013C8u) goto L_08A013C8;
    return;
L_08A013C8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 74 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01454;
      }
      goto L_08A013E4;
    }
L_08A013E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4976)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0143C;
      }
      goto L_08A01418;
    }
L_08A01418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4976)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A0143C;
L_08A0143C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 74 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A013E4;
      }
      goto L_08A01454;
    }
L_08A01454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0147C;
      }
      goto L_08A01470;
    }
L_08A01470:
    ctx.gpr[4] = (0u | 368u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A0147C;
L_08A0147C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A0148Cu);
    // nop
    goto L_08A034F4;
L_08A0148C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01494;
    }
L_08A01494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] & 192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0152C;
      }
      goto L_08A014C4;
    }
L_08A014C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A014D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 268u, 0x08A09B90u>(ctx, &aot_mem) && ctx.pc == 0x08A014D4u) goto L_08A014D4;
    return;
L_08A014D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014F8;
      }
      goto L_08A014E0;
    }
L_08A014E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A014F0u);
    // nop
    goto L_08A034F4;
L_08A014F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A014F8;
    }
L_08A014F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A01508u);
    // nop
    goto L_08A023F8;
L_08A01508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01514;
    }
L_08A01514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A01524u);
    // nop
    goto L_08A034F4;
L_08A01524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A0152C;
    }
L_08A0152C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 575u, 0x089FFA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01540u) goto L_08A01540;
    return;
L_08A01540:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 129u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01554;
    }
L_08A01554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 552u, 0x08A07268u>(ctx, &aot_mem) && ctx.pc == 0x08A01568u) goto L_08A01568;
    return;
L_08A01568:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A0157C;
    }
L_08A0157C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A015A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 268u, 0x08A09B90u>(ctx, &aot_mem) && ctx.pc == 0x08A015A4u) goto L_08A015A4;
    return;
L_08A015A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A015B0;
    }
L_08A015B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A015C0u);
    // nop
    goto L_08A034F4;
L_08A015C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A015C8;
    }
L_08A015C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A015DC;
    }
L_08A015DC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A015F4;
    }
L_08A015F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5023))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3980)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01620;
    }
L_08A01620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01644;
    }
L_08A01644:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01668;
    }
L_08A01668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A01678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 52u, 0x08A104ECu>(ctx, &aot_mem) && ctx.pc == 0x08A01678u) goto L_08A01678;
    return;
L_08A01678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A0169C;
    }
L_08A0169C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A016E0;
      }
      goto L_08A016B0;
    }
L_08A016B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A016C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 64u, 0x08A0870Cu>(ctx, &aot_mem) && ctx.pc == 0x08A016C8u) goto L_08A016C8;
    return;
L_08A016C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A016D8u);
    // nop
    goto L_08A034F4;
L_08A016D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A016E8;
      }
      goto L_08A016E0;
    }
L_08A016E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A016E8;
L_08A016E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A016F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 52u, 0x08A104ECu>(ctx, &aot_mem) && ctx.pc == 0x08A016F8u) goto L_08A016F8;
    return;
L_08A016F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01700;
    }
L_08A01700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A01710u);
    // nop
    goto L_08A02A18;
L_08A01710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01718;
    }
L_08A01718:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01730;
    }
L_08A01730:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0174C;
      }
      goto L_08A01744;
    }
L_08A01744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    goto L_08A0174C;
L_08A0174C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01794;
      }
      goto L_08A01760;
    }
L_08A01760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A0176Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 48u, 0x08A10448u>(ctx, &aot_mem) && ctx.pc == 0x08A0176Cu) goto L_08A0176C;
    return;
L_08A0176C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01794;
      }
      goto L_08A01778;
    }
L_08A01778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01794;
      }
      goto L_08A0178C;
    }
L_08A0178C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A01794;
L_08A01794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A017A8u);
    // nop
    goto L_08A01E50;
L_08A017A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A017DC;
      }
      goto L_08A017C0;
    }
L_08A017C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A017DC;
L_08A017DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01814;
      }
      goto L_08A017F8;
    }
L_08A017F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01814;
L_08A01814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0184C;
      }
      goto L_08A01828;
    }
L_08A01828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01858;
      }
      goto L_08A0184C;
    }
L_08A0184C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01858;
L_08A01858:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 611u, 0x08A0FC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01870u) goto L_08A01870;
    return;
L_08A01870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0189C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 4080u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 416u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01904;
      }
      goto L_08A018CC;
    }
L_08A018CC:
    ctx.gpr[5] = (0u | 400u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01938;
      }
      goto L_08A018DC;
    }
L_08A018DC:
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01938;
      }
      goto L_08A018EC;
    }
L_08A018EC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01938;
      }
      goto L_08A018FC;
    }
L_08A018FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01950;
      }
      goto L_08A01904;
    }
L_08A01904:
    ctx.gpr[31] = (0x08A0190Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 487u, 0x089FF190u>(ctx, &aot_mem) && ctx.pc == 0x08A0190Cu) goto L_08A0190C;
    return;
L_08A0190C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01950;
      }
      goto L_08A01938;
    }
L_08A01938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A01948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 552u, 0x08A07268u>(ctx, &aot_mem) && ctx.pc == 0x08A01948u) goto L_08A01948;
    return;
L_08A01948:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A01950;
L_08A01950:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A019B8;
      }
      goto L_08A01990;
    }
L_08A01990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 704u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A019A4;
    }
L_08A019A4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A019B8:
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
          goto L_08A019F8;
      }
      goto L_08A019EC;
    }
L_08A019EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A019F8;
L_08A019F8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A01A14;
    }
L_08A01A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 24u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A01A28;
    }
L_08A01A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A01A3C;
    }
L_08A01A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7536)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A01A74;
    }
L_08A01A74:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7536));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A01AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01AE0u) goto L_08A01AE0;
    return;
L_08A01AE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A01AEC;
    }
L_08A01AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B6C;
      }
      goto L_08A01B0C;
    }
L_08A01B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[31] = (0x08A01B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 521u, 0x08A4E778u>(ctx, &aot_mem) && ctx.pc == 0x08A01B1Cu) goto L_08A01B1C;
    return;
L_08A01B1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B6C;
      }
      goto L_08A01B28;
    }
L_08A01B28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 46u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A01B40u) goto L_08A01B40;
    return;
L_08A01B40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5054))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B60;
      }
      goto L_08A01B4C;
    }
L_08A01B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5056)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B6C;
      }
      goto L_08A01B60;
    }
L_08A01B60:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A01B6C;
L_08A01B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BE0;
      }
      goto L_08A01B80;
    }
L_08A01B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[31] = (0x08A01B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 521u, 0x08A4E778u>(ctx, &aot_mem) && ctx.pc == 0x08A01B90u) goto L_08A01B90;
    return;
L_08A01B90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BE0;
      }
      goto L_08A01B9C;
    }
L_08A01B9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 47u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A01BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A01BB4u) goto L_08A01BB4;
    return;
L_08A01BB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5054))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BD4;
      }
      goto L_08A01BC0;
    }
L_08A01BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5056)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BE0;
      }
      goto L_08A01BD4;
    }
L_08A01BD4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A01BE0;
L_08A01BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C00;
      }
      goto L_08A01BF0;
    }
L_08A01BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(149)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C20;
      }
      goto L_08A01C00;
    }
L_08A01C00:
    ctx.gpr[4] = (0u | 704u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C20:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01E40;
      }
      goto L_08A01C64;
    }
L_08A01C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E40;
      }
      goto L_08A01C78;
    }
L_08A01C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 688u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01E30;
      }
      goto L_08A01C8C;
    }
L_08A01C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7552)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01D10;
      }
      goto L_08A01CF0;
    }
L_08A01CF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DE0;
      }
      goto L_08A01D10;
    }
L_08A01D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01D60;
      }
      goto L_08A01D40;
    }
L_08A01D40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DE0;
      }
      goto L_08A01D60;
    }
L_08A01D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4318)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01D94;
      }
      goto L_08A01D74;
    }
L_08A01D74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DE0;
      }
      goto L_08A01D94;
    }
L_08A01D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DC8;
      }
      goto L_08A01DA8;
    }
L_08A01DA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01DE0;
      }
      goto L_08A01DC8;
    }
L_08A01DC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7552));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01DE0;
L_08A01DE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A01DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01DECu) goto L_08A01DEC;
    return;
L_08A01DEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01DF8;
    }
L_08A01DF8:
    ctx.gpr[4] = (0u | 688u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01E14;
      }
      goto L_08A01E0C;
    }
L_08A01E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A01E14;
L_08A01E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01E30;
L_08A01E30:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01E40:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02014;
      }
      goto L_08A01E7C;
    }
L_08A01E7C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02014;
      }
      goto L_08A01E90;
    }
L_08A01E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A01E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 209u, 0x08A2F274u>(ctx, &aot_mem) && ctx.pc == 0x08A01E9Cu) goto L_08A01E9C;
    return;
L_08A01E9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02014;
      }
      goto L_08A01EA8;
    }
L_08A01EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A02014;
      }
      goto L_08A01EB8;
    }
L_08A01EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02014;
      }
      goto L_08A01EDC;
    }
L_08A01EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1456));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(772)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01F4C;
      }
      goto L_08A01F40;
    }
L_08A01F40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01F4C;
L_08A01F4C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02024;
      }
      goto L_08A01F64;
    }
L_08A01F64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A01F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 566u, 0x08A0F728u>(ctx, &aot_mem) && ctx.pc == 0x08A01F78u) goto L_08A01F78;
    return;
L_08A01F78:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7584)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A01FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01FE0u) goto L_08A01FE0;
    return;
L_08A01FE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01FFC;
      }
      goto L_08A01FEC;
    }
L_08A01FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08A01FFC;
L_08A01FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02024;
      }
      goto L_08A02014;
    }
L_08A02014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    goto L_08A02024;
L_08A02024:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A02058;
    }
L_08A02058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A02074;
    }
L_08A02074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A02084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08A4111Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02084u) goto L_08A02084;
    return;
L_08A02084:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A02090;
    }
L_08A02090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(7592)));
    ctx.gpr[31] = (0x08A020ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 490u, 0x08A4E3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A020ACu) goto L_08A020AC;
    return;
L_08A020AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A020C8;
      }
      goto L_08A020B8;
    }
L_08A020B8:
    ctx.gpr[4] = (0u | 640u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A020E4;
      }
      goto L_08A020C8;
    }
L_08A020C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A020DC;
    }
L_08A020DC:
    ctx.gpr[4] = (0u | 641u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A020E4;
L_08A020E4:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02120;
      }
      goto L_08A020FC;
    }
L_08A020FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A021EC;
      }
      goto L_08A02120;
    }
L_08A02120:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7592));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3024)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7632));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4968)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A021C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A021C4u) goto L_08A021C4;
    return;
L_08A021C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A021D0;
    }
L_08A021D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A021EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A02200;
    }
L_08A02200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3032)));
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0223C;
      }
      goto L_08A02220;
    }
L_08A02220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0223C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0224C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A023E8;
      }
      goto L_08A02270;
    }
L_08A02270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A023E8;
      }
      goto L_08A02284;
    }
L_08A02284:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3044)));
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
          goto L_08A022C8;
      }
      goto L_08A022BC;
    }
L_08A022BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A022C8;
L_08A022C8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A023E8;
      }
      goto L_08A022E4;
    }
L_08A022E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A023E8;
      }
      goto L_08A022F8;
    }
L_08A022F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A023E8;
      }
      goto L_08A0230C;
    }
L_08A0230C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7644))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7644));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A02380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02380u) goto L_08A02380;
    return;
L_08A02380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A023E8;
      }
      goto L_08A0238C;
    }
L_08A0238C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7644));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A023CC;
      }
      goto L_08A023B8;
    }
L_08A023B8:
    ctx.gpr[4] = (0u | 753u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A023D8;
      }
      goto L_08A023CC;
    }
L_08A023CC:
    ctx.gpr[4] = (0u | 754u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A023D8;
L_08A023D8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A023E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A023F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02730;
      }
      goto L_08A02424;
    }
L_08A02424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02730;
      }
      goto L_08A02438;
    }
L_08A02438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02484;
      }
      goto L_08A02478;
    }
L_08A02478:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02484;
L_08A02484:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0250C;
      }
      goto L_08A024A0;
    }
L_08A024A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-34));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0250C;
      }
      goto L_08A024BC;
    }
L_08A024BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-34));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A024DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0250C;
      }
      goto L_08A024F0;
    }
L_08A024F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0250C;
      }
      goto L_08A02504;
    }
L_08A02504:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A0250C;
L_08A0250C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02730;
      }
      goto L_08A02518;
    }
L_08A02518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02718;
      }
      goto L_08A02534;
    }
L_08A02534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(804)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7648))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7648));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A025A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 566u, 0x08A0F728u>(ctx, &aot_mem) && ctx.pc == 0x08A025A8u) goto L_08A025A8;
    return;
L_08A025A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[31] = (0x08A025CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A025CCu) goto L_08A025CC;
    return;
L_08A025CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026F8;
      }
      goto L_08A025D8;
    }
L_08A025D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A025F8;
      }
      goto L_08A025E4;
    }
L_08A025E4:
    ctx.gpr[4] = (0u | 769u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026F8;
      }
      goto L_08A025F8;
    }
L_08A025F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A02608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 476u, 0x089FF048u>(ctx, &aot_mem) && ctx.pc == 0x08A02608u) goto L_08A02608;
    return;
L_08A02608:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0269C;
      }
      goto L_08A02614;
    }
L_08A02614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7520))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7520));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A02688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02688u) goto L_08A02688;
    return;
L_08A02688:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0269C;
      }
      goto L_08A02694;
    }
L_08A02694:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A0269C;
L_08A0269C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026BC;
      }
      goto L_08A026A8;
    }
L_08A026A8:
    ctx.gpr[4] = (0u | 772u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026F8;
      }
      goto L_08A026BC;
    }
L_08A026BC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A026CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A026CCu) goto L_08A026CC;
    return;
L_08A026CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026EC;
      }
      goto L_08A026D8;
    }
L_08A026D8:
    ctx.gpr[4] = (0u | 770u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A026F8;
      }
      goto L_08A026EC;
    }
L_08A026EC:
    ctx.gpr[4] = (0u | 771u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A026F8;
L_08A026F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02718;
L_08A02718:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02730:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02A08;
      }
      goto L_08A02778;
    }
L_08A02778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02A08;
      }
      goto L_08A0278C;
    }
L_08A0278C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02A08;
      }
      goto L_08A027A0;
    }
L_08A027A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7656)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7656));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A02800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02800u) goto L_08A02800;
    return;
L_08A02800:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02A08;
      }
      goto L_08A0280C;
    }
L_08A0280C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7664))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08A0282Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 490u, 0x08A4E3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A0282Cu) goto L_08A0282C;
    return;
L_08A0282C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A029EC;
      }
      goto L_08A02838;
    }
L_08A02838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A029D0;
      }
      goto L_08A0284C;
    }
L_08A0284C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 6143u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A02870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 19u, 0x08A0C268u>(ctx, &aot_mem) && ctx.pc == 0x08A02870u) goto L_08A02870;
    return;
L_08A02870:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A02898;
      }
      goto L_08A0287C;
    }
L_08A0287C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A02890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 55u, 0x08A2CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02890u) goto L_08A02890;
    return;
L_08A02890:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02898;
L_08A02898:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7664));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A028E0;
      }
      goto L_08A028C0;
    }
L_08A028C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7664));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02990;
      }
      goto L_08A028E0;
    }
L_08A028E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7664));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02928;
      }
      goto L_08A02908;
    }
L_08A02908:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7664));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02990;
      }
      goto L_08A02928;
    }
L_08A02928:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7664));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02990;
L_08A02990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A029A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A029A8u) goto L_08A029A8;
    return;
L_08A029A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A029D0;
      }
      goto L_08A029B4;
    }
L_08A029B4:
    ctx.gpr[4] = (0u | 208u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029D0:
    ctx.gpr[4] = (0u | 672u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A029EC:
    ctx.gpr[4] = (0u | 673u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02A08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02BCC;
      }
      goto L_08A02A3C;
    }
L_08A02A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02BCC;
      }
      goto L_08A02A50;
    }
L_08A02A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02BCC;
      }
      goto L_08A02A98;
    }
L_08A02A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
          goto L_08A02BCC;
      }
      goto L_08A02ACC;
    }
L_08A02ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7672)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2988)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02B38;
      }
      goto L_08A02B30;
    }
L_08A02B30:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A02B38;
L_08A02B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02B6C;
      }
      goto L_08A02B64;
    }
L_08A02B64:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A02B6C;
L_08A02B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7672));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A02BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02BB0u) goto L_08A02BB0;
    return;
L_08A02BB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02BCC;
      }
      goto L_08A02BBC;
    }
L_08A02BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 3072u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08A02BCC;
L_08A02BCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02BD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02C0C;
    }
L_08A02C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02C20;
    }
L_08A02C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02C60;
      }
      goto L_08A02C54;
    }
L_08A02C54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02C60;
L_08A02C60:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02C7C;
    }
L_08A02C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02C98;
    }
L_08A02C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CC8;
      }
      goto L_08A02CB0;
    }
L_08A02CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 78 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02CC0;
    }
L_08A02CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02CE8;
      }
      goto L_08A02CC8;
    }
L_08A02CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02CD8;
    }
L_08A02CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 117 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02CE8;
    }
L_08A02CE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 566u, 0x08A0F728u>(ctx, &aot_mem) && ctx.pc == 0x08A02CFCu) goto L_08A02CFC;
    return;
L_08A02CFC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(724));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7584)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A02D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02D64u) goto L_08A02D64;
    return;
L_08A02D64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DAC;
      }
      goto L_08A02D70;
    }
L_08A02D70:
    ctx.gpr[5] = (0u | 656u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(712)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02DAC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A02DF0;
    }
L_08A02DF0:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02E20;
      }
      goto L_08A02E08;
    }
L_08A02E08:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A02E20;
    }
L_08A02E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A02E34;
    }
L_08A02E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4576));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A02E58;
    }
L_08A02E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
          goto L_08A02E98;
      }
      goto L_08A02E8C;
    }
L_08A02E8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A02E98;
L_08A02E98:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A02EB4;
    }
L_08A02EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A02ED4;
    }
L_08A02ED4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7740))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02F48;
      }
      goto L_08A02F0C;
    }
L_08A02F0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A02F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02F34u) goto L_08A02F34;
    return;
L_08A02F34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02F48;
      }
      goto L_08A02F40;
    }
L_08A02F40:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A02F48;
L_08A02F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02FBC;
      }
      goto L_08A02F80;
    }
L_08A02F80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A02FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A02FA8u) goto L_08A02FA8;
    return;
L_08A02FA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02FBC;
      }
      goto L_08A02FB4;
    }
L_08A02FB4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A02FBC;
L_08A02FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03030;
      }
      goto L_08A02FF4;
    }
L_08A02FF4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A0301Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0301Cu) goto L_08A0301C;
    return;
L_08A0301C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03030;
      }
      goto L_08A03028;
    }
L_08A03028:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A03030;
L_08A03030:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03058;
      }
      goto L_08A0303C;
    }
L_08A0303C:
    ctx.gpr[4] = (0u | 310u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03058:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A03070;
    }
L_08A03070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3980)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3988)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A030A0;
      }
      goto L_08A0308C;
    }
L_08A0308C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3980)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A030AC;
      }
      goto L_08A030A0;
    }
L_08A030A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A030AC;
L_08A030AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7740))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0312C;
      }
      goto L_08A030F0;
    }
L_08A030F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A03118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03118u) goto L_08A03118;
    return;
L_08A03118:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0312C;
      }
      goto L_08A03124;
    }
L_08A03124:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A0312C;
L_08A0312C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0319C;
      }
      goto L_08A03160;
    }
L_08A03160:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A03188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03188u) goto L_08A03188;
    return;
L_08A03188:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0319C;
      }
      goto L_08A03194;
    }
L_08A03194:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A0319C;
L_08A0319C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0320C;
      }
      goto L_08A031D0;
    }
L_08A031D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A031F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A031F8u) goto L_08A031F8;
    return;
L_08A031F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0320C;
      }
      goto L_08A03204;
    }
L_08A03204:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A0320C;
L_08A0320C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A03218;
    }
L_08A03218:
    ctx.gpr[4] = (0u | 310u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03234:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A034E4;
      }
      goto L_08A03268;
    }
L_08A03268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
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
          goto L_08A032A8;
      }
      goto L_08A0329C;
    }
L_08A0329C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A032A8;
L_08A032A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A034E4;
      }
      goto L_08A032C4;
    }
L_08A032C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A034E4;
      }
      goto L_08A032E4;
    }
L_08A032E4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7748))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03358;
      }
      goto L_08A0331C;
    }
L_08A0331C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7748));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A03344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03344u) goto L_08A03344;
    return;
L_08A03344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03358;
      }
      goto L_08A03350;
    }
L_08A03350:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A03358;
L_08A03358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7748));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A033CC;
      }
      goto L_08A03390;
    }
L_08A03390:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7748));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A033B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A033B8u) goto L_08A033B8;
    return;
L_08A033B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A033CC;
      }
      goto L_08A033C4;
    }
L_08A033C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A033CC;
L_08A033CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7748));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03440;
      }
      goto L_08A03404;
    }
L_08A03404:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7748));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A0342Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0342Cu) goto L_08A0342C;
    return;
L_08A0342C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03440;
      }
      goto L_08A03438;
    }
L_08A03438:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A03440;
L_08A03440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A034E4;
      }
      goto L_08A0344C;
    }
L_08A0344C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(264));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A03498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 433u, 0x08A2B788u>(ctx, &aot_mem) && ctx.pc == 0x08A03498u) goto L_08A03498;
    return;
L_08A03498:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A034B8;
      }
      goto L_08A034A8;
    }
L_08A034A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A034B8;
L_08A034B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A034E4;
      }
      goto L_08A034C8;
    }
L_08A034C8:
    ctx.gpr[4] = (0u | 311u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A034E4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A034F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 4080u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03564;
      }
      goto L_08A03520;
    }
L_08A03520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A0352Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 458u, 0x08A0EB04u>(ctx, &aot_mem) && ctx.pc == 0x08A0352Cu) goto L_08A0352C;
    return;
L_08A0352C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03564;
      }
      goto L_08A03538;
    }
L_08A03538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03564;
      }
      goto L_08A03554;
    }
L_08A03554:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A03564;
L_08A03564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 400u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0359C;
      }
      goto L_08A0357C;
    }
L_08A0357C:
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0359C;
      }
      goto L_08A0358C;
    }
L_08A0358C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03620;
      }
      goto L_08A0359C;
    }
L_08A0359C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03610;
      }
      goto L_08A035B0;
    }
L_08A035B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A035D4;
      }
      goto L_08A035C4;
    }
L_08A035C4:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A035DC;
      }
      goto L_08A035D4;
    }
L_08A035D4:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08A035DC;
L_08A035DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A035ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 162u, 0x08A11060u>(ctx, &aot_mem) && ctx.pc == 0x08A035ECu) goto L_08A035EC;
    return;
L_08A035EC:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A03610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 550u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A03610u) goto L_08A03610;
    return;
L_08A03610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 552u, 0x08A07268u>(ctx, &aot_mem) && ctx.pc == 0x08A03620u) goto L_08A03620;
    return;
L_08A03620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 593 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A037A4;
      }
      goto L_08A03634;
    }
L_08A03634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 225 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A036F4;
      }
      goto L_08A03644;
    }
L_08A03644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 144 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0369C;
      }
      goto L_08A03654;
    }
L_08A03654:
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03944;
      }
      goto L_08A03664;
    }
L_08A03664:
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0395C;
      }
      goto L_08A03674;
    }
L_08A03674:
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03944;
      }
      goto L_08A03684;
    }
L_08A03684:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0392C;
      }
      goto L_08A03694;
    }
L_08A03694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A0369C;
    }
L_08A0369C:
    ctx.gpr[5] = (0u | 224u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A039D4;
      }
      goto L_08A036AC;
    }
L_08A036AC:
    ctx.gpr[5] = (0u | 208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A039BC;
      }
      goto L_08A036BC;
    }
L_08A036BC:
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A039A4;
      }
      goto L_08A036CC;
    }
L_08A036CC:
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0398C;
      }
      goto L_08A036DC;
    }
L_08A036DC:
    ctx.gpr[5] = (0u | 144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03974;
      }
      goto L_08A036EC;
    }
L_08A036EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A036F4;
    }
L_08A036F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 368 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0374C;
      }
      goto L_08A03704;
    }
L_08A03704:
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A34;
      }
      goto L_08A03714;
    }
L_08A03714:
    ctx.gpr[5] = (0u | 304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A1C;
      }
      goto L_08A03724;
    }
L_08A03724:
    ctx.gpr[5] = (0u | 288u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A04;
      }
      goto L_08A03734;
    }
L_08A03734:
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A039EC;
      }
      goto L_08A03744;
    }
L_08A03744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A0374C;
    }
L_08A0374C:
    ctx.gpr[5] = (0u | 592u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A64;
      }
      goto L_08A0375C;
    }
L_08A0375C:
    ctx.gpr[5] = (0u | 576u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A4C;
      }
      goto L_08A0376C;
    }
L_08A0376C:
    ctx.gpr[5] = (0u | 416u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03AAC;
      }
      goto L_08A0377C;
    }
L_08A0377C:
    ctx.gpr[5] = (0u | 384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03914;
      }
      goto L_08A0378C;
    }
L_08A0378C:
    ctx.gpr[5] = (0u | 368u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A34;
      }
      goto L_08A0379C;
    }
L_08A0379C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A037A4;
    }
L_08A037A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 737 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03864;
      }
      goto L_08A037B4;
    }
L_08A037B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 672 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0380C;
      }
      goto L_08A037C4;
    }
L_08A037C4:
    ctx.gpr[5] = (0u | 656u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03ADC;
      }
      goto L_08A037D4;
    }
L_08A037D4:
    ctx.gpr[5] = (0u | 640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03AC4;
      }
      goto L_08A037E4;
    }
L_08A037E4:
    ctx.gpr[5] = (0u | 624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A94;
      }
      goto L_08A037F4;
    }
L_08A037F4:
    ctx.gpr[5] = (0u | 608u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A7C;
      }
      goto L_08A03804;
    }
L_08A03804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A0380C;
    }
L_08A0380C:
    ctx.gpr[5] = (0u | 736u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B54;
      }
      goto L_08A0381C;
    }
L_08A0381C:
    ctx.gpr[5] = (0u | 720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B3C;
      }
      goto L_08A0382C;
    }
L_08A0382C:
    ctx.gpr[5] = (0u | 704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B24;
      }
      goto L_08A0383C;
    }
L_08A0383C:
    ctx.gpr[5] = (0u | 688u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B0C;
      }
      goto L_08A0384C;
    }
L_08A0384C:
    ctx.gpr[5] = (0u | 672u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03AF4;
      }
      goto L_08A0385C;
    }
L_08A0385C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03864;
    }
L_08A03864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 816 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A038BC;
      }
      goto L_08A03874;
    }
L_08A03874:
    ctx.gpr[5] = (0u | 800u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03BB4;
      }
      goto L_08A03884;
    }
L_08A03884:
    ctx.gpr[5] = (0u | 784u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B9C;
      }
      goto L_08A03894;
    }
L_08A03894:
    ctx.gpr[5] = (0u | 768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B84;
      }
      goto L_08A038A4;
    }
L_08A038A4:
    ctx.gpr[5] = (0u | 752u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03B6C;
      }
      goto L_08A038B4;
    }
L_08A038B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A038BC;
    }
L_08A038BC:
    ctx.gpr[5] = (0u | 880u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03C2C;
      }
      goto L_08A038CC;
    }
L_08A038CC:
    ctx.gpr[5] = (0u | 864u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03C14;
      }
      goto L_08A038DC;
    }
L_08A038DC:
    ctx.gpr[5] = (0u | 848u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03BFC;
      }
      goto L_08A038EC;
    }
L_08A038EC:
    ctx.gpr[5] = (0u | 832u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03BE4;
      }
      goto L_08A038FC;
    }
L_08A038FC:
    ctx.gpr[5] = (0u | 816u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03BCC;
      }
      goto L_08A0390C;
    }
L_08A0390C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03914;
    }
L_08A03914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03924u);
    // nop
    goto L_08A03C4C;
L_08A03924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A0392C;
    }
L_08A0392C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A0393Cu);
    // nop
    goto L_08A03E14;
L_08A0393C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03944;
    }
L_08A03944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 7u, 0x08A040B4u>(ctx, &aot_mem) && ctx.pc == 0x08A03954u) goto L_08A03954;
    return;
L_08A03954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A0395C;
    }
L_08A0395C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A0396Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 31u, 0x08A04310u>(ctx, &aot_mem) && ctx.pc == 0x08A0396Cu) goto L_08A0396C;
    return;
L_08A0396C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03974;
    }
L_08A03974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 102u, 0x08A0494Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03984u) goto L_08A03984;
    return;
L_08A03984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A0398C;
    }
L_08A0398C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A0399Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 114u, 0x08A04A54u>(ctx, &aot_mem) && ctx.pc == 0x08A0399Cu) goto L_08A0399C;
    return;
L_08A0399C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A039A4;
    }
L_08A039A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A039B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 494u, 0x089FF22Cu>(ctx, &aot_mem) && ctx.pc == 0x08A039B4u) goto L_08A039B4;
    return;
L_08A039B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A039BC;
    }
L_08A039BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A039CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 497u, 0x089FF274u>(ctx, &aot_mem) && ctx.pc == 0x08A039CCu) goto L_08A039CC;
    return;
L_08A039CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A039D4;
    }
L_08A039D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A039E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 126u, 0x08A04B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A039E4u) goto L_08A039E4;
    return;
L_08A039E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A039EC;
    }
L_08A039EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A039FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 498u, 0x089FF298u>(ctx, &aot_mem) && ctx.pc == 0x08A039FCu) goto L_08A039FC;
    return;
L_08A039FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A04;
    }
L_08A03A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 499u, 0x089FF2BCu>(ctx, &aot_mem) && ctx.pc == 0x08A03A14u) goto L_08A03A14;
    return;
L_08A03A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A1C;
    }
L_08A03A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 151u, 0x08A04D94u>(ctx, &aot_mem) && ctx.pc == 0x08A03A2Cu) goto L_08A03A2C;
    return;
L_08A03A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A34;
    }
L_08A03A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 169u, 0x08A04F20u>(ctx, &aot_mem) && ctx.pc == 0x08A03A44u) goto L_08A03A44;
    return;
L_08A03A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A4C;
    }
L_08A03A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 191u, 0x08A05174u>(ctx, &aot_mem) && ctx.pc == 0x08A03A5Cu) goto L_08A03A5C;
    return;
L_08A03A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A64;
    }
L_08A03A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 210u, 0x08A0530Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03A74u) goto L_08A03A74;
    return;
L_08A03A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A7C;
    }
L_08A03A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 502u, 0x089FF314u>(ctx, &aot_mem) && ctx.pc == 0x08A03A8Cu) goto L_08A03A8C;
    return;
L_08A03A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03A94;
    }
L_08A03A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 505u, 0x089FF360u>(ctx, &aot_mem) && ctx.pc == 0x08A03AA4u) goto L_08A03AA4;
    return;
L_08A03AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03AAC;
    }
L_08A03AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 506u, 0x089FF39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03ABCu) goto L_08A03ABC;
    return;
L_08A03ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03AC4;
    }
L_08A03AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 508u, 0x089FF3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A03AD4u) goto L_08A03AD4;
    return;
L_08A03AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03ADC;
    }
L_08A03ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 518u, 0x089FF4ACu>(ctx, &aot_mem) && ctx.pc == 0x08A03AECu) goto L_08A03AEC;
    return;
L_08A03AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03AF4;
    }
L_08A03AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 522u, 0x089FF55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03B04u) goto L_08A03B04;
    return;
L_08A03B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B0C;
    }
L_08A03B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 269u, 0x08A0592Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03B1Cu) goto L_08A03B1C;
    return;
L_08A03B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B24;
    }
L_08A03B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 538u, 0x089FF698u>(ctx, &aot_mem) && ctx.pc == 0x08A03B34u) goto L_08A03B34;
    return;
L_08A03B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B3C;
    }
L_08A03B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 293u, 0x08A05BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A03B4Cu) goto L_08A03B4C;
    return;
L_08A03B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B54;
    }
L_08A03B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 310u, 0x08A05CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A03B64u) goto L_08A03B64;
    return;
L_08A03B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B6C;
    }
L_08A03B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 326u, 0x08A05EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A03B7Cu) goto L_08A03B7C;
    return;
L_08A03B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B84;
    }
L_08A03B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 337u, 0x08A05FB8u>(ctx, &aot_mem) && ctx.pc == 0x08A03B94u) goto L_08A03B94;
    return;
L_08A03B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03B9C;
    }
L_08A03B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 351u, 0x08A06150u>(ctx, &aot_mem) && ctx.pc == 0x08A03BACu) goto L_08A03BAC;
    return;
L_08A03BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03BB4;
    }
L_08A03BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 54u, 0x08A085E0u>(ctx, &aot_mem) && ctx.pc == 0x08A03BC4u) goto L_08A03BC4;
    return;
L_08A03BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03BCC;
    }
L_08A03BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 91u, 0x08A089B4u>(ctx, &aot_mem) && ctx.pc == 0x08A03BDCu) goto L_08A03BDC;
    return;
L_08A03BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03BE4;
    }
L_08A03BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 152u, 0x08A08FB8u>(ctx, &aot_mem) && ctx.pc == 0x08A03BF4u) goto L_08A03BF4;
    return;
L_08A03BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03BFC;
    }
L_08A03BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 605u, 0x089FFE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03C0Cu) goto L_08A03C0C;
    return;
L_08A03C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03C14;
    }
L_08A03C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 230u, 0x08A0977Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03C24u) goto L_08A03C24;
    return;
L_08A03C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C3C;
      }
      goto L_08A03C2C;
    }
L_08A03C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A03C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 312u, 0x08A09F98u>(ctx, &aot_mem) && ctx.pc == 0x08A03C3Cu) goto L_08A03C3C;
    return;
L_08A03C3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 384u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03E08;
      }
      goto L_08A03C70;
    }
L_08A03C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A03C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 93u, 0x08A10988u>(ctx, &aot_mem) && ctx.pc == 0x08A03C80u) goto L_08A03C80;
    return;
L_08A03C80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03CB4;
      }
      goto L_08A03C8C;
    }
L_08A03C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03CFC;
      }
      goto L_08A03CC4;
    }
L_08A03CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03CFC;
      }
      goto L_08A03CDC;
    }
L_08A03CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A03D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 386u, 0x08A0ADA0u>(ctx, &aot_mem) && ctx.pc == 0x08A03D40u) goto L_08A03D40;
    return;
L_08A03D40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A03DF4;
      }
      goto L_08A03D50;
    }
L_08A03D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2632));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A03D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 449u, 0x08A46EC0u>(ctx, &aot_mem) && ctx.pc == 0x08A03D84u) goto L_08A03D84;
    return;
L_08A03D84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A03DB8;
      }
      goto L_08A03D94;
    }
L_08A03D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 640u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 640u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A03DB8;
L_08A03DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03E08;
      }
      goto L_08A03DD4;
    }
L_08A03DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A03E08;
L_08A03E08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03E68;
      }
      goto L_08A03E40;
    }
L_08A03E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03F68;
      }
      goto L_08A03E50;
    }
L_08A03E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03E90;
      }
      goto L_08A03E60;
    }
L_08A03E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03E9C;
      }
      goto L_08A03E68;
    }
L_08A03E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03EAC;
      }
      goto L_08A03E78;
    }
L_08A03E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03EE8;
      }
      goto L_08A03E88;
    }
L_08A03E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03F68;
      }
      goto L_08A03E90;
    }
L_08A03E90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03F68;
      }
      goto L_08A03E9C;
    }
L_08A03E9C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03F68;
      }
      goto L_08A03EAC;
    }
L_08A03EAC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A03EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 88u, 0x08A2D28Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03EBCu) goto L_08A03EBC;
    return;
L_08A03EBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03ED8;
      }
      goto L_08A03EC8;
    }
L_08A03EC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03F68;
      }
      goto L_08A03ED8;
    }
L_08A03ED8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03F68;
      }
      goto L_08A03EE8;
    }
L_08A03EE8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A03F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 19u, 0x08A0C268u>(ctx, &aot_mem) && ctx.pc == 0x08A03F08u) goto L_08A03F08;
    return;
L_08A03F08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A03F30;
      }
      goto L_08A03F14;
    }
L_08A03F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A03F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A03F28u) goto L_08A03F28;
    return;
L_08A03F28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A03F30;
L_08A03F30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A03F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 551u, 0x08A0F52Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03F3Cu) goto L_08A03F3C;
    return;
L_08A03F3C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2632));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A03F68;
L_08A03F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03FB0;
      }
      goto L_08A03F7C;
    }
L_08A03F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 6u, 0x08A040A8u>(ctx, &aot_mem); return;
      }
      goto L_08A03F98;
    }
L_08A03F98:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 6u, 0x08A040A8u>(ctx, &aot_mem); return;
      }
      goto L_08A03FB0;
    }
L_08A03FB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x08A04000u; return;
}

void recomp_unit_0127(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0127_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_127(Runtime &runtime) {
    runtime.register_generated_unit(127u, 0x08A00000u, 16384u, &recomp_unit_0127, &recomp_unit_0127_entry);
    runtime.register_function(0x08A00000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0007Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00088u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00104u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00124u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00144u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00150u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00158u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00168u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00170u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0017Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0018Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00198u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A001F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00200u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00210u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0021Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0022Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00234u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00248u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00258u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00264u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00274u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0029Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00308u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0031Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0032Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00338u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00354u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00364u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00374u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00378u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00384u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00398u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00400u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00410u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0041Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00438u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00444u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00450u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0045Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00468u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00478u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00488u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0048Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00498u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00508u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0052Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0054Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00558u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00568u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00578u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0058Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00598u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00604u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00628u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00640u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0064Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00658u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0068Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00700u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0070Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00718u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00724u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00738u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00744u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00750u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0075Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00774u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00794u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00808u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00830u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00840u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00848u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00858u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00868u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00888u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0089Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00904u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0090Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00920u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0092Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00938u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00944u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00960u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00970u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0097Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0098Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00998u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ABCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01014u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01044u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01060u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01074u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01104u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0111Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01128u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01140u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01150u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01160u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01170u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01180u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0118Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0119Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01204u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01214u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01238u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0124Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01260u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01270u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01284u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01298u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01304u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01318u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0132Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0133Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0134Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01350u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0135Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01370u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01380u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01384u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01418u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0143Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01454u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01470u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0147Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0148Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01494u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01508u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01514u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01524u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0152Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01540u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01554u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01568u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0157Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01620u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01644u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01668u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01678u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0169Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A016F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01700u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01710u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01718u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01730u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01744u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0174Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0176Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01778u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0178Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01794u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01814u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01828u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0184Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01858u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0189Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01904u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0190Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01938u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01948u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01950u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01960u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01990u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02014u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02034u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02074u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02084u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02120u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02200u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02220u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0223Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0224Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02270u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02284u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0230Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02380u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0238Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02424u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02438u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02478u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02484u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0250Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02518u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02608u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02688u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0269Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02718u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02730u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02748u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02778u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0278Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02800u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0280Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0282Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02838u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0284Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0287Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02890u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02898u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02908u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02928u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02990u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ACCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ED4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0301Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03028u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0303Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03070u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0308Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03118u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03124u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0312Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03160u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03188u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03194u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0319Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03204u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0320Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03218u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03234u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03244u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03268u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0329Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0331Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03344u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03350u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03358u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03390u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03404u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0342Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03438u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03440u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0344Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03498u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03520u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0352Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03538u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03554u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03564u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0357Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0358Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0359Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03610u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03620u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03644u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03654u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03674u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03684u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0369Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03704u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03714u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03724u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03734u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03744u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0374Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0375Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0376Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0377Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0378Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0379Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03804u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0380Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0381Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0382Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0383Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0384Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0385Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03864u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03874u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03884u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03894u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0390Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03914u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03924u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0392Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0393Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03944u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0395Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0396Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03984u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0398Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0399Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ABCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ADCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FB0u, &recomp_unit_0127, "recomp_unit_0127");
}
} // namespace psprecomp

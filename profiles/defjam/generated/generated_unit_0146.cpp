#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0146[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0,
    0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0,
    110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125,
    0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0,
    176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0,
    0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0,
    0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0,
    252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0,
    260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267,
    0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0,
    0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 320, 0, 0, 0,
    0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335,
    0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 342, 0,
    0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363,
    364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0,
    0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0,
    404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0,
    0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0,
    0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0,
    0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0,
    0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538,
    0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0,
    0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548,
    0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0,
    0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0,
    0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0,
    0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0,
    0, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0,
    621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 632,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0,
    0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0,
    640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0,
    0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660,
    0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0,
    666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0,
    671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0,
    0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0,
    684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 690,
    0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0,
    697, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0,
    0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0,
    711, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 718,
    0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0,
    0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731,
    0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0,
    0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0,
    0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759,
};
void recomp_unit_0146_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A4C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0146[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4C000;
    case 2u: goto L_08A4C00C;
    case 3u: goto L_08A4C024;
    case 4u: goto L_08A4C038;
    case 5u: goto L_08A4C04C;
    case 6u: goto L_08A4C058;
    case 7u: goto L_08A4C06C;
    case 8u: goto L_08A4C078;
    case 9u: goto L_08A4C090;
    case 10u: goto L_08A4C0A4;
    case 11u: goto L_08A4C0B8;
    case 12u: goto L_08A4C0C4;
    case 13u: goto L_08A4C0D8;
    case 14u: goto L_08A4C0F0;
    case 15u: goto L_08A4C0F8;
    case 16u: goto L_08A4C10C;
    case 17u: goto L_08A4C118;
    case 18u: goto L_08A4C12C;
    case 19u: goto L_08A4C138;
    case 20u: goto L_08A4C14C;
    case 21u: goto L_08A4C160;
    case 22u: goto L_08A4C16C;
    case 23u: goto L_08A4C180;
    case 24u: goto L_08A4C198;
    case 25u: goto L_08A4C1A0;
    case 26u: goto L_08A4C1B4;
    case 27u: goto L_08A4C1C0;
    case 28u: goto L_08A4C1D4;
    case 29u: goto L_08A4C1F0;
    case 30u: goto L_08A4C1F8;
    case 31u: goto L_08A4C20C;
    case 32u: goto L_08A4C218;
    case 33u: goto L_08A4C22C;
    case 34u: goto L_08A4C248;
    case 35u: goto L_08A4C250;
    case 36u: goto L_08A4C264;
    case 37u: goto L_08A4C270;
    case 38u: goto L_08A4C284;
    case 39u: goto L_08A4C29C;
    case 40u: goto L_08A4C2A4;
    case 41u: goto L_08A4C2B8;
    case 42u: goto L_08A4C2C4;
    case 43u: goto L_08A4C2D8;
    case 44u: goto L_08A4C2E4;
    case 45u: goto L_08A4C2FC;
    case 46u: goto L_08A4C310;
    case 47u: goto L_08A4C324;
    case 48u: goto L_08A4C330;
    case 49u: goto L_08A4C344;
    case 50u: goto L_08A4C350;
    case 51u: goto L_08A4C368;
    case 52u: goto L_08A4C37C;
    case 53u: goto L_08A4C390;
    case 54u: goto L_08A4C39C;
    case 55u: goto L_08A4C3B0;
    case 56u: goto L_08A4C3BC;
    case 57u: goto L_08A4C3D0;
    case 58u: goto L_08A4C3E4;
    case 59u: goto L_08A4C3F0;
    case 60u: goto L_08A4C404;
    case 61u: goto L_08A4C410;
    case 62u: goto L_08A4C428;
    case 63u: goto L_08A4C43C;
    case 64u: goto L_08A4C450;
    case 65u: goto L_08A4C45C;
    case 66u: goto L_08A4C470;
    case 67u: goto L_08A4C47C;
    case 68u: goto L_08A4C494;
    case 69u: goto L_08A4C4A8;
    case 70u: goto L_08A4C4BC;
    case 71u: goto L_08A4C4C8;
    case 72u: goto L_08A4C4DC;
    case 73u: goto L_08A4C4E8;
    case 74u: goto L_08A4C500;
    case 75u: goto L_08A4C514;
    case 76u: goto L_08A4C528;
    case 77u: goto L_08A4C534;
    case 78u: goto L_08A4C548;
    case 79u: goto L_08A4C554;
    case 80u: goto L_08A4C56C;
    case 81u: goto L_08A4C580;
    case 82u: goto L_08A4C594;
    case 83u: goto L_08A4C5A0;
    case 84u: goto L_08A4C5B4;
    case 85u: goto L_08A4C5C0;
    case 86u: goto L_08A4C5D8;
    case 87u: goto L_08A4C5EC;
    case 88u: goto L_08A4C600;
    case 89u: goto L_08A4C60C;
    case 90u: goto L_08A4C620;
    case 91u: goto L_08A4C62C;
    case 92u: goto L_08A4C644;
    case 93u: goto L_08A4C658;
    case 94u: goto L_08A4C66C;
    case 95u: goto L_08A4C678;
    case 96u: goto L_08A4C68C;
    case 97u: goto L_08A4C698;
    case 98u: goto L_08A4C6AC;
    case 99u: goto L_08A4C6C0;
    case 100u: goto L_08A4C6CC;
    case 101u: goto L_08A4C6E0;
    case 102u: goto L_08A4C6EC;
    case 103u: goto L_08A4C704;
    case 104u: goto L_08A4C718;
    case 105u: goto L_08A4C72C;
    case 106u: goto L_08A4C738;
    case 107u: goto L_08A4C74C;
    case 108u: goto L_08A4C764;
    case 109u: goto L_08A4C76C;
    case 110u: goto L_08A4C780;
    case 111u: goto L_08A4C78C;
    case 112u: goto L_08A4C7A0;
    case 113u: goto L_08A4C7B8;
    case 114u: goto L_08A4C7C0;
    case 115u: goto L_08A4C7D4;
    case 116u: goto L_08A4C7E0;
    case 117u: goto L_08A4C7F4;
    case 118u: goto L_08A4C80C;
    case 119u: goto L_08A4C814;
    case 120u: goto L_08A4C828;
    case 121u: goto L_08A4C834;
    case 122u: goto L_08A4C848;
    case 123u: goto L_08A4C860;
    case 124u: goto L_08A4C868;
    case 125u: goto L_08A4C87C;
    case 126u: goto L_08A4C888;
    case 127u: goto L_08A4C89C;
    case 128u: goto L_08A4C8B4;
    case 129u: goto L_08A4C8BC;
    case 130u: goto L_08A4C8D0;
    case 131u: goto L_08A4C8DC;
    case 132u: goto L_08A4C8F0;
    case 133u: goto L_08A4C908;
    case 134u: goto L_08A4C910;
    case 135u: goto L_08A4C924;
    case 136u: goto L_08A4C930;
    case 137u: goto L_08A4C944;
    case 138u: goto L_08A4C95C;
    case 139u: goto L_08A4C964;
    case 140u: goto L_08A4C978;
    case 141u: goto L_08A4C984;
    case 142u: goto L_08A4C998;
    case 143u: goto L_08A4C9B0;
    case 144u: goto L_08A4C9C4;
    case 145u: goto L_08A4CA00;
    case 146u: goto L_08A4CA08;
    case 147u: goto L_08A4CA1C;
    case 148u: goto L_08A4CA28;
    case 149u: goto L_08A4CA3C;
    case 150u: goto L_08A4CA54;
    case 151u: goto L_08A4CA5C;
    case 152u: goto L_08A4CA70;
    case 153u: goto L_08A4CA7C;
    case 154u: goto L_08A4CA90;
    case 155u: goto L_08A4CAA8;
    case 156u: goto L_08A4CAB0;
    case 157u: goto L_08A4CAC4;
    case 158u: goto L_08A4CAD0;
    case 159u: goto L_08A4CAE4;
    case 160u: goto L_08A4CAFC;
    case 161u: goto L_08A4CB04;
    case 162u: goto L_08A4CB18;
    case 163u: goto L_08A4CB24;
    case 164u: goto L_08A4CB38;
    case 165u: goto L_08A4CB50;
    case 166u: goto L_08A4CB58;
    case 167u: goto L_08A4CB6C;
    case 168u: goto L_08A4CB78;
    case 169u: goto L_08A4CB8C;
    case 170u: goto L_08A4CBA4;
    case 171u: goto L_08A4CBAC;
    case 172u: goto L_08A4CBC0;
    case 173u: goto L_08A4CBCC;
    case 174u: goto L_08A4CBE0;
    case 175u: goto L_08A4CBF8;
    case 176u: goto L_08A4CC00;
    case 177u: goto L_08A4CC14;
    case 178u: goto L_08A4CC20;
    case 179u: goto L_08A4CC34;
    case 180u: goto L_08A4CC4C;
    case 181u: goto L_08A4CC54;
    case 182u: goto L_08A4CC68;
    case 183u: goto L_08A4CC74;
    case 184u: goto L_08A4CC88;
    case 185u: goto L_08A4CCA0;
    case 186u: goto L_08A4CCA8;
    case 187u: goto L_08A4CCBC;
    case 188u: goto L_08A4CCC8;
    case 189u: goto L_08A4CCDC;
    case 190u: goto L_08A4CCF4;
    case 191u: goto L_08A4CCFC;
    case 192u: goto L_08A4CD10;
    case 193u: goto L_08A4CD1C;
    case 194u: goto L_08A4CD30;
    case 195u: goto L_08A4CD48;
    case 196u: goto L_08A4CD50;
    case 197u: goto L_08A4CD64;
    case 198u: goto L_08A4CD70;
    case 199u: goto L_08A4CD84;
    case 200u: goto L_08A4CD9C;
    case 201u: goto L_08A4CDA4;
    case 202u: goto L_08A4CDB8;
    case 203u: goto L_08A4CDC4;
    case 204u: goto L_08A4CDD8;
    case 205u: goto L_08A4CDF0;
    case 206u: goto L_08A4CDF8;
    case 207u: goto L_08A4CE0C;
    case 208u: goto L_08A4CE18;
    case 209u: goto L_08A4CE2C;
    case 210u: goto L_08A4CE44;
    case 211u: goto L_08A4CE4C;
    case 212u: goto L_08A4CE60;
    case 213u: goto L_08A4CE6C;
    case 214u: goto L_08A4CE80;
    case 215u: goto L_08A4CE98;
    case 216u: goto L_08A4CEA0;
    case 217u: goto L_08A4CEB4;
    case 218u: goto L_08A4CEC0;
    case 219u: goto L_08A4CED4;
    case 220u: goto L_08A4CEEC;
    case 221u: goto L_08A4CEF4;
    case 222u: goto L_08A4CF08;
    case 223u: goto L_08A4CF14;
    case 224u: goto L_08A4CF28;
    case 225u: goto L_08A4CF40;
    case 226u: goto L_08A4CF48;
    case 227u: goto L_08A4CF5C;
    case 228u: goto L_08A4CF68;
    case 229u: goto L_08A4CF7C;
    case 230u: goto L_08A4CF94;
    case 231u: goto L_08A4CF9C;
    case 232u: goto L_08A4CFB0;
    case 233u: goto L_08A4CFBC;
    case 234u: goto L_08A4CFD0;
    case 235u: goto L_08A4CFE8;
    case 236u: goto L_08A4CFF0;
    case 237u: goto L_08A4D004;
    case 238u: goto L_08A4D010;
    case 239u: goto L_08A4D024;
    case 240u: goto L_08A4D03C;
    case 241u: goto L_08A4D044;
    case 242u: goto L_08A4D058;
    case 243u: goto L_08A4D064;
    case 244u: goto L_08A4D078;
    case 245u: goto L_08A4D090;
    case 246u: goto L_08A4D098;
    case 247u: goto L_08A4D0AC;
    case 248u: goto L_08A4D0B8;
    case 249u: goto L_08A4D0CC;
    case 250u: goto L_08A4D0E4;
    case 251u: goto L_08A4D0EC;
    case 252u: goto L_08A4D100;
    case 253u: goto L_08A4D10C;
    case 254u: goto L_08A4D120;
    case 255u: goto L_08A4D138;
    case 256u: goto L_08A4D140;
    case 257u: goto L_08A4D154;
    case 258u: goto L_08A4D160;
    case 259u: goto L_08A4D174;
    case 260u: goto L_08A4D180;
    case 261u: goto L_08A4D194;
    case 262u: goto L_08A4D1A8;
    case 263u: goto L_08A4D1B4;
    case 264u: goto L_08A4D1C8;
    case 265u: goto L_08A4D1E0;
    case 266u: goto L_08A4D1E8;
    case 267u: goto L_08A4D1FC;
    case 268u: goto L_08A4D208;
    case 269u: goto L_08A4D21C;
    case 270u: goto L_08A4D234;
    case 271u: goto L_08A4D23C;
    case 272u: goto L_08A4D250;
    case 273u: goto L_08A4D25C;
    case 274u: goto L_08A4D270;
    case 275u: goto L_08A4D288;
    case 276u: goto L_08A4D290;
    case 277u: goto L_08A4D2A4;
    case 278u: goto L_08A4D2B0;
    case 279u: goto L_08A4D2C4;
    case 280u: goto L_08A4D2DC;
    case 281u: goto L_08A4D2E4;
    case 282u: goto L_08A4D2F8;
    case 283u: goto L_08A4D304;
    case 284u: goto L_08A4D318;
    case 285u: goto L_08A4D324;
    case 286u: goto L_08A4D338;
    case 287u: goto L_08A4D34C;
    case 288u: goto L_08A4D358;
    case 289u: goto L_08A4D36C;
    case 290u: goto L_08A4D384;
    case 291u: goto L_08A4D38C;
    case 292u: goto L_08A4D3A0;
    case 293u: goto L_08A4D3AC;
    case 294u: goto L_08A4D3C0;
    case 295u: goto L_08A4D3D8;
    case 296u: goto L_08A4D3E0;
    case 297u: goto L_08A4D3F4;
    case 298u: goto L_08A4D400;
    case 299u: goto L_08A4D414;
    case 300u: goto L_08A4D42C;
    case 301u: goto L_08A4D434;
    case 302u: goto L_08A4D448;
    case 303u: goto L_08A4D454;
    case 304u: goto L_08A4D468;
    case 305u: goto L_08A4D474;
    case 306u: goto L_08A4D488;
    case 307u: goto L_08A4D49C;
    case 308u: goto L_08A4D4A8;
    case 309u: goto L_08A4D4AC;
    case 310u: goto L_08A4D4C0;
    case 311u: goto L_08A4D4CC;
    case 312u: goto L_08A4D4E0;
    case 313u: goto L_08A4D4F4;
    case 314u: goto L_08A4D500;
    case 315u: goto L_08A4D514;
    case 316u: goto L_08A4D53C;
    case 317u: goto L_08A4D54C;
    case 318u: goto L_08A4D560;
    case 319u: goto L_08A4D56C;
    case 320u: goto L_08A4D570;
    case 321u: goto L_08A4D584;
    case 322u: goto L_08A4D590;
    case 323u: goto L_08A4D5A4;
    case 324u: goto L_08A4D5B8;
    case 325u: goto L_08A4D5C4;
    case 326u: goto L_08A4D5D8;
    case 327u: goto L_08A4D600;
    case 328u: goto L_08A4D610;
    case 329u: goto L_08A4D624;
    case 330u: goto L_08A4D630;
    case 331u: goto L_08A4D634;
    case 332u: goto L_08A4D648;
    case 333u: goto L_08A4D654;
    case 334u: goto L_08A4D668;
    case 335u: goto L_08A4D67C;
    case 336u: goto L_08A4D688;
    case 337u: goto L_08A4D69C;
    case 338u: goto L_08A4D6C4;
    case 339u: goto L_08A4D6D4;
    case 340u: goto L_08A4D6E8;
    case 341u: goto L_08A4D6F4;
    case 342u: goto L_08A4D6F8;
    case 343u: goto L_08A4D70C;
    case 344u: goto L_08A4D718;
    case 345u: goto L_08A4D72C;
    case 346u: goto L_08A4D740;
    case 347u: goto L_08A4D74C;
    case 348u: goto L_08A4D760;
    case 349u: goto L_08A4D788;
    case 350u: goto L_08A4D798;
    case 351u: goto L_08A4D7AC;
    case 352u: goto L_08A4D7B8;
    case 353u: goto L_08A4D7BC;
    case 354u: goto L_08A4D7D0;
    case 355u: goto L_08A4D7DC;
    case 356u: goto L_08A4D7F0;
    case 357u: goto L_08A4D804;
    case 358u: goto L_08A4D810;
    case 359u: goto L_08A4D824;
    case 360u: goto L_08A4D84C;
    case 361u: goto L_08A4D85C;
    case 362u: goto L_08A4D870;
    case 363u: goto L_08A4D87C;
    case 364u: goto L_08A4D880;
    case 365u: goto L_08A4D894;
    case 366u: goto L_08A4D8A0;
    case 367u: goto L_08A4D8B4;
    case 368u: goto L_08A4D8C8;
    case 369u: goto L_08A4D8D4;
    case 370u: goto L_08A4D8E8;
    case 371u: goto L_08A4D910;
    case 372u: goto L_08A4D920;
    case 373u: goto L_08A4D934;
    case 374u: goto L_08A4D940;
    case 375u: goto L_08A4D954;
    case 376u: goto L_08A4D960;
    case 377u: goto L_08A4D970;
    case 378u: goto L_08A4D984;
    case 379u: goto L_08A4D9A8;
    case 380u: goto L_08A4D9B4;
    case 381u: goto L_08A4D9C8;
    case 382u: goto L_08A4D9D4;
    case 383u: goto L_08A4D9F4;
    case 384u: goto L_08A4DA0C;
    case 385u: goto L_08A4DA14;
    case 386u: goto L_08A4DA28;
    case 387u: goto L_08A4DA34;
    case 388u: goto L_08A4DA48;
    case 389u: goto L_08A4DA54;
    case 390u: goto L_08A4DA68;
    case 391u: goto L_08A4DA98;
    case 392u: goto L_08A4DAC0;
    case 393u: goto L_08A4DAD0;
    case 394u: goto L_08A4DADC;
    case 395u: goto L_08A4DAEC;
    case 396u: goto L_08A4DAF8;
    case 397u: goto L_08A4DB0C;
    case 398u: goto L_08A4DB20;
    case 399u: goto L_08A4DB2C;
    case 400u: goto L_08A4DB40;
    case 401u: goto L_08A4DB58;
    case 402u: goto L_08A4DB60;
    case 403u: goto L_08A4DB74;
    case 404u: goto L_08A4DB80;
    case 405u: goto L_08A4DB94;
    case 406u: goto L_08A4DBB0;
    case 407u: goto L_08A4DBB8;
    case 408u: goto L_08A4DBCC;
    case 409u: goto L_08A4DBD8;
    case 410u: goto L_08A4DBEC;
    case 411u: goto L_08A4DBF8;
    case 412u: goto L_08A4DC10;
    case 413u: goto L_08A4DC24;
    case 414u: goto L_08A4DC38;
    case 415u: goto L_08A4DC44;
    case 416u: goto L_08A4DC58;
    case 417u: goto L_08A4DC64;
    case 418u: goto L_08A4DC7C;
    case 419u: goto L_08A4DC94;
    case 420u: goto L_08A4DCA8;
    case 421u: goto L_08A4DCB4;
    case 422u: goto L_08A4DCC8;
    case 423u: goto L_08A4DCD4;
    case 424u: goto L_08A4DCEC;
    case 425u: goto L_08A4DD00;
    case 426u: goto L_08A4DD14;
    case 427u: goto L_08A4DD20;
    case 428u: goto L_08A4DD34;
    case 429u: goto L_08A4DD4C;
    case 430u: goto L_08A4DD54;
    case 431u: goto L_08A4DD68;
    case 432u: goto L_08A4DD74;
    case 433u: goto L_08A4DD88;
    case 434u: goto L_08A4DDA0;
    case 435u: goto L_08A4DDA8;
    case 436u: goto L_08A4DDBC;
    case 437u: goto L_08A4DDC8;
    case 438u: goto L_08A4DDDC;
    case 439u: goto L_08A4DDE8;
    case 440u: goto L_08A4DE00;
    case 441u: goto L_08A4DE14;
    case 442u: goto L_08A4DE28;
    case 443u: goto L_08A4DE34;
    case 444u: goto L_08A4DE48;
    case 445u: goto L_08A4DE54;
    case 446u: goto L_08A4DE6C;
    case 447u: goto L_08A4DE80;
    case 448u: goto L_08A4DE94;
    case 449u: goto L_08A4DEA8;
    case 450u: goto L_08A4DEB4;
    case 451u: goto L_08A4DED4;
    case 452u: goto L_08A4DEE8;
    case 453u: goto L_08A4DEF4;
    case 454u: goto L_08A4DF08;
    case 455u: goto L_08A4DF18;
    case 456u: goto L_08A4DF24;
    case 457u: goto L_08A4DF38;
    case 458u: goto L_08A4DF50;
    case 459u: goto L_08A4DF58;
    case 460u: goto L_08A4DF68;
    case 461u: goto L_08A4DFCC;
    case 462u: goto L_08A4DFF4;
    case 463u: goto L_08A4E010;
    case 464u: goto L_08A4E038;
    case 465u: goto L_08A4E044;
    case 466u: goto L_08A4E054;
    case 467u: goto L_08A4E07C;
    case 468u: goto L_08A4E098;
    case 469u: goto L_08A4E0C0;
    case 470u: goto L_08A4E100;
    case 471u: goto L_08A4E144;
    case 472u: goto L_08A4E184;
    case 473u: goto L_08A4E1B0;
    case 474u: goto L_08A4E1F0;
    case 475u: goto L_08A4E208;
    case 476u: goto L_08A4E270;
    case 477u: goto L_08A4E28C;
    case 478u: goto L_08A4E2A4;
    case 479u: goto L_08A4E2B0;
    case 480u: goto L_08A4E2C8;
    case 481u: goto L_08A4E300;
    case 482u: goto L_08A4E328;
    case 483u: goto L_08A4E334;
    case 484u: goto L_08A4E34C;
    case 485u: goto L_08A4E37C;
    case 486u: goto L_08A4E394;
    case 487u: goto L_08A4E3A8;
    case 488u: goto L_08A4E3B0;
    case 489u: goto L_08A4E3C4;
    case 490u: goto L_08A4E3E0;
    case 491u: goto L_08A4E414;
    case 492u: goto L_08A4E460;
    case 493u: goto L_08A4E468;
    case 494u: goto L_08A4E480;
    case 495u: goto L_08A4E4B0;
    case 496u: goto L_08A4E4C4;
    case 497u: goto L_08A4E4E8;
    case 498u: goto L_08A4E4F4;
    case 499u: goto L_08A4E514;
    case 500u: goto L_08A4E528;
    case 501u: goto L_08A4E534;
    case 502u: goto L_08A4E548;
    case 503u: goto L_08A4E56C;
    case 504u: goto L_08A4E578;
    case 505u: goto L_08A4E598;
    case 506u: goto L_08A4E5AC;
    case 507u: goto L_08A4E5B8;
    case 508u: goto L_08A4E5D0;
    case 509u: goto L_08A4E62C;
    case 510u: goto L_08A4E634;
    case 511u: goto L_08A4E674;
    case 512u: goto L_08A4E6A8;
    case 513u: goto L_08A4E6B8;
    case 514u: goto L_08A4E6D4;
    case 515u: goto L_08A4E6F4;
    case 516u: goto L_08A4E708;
    case 517u: goto L_08A4E710;
    case 518u: goto L_08A4E748;
    case 519u: goto L_08A4E754;
    case 520u: goto L_08A4E76C;
    case 521u: goto L_08A4E778;
    case 522u: goto L_08A4E798;
    case 523u: goto L_08A4E7D8;
    case 524u: goto L_08A4E7E4;
    case 525u: goto L_08A4E804;
    case 526u: goto L_08A4E834;
    case 527u: goto L_08A4E84C;
    case 528u: goto L_08A4E88C;
    case 529u: goto L_08A4E8A4;
    case 530u: goto L_08A4E8B4;
    case 531u: goto L_08A4E9B4;
    case 532u: goto L_08A4E9BC;
    case 533u: goto L_08A4E9D4;
    case 534u: goto L_08A4E9EC;
    case 535u: goto L_08A4EA10;
    case 536u: goto L_08A4EA1C;
    case 537u: goto L_08A4EA38;
    case 538u: goto L_08A4EA7C;
    case 539u: goto L_08A4EA88;
    case 540u: goto L_08A4EABC;
    case 541u: goto L_08A4EAD8;
    case 542u: goto L_08A4EAF8;
    case 543u: goto L_08A4EB0C;
    case 544u: goto L_08A4EB20;
    case 545u: goto L_08A4EB38;
    case 546u: goto L_08A4EB44;
    case 547u: goto L_08A4EB58;
    case 548u: goto L_08A4EB7C;
    case 549u: goto L_08A4EB88;
    case 550u: goto L_08A4EBA8;
    case 551u: goto L_08A4EBBC;
    case 552u: goto L_08A4EBD4;
    case 553u: goto L_08A4EBF8;
    case 554u: goto L_08A4EC0C;
    case 555u: goto L_08A4EC24;
    case 556u: goto L_08A4EC30;
    case 557u: goto L_08A4EC64;
    case 558u: goto L_08A4EC70;
    case 559u: goto L_08A4EC88;
    case 560u: goto L_08A4EC94;
    case 561u: goto L_08A4ECAC;
    case 562u: goto L_08A4ECD8;
    case 563u: goto L_08A4ECF8;
    case 564u: goto L_08A4ED14;
    case 565u: goto L_08A4ED30;
    case 566u: goto L_08A4ED44;
    case 567u: goto L_08A4ED4C;
    case 568u: goto L_08A4ED64;
    case 569u: goto L_08A4ED70;
    case 570u: goto L_08A4EDA4;
    case 571u: goto L_08A4EDC8;
    case 572u: goto L_08A4EDD4;
    case 573u: goto L_08A4EDF4;
    case 574u: goto L_08A4EE08;
    case 575u: goto L_08A4EE18;
    case 576u: goto L_08A4EE20;
    case 577u: goto L_08A4EE38;
    case 578u: goto L_08A4EE4C;
    case 579u: goto L_08A4EE60;
    case 580u: goto L_08A4EE70;
    case 581u: goto L_08A4EE94;
    case 582u: goto L_08A4EEA8;
    case 583u: goto L_08A4EEB8;
    case 584u: goto L_08A4EF98;
    case 585u: goto L_08A4EFA8;
    case 586u: goto L_08A4EFB8;
    case 587u: goto L_08A4EFD0;
    case 588u: goto L_08A4EFE0;
    case 589u: goto L_08A4EFF8;
    case 590u: goto L_08A4F00C;
    case 591u: goto L_08A4F01C;
    case 592u: goto L_08A4F02C;
    case 593u: goto L_08A4F058;
    case 594u: goto L_08A4F06C;
    case 595u: goto L_08A4F08C;
    case 596u: goto L_08A4F094;
    case 597u: goto L_08A4F09C;
    case 598u: goto L_08A4F0AC;
    case 599u: goto L_08A4F0BC;
    case 600u: goto L_08A4F0CC;
    case 601u: goto L_08A4F0D4;
    case 602u: goto L_08A4F0E0;
    case 603u: goto L_08A4F11C;
    case 604u: goto L_08A4F134;
    case 605u: goto L_08A4F148;
    case 606u: goto L_08A4F160;
    case 607u: goto L_08A4F1A4;
    case 608u: goto L_08A4F1EC;
    case 609u: goto L_08A4F214;
    case 610u: goto L_08A4F234;
    case 611u: goto L_08A4F24C;
    case 612u: goto L_08A4F270;
    case 613u: goto L_08A4F2A4;
    case 614u: goto L_08A4F2D0;
    case 615u: goto L_08A4F2E4;
    case 616u: goto L_08A4F308;
    case 617u: goto L_08A4F32C;
    case 618u: goto L_08A4F340;
    case 619u: goto L_08A4F34C;
    case 620u: goto L_08A4F368;
    case 621u: goto L_08A4F380;
    case 622u: goto L_08A4F388;
    case 623u: goto L_08A4F39C;
    case 624u: goto L_08A4F3E8;
    case 625u: goto L_08A4F410;
    case 626u: goto L_08A4F42C;
    case 627u: goto L_08A4F444;
    case 628u: goto L_08A4F45C;
    case 629u: goto L_08A4F49C;
    case 630u: goto L_08A4F4D8;
    case 631u: goto L_08A4F4E8;
    case 632u: goto L_08A4F4FC;
    case 633u: goto L_08A4F538;
    case 634u: goto L_08A4F578;
    case 635u: goto L_08A4F590;
    case 636u: goto L_08A4F5A8;
    case 637u: goto L_08A4F5C0;
    case 638u: goto L_08A4F5D0;
    case 639u: goto L_08A4F5F4;
    case 640u: goto L_08A4F600;
    case 641u: goto L_08A4F618;
    case 642u: goto L_08A4F63C;
    case 643u: goto L_08A4F648;
    case 644u: goto L_08A4F650;
    case 645u: goto L_08A4F678;
    case 646u: goto L_08A4F694;
    case 647u: goto L_08A4F6A0;
    case 648u: goto L_08A4F6BC;
    case 649u: goto L_08A4F6C8;
    case 650u: goto L_08A4F71C;
    case 651u: goto L_08A4F734;
    case 652u: goto L_08A4F750;
    case 653u: goto L_08A4F7A8;
    case 654u: goto L_08A4F7C0;
    case 655u: goto L_08A4F7D4;
    case 656u: goto L_08A4F7E8;
    case 657u: goto L_08A4F7FC;
    case 658u: goto L_08A4F804;
    case 659u: goto L_08A4F864;
    case 660u: goto L_08A4F87C;
    case 661u: goto L_08A4F8A0;
    case 662u: goto L_08A4F8B0;
    case 663u: goto L_08A4F8C4;
    case 664u: goto L_08A4F8D8;
    case 665u: goto L_08A4F8EC;
    case 666u: goto L_08A4F900;
    case 667u: goto L_08A4F914;
    case 668u: goto L_08A4F92C;
    case 669u: goto L_08A4F948;
    case 670u: goto L_08A4F964;
    case 671u: goto L_08A4F980;
    case 672u: goto L_08A4F99C;
    case 673u: goto L_08A4F9B0;
    case 674u: goto L_08A4F9C4;
    case 675u: goto L_08A4F9DC;
    case 676u: goto L_08A4F9F0;
    case 677u: goto L_08A4FA04;
    case 678u: goto L_08A4FA14;
    case 679u: goto L_08A4FA24;
    case 680u: goto L_08A4FA40;
    case 681u: goto L_08A4FA50;
    case 682u: goto L_08A4FA64;
    case 683u: goto L_08A4FA6C;
    case 684u: goto L_08A4FA80;
    case 685u: goto L_08A4FA94;
    case 686u: goto L_08A4FAA8;
    case 687u: goto L_08A4FAC4;
    case 688u: goto L_08A4FAD8;
    case 689u: goto L_08A4FAEC;
    case 690u: goto L_08A4FAFC;
    case 691u: goto L_08A4FB0C;
    case 692u: goto L_08A4FB28;
    case 693u: goto L_08A4FB38;
    case 694u: goto L_08A4FB4C;
    case 695u: goto L_08A4FB54;
    case 696u: goto L_08A4FB6C;
    case 697u: goto L_08A4FB80;
    case 698u: goto L_08A4FB94;
    case 699u: goto L_08A4FBA4;
    case 700u: goto L_08A4FBB4;
    case 701u: goto L_08A4FBC8;
    case 702u: goto L_08A4FBD8;
    case 703u: goto L_08A4FBF0;
    case 704u: goto L_08A4FC04;
    case 705u: goto L_08A4FC18;
    case 706u: goto L_08A4FC28;
    case 707u: goto L_08A4FC38;
    case 708u: goto L_08A4FC4C;
    case 709u: goto L_08A4FC5C;
    case 710u: goto L_08A4FC6C;
    case 711u: goto L_08A4FC80;
    case 712u: goto L_08A4FC94;
    case 713u: goto L_08A4FCA4;
    case 714u: goto L_08A4FCB4;
    case 715u: goto L_08A4FCC8;
    case 716u: goto L_08A4FCD8;
    case 717u: goto L_08A4FCE8;
    case 718u: goto L_08A4FCFC;
    case 719u: goto L_08A4FD10;
    case 720u: goto L_08A4FD20;
    case 721u: goto L_08A4FD30;
    case 722u: goto L_08A4FD44;
    case 723u: goto L_08A4FD54;
    case 724u: goto L_08A4FD64;
    case 725u: goto L_08A4FD84;
    case 726u: goto L_08A4FD90;
    case 727u: goto L_08A4FDB4;
    case 728u: goto L_08A4FDC8;
    case 729u: goto L_08A4FDDC;
    case 730u: goto L_08A4FDEC;
    case 731u: goto L_08A4FDFC;
    case 732u: goto L_08A4FE10;
    case 733u: goto L_08A4FE20;
    case 734u: goto L_08A4FE30;
    case 735u: goto L_08A4FE44;
    case 736u: goto L_08A4FE54;
    case 737u: goto L_08A4FE68;
    case 738u: goto L_08A4FE78;
    case 739u: goto L_08A4FE88;
    case 740u: goto L_08A4FE9C;
    case 741u: goto L_08A4FEC4;
    case 742u: goto L_08A4FED4;
    case 743u: goto L_08A4FEE8;
    case 744u: goto L_08A4FEF8;
    case 745u: goto L_08A4FF0C;
    case 746u: goto L_08A4FF34;
    case 747u: goto L_08A4FF44;
    case 748u: goto L_08A4FF54;
    case 749u: goto L_08A4FF60;
    case 750u: goto L_08A4FF88;
    case 751u: goto L_08A4FF98;
    case 752u: goto L_08A4FFA4;
    case 753u: goto L_08A4FFAC;
    case 754u: goto L_08A4FFBC;
    case 755u: goto L_08A4FFC4;
    case 756u: goto L_08A4FFD4;
    case 757u: goto L_08A4FFE4;
    case 758u: goto L_08A4FFEC;
    case 759u: goto L_08A4FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4C000:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C00Cu) goto L_08A4C00C;
    return;
L_08A4C00C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C024u) goto L_08A4C024;
    return;
L_08A4C024:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 791u, 0x08A4BF98u>(ctx, &aot_mem); return;
      }
      goto L_08A4C038;
    }
L_08A4C038:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20436));
    ctx.gpr[31] = (0x08A4C04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C04Cu) goto L_08A4C04C;
    return;
L_08A4C04C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 791u, 0x08A4BF98u>(ctx, &aot_mem); return;
      }
      goto L_08A4C058;
    }
L_08A4C058:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C06Cu) goto L_08A4C06C;
    return;
L_08A4C06C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C078u) goto L_08A4C078;
    return;
L_08A4C078:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C090u) goto L_08A4C090;
    return;
L_08A4C090:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 791u, 0x08A4BF98u>(ctx, &aot_mem); return;
      }
      goto L_08A4C0A4;
    }
L_08A4C0A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20424));
    ctx.gpr[31] = (0x08A4C0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C0B8u) goto L_08A4C0B8;
    return;
L_08A4C0B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C0F8;
      }
      goto L_08A4C0C4;
    }
L_08A4C0C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C0D8u) goto L_08A4C0D8;
    return;
L_08A4C0D8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1648));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C0F0u) goto L_08A4C0F0;
    return;
L_08A4C0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C0F8;
    }
L_08A4C0F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20400));
    ctx.gpr[31] = (0x08A4C10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C10Cu) goto L_08A4C10C;
    return;
L_08A4C10C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C250;
      }
      goto L_08A4C118;
    }
L_08A4C118:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20376));
    ctx.gpr[31] = (0x08A4C12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C12Cu) goto L_08A4C12C;
    return;
L_08A4C12C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C138;
    }
L_08A4C138:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C14Cu) goto L_08A4C14C;
    return;
L_08A4C14C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20348));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C160u) goto L_08A4C160;
    return;
L_08A4C160:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C1A0;
      }
      goto L_08A4C16C;
    }
L_08A4C16C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C180u) goto L_08A4C180;
    return;
L_08A4C180:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1660));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C198u) goto L_08A4C198;
    return;
L_08A4C198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C118;
      }
      goto L_08A4C1A0;
    }
L_08A4C1A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20340));
    ctx.gpr[31] = (0x08A4C1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1B4u) goto L_08A4C1B4;
    return;
L_08A4C1B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C1F8;
      }
      goto L_08A4C1C0;
    }
L_08A4C1C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1D4u) goto L_08A4C1D4;
    return;
L_08A4C1D4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1660));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C1F0u) goto L_08A4C1F0;
    return;
L_08A4C1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C118;
      }
      goto L_08A4C1F8;
    }
L_08A4C1F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20332));
    ctx.gpr[31] = (0x08A4C20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C20Cu) goto L_08A4C20C;
    return;
L_08A4C20C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C118;
      }
      goto L_08A4C218;
    }
L_08A4C218:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C22Cu) goto L_08A4C22C;
    return;
L_08A4C22C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1660));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C248u) goto L_08A4C248;
    return;
L_08A4C248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C118;
      }
      goto L_08A4C250;
    }
L_08A4C250:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20324));
    ctx.gpr[31] = (0x08A4C264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C264u) goto L_08A4C264;
    return;
L_08A4C264:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C2A4;
      }
      goto L_08A4C270;
    }
L_08A4C270:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C284u) goto L_08A4C284;
    return;
L_08A4C284:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1696));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C29Cu) goto L_08A4C29C;
    return;
L_08A4C29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C2A4;
    }
L_08A4C2A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20300));
    ctx.gpr[31] = (0x08A4C2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C2B8u) goto L_08A4C2B8;
    return;
L_08A4C2B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C310;
      }
      goto L_08A4C2C4;
    }
L_08A4C2C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C2D8u) goto L_08A4C2D8;
    return;
L_08A4C2D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C2E4u) goto L_08A4C2E4;
    return;
L_08A4C2E4:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C2FCu) goto L_08A4C2FC;
    return;
L_08A4C2FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C310;
    }
L_08A4C310:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20284));
    ctx.gpr[31] = (0x08A4C324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C324u) goto L_08A4C324;
    return;
L_08A4C324:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C37C;
      }
      goto L_08A4C330;
    }
L_08A4C330:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C344u) goto L_08A4C344;
    return;
L_08A4C344:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C350u) goto L_08A4C350;
    return;
L_08A4C350:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C368u) goto L_08A4C368;
    return;
L_08A4C368:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C37C;
    }
L_08A4C37C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20260));
    ctx.gpr[31] = (0x08A4C390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C390u) goto L_08A4C390;
    return;
L_08A4C390:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C658;
      }
      goto L_08A4C39C;
    }
L_08A4C39C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20244));
    ctx.gpr[31] = (0x08A4C3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C3B0u) goto L_08A4C3B0;
    return;
L_08A4C3B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C3BC;
    }
L_08A4C3BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C3D0u) goto L_08A4C3D0;
    return;
L_08A4C3D0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20228));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C3E4u) goto L_08A4C3E4;
    return;
L_08A4C3E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C43C;
      }
      goto L_08A4C3F0;
    }
L_08A4C3F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C404u) goto L_08A4C404;
    return;
L_08A4C404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C410u) goto L_08A4C410;
    return;
L_08A4C410:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C428u) goto L_08A4C428;
    return;
L_08A4C428:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C43C;
    }
L_08A4C43C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20216));
    ctx.gpr[31] = (0x08A4C450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C450u) goto L_08A4C450;
    return;
L_08A4C450:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4A8;
      }
      goto L_08A4C45C;
    }
L_08A4C45C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C470u) goto L_08A4C470;
    return;
L_08A4C470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C47Cu) goto L_08A4C47C;
    return;
L_08A4C47C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C494u) goto L_08A4C494;
    return;
L_08A4C494:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10892), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C4A8;
    }
L_08A4C4A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20204));
    ctx.gpr[31] = (0x08A4C4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C4BCu) goto L_08A4C4BC;
    return;
L_08A4C4BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C514;
      }
      goto L_08A4C4C8;
    }
L_08A4C4C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C4DCu) goto L_08A4C4DC;
    return;
L_08A4C4DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C4E8u) goto L_08A4C4E8;
    return;
L_08A4C4E8:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C500u) goto L_08A4C500;
    return;
L_08A4C500:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C514;
    }
L_08A4C514:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20192));
    ctx.gpr[31] = (0x08A4C528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C528u) goto L_08A4C528;
    return;
L_08A4C528:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C580;
      }
      goto L_08A4C534;
    }
L_08A4C534:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C548u) goto L_08A4C548;
    return;
L_08A4C548:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C554u) goto L_08A4C554;
    return;
L_08A4C554:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C56Cu) goto L_08A4C56C;
    return;
L_08A4C56C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C580;
    }
L_08A4C580:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20184));
    ctx.gpr[31] = (0x08A4C594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C594u) goto L_08A4C594;
    return;
L_08A4C594:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C5EC;
      }
      goto L_08A4C5A0;
    }
L_08A4C5A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C5B4u) goto L_08A4C5B4;
    return;
L_08A4C5B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C5C0u) goto L_08A4C5C0;
    return;
L_08A4C5C0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C5D8u) goto L_08A4C5D8;
    return;
L_08A4C5D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C5EC;
    }
L_08A4C5EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20176));
    ctx.gpr[31] = (0x08A4C600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C600u) goto L_08A4C600;
    return;
L_08A4C600:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C60C;
    }
L_08A4C60C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C620u) goto L_08A4C620;
    return;
L_08A4C620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C62Cu) goto L_08A4C62C;
    return;
L_08A4C62C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C644u) goto L_08A4C644;
    return;
L_08A4C644:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C658;
    }
L_08A4C658:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22232));
    ctx.gpr[31] = (0x08A4C66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C66Cu) goto L_08A4C66C;
    return;
L_08A4C66C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D920;
      }
      goto L_08A4C678;
    }
L_08A4C678:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20168));
    ctx.gpr[31] = (0x08A4C68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C68Cu) goto L_08A4C68C;
    return;
L_08A4C68C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4C698;
    }
L_08A4C698:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6ACu) goto L_08A4C6AC;
    return;
L_08A4C6AC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20164));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6C0u) goto L_08A4C6C0;
    return;
L_08A4C6C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C718;
      }
      goto L_08A4C6CC;
    }
L_08A4C6CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6E0u) goto L_08A4C6E0;
    return;
L_08A4C6E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6ECu) goto L_08A4C6EC;
    return;
L_08A4C6EC:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4C704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C704u) goto L_08A4C704;
    return;
L_08A4C704:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C718;
    }
L_08A4C718:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20140));
    ctx.gpr[31] = (0x08A4C72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C72Cu) goto L_08A4C72C;
    return;
L_08A4C72C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C76C;
      }
      goto L_08A4C738;
    }
L_08A4C738:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C74Cu) goto L_08A4C74C;
    return;
L_08A4C74C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10416));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C764u) goto L_08A4C764;
    return;
L_08A4C764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C76C;
    }
L_08A4C76C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20124));
    ctx.gpr[31] = (0x08A4C780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C780u) goto L_08A4C780;
    return;
L_08A4C780:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C7C0;
      }
      goto L_08A4C78C;
    }
L_08A4C78C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7A0u) goto L_08A4C7A0;
    return;
L_08A4C7A0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7592));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C7B8u) goto L_08A4C7B8;
    return;
L_08A4C7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C7C0;
    }
L_08A4C7C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20112));
    ctx.gpr[31] = (0x08A4C7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7D4u) goto L_08A4C7D4;
    return;
L_08A4C7D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C814;
      }
      goto L_08A4C7E0;
    }
L_08A4C7E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7F4u) goto L_08A4C7F4;
    return;
L_08A4C7F4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7672));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C80Cu) goto L_08A4C80C;
    return;
L_08A4C80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C814;
    }
L_08A4C814:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20096));
    ctx.gpr[31] = (0x08A4C828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C828u) goto L_08A4C828;
    return;
L_08A4C828:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C868;
      }
      goto L_08A4C834;
    }
L_08A4C834:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C848u) goto L_08A4C848;
    return;
L_08A4C848:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7740));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4C860u) goto L_08A4C860;
    return;
L_08A4C860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C868;
    }
L_08A4C868:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20080));
    ctx.gpr[31] = (0x08A4C87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C87Cu) goto L_08A4C87C;
    return;
L_08A4C87C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8BC;
      }
      goto L_08A4C888;
    }
L_08A4C888:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C89Cu) goto L_08A4C89C;
    return;
L_08A4C89C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7748));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4C8B4u) goto L_08A4C8B4;
    return;
L_08A4C8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C8BC;
    }
L_08A4C8BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20068));
    ctx.gpr[31] = (0x08A4C8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C8D0u) goto L_08A4C8D0;
    return;
L_08A4C8D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C910;
      }
      goto L_08A4C8DC;
    }
L_08A4C8DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C8F0u) goto L_08A4C8F0;
    return;
L_08A4C8F0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7664));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4C908u) goto L_08A4C908;
    return;
L_08A4C908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C910;
    }
L_08A4C910:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20044));
    ctx.gpr[31] = (0x08A4C924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C924u) goto L_08A4C924;
    return;
L_08A4C924:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C964;
      }
      goto L_08A4C930;
    }
L_08A4C930:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C944u) goto L_08A4C944;
    return;
L_08A4C944:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7656));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C95Cu) goto L_08A4C95C;
    return;
L_08A4C95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C964;
    }
L_08A4C964:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20012));
    ctx.gpr[31] = (0x08A4C978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4C978u) goto L_08A4C978;
    return;
L_08A4C978:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA08;
      }
      goto L_08A4C984;
    }
L_08A4C984:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4C998u) goto L_08A4C998;
    return;
L_08A4C998:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7552));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C9B0u) goto L_08A4C9B0;
    return;
L_08A4C9B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4C9C4;
    }
L_08A4C9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7552));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9C4;
      }
      goto L_08A4CA00;
    }
L_08A4CA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CA08;
    }
L_08A4CA08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19992));
    ctx.gpr[31] = (0x08A4CA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA1Cu) goto L_08A4CA1C;
    return;
L_08A4CA1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA5C;
      }
      goto L_08A4CA28;
    }
L_08A4CA28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA3Cu) goto L_08A4CA3C;
    return;
L_08A4CA3C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7856));
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA54u) goto L_08A4CA54;
    return;
L_08A4CA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CA5C;
    }
L_08A4CA5C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19960));
    ctx.gpr[31] = (0x08A4CA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA70u) goto L_08A4CA70;
    return;
L_08A4CA70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CAB0;
      }
      goto L_08A4CA7C;
    }
L_08A4CA7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA90u) goto L_08A4CA90;
    return;
L_08A4CA90:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7872));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CAA8u) goto L_08A4CAA8;
    return;
L_08A4CAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CAB0;
    }
L_08A4CAB0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19928));
    ctx.gpr[31] = (0x08A4CAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CAC4u) goto L_08A4CAC4;
    return;
L_08A4CAC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB04;
      }
      goto L_08A4CAD0;
    }
L_08A4CAD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CAE4u) goto L_08A4CAE4;
    return;
L_08A4CAE4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7536));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CAFCu) goto L_08A4CAFC;
    return;
L_08A4CAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CB04;
    }
L_08A4CB04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19908));
    ctx.gpr[31] = (0x08A4CB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB18u) goto L_08A4CB18;
    return;
L_08A4CB18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB58;
      }
      goto L_08A4CB24;
    }
L_08A4CB24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB38u) goto L_08A4CB38;
    return;
L_08A4CB38:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10120));
    ctx.gpr[6] = (0u | 73u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB50u) goto L_08A4CB50;
    return;
L_08A4CB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CB58;
    }
L_08A4CB58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19892));
    ctx.gpr[31] = (0x08A4CB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB6Cu) goto L_08A4CB6C;
    return;
L_08A4CB6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CBAC;
      }
      goto L_08A4CB78;
    }
L_08A4CB78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB8Cu) goto L_08A4CB8C;
    return;
L_08A4CB8C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10200));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CBA4u) goto L_08A4CBA4;
    return;
L_08A4CBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CBAC;
    }
L_08A4CBAC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19864));
    ctx.gpr[31] = (0x08A4CBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CBC0u) goto L_08A4CBC0;
    return;
L_08A4CBC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC00;
      }
      goto L_08A4CBCC;
    }
L_08A4CBCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CBE0u) goto L_08A4CBE0;
    return;
L_08A4CBE0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10208));
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CBF8u) goto L_08A4CBF8;
    return;
L_08A4CBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CC00;
    }
L_08A4CC00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19840));
    ctx.gpr[31] = (0x08A4CC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC14u) goto L_08A4CC14;
    return;
L_08A4CC14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC54;
      }
      goto L_08A4CC20;
    }
L_08A4CC20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC34u) goto L_08A4CC34;
    return;
L_08A4CC34:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10248));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC4Cu) goto L_08A4CC4C;
    return;
L_08A4CC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CC54;
    }
L_08A4CC54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19824));
    ctx.gpr[31] = (0x08A4CC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC68u) goto L_08A4CC68;
    return;
L_08A4CC68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CCA8;
      }
      goto L_08A4CC74;
    }
L_08A4CC74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC88u) goto L_08A4CC88;
    return;
L_08A4CC88:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7644));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCA0u) goto L_08A4CCA0;
    return;
L_08A4CCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CCA8;
    }
L_08A4CCA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19812));
    ctx.gpr[31] = (0x08A4CCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCBCu) goto L_08A4CCBC;
    return;
L_08A4CCBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CCFC;
      }
      goto L_08A4CCC8;
    }
L_08A4CCC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCDCu) goto L_08A4CCDC;
    return;
L_08A4CCDC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7648));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CCF4u) goto L_08A4CCF4;
    return;
L_08A4CCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CCFC;
    }
L_08A4CCFC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19792));
    ctx.gpr[31] = (0x08A4CD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD10u) goto L_08A4CD10;
    return;
L_08A4CD10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CD50;
      }
      goto L_08A4CD1C;
    }
L_08A4CD1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD30u) goto L_08A4CD30;
    return;
L_08A4CD30:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7520));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD48u) goto L_08A4CD48;
    return;
L_08A4CD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CD50;
    }
L_08A4CD50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19764));
    ctx.gpr[31] = (0x08A4CD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD64u) goto L_08A4CD64;
    return;
L_08A4CD64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CDA4;
      }
      goto L_08A4CD70;
    }
L_08A4CD70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD84u) goto L_08A4CD84;
    return;
L_08A4CD84:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7524));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD9Cu) goto L_08A4CD9C;
    return;
L_08A4CD9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CDA4;
    }
L_08A4CDA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19740));
    ctx.gpr[31] = (0x08A4CDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CDB8u) goto L_08A4CDB8;
    return;
L_08A4CDB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CDF8;
      }
      goto L_08A4CDC4;
    }
L_08A4CDC4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CDD8u) goto L_08A4CDD8;
    return;
L_08A4CDD8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10260));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CDF0u) goto L_08A4CDF0;
    return;
L_08A4CDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CDF8;
    }
L_08A4CDF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19720));
    ctx.gpr[31] = (0x08A4CE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE0Cu) goto L_08A4CE0C;
    return;
L_08A4CE0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CE4C;
      }
      goto L_08A4CE18;
    }
L_08A4CE18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE2Cu) goto L_08A4CE2C;
    return;
L_08A4CE2C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10268));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE44u) goto L_08A4CE44;
    return;
L_08A4CE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CE4C;
    }
L_08A4CE4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19700));
    ctx.gpr[31] = (0x08A4CE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE60u) goto L_08A4CE60;
    return;
L_08A4CE60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEA0;
      }
      goto L_08A4CE6C;
    }
L_08A4CE6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE80u) goto L_08A4CE80;
    return;
L_08A4CE80:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10266));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE98u) goto L_08A4CE98;
    return;
L_08A4CE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CEA0;
    }
L_08A4CEA0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19680));
    ctx.gpr[31] = (0x08A4CEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CEB4u) goto L_08A4CEB4;
    return;
L_08A4CEB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CEF4;
      }
      goto L_08A4CEC0;
    }
L_08A4CEC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CED4u) goto L_08A4CED4;
    return;
L_08A4CED4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10280));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CEECu) goto L_08A4CEEC;
    return;
L_08A4CEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CEF4;
    }
L_08A4CEF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19652));
    ctx.gpr[31] = (0x08A4CF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF08u) goto L_08A4CF08;
    return;
L_08A4CF08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF48;
      }
      goto L_08A4CF14;
    }
L_08A4CF14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF28u) goto L_08A4CF28;
    return;
L_08A4CF28:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10308));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF40u) goto L_08A4CF40;
    return;
L_08A4CF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CF48;
    }
L_08A4CF48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19632));
    ctx.gpr[31] = (0x08A4CF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF5Cu) goto L_08A4CF5C;
    return;
L_08A4CF5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF9C;
      }
      goto L_08A4CF68;
    }
L_08A4CF68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF7Cu) goto L_08A4CF7C;
    return;
L_08A4CF7C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10296));
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CF94u) goto L_08A4CF94;
    return;
L_08A4CF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CF9C;
    }
L_08A4CF9C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19612));
    ctx.gpr[31] = (0x08A4CFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4CFB0u) goto L_08A4CFB0;
    return;
L_08A4CFB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFF0;
      }
      goto L_08A4CFBC;
    }
L_08A4CFBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4CFD0u) goto L_08A4CFD0;
    return;
L_08A4CFD0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10312));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4CFE8u) goto L_08A4CFE8;
    return;
L_08A4CFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4CFF0;
    }
L_08A4CFF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19596));
    ctx.gpr[31] = (0x08A4D004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D004u) goto L_08A4D004;
    return;
L_08A4D004:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D044;
      }
      goto L_08A4D010;
    }
L_08A4D010:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D024u) goto L_08A4D024;
    return;
L_08A4D024:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10408));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D03Cu) goto L_08A4D03C;
    return;
L_08A4D03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D044;
    }
L_08A4D044:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19584));
    ctx.gpr[31] = (0x08A4D058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D058u) goto L_08A4D058;
    return;
L_08A4D058:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D098;
      }
      goto L_08A4D064;
    }
L_08A4D064:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D078u) goto L_08A4D078;
    return;
L_08A4D078:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10320));
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D090u) goto L_08A4D090;
    return;
L_08A4D090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D098;
    }
L_08A4D098:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19572));
    ctx.gpr[31] = (0x08A4D0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D0ACu) goto L_08A4D0AC;
    return;
L_08A4D0AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D0EC;
      }
      goto L_08A4D0B8;
    }
L_08A4D0B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D0CCu) goto L_08A4D0CC;
    return;
L_08A4D0CC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10336));
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D0E4u) goto L_08A4D0E4;
    return;
L_08A4D0E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D0EC;
    }
L_08A4D0EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19556));
    ctx.gpr[31] = (0x08A4D100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D100u) goto L_08A4D100;
    return;
L_08A4D100:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D140;
      }
      goto L_08A4D10C;
    }
L_08A4D10C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D120u) goto L_08A4D120;
    return;
L_08A4D120:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10352));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D138u) goto L_08A4D138;
    return;
L_08A4D138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D140;
    }
L_08A4D140:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19544));
    ctx.gpr[31] = (0x08A4D154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D154u) goto L_08A4D154;
    return;
L_08A4D154:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D2E4;
      }
      goto L_08A4D160;
    }
L_08A4D160:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19532));
    ctx.gpr[31] = (0x08A4D174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D174u) goto L_08A4D174;
    return;
L_08A4D174:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D180;
    }
L_08A4D180:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D194u) goto L_08A4D194;
    return;
L_08A4D194:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19520));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D1A8u) goto L_08A4D1A8;
    return;
L_08A4D1A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1E8;
      }
      goto L_08A4D1B4;
    }
L_08A4D1B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D1C8u) goto L_08A4D1C8;
    return;
L_08A4D1C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6692));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D1E0u) goto L_08A4D1E0;
    return;
L_08A4D1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D160;
      }
      goto L_08A4D1E8;
    }
L_08A4D1E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19504));
    ctx.gpr[31] = (0x08A4D1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D1FCu) goto L_08A4D1FC;
    return;
L_08A4D1FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D23C;
      }
      goto L_08A4D208;
    }
L_08A4D208:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D21Cu) goto L_08A4D21C;
    return;
L_08A4D21C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6700));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D234u) goto L_08A4D234;
    return;
L_08A4D234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D160;
      }
      goto L_08A4D23C;
    }
L_08A4D23C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19488));
    ctx.gpr[31] = (0x08A4D250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D250u) goto L_08A4D250;
    return;
L_08A4D250:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D290;
      }
      goto L_08A4D25C;
    }
L_08A4D25C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D270u) goto L_08A4D270;
    return;
L_08A4D270:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6712));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D288u) goto L_08A4D288;
    return;
L_08A4D288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D160;
      }
      goto L_08A4D290;
    }
L_08A4D290:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19480));
    ctx.gpr[31] = (0x08A4D2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2A4u) goto L_08A4D2A4;
    return;
L_08A4D2A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D160;
      }
      goto L_08A4D2B0;
    }
L_08A4D2B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2C4u) goto L_08A4D2C4;
    return;
L_08A4D2C4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6736));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D2DCu) goto L_08A4D2DC;
    return;
L_08A4D2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D160;
      }
      goto L_08A4D2E4;
    }
L_08A4D2E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19468));
    ctx.gpr[31] = (0x08A4D2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2F8u) goto L_08A4D2F8;
    return;
L_08A4D2F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D434;
      }
      goto L_08A4D304;
    }
L_08A4D304:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19452));
    ctx.gpr[31] = (0x08A4D318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D318u) goto L_08A4D318;
    return;
L_08A4D318:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D324;
    }
L_08A4D324:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D338u) goto L_08A4D338;
    return;
L_08A4D338:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19520));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D34Cu) goto L_08A4D34C;
    return;
L_08A4D34C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D38C;
      }
      goto L_08A4D358;
    }
L_08A4D358:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D36Cu) goto L_08A4D36C;
    return;
L_08A4D36C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6752));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D384u) goto L_08A4D384;
    return;
L_08A4D384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D304;
      }
      goto L_08A4D38C;
    }
L_08A4D38C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19504));
    ctx.gpr[31] = (0x08A4D3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3A0u) goto L_08A4D3A0;
    return;
L_08A4D3A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D3E0;
      }
      goto L_08A4D3AC;
    }
L_08A4D3AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3C0u) goto L_08A4D3C0;
    return;
L_08A4D3C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6776));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D3D8u) goto L_08A4D3D8;
    return;
L_08A4D3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D304;
      }
      goto L_08A4D3E0;
    }
L_08A4D3E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19488));
    ctx.gpr[31] = (0x08A4D3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D3F4u) goto L_08A4D3F4;
    return;
L_08A4D3F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D304;
      }
      goto L_08A4D400;
    }
L_08A4D400:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D414u) goto L_08A4D414;
    return;
L_08A4D414:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6800));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D42Cu) goto L_08A4D42C;
    return;
L_08A4D42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D304;
      }
      goto L_08A4D434;
    }
L_08A4D434:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19432));
    ctx.gpr[31] = (0x08A4D448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D448u) goto L_08A4D448;
    return;
L_08A4D448:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D454;
    }
L_08A4D454:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19420));
    ctx.gpr[31] = (0x08A4D468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D468u) goto L_08A4D468;
    return;
L_08A4D468:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C678;
      }
      goto L_08A4D474;
    }
L_08A4D474:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D488u) goto L_08A4D488;
    return;
L_08A4D488:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19408));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D49Cu) goto L_08A4D49C;
    return;
L_08A4D49C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D54C;
      }
      goto L_08A4D4A8;
    }
L_08A4D4A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), 0u);
    goto L_08A4D4AC;
L_08A4D4AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19400));
    ctx.gpr[31] = (0x08A4D4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D4C0u) goto L_08A4D4C0;
    return;
L_08A4D4C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D4CC;
    }
L_08A4D4CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D4E0u) goto L_08A4D4E0;
    return;
L_08A4D4E0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D4F4u) goto L_08A4D4F4;
    return;
L_08A4D4F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4AC;
      }
      goto L_08A4D500;
    }
L_08A4D500:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D514u) goto L_08A4D514;
    return;
L_08A4D514:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10432));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D53Cu) goto L_08A4D53C;
    return;
L_08A4D53C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4AC;
      }
      goto L_08A4D54C;
    }
L_08A4D54C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19388));
    ctx.gpr[31] = (0x08A4D560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D560u) goto L_08A4D560;
    return;
L_08A4D560:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D610;
      }
      goto L_08A4D56C;
    }
L_08A4D56C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), 0u);
    goto L_08A4D570;
L_08A4D570:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19372));
    ctx.gpr[31] = (0x08A4D584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D584u) goto L_08A4D584;
    return;
L_08A4D584:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D590;
    }
L_08A4D590:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D5A4u) goto L_08A4D5A4;
    return;
L_08A4D5A4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D5B8u) goto L_08A4D5B8;
    return;
L_08A4D5B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D570;
      }
      goto L_08A4D5C4;
    }
L_08A4D5C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D5D8u) goto L_08A4D5D8;
    return;
L_08A4D5D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10448));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D600u) goto L_08A4D600;
    return;
L_08A4D600:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D570;
      }
      goto L_08A4D610;
    }
L_08A4D610:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19812));
    ctx.gpr[31] = (0x08A4D624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D624u) goto L_08A4D624;
    return;
L_08A4D624:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6D4;
      }
      goto L_08A4D630;
    }
L_08A4D630:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), 0u);
    goto L_08A4D634;
L_08A4D634:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19356));
    ctx.gpr[31] = (0x08A4D648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D648u) goto L_08A4D648;
    return;
L_08A4D648:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D654;
    }
L_08A4D654:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D668u) goto L_08A4D668;
    return;
L_08A4D668:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D67Cu) goto L_08A4D67C;
    return;
L_08A4D67C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D634;
      }
      goto L_08A4D688;
    }
L_08A4D688:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D69Cu) goto L_08A4D69C;
    return;
L_08A4D69C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10464));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6C4u) goto L_08A4D6C4;
    return;
L_08A4D6C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D634;
      }
      goto L_08A4D6D4;
    }
L_08A4D6D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19700));
    ctx.gpr[31] = (0x08A4D6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6E8u) goto L_08A4D6E8;
    return;
L_08A4D6E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D798;
      }
      goto L_08A4D6F4;
    }
L_08A4D6F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), 0u);
    goto L_08A4D6F8;
L_08A4D6F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19336));
    ctx.gpr[31] = (0x08A4D70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D70Cu) goto L_08A4D70C;
    return;
L_08A4D70C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D718;
    }
L_08A4D718:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D72Cu) goto L_08A4D72C;
    return;
L_08A4D72C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D740u) goto L_08A4D740;
    return;
L_08A4D740:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6F8;
      }
      goto L_08A4D74C;
    }
L_08A4D74C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D760u) goto L_08A4D760;
    return;
L_08A4D760:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10512));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D788u) goto L_08A4D788;
    return;
L_08A4D788:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6F8;
      }
      goto L_08A4D798;
    }
L_08A4D798:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19312));
    ctx.gpr[31] = (0x08A4D7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7ACu) goto L_08A4D7AC;
    return;
L_08A4D7AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D85C;
      }
      goto L_08A4D7B8;
    }
L_08A4D7B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), 0u);
    goto L_08A4D7BC;
L_08A4D7BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19292));
    ctx.gpr[31] = (0x08A4D7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7D0u) goto L_08A4D7D0;
    return;
L_08A4D7D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D7DC;
    }
L_08A4D7DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7F0u) goto L_08A4D7F0;
    return;
L_08A4D7F0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D804u) goto L_08A4D804;
    return;
L_08A4D804:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7BC;
      }
      goto L_08A4D810;
    }
L_08A4D810:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D824u) goto L_08A4D824;
    return;
L_08A4D824:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10480));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D84Cu) goto L_08A4D84C;
    return;
L_08A4D84C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7BC;
      }
      goto L_08A4D85C;
    }
L_08A4D85C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19556));
    ctx.gpr[31] = (0x08A4D870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D870u) goto L_08A4D870;
    return;
L_08A4D870:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D87C;
    }
L_08A4D87C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), 0u);
    goto L_08A4D880;
L_08A4D880:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19272));
    ctx.gpr[31] = (0x08A4D894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D894u) goto L_08A4D894;
    return;
L_08A4D894:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D454;
      }
      goto L_08A4D8A0;
    }
L_08A4D8A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8B4u) goto L_08A4D8B4;
    return;
L_08A4D8B4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8C8u) goto L_08A4D8C8;
    return;
L_08A4D8C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D880;
      }
      goto L_08A4D8D4;
    }
L_08A4D8D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D8E8u) goto L_08A4D8E8;
    return;
L_08A4D8E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10496));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 264u, 0x08A49B44u>(ctx, &aot_mem) && ctx.pc == 0x08A4D910u) goto L_08A4D910;
    return;
L_08A4D910:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D880;
      }
      goto L_08A4D920;
    }
L_08A4D920:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19260));
    ctx.gpr[31] = (0x08A4D934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D934u) goto L_08A4D934;
    return;
L_08A4D934:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA14;
      }
      goto L_08A4D940;
    }
L_08A4D940:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19252));
    ctx.gpr[31] = (0x08A4D954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D954u) goto L_08A4D954;
    return;
L_08A4D954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4D960;
    }
L_08A4D960:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A4D970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D970u) goto L_08A4D970;
    return;
L_08A4D970:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D940;
      }
      goto L_08A4D984;
    }
L_08A4D984:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1820));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A4D9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4D9A8u) goto L_08A4D9A8;
    return;
L_08A4D9A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D9F4;
      }
      goto L_08A4D9B4;
    }
L_08A4D9B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4D9C8u) goto L_08A4D9C8;
    return;
L_08A4D9C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08A4D9D4u) goto L_08A4D9D4;
    return;
L_08A4D9D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10824));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D940;
      }
      goto L_08A4D9F4;
    }
L_08A4D9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D984;
      }
      goto L_08A4DA0C;
    }
L_08A4DA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D940;
      }
      goto L_08A4DA14;
    }
L_08A4DA14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19244));
    ctx.gpr[31] = (0x08A4DA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DA28u) goto L_08A4DA28;
    return;
L_08A4DA28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4DA34;
    }
L_08A4DA34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19228));
    ctx.gpr[31] = (0x08A4DA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DA48u) goto L_08A4DA48;
    return;
L_08A4DA48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 288u, 0x08A49D78u>(ctx, &aot_mem); return;
      }
      goto L_08A4DA54;
    }
L_08A4DA54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4DA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4DA68u) goto L_08A4DA68;
    return;
L_08A4DA68:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[19] = (2224u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1720));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A4DA98u) goto L_08A4DA98;
    return;
L_08A4DA98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A4DAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A4DAC0u) goto L_08A4DAC0;
    return;
L_08A4DAC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DAD0u) goto L_08A4DAD0;
    return;
L_08A4DAD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA34;
      }
      goto L_08A4DADC;
    }
L_08A4DADC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A4DAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DAECu) goto L_08A4DAEC;
    return;
L_08A4DAEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA34;
      }
      goto L_08A4DAF8;
    }
L_08A4DAF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB0Cu) goto L_08A4DB0C;
    return;
L_08A4DB0C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19212));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB20u) goto L_08A4DB20;
    return;
L_08A4DB20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DB60;
      }
      goto L_08A4DB2C;
    }
L_08A4DB2C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB40u) goto L_08A4DB40;
    return;
L_08A4DB40:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10872));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DB58u) goto L_08A4DB58;
    return;
L_08A4DB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DB60;
    }
L_08A4DB60:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19208));
    ctx.gpr[31] = (0x08A4DB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB74u) goto L_08A4DB74;
    return;
L_08A4DB74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBB8;
      }
      goto L_08A4DB80;
    }
L_08A4DB80:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DB94u) goto L_08A4DB94;
    return;
L_08A4DB94:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10872));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DBB0u) goto L_08A4DBB0;
    return;
L_08A4DBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DBB8;
    }
L_08A4DBB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19204));
    ctx.gpr[31] = (0x08A4DBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBCCu) goto L_08A4DBCC;
    return;
L_08A4DBCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC24;
      }
      goto L_08A4DBD8;
    }
L_08A4DBD8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBECu) goto L_08A4DBEC;
    return;
L_08A4DBEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBF8u) goto L_08A4DBF8;
    return;
L_08A4DBF8:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4DC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC10u) goto L_08A4DC10;
    return;
L_08A4DC10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DC24;
    }
L_08A4DC24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19192));
    ctx.gpr[31] = (0x08A4DC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC38u) goto L_08A4DC38;
    return;
L_08A4DC38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC94;
      }
      goto L_08A4DC44;
    }
L_08A4DC44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC58u) goto L_08A4DC58;
    return;
L_08A4DC58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC64u) goto L_08A4DC64;
    return;
L_08A4DC64:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4DC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC7Cu) goto L_08A4DC7C;
    return;
L_08A4DC7C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DC94;
    }
L_08A4DC94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19172));
    ctx.gpr[31] = (0x08A4DCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCA8u) goto L_08A4DCA8;
    return;
L_08A4DCA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD00;
      }
      goto L_08A4DCB4;
    }
L_08A4DCB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCC8u) goto L_08A4DCC8;
    return;
L_08A4DCC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCD4u) goto L_08A4DCD4;
    return;
L_08A4DCD4:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4DCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCECu) goto L_08A4DCEC;
    return;
L_08A4DCEC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DD00;
    }
L_08A4DD00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19152));
    ctx.gpr[31] = (0x08A4DD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD14u) goto L_08A4DD14;
    return;
L_08A4DD14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD54;
      }
      goto L_08A4DD20;
    }
L_08A4DD20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD34u) goto L_08A4DD34;
    return;
L_08A4DD34:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2496));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DD4Cu) goto L_08A4DD4C;
    return;
L_08A4DD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DD54;
    }
L_08A4DD54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19136));
    ctx.gpr[31] = (0x08A4DD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD68u) goto L_08A4DD68;
    return;
L_08A4DD68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDA8;
      }
      goto L_08A4DD74;
    }
L_08A4DD74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD88u) goto L_08A4DD88;
    return;
L_08A4DD88:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2488));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DDA0u) goto L_08A4DDA0;
    return;
L_08A4DDA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DDA8;
    }
L_08A4DDA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19124));
    ctx.gpr[31] = (0x08A4DDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDBCu) goto L_08A4DDBC;
    return;
L_08A4DDBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE14;
      }
      goto L_08A4DDC8;
    }
L_08A4DDC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDDCu) goto L_08A4DDDC;
    return;
L_08A4DDDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDE8u) goto L_08A4DDE8;
    return;
L_08A4DDE8:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4DE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE00u) goto L_08A4DE00;
    return;
L_08A4DE00:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DE14;
    }
L_08A4DE14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19112));
    ctx.gpr[31] = (0x08A4DE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE28u) goto L_08A4DE28;
    return;
L_08A4DE28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE80;
      }
      goto L_08A4DE34;
    }
L_08A4DE34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE48u) goto L_08A4DE48;
    return;
L_08A4DE48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE54u) goto L_08A4DE54;
    return;
L_08A4DE54:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4DE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE6Cu) goto L_08A4DE6C;
    return;
L_08A4DE6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DE80;
    }
L_08A4DE80:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DE94;
    }
L_08A4DE94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19096));
    ctx.gpr[31] = (0x08A4DEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DEA8u) goto L_08A4DEA8;
    return;
L_08A4DEA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DEB4;
    }
L_08A4DEB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19080));
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x08A4DED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A4DED4u) goto L_08A4DED4;
    return;
L_08A4DED4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19072));
    ctx.gpr[31] = (0x08A4DEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DEE8u) goto L_08A4DEE8;
    return;
L_08A4DEE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DADC;
      }
      goto L_08A4DEF4;
    }
L_08A4DEF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF08u) goto L_08A4DF08;
    return;
L_08A4DF08:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF18u) goto L_08A4DF18;
    return;
L_08A4DF18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DED4;
      }
      goto L_08A4DF24;
    }
L_08A4DF24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF38u) goto L_08A4DF38;
    return;
L_08A4DF38:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1708));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 801u, 0x0880B73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DF50u) goto L_08A4DF50;
    return;
L_08A4DF50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DED4;
      }
      goto L_08A4DF58;
    }
L_08A4DF58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A4DF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 302u, 0x08AB25B0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF68u) goto L_08A4DF68;
    return;
L_08A4DF68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DFCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DFF4u);
    // nop
    goto L_08A4EE70;
L_08A4DFF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E038u);
    // nop
    goto L_08A4EE70;
L_08A4E038:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E044u);
    // nop
    goto L_08A4E098;
L_08A4E044:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E07Cu);
    // nop
    goto L_08A4E010;
L_08A4E07C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E0C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E100u);
    // nop
    goto L_08A4E1B0;
L_08A4E100:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E184u);
    // nop
    goto L_08A4E1B0;
L_08A4E184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E1B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E1F0u);
    // nop
    goto L_08A4E010;
L_08A4E1F0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A4E208u);
    // nop
    goto L_08A4E010;
L_08A4E208:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4676), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4676), ctx.gpr[16]);
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
L_08A4E270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4E2A4;
      }
      goto L_08A4E28C;
    }
L_08A4E28C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2B0;
      }
      goto L_08A4E2A4;
    }
L_08A4E2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A4E2B0;
L_08A4E2B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E2C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A4E300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A4E300u) goto L_08A4E300;
    return;
L_08A4E300:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E334;
      }
      goto L_08A4E328;
    }
L_08A4E328:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4E334;
L_08A4E334:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E37C;
      }
      goto L_08A4E34C;
    }
L_08A4E34C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E37C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E3A8;
      }
      goto L_08A4E394;
    }
L_08A4E394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E3B0;
      }
      goto L_08A4E3A8;
    }
L_08A4E3A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4E3B0;
L_08A4E3B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A4E3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A4E3C4u) goto L_08A4E3C4;
    return;
L_08A4E3C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E3E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4564));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4576));
    ctx.gpr[31] = (0x08A4E414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 118u, 0x08A2E308u>(ctx, &aot_mem) && ctx.pc == 0x08A4E414u) goto L_08A4E414;
    return;
L_08A4E414:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E468;
      }
      goto L_08A4E460;
    }
L_08A4E460:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A4E468;
L_08A4E468:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A4E4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E4B0u) goto L_08A4E4B0;
    return;
L_08A4E4B0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08A4E4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A4E4C4u) goto L_08A4E4C4;
    return;
L_08A4E4C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E4F4;
      }
      goto L_08A4E4E8;
    }
L_08A4E4E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4E4F4;
L_08A4E4F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E528;
      }
      goto L_08A4E514;
    }
L_08A4E514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E534;
      }
      goto L_08A4E528;
    }
L_08A4E528:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A4E534;
L_08A4E534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A4E548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A4E548u) goto L_08A4E548;
    return;
L_08A4E548:
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
          goto L_08A4E578;
      }
      goto L_08A4E56C;
    }
L_08A4E56C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4E578;
L_08A4E578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E5AC;
      }
      goto L_08A4E598;
    }
L_08A4E598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E5B8;
      }
      goto L_08A4E5AC;
    }
L_08A4E5AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A4E5B8;
L_08A4E5B8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E5D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E634;
      }
      goto L_08A4E62C;
    }
L_08A4E62C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A4E634;
L_08A4E634:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
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
          goto L_08A4E6B8;
      }
      goto L_08A4E674;
    }
L_08A4E674:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E6B8;
      }
      goto L_08A4E6A8;
    }
L_08A4E6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A4E6B8;
L_08A4E6B8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E708;
      }
      goto L_08A4E6F4;
    }
L_08A4E6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E710;
      }
      goto L_08A4E708;
    }
L_08A4E708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A4E710;
L_08A4E710:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2456));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A4E748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 406u, 0x08A17500u>(ctx, &aot_mem) && ctx.pc == 0x08A4E748u) goto L_08A4E748;
    return;
L_08A4E748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E76C;
      }
      goto L_08A4E754;
    }
L_08A4E754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3084), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5208), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A4E76C;
L_08A4E76C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E7D8;
      }
      goto L_08A4E798;
    }
L_08A4E798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2456));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A4E7D8;
L_08A4E7D8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E7E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A4;
      }
      goto L_08A4E804;
    }
L_08A4E804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E88C;
      }
      goto L_08A4E834;
    }
L_08A4E834:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08A4E84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E84Cu) goto L_08A4E84C;
    return;
L_08A4E84C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4E88Cu);
    // nop
    goto L_08A4E2C8;
L_08A4E88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E804;
      }
      goto L_08A4E8A4;
    }
L_08A4E8A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4315)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-49));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4315), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-7289));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20479));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4302)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4302), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-13));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4317), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4709)));
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4709), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4024), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2972)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2976)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9BC;
      }
      goto L_08A4E9B4;
    }
L_08A4E9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3124), 0u);
    goto L_08A4E9BC;
L_08A4E9BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9EC;
      }
      goto L_08A4E9D4;
    }
L_08A4E9D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4476), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4492), 0u);
    goto L_08A4E9EC;
L_08A4E9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2440));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A4EA10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EA10u) goto L_08A4EA10;
    return;
L_08A4EA10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EA1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EA7C;
      }
      goto L_08A4EA38;
    }
L_08A4EA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[5] = (ctx.gpr[5] & 16320u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2184));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08A4EA7Cu);
    // nop
    goto L_08A4EE70;
L_08A4EA7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EABC;
    }
L_08A4EABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EAD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 10298u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4EAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A4EAF8u) goto L_08A4EAF8;
    return;
L_08A4EAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EB0C;
    }
L_08A4EB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EB44;
      }
      goto L_08A4EB20;
    }
L_08A4EB20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A4EB38u) goto L_08A4EB38;
    return;
L_08A4EB38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A4EB44;
L_08A4EB44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A4EB58u) goto L_08A4EB58;
    return;
L_08A4EB58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EB88;
      }
      goto L_08A4EB7C;
    }
L_08A4EB7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4EB88;
L_08A4EB88:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EBBC;
      }
      goto L_08A4EBA8;
    }
L_08A4EBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EBBC;
    }
L_08A4EBBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 18u, 0x08A141B4u>(ctx, &aot_mem) && ctx.pc == 0x08A4EBD4u) goto L_08A4EBD4;
    return;
L_08A4EBD4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3016), 0u);
    ctx.gpr[5] = (0u | 10299u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4EBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A4EBF8u) goto L_08A4EBF8;
    return;
L_08A4EBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EC0C;
    }
L_08A4EC0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10299u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4EC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A4EC24u) goto L_08A4EC24;
    return;
L_08A4EC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A4EC30;
L_08A4EC30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EC70;
      }
      goto L_08A4EC64;
    }
L_08A4EC64:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4EC70;
L_08A4EC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3024));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A4EC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A35DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A4EC88u) goto L_08A4EC88;
    return;
L_08A4EC88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EC94;
    }
L_08A4EC94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10300u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ECACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A4ECACu) goto L_08A4ECAC;
    return;
L_08A4ECAC:
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
          goto L_08A4EE60;
      }
      goto L_08A4ECD8;
    }
L_08A4ECD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4ED30;
      }
      goto L_08A4ECF8;
    }
L_08A4ECF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ED14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED14u) goto L_08A4ED14;
    return;
L_08A4ED14:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4ED30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED30u) goto L_08A4ED30;
    return;
L_08A4ED30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4ED44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED44u) goto L_08A4ED44;
    return;
L_08A4ED44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4ED4C;
    }
L_08A4ED4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10301u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4ED64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED64u) goto L_08A4ED64;
    return;
L_08A4ED64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A4ED70;
L_08A4ED70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(3024));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4EDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 335u, 0x08A35DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A4EDA4u) goto L_08A4EDA4;
    return;
L_08A4EDA4:
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
          goto L_08A4EDD4;
      }
      goto L_08A4EDC8;
    }
L_08A4EDC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4EDD4;
L_08A4EDD4:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EE08;
      }
      goto L_08A4EDF4;
    }
L_08A4EDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EE08;
    }
L_08A4EE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A4EE18u);
    // nop
    goto L_08A4E270;
L_08A4EE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EE20;
    }
L_08A4EE20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10302u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4EE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 207u, 0x08A2F238u>(ctx, &aot_mem) && ctx.pc == 0x08A4EE38u) goto L_08A4EE38;
    return;
L_08A4EE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE60;
      }
      goto L_08A4EE4C;
    }
L_08A4EE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A4EE60u) goto L_08A4EE60;
    return;
L_08A4EE60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EE70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4EEB8;
      }
      goto L_08A4EE94;
    }
L_08A4EE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EEB8;
      }
      goto L_08A4EEA8;
    }
L_08A4EEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A4EEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 460u, 0x08A4704Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4EEB8u) goto L_08A4EEB8;
    return;
L_08A4EEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4294), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3136), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4316), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4310), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3280), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4636), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4668), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4672), 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16901));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16539));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-18363));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4302)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-20));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4302), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2984)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EFA8;
      }
      goto L_08A4EF98;
    }
L_08A4EF98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A4EFA8;
L_08A4EFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4EFD0;
      }
      goto L_08A4EFB8;
    }
L_08A4EFB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4268), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A4EFD0;
L_08A4EFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4EFF8;
      }
      goto L_08A4EFE0;
    }
L_08A4EFE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F00C;
      }
      goto L_08A4EFF8;
    }
L_08A4EFF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A4F00C;
L_08A4F00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F02C;
      }
      goto L_08A4F01C;
    }
L_08A4F01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F058;
      }
      goto L_08A4F02C;
    }
L_08A4F02C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4276), ctx.gpr[4]);
    goto L_08A4F058;
L_08A4F058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F094;
      }
      goto L_08A4F06C;
    }
L_08A4F06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17200)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F09C;
      }
      goto L_08A4F094;
    }
L_08A4F094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3008), 0u);
    goto L_08A4F09C;
L_08A4F09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F0CC;
      }
      goto L_08A4F0AC;
    }
L_08A4F0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F0CC;
      }
      goto L_08A4F0BC;
    }
L_08A4F0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F0D4;
      }
      goto L_08A4F0CC;
    }
L_08A4F0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3324), static_cast<std::uint16_t>(0u));
    goto L_08A4F0D4;
L_08A4F0D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F0E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10392));
    ctx.gpr[16] = (0u | 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A4F11Cu) goto L_08A4F11C;
    return;
L_08A4F11C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10376));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A4F134u) goto L_08A4F134;
    return;
L_08A4F134:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F24C;
      }
      goto L_08A4F148;
    }
L_08A4F148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F234;
      }
      goto L_08A4F160;
    }
L_08A4F160:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4576));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A4F1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 55u, 0x08A2CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F1A4u) goto L_08A4F1A4;
    return;
L_08A4F1A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10392));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A4F1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F1ECu) goto L_08A4F1EC;
    return;
L_08A4F1EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10376));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A4F214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A4F214u) goto L_08A4F214;
    return;
L_08A4F214:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F160;
      }
      goto L_08A4F234;
    }
L_08A4F234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F148;
      }
      goto L_08A4F24C;
    }
L_08A4F24C:
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
L_08A4F270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F388;
      }
      goto L_08A4F2A4;
    }
L_08A4F2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F308;
      }
      goto L_08A4F2D0;
    }
L_08A4F2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F308;
      }
      goto L_08A4F2E4;
    }
L_08A4F2E4:
    ctx.gpr[4] = (16624u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F34C;
      }
      goto L_08A4F308;
    }
L_08A4F308:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F340;
      }
      goto L_08A4F32C;
    }
L_08A4F32C:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F34C;
      }
      goto L_08A4F340;
    }
L_08A4F340:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F34C;
L_08A4F34C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A4F368u) goto L_08A4F368;
    return;
L_08A4F368:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 14u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A4F380u) goto L_08A4F380;
    return;
L_08A4F380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F734;
      }
      goto L_08A4F388;
    }
L_08A4F388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 10597u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F49C;
      }
      goto L_08A4F39C;
    }
L_08A4F39C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(396)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(440)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F3E8u) goto L_08A4F3E8;
    return;
L_08A4F3E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 55u, 0x08A2CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F410u) goto L_08A4F410;
    return;
L_08A4F410:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F444;
      }
      goto L_08A4F42C;
    }
L_08A4F42C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F45C;
      }
      goto L_08A4F444;
    }
L_08A4F444:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F45C;
L_08A4F45C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F734;
      }
      goto L_08A4F49C;
    }
L_08A4F49C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F4D8u) goto L_08A4F4D8;
    return;
L_08A4F4D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F4E8u) goto L_08A4F4E8;
    return;
L_08A4F4E8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A4F4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A4F4FCu) goto L_08A4F4FC;
    return;
L_08A4F4FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F678;
      }
      goto L_08A4F538;
    }
L_08A4F538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 14u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A4F578u) goto L_08A4F578;
    return;
L_08A4F578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 63u, 0x08A2CCECu>(ctx, &aot_mem) && ctx.pc == 0x08A4F590u) goto L_08A4F590;
    return;
L_08A4F590:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F5D0;
      }
      goto L_08A4F5A8;
    }
L_08A4F5A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F650;
      }
      goto L_08A4F5C0;
    }
L_08A4F5C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F650;
      }
      goto L_08A4F5D0;
    }
L_08A4F5D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F600;
      }
      goto L_08A4F5F4;
    }
L_08A4F5F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F600;
L_08A4F600:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F650;
      }
      goto L_08A4F618;
    }
L_08A4F618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F648;
      }
      goto L_08A4F63C;
    }
L_08A4F63C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F648;
L_08A4F648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F650;
L_08A4F650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F538;
      }
      goto L_08A4F678;
    }
L_08A4F678:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F6A0;
      }
      goto L_08A4F694;
    }
L_08A4F694:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F6A0;
L_08A4F6A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F6C8;
      }
      goto L_08A4F6BC;
    }
L_08A4F6BC:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F6C8;
L_08A4F6C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A4F71Cu) goto L_08A4F71C;
    return;
L_08A4F71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4F734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 14u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A4F734u) goto L_08A4F734;
    return;
L_08A4F734:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(5616));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F804;
      }
      goto L_08A4F7A8;
    }
L_08A4F7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3096)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F948;
      }
      goto L_08A4F7C0;
    }
L_08A4F7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F7E8;
      }
      goto L_08A4F7D4;
    }
L_08A4F7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F92C;
      }
      goto L_08A4F7E8;
    }
L_08A4F7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F92C;
      }
      goto L_08A4F7FC;
    }
L_08A4F7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F948;
      }
      goto L_08A4F804;
    }
L_08A4F804:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (49312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A4F864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 16u, 0x08A2C2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F864u) goto L_08A4F864;
    return;
L_08A4F864:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4F87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 14u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A4F87Cu) goto L_08A4F87C;
    return;
L_08A4F87C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 433u, 0x08A2B788u>(ctx, &aot_mem) && ctx.pc == 0x08A4F8A0u) goto L_08A4F8A0;
    return;
L_08A4F8A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3064), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F92C;
      }
      goto L_08A4F8B0;
    }
L_08A4F8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F914;
      }
      goto L_08A4F8C4;
    }
L_08A4F8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F8EC;
      }
      goto L_08A4F8D8;
    }
L_08A4F8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F914;
      }
      goto L_08A4F8EC;
    }
L_08A4F8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F948;
      }
      goto L_08A4F900;
    }
L_08A4F900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F948;
      }
      goto L_08A4F914;
    }
L_08A4F914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3064)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3064)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F948;
      }
      goto L_08A4F92C;
    }
L_08A4F92C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F948:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F99C;
      }
      goto L_08A4F980;
    }
L_08A4F980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17112)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4318)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F9B0;
    }
L_08A4F9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3144)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F9C4;
    }
L_08A4F9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10012));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4F9DC;
    }
L_08A4F9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA24;
      }
      goto L_08A4F9F0;
    }
L_08A4F9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA14;
      }
      goto L_08A4FA04;
    }
L_08A4FA04:
    ctx.gpr[4] = (0u | 10515u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FA14;
    }
L_08A4FA14:
    ctx.gpr[4] = (0u | 10521u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FA24;
    }
L_08A4FA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA50;
      }
      goto L_08A4FA40;
    }
L_08A4FA40:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA6C;
      }
      goto L_08A4FA50;
    }
L_08A4FA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA6C;
      }
      goto L_08A4FA64;
    }
L_08A4FA64:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A4FA6C;
L_08A4FA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FA80;
    }
L_08A4FA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4318)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAC4;
      }
      goto L_08A4FA94;
    }
L_08A4FA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3144)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4FAC4;
      }
      goto L_08A4FAA8;
    }
L_08A4FAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3144)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FAC4;
    }
L_08A4FAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB0C;
      }
      goto L_08A4FAD8;
    }
L_08A4FAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAFC;
      }
      goto L_08A4FAEC;
    }
L_08A4FAEC:
    ctx.gpr[4] = (0u | 10516u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FAFC;
    }
L_08A4FAFC:
    ctx.gpr[4] = (0u | 10522u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FB0C;
    }
L_08A4FB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4740)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB38;
      }
      goto L_08A4FB28;
    }
L_08A4FB28:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB54;
      }
      goto L_08A4FB38;
    }
L_08A4FB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FB54;
      }
      goto L_08A4FB4C;
    }
L_08A4FB4C:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A4FB54;
L_08A4FB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FB6C;
    }
L_08A4FB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBB4;
      }
      goto L_08A4FB80;
    }
L_08A4FB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBA4;
      }
      goto L_08A4FB94;
    }
L_08A4FB94:
    ctx.gpr[4] = (0u | 10062u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FBA4;
    }
L_08A4FBA4:
    ctx.gpr[4] = (0u | 10061u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FBB4;
    }
L_08A4FBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBD8;
      }
      goto L_08A4FBC8;
    }
L_08A4FBC8:
    ctx.gpr[4] = (0u | 10060u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FBD8;
    }
L_08A4FBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10055));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FBF0;
    }
L_08A4FBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC38;
      }
      goto L_08A4FC04;
    }
L_08A4FC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC28;
      }
      goto L_08A4FC18;
    }
L_08A4FC18:
    ctx.gpr[4] = (0u | 10518u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FC28;
    }
L_08A4FC28:
    ctx.gpr[4] = (0u | 10524u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FC38;
    }
L_08A4FC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC5C;
      }
      goto L_08A4FC4C;
    }
L_08A4FC4C:
    ctx.gpr[4] = (0u | 10049u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FC5C;
    }
L_08A4FC5C:
    ctx.gpr[4] = (0u | 10048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FC6C;
    }
L_08A4FC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCB4;
      }
      goto L_08A4FC80;
    }
L_08A4FC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCA4;
      }
      goto L_08A4FC94;
    }
L_08A4FC94:
    ctx.gpr[4] = (0u | 10519u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FCA4;
    }
L_08A4FCA4:
    ctx.gpr[4] = (0u | 10525u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FCB4;
    }
L_08A4FCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCD8;
      }
      goto L_08A4FCC8;
    }
L_08A4FCC8:
    ctx.gpr[4] = (0u | 10051u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FCD8;
    }
L_08A4FCD8:
    ctx.gpr[4] = (0u | 10050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FCE8;
    }
L_08A4FCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD30;
      }
      goto L_08A4FCFC;
    }
L_08A4FCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD20;
      }
      goto L_08A4FD10;
    }
L_08A4FD10:
    ctx.gpr[4] = (0u | 10520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FD20;
    }
L_08A4FD20:
    ctx.gpr[4] = (0u | 10526u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FD30;
    }
L_08A4FD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD54;
      }
      goto L_08A4FD44;
    }
L_08A4FD44:
    ctx.gpr[4] = (0u | 10053u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FD54;
    }
L_08A4FD54:
    ctx.gpr[4] = (0u | 10052u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FD64;
    }
L_08A4FD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4748)));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FD90;
      }
      goto L_08A4FD84;
    }
L_08A4FD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A4FD90;
L_08A4FD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2922));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FDB4;
    }
L_08A4FDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDFC;
      }
      goto L_08A4FDC8;
    }
L_08A4FDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FDEC;
      }
      goto L_08A4FDDC;
    }
L_08A4FDDC:
    ctx.gpr[4] = (0u | 10116u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FDEC;
    }
L_08A4FDEC:
    ctx.gpr[4] = (0u | 10115u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FDFC;
    }
L_08A4FDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE20;
      }
      goto L_08A4FE10;
    }
L_08A4FE10:
    ctx.gpr[4] = (0u | 10116u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FE20;
    }
L_08A4FE20:
    ctx.gpr[4] = (0u | 10115u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FE30;
    }
L_08A4FE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE54;
      }
      goto L_08A4FE44;
    }
L_08A4FE44:
    ctx.gpr[4] = (0u | 10119u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FE54;
    }
L_08A4FE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4972)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE78;
      }
      goto L_08A4FE68;
    }
L_08A4FE68:
    ctx.gpr[4] = (0u | 10118u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FE78;
    }
L_08A4FE78:
    ctx.gpr[4] = (0u | 10117u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FE88;
    }
L_08A4FE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEC4;
      }
      goto L_08A4FE9C;
    }
L_08A4FE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4748)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2942));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FEC4;
    }
L_08A4FEC4:
    ctx.gpr[4] = (0u | 10159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FED4;
    }
L_08A4FED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FEF8;
      }
      goto L_08A4FEE8;
    }
L_08A4FEE8:
    ctx.gpr[4] = (0u | 10191u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FEF8;
    }
L_08A4FEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4276)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF34;
      }
      goto L_08A4FF0C;
    }
L_08A4FF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4748)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2952));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FF34;
    }
L_08A4FF34:
    ctx.gpr[4] = (0u | 10185u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FF54;
      }
      goto L_08A4FF44;
    }
L_08A4FF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4776)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10098));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A4FF54;
L_08A4FF54:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFC4;
      }
      goto L_08A4FF88;
    }
L_08A4FF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFAC;
      }
      goto L_08A4FF98;
    }
L_08A4FF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 30u, 0x08A50220u>(ctx, &aot_mem); return;
      }
      goto L_08A4FFA4;
    }
L_08A4FFA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 1u, 0x08A50004u>(ctx, &aot_mem); return;
      }
      goto L_08A4FFAC;
    }
L_08A4FFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 30u, 0x08A50220u>(ctx, &aot_mem); return;
      }
      goto L_08A4FFBC;
    }
L_08A4FFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 20u, 0x08A50158u>(ctx, &aot_mem); return;
      }
      goto L_08A4FFC4;
    }
L_08A4FFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFEC;
      }
      goto L_08A4FFD4;
    }
L_08A4FFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 35 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 30u, 0x08A50220u>(ctx, &aot_mem); return;
      }
      goto L_08A4FFE4;
    }
L_08A4FFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 28u, 0x08A50200u>(ctx, &aot_mem); return;
      }
      goto L_08A4FFEC;
    }
L_08A4FFEC:
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 25u, 0x08A501BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4FFFC;
    }
L_08A4FFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 30u, 0x08A50220u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 1u, 0x08A50004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0146(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0146_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_146(Runtime &runtime) {
    runtime.register_generated_unit(146u, 0x08A4C000u, 16384u, &recomp_unit_0146, &recomp_unit_0146_entry);
    runtime.register_function(0x08A4C000u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C00Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C024u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C038u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C04Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C06Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C078u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C090u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C10Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C118u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C12Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C138u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C14Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C160u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C16Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C180u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C198u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C20Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C218u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C22Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C248u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C250u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C264u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C270u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C284u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C29Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C310u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C324u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C330u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C350u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C368u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C37Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C390u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C39Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C404u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C410u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C428u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C43Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C450u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C45Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C470u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C47Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C494u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C500u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C514u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C528u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C534u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C548u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C554u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C56Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C580u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C594u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C600u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C60Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C620u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C62Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C644u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C658u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C66Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C678u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C698u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C704u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C718u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C72Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C738u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C74Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C764u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C76Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C780u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C78Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C80Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C814u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C828u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C834u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C848u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C860u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C868u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C87Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C888u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C89Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C908u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C910u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C924u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C930u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C944u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C95Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C964u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C978u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C984u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C998u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CED4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D004u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D010u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D024u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D03Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D044u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D064u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D078u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D090u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D098u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D100u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D10Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D120u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D138u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D140u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D154u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D160u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D174u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D180u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D194u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D208u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D21Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D234u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D23Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D250u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D25Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D270u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D288u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D290u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D304u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D318u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D324u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D338u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D34Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D358u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D36Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D384u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D38Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D400u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D414u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D42Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D434u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D448u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D454u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D468u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D474u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D488u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D49Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D500u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D514u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D53Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D54Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D560u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D56Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D570u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D584u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D590u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D600u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D610u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D624u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D630u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D634u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D648u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D654u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D668u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D67Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D688u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D69Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D70Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D718u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D72Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D740u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D74Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D760u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D788u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D804u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D810u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D824u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D84Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D85Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D870u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D87Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D880u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D894u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D910u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D920u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D934u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D940u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D954u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D960u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D970u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D984u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DADCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DED4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E010u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E038u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E044u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E054u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E07Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E098u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E100u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E144u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E184u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E208u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E270u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E28Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E300u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E328u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E334u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E34Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E37Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E394u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E414u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E460u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E468u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E480u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E514u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E528u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E534u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E548u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E56Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E578u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E598u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E62Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E634u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E674u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E708u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E710u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E748u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E754u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E76Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E778u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E804u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E834u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E84Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E88Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EABCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F00Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F01Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F02Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F058u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F06Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F08Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F094u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F09Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F11Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F134u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F148u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F160u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F214u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F234u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F24Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F270u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F308u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F32Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F340u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F34Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F368u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F380u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F388u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F39Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F410u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F42Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F444u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F45Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F49Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F538u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F578u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F590u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F600u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F618u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F63Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F648u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F650u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F678u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F694u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F71Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F734u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F750u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F804u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F864u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F87Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F8ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F900u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F914u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F92Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F948u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F964u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F980u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F99Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FAFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FED4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFFCu, &recomp_unit_0146, "recomp_unit_0146");
}
} // namespace psprecomp

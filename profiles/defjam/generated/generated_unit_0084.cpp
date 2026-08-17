#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0084[4094] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 9, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0,
    37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0,
    0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59,
    0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0,
    0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 78, 79, 0, 80, 0, 81, 82, 0, 0, 83, 0,
    84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104,
    0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114,
    0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128,
    0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137,
    0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0,
    0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0,
    0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194,
    0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0,
    204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0,
    0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 0, 265, 0,
    0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0,
    274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0,
    281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 287, 0, 288, 0, 0, 289, 0, 290, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    294, 0, 0, 295, 0, 296, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 302, 0, 0, 303, 0, 304, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 307, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0,
    0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0,
    341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0,
    0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361,
    0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0,
    373, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 384, 0, 0, 385, 0, 386,
    0, 387, 0, 388, 389, 0, 390, 0, 0, 391, 0, 0, 392, 0, 393, 394, 0, 395, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0,
    412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 418, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0,
    0, 444, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0,
    456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 491, 0, 0, 0, 492, 0, 0, 0, 0,
    493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 502, 503, 0, 0, 0, 0, 504, 505, 0, 0, 0,
    0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 510, 511, 0, 512, 0, 513, 514, 0,
    515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 518, 0, 0, 519, 0, 0, 0, 520, 0, 521,
    522, 0, 523, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 528, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0,
    0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0,
    0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547,
    0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0,
    561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0,
    0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 581,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 589, 0, 590, 591, 0,
    0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 595, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    601, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 606, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612,
    0, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 621,
    0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0,
    0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0,
    637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0,
    0, 0, 646, 647, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0,
    0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674,
    0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681,
    0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689,
    0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0,
    0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0,
    709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0,
    715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 722,
    0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0,
    0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0,
    0, 740, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0,
    0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757,
    0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 766, 0, 767,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08954000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08954000;
    case 2u: goto L_08954014;
    case 3u: goto L_08954040;
    case 4u: goto L_08954044;
    case 5u: goto L_08954054;
    case 6u: goto L_08954070;
    case 7u: goto L_089540C0;
    case 8u: goto L_089540D0;
    case 9u: goto L_089540D4;
    case 10u: goto L_089540DC;
    case 11u: goto L_089540E4;
    case 12u: goto L_089540E8;
    case 13u: goto L_0895410C;
    case 14u: goto L_08954114;
    case 15u: goto L_08954120;
    case 16u: goto L_08954144;
    case 17u: goto L_0895414C;
    case 18u: goto L_08954154;
    case 19u: goto L_08954188;
    case 20u: goto L_089541D0;
    case 21u: goto L_089541D8;
    case 22u: goto L_089541F4;
    case 23u: goto L_08954200;
    case 24u: goto L_0895420C;
    case 25u: goto L_08954218;
    case 26u: goto L_089542A0;
    case 27u: goto L_089542A8;
    case 28u: goto L_089542B4;
    case 29u: goto L_089542C0;
    case 30u: goto L_089542C8;
    case 31u: goto L_089542CC;
    case 32u: goto L_089542D4;
    case 33u: goto L_089542DC;
    case 34u: goto L_089542E8;
    case 35u: goto L_089542F0;
    case 36u: goto L_089542F8;
    case 37u: goto L_08954300;
    case 38u: goto L_0895430C;
    case 39u: goto L_08954314;
    case 40u: goto L_0895431C;
    case 41u: goto L_08954324;
    case 42u: goto L_0895432C;
    case 43u: goto L_08954338;
    case 44u: goto L_08954340;
    case 45u: goto L_0895434C;
    case 46u: goto L_08954358;
    case 47u: goto L_08954364;
    case 48u: goto L_0895436C;
    case 49u: goto L_08954374;
    case 50u: goto L_08954384;
    case 51u: goto L_08954390;
    case 52u: goto L_0895439C;
    case 53u: goto L_089543A8;
    case 54u: goto L_089543BC;
    case 55u: goto L_089543C8;
    case 56u: goto L_089543D4;
    case 57u: goto L_089543E8;
    case 58u: goto L_089543F0;
    case 59u: goto L_089543FC;
    case 60u: goto L_08954408;
    case 61u: goto L_08954410;
    case 62u: goto L_08954418;
    case 63u: goto L_08954428;
    case 64u: goto L_08954434;
    case 65u: goto L_08954440;
    case 66u: goto L_0895444C;
    case 67u: goto L_08954460;
    case 68u: goto L_0895446C;
    case 69u: goto L_08954478;
    case 70u: goto L_0895448C;
    case 71u: goto L_08954494;
    case 72u: goto L_089544A0;
    case 73u: goto L_089544AC;
    case 74u: goto L_089544B4;
    case 75u: goto L_089544BC;
    case 76u: goto L_089544C8;
    case 77u: goto L_089544D0;
    case 78u: goto L_089544D4;
    case 79u: goto L_089544D8;
    case 80u: goto L_089544E0;
    case 81u: goto L_089544E8;
    case 82u: goto L_089544EC;
    case 83u: goto L_089544F8;
    case 84u: goto L_08954500;
    case 85u: goto L_0895451C;
    case 86u: goto L_0895452C;
    case 87u: goto L_0895453C;
    case 88u: goto L_08954544;
    case 89u: goto L_0895454C;
    case 90u: goto L_08954564;
    case 91u: goto L_0895456C;
    case 92u: goto L_08954578;
    case 93u: goto L_08954584;
    case 94u: goto L_089545BC;
    case 95u: goto L_08954658;
    case 96u: goto L_08954670;
    case 97u: goto L_08954684;
    case 98u: goto L_08954690;
    case 99u: goto L_0895469C;
    case 100u: goto L_089546B0;
    case 101u: goto L_089546C0;
    case 102u: goto L_089546D8;
    case 103u: goto L_089546E4;
    case 104u: goto L_089546FC;
    case 105u: goto L_08954708;
    case 106u: goto L_08954718;
    case 107u: goto L_08954720;
    case 108u: goto L_08954734;
    case 109u: goto L_08954740;
    case 110u: goto L_08954748;
    case 111u: goto L_08954754;
    case 112u: goto L_08954760;
    case 113u: goto L_0895476C;
    case 114u: goto L_0895477C;
    case 115u: goto L_0895478C;
    case 116u: goto L_08954794;
    case 117u: goto L_0895479C;
    case 118u: goto L_089547A8;
    case 119u: goto L_089547DC;
    case 120u: goto L_089547E8;
    case 121u: goto L_0895481C;
    case 122u: goto L_08954830;
    case 123u: goto L_08954840;
    case 124u: goto L_0895484C;
    case 125u: goto L_08954854;
    case 126u: goto L_08954868;
    case 127u: goto L_08954874;
    case 128u: goto L_0895487C;
    case 129u: goto L_08954888;
    case 130u: goto L_08954894;
    case 131u: goto L_089548A0;
    case 132u: goto L_089548B0;
    case 133u: goto L_089548C0;
    case 134u: goto L_089548C8;
    case 135u: goto L_089548E0;
    case 136u: goto L_089548F0;
    case 137u: goto L_089548FC;
    case 138u: goto L_08954904;
    case 139u: goto L_08954918;
    case 140u: goto L_08954924;
    case 141u: goto L_0895492C;
    case 142u: goto L_08954950;
    case 143u: goto L_08954978;
    case 144u: goto L_08954990;
    case 145u: goto L_0895499C;
    case 146u: goto L_089549A8;
    case 147u: goto L_089549B8;
    case 148u: goto L_089549D4;
    case 149u: goto L_089549E0;
    case 150u: goto L_089549EC;
    case 151u: goto L_089549F8;
    case 152u: goto L_08954A04;
    case 153u: goto L_08954A10;
    case 154u: goto L_08954A20;
    case 155u: goto L_08954A30;
    case 156u: goto L_08954A3C;
    case 157u: goto L_08954A48;
    case 158u: goto L_08954A54;
    case 159u: goto L_08954A60;
    case 160u: goto L_08954A68;
    case 161u: goto L_08954A74;
    case 162u: goto L_08954AA8;
    case 163u: goto L_08954AB4;
    case 164u: goto L_08954AE8;
    case 165u: goto L_08954AF4;
    case 166u: goto L_08954B04;
    case 167u: goto L_08954B14;
    case 168u: goto L_08954B20;
    case 169u: goto L_08954B28;
    case 170u: goto L_08954B2C;
    case 171u: goto L_08954B34;
    case 172u: goto L_08954B68;
    case 173u: goto L_08954B7C;
    case 174u: goto L_08954BA8;
    case 175u: goto L_08954BB8;
    case 176u: goto L_08954BC0;
    case 177u: goto L_08954BD0;
    case 178u: goto L_08954BD8;
    case 179u: goto L_08954BE0;
    case 180u: goto L_08954BF0;
    case 181u: goto L_08954C08;
    case 182u: goto L_08954C10;
    case 183u: goto L_08954C18;
    case 184u: goto L_08954C20;
    case 185u: goto L_08954C28;
    case 186u: goto L_08954C30;
    case 187u: goto L_08954C50;
    case 188u: goto L_08954C58;
    case 189u: goto L_08954EA4;
    case 190u: goto L_08954ED4;
    case 191u: goto L_08954EDC;
    case 192u: goto L_08954EE4;
    case 193u: goto L_08954EF4;
    case 194u: goto L_08954EFC;
    case 195u: goto L_08954F14;
    case 196u: goto L_08954F1C;
    case 197u: goto L_08954F24;
    case 198u: goto L_08954F2C;
    case 199u: goto L_08954F34;
    case 200u: goto L_08954F3C;
    case 201u: goto L_08954F5C;
    case 202u: goto L_08954F70;
    case 203u: goto L_08954F78;
    case 204u: goto L_08954F80;
    case 205u: goto L_08954F8C;
    case 206u: goto L_08954FB4;
    case 207u: goto L_08955018;
    case 208u: goto L_0895502C;
    case 209u: goto L_08955064;
    case 210u: goto L_0895506C;
    case 211u: goto L_08955088;
    case 212u: goto L_08955098;
    case 213u: goto L_089550A0;
    case 214u: goto L_089550B0;
    case 215u: goto L_089550C4;
    case 216u: goto L_089550E4;
    case 217u: goto L_089550F4;
    case 218u: goto L_08955104;
    case 219u: goto L_0895510C;
    case 220u: goto L_0895511C;
    case 221u: goto L_0895512C;
    case 222u: goto L_08955140;
    case 223u: goto L_08955158;
    case 224u: goto L_0895517C;
    case 225u: goto L_08955180;
    case 226u: goto L_0895518C;
    case 227u: goto L_089551C8;
    case 228u: goto L_089551E8;
    case 229u: goto L_08955200;
    case 230u: goto L_08955214;
    case 231u: goto L_08955228;
    case 232u: goto L_0895523C;
    case 233u: goto L_08955250;
    case 234u: goto L_08955264;
    case 235u: goto L_08955278;
    case 236u: goto L_0895528C;
    case 237u: goto L_089552A0;
    case 238u: goto L_089552B4;
    case 239u: goto L_089552C8;
    case 240u: goto L_089552D0;
    case 241u: goto L_089552D8;
    case 242u: goto L_089552E0;
    case 243u: goto L_089552F4;
    case 244u: goto L_08955308;
    case 245u: goto L_0895531C;
    case 246u: goto L_08955330;
    case 247u: goto L_08955344;
    case 248u: goto L_08955358;
    case 249u: goto L_0895536C;
    case 250u: goto L_08955390;
    case 251u: goto L_089553A8;
    case 252u: goto L_089553B4;
    case 253u: goto L_089553C4;
    case 254u: goto L_089553D0;
    case 255u: goto L_089553E0;
    case 256u: goto L_089553E8;
    case 257u: goto L_089553F4;
    case 258u: goto L_08955404;
    case 259u: goto L_08955424;
    case 260u: goto L_08955444;
    case 261u: goto L_08955450;
    case 262u: goto L_08955458;
    case 263u: goto L_08955460;
    case 264u: goto L_08955468;
    case 265u: goto L_08955478;
    case 266u: goto L_08955488;
    case 267u: goto L_08955490;
    case 268u: goto L_08955498;
    case 269u: goto L_089554A4;
    case 270u: goto L_089554A8;
    case 271u: goto L_089554D4;
    case 272u: goto L_089554E8;
    case 273u: goto L_089554F4;
    case 274u: goto L_08955500;
    case 275u: goto L_08955510;
    case 276u: goto L_08955518;
    case 277u: goto L_08955528;
    case 278u: goto L_08955560;
    case 279u: goto L_0895556C;
    case 280u: goto L_08955578;
    case 281u: goto L_08955580;
    case 282u: goto L_0895558C;
    case 283u: goto L_08955594;
    case 284u: goto L_089555A0;
    case 285u: goto L_089555AC;
    case 286u: goto L_089555B4;
    case 287u: goto L_089555B8;
    case 288u: goto L_089555C0;
    case 289u: goto L_089555CC;
    case 290u: goto L_089555D4;
    case 291u: goto L_089555D8;
    case 292u: goto L_089555E0;
    case 293u: goto L_089555F0;
    case 294u: goto L_08955600;
    case 295u: goto L_0895560C;
    case 296u: goto L_08955614;
    case 297u: goto L_08955618;
    case 298u: goto L_0895562C;
    case 299u: goto L_08955638;
    case 300u: goto L_08955644;
    case 301u: goto L_0895564C;
    case 302u: goto L_08955650;
    case 303u: goto L_0895565C;
    case 304u: goto L_08955664;
    case 305u: goto L_08955670;
    case 306u: goto L_08955680;
    case 307u: goto L_0895568C;
    case 308u: goto L_08955690;
    case 309u: goto L_08955698;
    case 310u: goto L_089556A8;
    case 311u: goto L_089556B8;
    case 312u: goto L_089556D4;
    case 313u: goto L_0895572C;
    case 314u: goto L_08955738;
    case 315u: goto L_0895574C;
    case 316u: goto L_08955758;
    case 317u: goto L_08955760;
    case 318u: goto L_08955778;
    case 319u: goto L_08955784;
    case 320u: goto L_089557A0;
    case 321u: goto L_089557B8;
    case 322u: goto L_089557CC;
    case 323u: goto L_089557D4;
    case 324u: goto L_089557E4;
    case 325u: goto L_089557F0;
    case 326u: goto L_0895580C;
    case 327u: goto L_0895581C;
    case 328u: goto L_0895582C;
    case 329u: goto L_08955838;
    case 330u: goto L_08955844;
    case 331u: goto L_08955858;
    case 332u: goto L_08955864;
    case 333u: goto L_08955874;
    case 334u: goto L_08955888;
    case 335u: goto L_08955894;
    case 336u: goto L_089558BC;
    case 337u: goto L_089558CC;
    case 338u: goto L_089558DC;
    case 339u: goto L_089558E8;
    case 340u: goto L_089558F8;
    case 341u: goto L_08955900;
    case 342u: goto L_0895590C;
    case 343u: goto L_08955940;
    case 344u: goto L_08955968;
    case 345u: goto L_08955970;
    case 346u: goto L_08955978;
    case 347u: goto L_08955988;
    case 348u: goto L_08955998;
    case 349u: goto L_089559A0;
    case 350u: goto L_089559A8;
    case 351u: goto L_089559B0;
    case 352u: goto L_089559C8;
    case 353u: goto L_089559D0;
    case 354u: goto L_089559D8;
    case 355u: goto L_089559F8;
    case 356u: goto L_08955A28;
    case 357u: goto L_08955A34;
    case 358u: goto L_08955A50;
    case 359u: goto L_08955A60;
    case 360u: goto L_08955A70;
    case 361u: goto L_08955A7C;
    case 362u: goto L_08955A88;
    case 363u: goto L_08955A90;
    case 364u: goto L_08955A9C;
    case 365u: goto L_08955AA8;
    case 366u: goto L_08955AB4;
    case 367u: goto L_08955AC0;
    case 368u: goto L_08955ACC;
    case 369u: goto L_08955AD8;
    case 370u: goto L_08955AE0;
    case 371u: goto L_08955AEC;
    case 372u: goto L_08955AF8;
    case 373u: goto L_08955B00;
    case 374u: goto L_08955B04;
    case 375u: goto L_08955B14;
    case 376u: goto L_08955B1C;
    case 377u: goto L_08955B24;
    case 378u: goto L_08955B30;
    case 379u: goto L_08955B3C;
    case 380u: goto L_08955B44;
    case 381u: goto L_08955B4C;
    case 382u: goto L_08955B58;
    case 383u: goto L_08955B60;
    case 384u: goto L_08955B68;
    case 385u: goto L_08955B74;
    case 386u: goto L_08955B7C;
    case 387u: goto L_08955B84;
    case 388u: goto L_08955B8C;
    case 389u: goto L_08955B90;
    case 390u: goto L_08955B98;
    case 391u: goto L_08955BA4;
    case 392u: goto L_08955BB0;
    case 393u: goto L_08955BB8;
    case 394u: goto L_08955BBC;
    case 395u: goto L_08955BC4;
    case 396u: goto L_08955BC8;
    case 397u: goto L_08955BD8;
    case 398u: goto L_08955BE8;
    case 399u: goto L_08955BF8;
    case 400u: goto L_08955C08;
    case 401u: goto L_08955C34;
    case 402u: goto L_08955C70;
    case 403u: goto L_08955C88;
    case 404u: goto L_08955CA4;
    case 405u: goto L_08955CBC;
    case 406u: goto L_08955CCC;
    case 407u: goto L_08955CF4;
    case 408u: goto L_08955D2C;
    case 409u: goto L_08955D4C;
    case 410u: goto L_08955D5C;
    case 411u: goto L_08955D64;
    case 412u: goto L_08955D80;
    case 413u: goto L_08955D88;
    case 414u: goto L_08955DC4;
    case 415u: goto L_08955DC8;
    case 416u: goto L_08955DF4;
    case 417u: goto L_08955E10;
    case 418u: goto L_08955E20;
    case 419u: goto L_08955E24;
    case 420u: goto L_08955E34;
    case 421u: goto L_08955E60;
    case 422u: goto L_08955E80;
    case 423u: goto L_08955E90;
    case 424u: goto L_08955EA4;
    case 425u: goto L_08955EB0;
    case 426u: goto L_08955EC0;
    case 427u: goto L_08955EE0;
    case 428u: goto L_08955F0C;
    case 429u: goto L_08955F24;
    case 430u: goto L_08955F34;
    case 431u: goto L_08955F48;
    case 432u: goto L_08955F54;
    case 433u: goto L_08955F64;
    case 434u: goto L_08955F8C;
    case 435u: goto L_08955FA0;
    case 436u: goto L_08955FAC;
    case 437u: goto L_08955FD0;
    case 438u: goto L_08955FF8;
    case 439u: goto L_08956018;
    case 440u: goto L_08956020;
    case 441u: goto L_08956028;
    case 442u: goto L_08956054;
    case 443u: goto L_08956074;
    case 444u: goto L_08956084;
    case 445u: goto L_08956098;
    case 446u: goto L_089560A4;
    case 447u: goto L_089560B4;
    case 448u: goto L_089560D4;
    case 449u: goto L_08956100;
    case 450u: goto L_08956118;
    case 451u: goto L_08956128;
    case 452u: goto L_0895613C;
    case 453u: goto L_08956148;
    case 454u: goto L_08956158;
    case 455u: goto L_08956178;
    case 456u: goto L_08956180;
    case 457u: goto L_0895618C;
    case 458u: goto L_089561B8;
    case 459u: goto L_089561CC;
    case 460u: goto L_089561E0;
    case 461u: goto L_089561F8;
    case 462u: goto L_0895620C;
    case 463u: goto L_08956230;
    case 464u: goto L_08956244;
    case 465u: goto L_0895631C;
    case 466u: goto L_08956330;
    case 467u: goto L_08956340;
    case 468u: goto L_08956370;
    case 469u: goto L_08956390;
    case 470u: goto L_089563B0;
    case 471u: goto L_089563DC;
    case 472u: goto L_089563F0;
    case 473u: goto L_08956404;
    case 474u: goto L_08956420;
    case 475u: goto L_08956428;
    case 476u: goto L_089564B0;
    case 477u: goto L_089564C4;
    case 478u: goto L_089564FC;
    case 479u: goto L_0895650C;
    case 480u: goto L_08956520;
    case 481u: goto L_08956558;
    case 482u: goto L_08956568;
    case 483u: goto L_089565A4;
    case 484u: goto L_089565B8;
    case 485u: goto L_089565E0;
    case 486u: goto L_08956604;
    case 487u: goto L_08956688;
    case 488u: goto L_089566B4;
    case 489u: goto L_089566C4;
    case 490u: goto L_089566D8;
    case 491u: goto L_089566DC;
    case 492u: goto L_089566EC;
    case 493u: goto L_08956700;
    case 494u: goto L_08956710;
    case 495u: goto L_08956720;
    case 496u: goto L_08956728;
    case 497u: goto L_08956730;
    case 498u: goto L_08956738;
    case 499u: goto L_08956740;
    case 500u: goto L_08956748;
    case 501u: goto L_08956750;
    case 502u: goto L_08956754;
    case 503u: goto L_08956758;
    case 504u: goto L_0895676C;
    case 505u: goto L_08956770;
    case 506u: goto L_08956790;
    case 507u: goto L_089567C8;
    case 508u: goto L_089567D0;
    case 509u: goto L_089567D8;
    case 510u: goto L_089567E0;
    case 511u: goto L_089567E4;
    case 512u: goto L_089567EC;
    case 513u: goto L_089567F4;
    case 514u: goto L_089567F8;
    case 515u: goto L_08956800;
    case 516u: goto L_08956808;
    case 517u: goto L_08956854;
    case 518u: goto L_08956858;
    case 519u: goto L_08956864;
    case 520u: goto L_08956874;
    case 521u: goto L_0895687C;
    case 522u: goto L_08956880;
    case 523u: goto L_08956888;
    case 524u: goto L_0895689C;
    case 525u: goto L_089568A8;
    case 526u: goto L_089568B8;
    case 527u: goto L_089568C0;
    case 528u: goto L_089568D4;
    case 529u: goto L_089568D8;
    case 530u: goto L_089568E0;
    case 531u: goto L_08956904;
    case 532u: goto L_08956934;
    case 533u: goto L_08956950;
    case 534u: goto L_08956964;
    case 535u: goto L_08956970;
    case 536u: goto L_08956984;
    case 537u: goto L_089569A0;
    case 538u: goto L_089569AC;
    case 539u: goto L_089569B4;
    case 540u: goto L_089569C8;
    case 541u: goto L_089569E8;
    case 542u: goto L_089569F0;
    case 543u: goto L_08956A0C;
    case 544u: goto L_08956A14;
    case 545u: goto L_08956A38;
    case 546u: goto L_08956A70;
    case 547u: goto L_08956A7C;
    case 548u: goto L_08956A8C;
    case 549u: goto L_08956AA0;
    case 550u: goto L_08956AAC;
    case 551u: goto L_08956ABC;
    case 552u: goto L_08956AC4;
    case 553u: goto L_08956AD0;
    case 554u: goto L_08956AE8;
    case 555u: goto L_08956F8C;
    case 556u: goto L_08956FA0;
    case 557u: goto L_08956FC0;
    case 558u: goto L_08956FF0;
    case 559u: goto L_08957068;
    case 560u: goto L_08957074;
    case 561u: goto L_08957080;
    case 562u: goto L_0895708C;
    case 563u: goto L_08957098;
    case 564u: goto L_08957100;
    case 565u: goto L_0895710C;
    case 566u: goto L_08957118;
    case 567u: goto L_08957124;
    case 568u: goto L_08957130;
    case 569u: goto L_08957158;
    case 570u: goto L_08957168;
    case 571u: goto L_08957174;
    case 572u: goto L_0895726C;
    case 573u: goto L_08957278;
    case 574u: goto L_08957284;
    case 575u: goto L_08957290;
    case 576u: goto L_0895729C;
    case 577u: goto L_089572A4;
    case 578u: goto L_089572D8;
    case 579u: goto L_089572E8;
    case 580u: goto L_089572F4;
    case 581u: goto L_089572FC;
    case 582u: goto L_08957304;
    case 583u: goto L_08957310;
    case 584u: goto L_0895733C;
    case 585u: goto L_08957344;
    case 586u: goto L_08957350;
    case 587u: goto L_08957358;
    case 588u: goto L_08957364;
    case 589u: goto L_0895736C;
    case 590u: goto L_08957374;
    case 591u: goto L_08957378;
    case 592u: goto L_0895739C;
    case 593u: goto L_089573A8;
    case 594u: goto L_089573B0;
    case 595u: goto L_089573B8;
    case 596u: goto L_089573BC;
    case 597u: goto L_089573C8;
    case 598u: goto L_0895740C;
    case 599u: goto L_08957438;
    case 600u: goto L_08957448;
    case 601u: goto L_08957480;
    case 602u: goto L_08957488;
    case 603u: goto L_08957490;
    case 604u: goto L_0895749C;
    case 605u: goto L_089574A8;
    case 606u: goto L_089574AC;
    case 607u: goto L_089574C0;
    case 608u: goto L_089574C8;
    case 609u: goto L_089574D0;
    case 610u: goto L_089574EC;
    case 611u: goto L_089574F4;
    case 612u: goto L_089574FC;
    case 613u: goto L_0895750C;
    case 614u: goto L_08957514;
    case 615u: goto L_0895751C;
    case 616u: goto L_08957524;
    case 617u: goto L_0895752C;
    case 618u: goto L_08957550;
    case 619u: goto L_0895756C;
    case 620u: goto L_08957574;
    case 621u: goto L_0895757C;
    case 622u: goto L_0895758C;
    case 623u: goto L_08957594;
    case 624u: goto L_0895759C;
    case 625u: goto L_089575A4;
    case 626u: goto L_089575AC;
    case 627u: goto L_089575CC;
    case 628u: goto L_089575F0;
    case 629u: goto L_089575F8;
    case 630u: goto L_08957604;
    case 631u: goto L_08957614;
    case 632u: goto L_08957620;
    case 633u: goto L_0895762C;
    case 634u: goto L_08957638;
    case 635u: goto L_08957644;
    case 636u: goto L_08957660;
    case 637u: goto L_08957680;
    case 638u: goto L_0895768C;
    case 639u: goto L_08957698;
    case 640u: goto L_089576B0;
    case 641u: goto L_089576D4;
    case 642u: goto L_089576DC;
    case 643u: goto L_089576E4;
    case 644u: goto L_089576F0;
    case 645u: goto L_089576F8;
    case 646u: goto L_08957708;
    case 647u: goto L_0895770C;
    case 648u: goto L_08957714;
    case 649u: goto L_08957724;
    case 650u: goto L_08957740;
    case 651u: goto L_0895775C;
    case 652u: goto L_08957768;
    case 653u: goto L_08957774;
    case 654u: goto L_08957784;
    case 655u: goto L_089577A0;
    case 656u: goto L_089577A8;
    case 657u: goto L_089577B0;
    case 658u: goto L_089577C0;
    case 659u: goto L_089577C8;
    case 660u: goto L_089577D0;
    case 661u: goto L_089577D8;
    case 662u: goto L_089577E0;
    case 663u: goto L_089577E8;
    case 664u: goto L_089577F0;
    case 665u: goto L_08957818;
    case 666u: goto L_08957834;
    case 667u: goto L_0895783C;
    case 668u: goto L_08957844;
    case 669u: goto L_08957854;
    case 670u: goto L_0895785C;
    case 671u: goto L_08957864;
    case 672u: goto L_0895786C;
    case 673u: goto L_08957874;
    case 674u: goto L_0895787C;
    case 675u: goto L_08957884;
    case 676u: goto L_089578A8;
    case 677u: goto L_089578CC;
    case 678u: goto L_089578D4;
    case 679u: goto L_089578E0;
    case 680u: goto L_089578F0;
    case 681u: goto L_089578FC;
    case 682u: goto L_08957908;
    case 683u: goto L_08957914;
    case 684u: goto L_08957920;
    case 685u: goto L_0895792C;
    case 686u: goto L_08957938;
    case 687u: goto L_08957954;
    case 688u: goto L_0895795C;
    case 689u: goto L_0895797C;
    case 690u: goto L_08957984;
    case 691u: goto L_08957990;
    case 692u: goto L_08957998;
    case 693u: goto L_089579A8;
    case 694u: goto L_089579C0;
    case 695u: goto L_08957A18;
    case 696u: goto L_08957A28;
    case 697u: goto L_08957AD0;
    case 698u: goto L_08957AE8;
    case 699u: goto L_08957AF4;
    case 700u: goto L_08957B08;
    case 701u: goto L_08957B14;
    case 702u: goto L_08957B20;
    case 703u: goto L_08957B2C;
    case 704u: goto L_08957B38;
    case 705u: goto L_08957B50;
    case 706u: goto L_08957B5C;
    case 707u: goto L_08957B68;
    case 708u: goto L_08957B74;
    case 709u: goto L_08957B80;
    case 710u: goto L_08957B98;
    case 711u: goto L_08957BAC;
    case 712u: goto L_08957BC0;
    case 713u: goto L_08957BD4;
    case 714u: goto L_08957BEC;
    case 715u: goto L_08957C00;
    case 716u: goto L_08957C2C;
    case 717u: goto L_08957C38;
    case 718u: goto L_08957C44;
    case 719u: goto L_08957C50;
    case 720u: goto L_08957C5C;
    case 721u: goto L_08957C68;
    case 722u: goto L_08957C7C;
    case 723u: goto L_08957C88;
    case 724u: goto L_08957CA0;
    case 725u: goto L_08957CAC;
    case 726u: goto L_08957CB8;
    case 727u: goto L_08957CC4;
    case 728u: goto L_08957CD0;
    case 729u: goto L_08957CE4;
    case 730u: goto L_08957CF0;
    case 731u: goto L_08957D04;
    case 732u: goto L_08957D10;
    case 733u: goto L_08957D1C;
    case 734u: goto L_08957D28;
    case 735u: goto L_08957D34;
    case 736u: goto L_08957D48;
    case 737u: goto L_08957D54;
    case 738u: goto L_08957D60;
    case 739u: goto L_08957D70;
    case 740u: goto L_08957D84;
    case 741u: goto L_08957D90;
    case 742u: goto L_08957DA4;
    case 743u: goto L_08957DB4;
    case 744u: goto L_08957DC0;
    case 745u: goto L_08957DCC;
    case 746u: goto L_08957DD8;
    case 747u: goto L_08957DE4;
    case 748u: goto L_08957DF8;
    case 749u: goto L_08957E08;
    case 750u: goto L_08957E14;
    case 751u: goto L_08957E20;
    case 752u: goto L_08957E30;
    case 753u: goto L_08957E44;
    case 754u: goto L_08957E50;
    case 755u: goto L_08957E60;
    case 756u: goto L_08957E70;
    case 757u: goto L_08957E7C;
    case 758u: goto L_08957E88;
    case 759u: goto L_08957E94;
    case 760u: goto L_08957EA0;
    case 761u: goto L_08957EB4;
    case 762u: goto L_08957EC4;
    case 763u: goto L_08957ED0;
    case 764u: goto L_08957EDC;
    case 765u: goto L_08957EEC;
    case 766u: goto L_08957EF4;
    case 767u: goto L_08957EFC;
    case 768u: goto L_08957F30;
    case 769u: goto L_08957FA0;
    case 770u: goto L_08957FC0;
    case 771u: goto L_08957FCC;
    case 772u: goto L_08957FDC;
    case 773u: goto L_08957FE8;
    case 774u: goto L_08957FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08954000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08954014u);
    ctx.gpr[5] = (0u | 149u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954014u) goto L_08954014;
    return;
L_08954014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(816));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25828)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089540D0;
      }
      goto L_08954040;
    }
L_08954040:
    ctx.gpr[16] = (0u | 0u);
    goto L_08954044;
L_08954044:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08954054u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x08954054u) goto L_08954054;
    return;
L_08954054:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 40u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08954070u);
    ctx.gpr[5] = (0u | 149u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954070u) goto L_08954070;
    return;
L_08954070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(816));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(816));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25828)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089540C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089540C0u) goto L_089540C0;
    return;
L_089540C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08954044;
      }
      goto L_089540D0;
    }
L_089540D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12600)));
    goto L_089540D4;
L_089540D4:
    ctx.gpr[31] = (0x089540DCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089540DCu) goto L_089540DC;
    return;
L_089540DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 555u, 0x08953794u>(ctx, &aot_mem); return;
      }
      goto L_089540E4;
    }
L_089540E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089540E8;
L_089540E8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(816));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25828)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(784)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08954120;
      }
      goto L_0895410C;
    }
L_0895410C:
    ctx.gpr[31] = (0x08954114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 432u, 0x089528D4u>(ctx, &aot_mem) && ctx.pc == 0x08954114u) goto L_08954114;
    return;
L_08954114:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0895410C;
      }
      goto L_08954120;
    }
L_08954120:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(816));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25828)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(800), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12600)));
    goto L_08954144;
L_08954144:
    ctx.gpr[31] = (0x0895414Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0895414Cu) goto L_0895414C;
    return;
L_0895414C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12592)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 547u, 0x089535DCu>(ctx, &aot_mem); return;
      }
      goto L_08954154;
    }
L_08954154:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12620)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12624)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12628)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12632)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12636)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12640)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12644)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12648)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(12672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[23]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(844), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), ctx.gpr[31]);
    ctx.gpr[31] = (0x089541D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x089541D0u) goto L_089541D0;
    return;
L_089541D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954584;
      }
      goto L_089541D8;
    }
L_089541D8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25864)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08954218;
      }
      goto L_089541F4;
    }
L_089541F4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25916)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08954200;
L_08954200:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08954218;
      }
      goto L_0895420C;
    }
L_0895420C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08954200;
      }
      goto L_08954218;
    }
L_08954218:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16480));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16180));
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16488));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16492));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16504));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), ctx.gpr[5]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16524));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16156));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16148));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    goto L_089542A0;
L_089542A0:
    ctx.gpr[31] = (0x089542A8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089542A8u) goto L_089542A8;
    return;
L_089542A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
      if (branch_taken) {
          goto L_0895454C;
      }
      goto L_089542B4;
    }
L_089542B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(828)));
    ctx.gpr[31] = (0x089542C0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089542C0u) goto L_089542C0;
    return;
L_089542C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0895453C;
      }
      goto L_089542C8;
    }
L_089542C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
    goto L_089542CC;
L_089542CC:
    ctx.gpr[31] = (0x089542D4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089542D4u) goto L_089542D4;
    return;
L_089542D4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_089544EC;
    }
    goto L_089542DC;
L_089542DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[31] = (0x089542E8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089542E8u) goto L_089542E8;
    return;
L_089542E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08954300;
      }
      goto L_089542F0;
    }
L_089542F0:
    ctx.gpr[31] = (0x089542F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089542F8u) goto L_089542F8;
    return;
L_089542F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089544D4;
      }
      goto L_08954300;
    }
L_08954300:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(820)));
    ctx.gpr[31] = (0x0895430Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0895430Cu) goto L_0895430C;
    return;
L_0895430C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0895432C;
      }
      goto L_08954314;
    }
L_08954314:
    ctx.gpr[31] = (0x0895431Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x0895431Cu) goto L_0895431C;
    return;
L_0895431C:
    ctx.gpr[31] = (0x08954324u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08954324u) goto L_08954324;
    return;
L_08954324:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089544D4;
      }
      goto L_0895432C;
    }
L_0895432C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08954338u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08954338u) goto L_08954338;
    return;
L_08954338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08954364;
      }
      goto L_08954340;
    }
L_08954340:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0895434Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x0895434Cu) goto L_0895434C;
    return;
L_0895434C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    ctx.gpr[31] = (0x08954358u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08954358u) goto L_08954358;
    return;
L_08954358:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089544D4;
      }
      goto L_08954364;
    }
L_08954364:
    ctx.gpr[31] = (0x0895436Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0895436Cu) goto L_0895436C;
    return;
L_0895436C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08954408;
      }
      goto L_08954374;
    }
L_08954374:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08954384u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08954384u) goto L_08954384;
    return;
L_08954384:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08954390u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x08954390u) goto L_08954390;
    return;
L_08954390:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895439Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0895439Cu) goto L_0895439C;
    return;
L_0895439C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089543A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089543A8u) goto L_089543A8;
    return;
L_089543A8:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x089543BCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x089543BCu) goto L_089543BC;
    return;
L_089543BC:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[31] = (0x089543C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x089543C8u) goto L_089543C8;
    return;
L_089543C8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089543D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089543D4u) goto L_089543D4;
    return;
L_089543D4:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x089543E8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x089543E8u) goto L_089543E8;
    return;
L_089543E8:
    ctx.gpr[31] = (0x089543F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x089543F0u) goto L_089543F0;
    return;
L_089543F0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089543FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089543FCu) goto L_089543FC;
    return;
L_089543FC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_089544D4;
      }
      goto L_08954408;
    }
L_08954408:
    ctx.gpr[31] = (0x08954410u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08954410u) goto L_08954410;
    return;
L_08954410:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089544AC;
      }
      goto L_08954418;
    }
L_08954418:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08954428u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08954428u) goto L_08954428;
    return;
L_08954428:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08954434u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x08954434u) goto L_08954434;
    return;
L_08954434:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08954440u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08954440u) goto L_08954440;
    return;
L_08954440:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0895444Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x0895444Cu) goto L_0895444C;
    return;
L_0895444C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08954460u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x08954460u) goto L_08954460;
    return;
L_08954460:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[31] = (0x0895446Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0895446Cu) goto L_0895446C;
    return;
L_0895446C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08954478u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08954478u) goto L_08954478;
    return;
L_08954478:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x0895448Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 108u, 0x089509DCu>(ctx, &aot_mem) && ctx.pc == 0x0895448Cu) goto L_0895448C;
    return;
L_0895448C:
    ctx.gpr[31] = (0x08954494u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x08954494u) goto L_08954494;
    return;
L_08954494:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089544A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089544A0u) goto L_089544A0;
    return;
L_089544A0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_089544D4;
      }
      goto L_089544AC;
    }
L_089544AC:
    ctx.gpr[31] = (0x089544B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089544B4u) goto L_089544B4;
    return;
L_089544B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089544D8;
      }
      goto L_089544BC;
    }
L_089544BC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089544C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089544C8u) goto L_089544C8;
    return;
L_089544C8:
    ctx.gpr[31] = (0x089544D0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x089544D0u) goto L_089544D0;
    return;
L_089544D0:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_089544D4;
L_089544D4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089544D8;
L_089544D8:
    ctx.gpr[31] = (0x089544E0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089544E0u) goto L_089544E0;
    return;
L_089544E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
      if (branch_taken) {
          goto L_089542CC;
      }
      goto L_089544E8;
    }
L_089544E8:
    ctx.gpr[16] = (0u | 0u);
    goto L_089544EC;
L_089544EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0895452C;
      }
      goto L_089544F8;
    }
L_089544F8:
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(52));
    goto L_08954500;
L_08954500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895451Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 341u, 0x089522C4u>(ctx, &aot_mem) && ctx.pc == 0x0895451Cu) goto L_0895451C;
    return;
L_0895451C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08954500;
      }
      goto L_0895452C;
    }
L_0895452C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_0895453C;
L_0895453C:
    ctx.gpr[31] = (0x08954544u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08954544u) goto L_08954544;
    return;
L_08954544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_089542A0;
      }
      goto L_0895454C;
    }
L_0895454C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25864)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_08954584;
      }
      goto L_08954564;
    }
L_08954564:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25916)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895456C;
L_0895456C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08954584;
      }
      goto L_08954578;
    }
L_08954578:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0895456C;
      }
      goto L_08954584;
    }
L_08954584:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(844)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(876)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089545BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(25860), 0u);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25864), 0u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(16548));
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(19848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954658u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23592));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08954658u) goto L_08954658;
    return;
L_08954658:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954670u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25891));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08954670u) goto L_08954670;
    return;
L_08954670:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954684u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25898));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08954684u) goto L_08954684;
    return;
L_08954684:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08954690u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08954690u) goto L_08954690;
    return;
L_08954690:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089547DC;
      }
      goto L_0895469C;
    }
L_0895469C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089546B0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x089546B0u) goto L_089546B0;
    return;
L_089546B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x089546C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x089546C0u) goto L_089546C0;
    return;
L_089546C0:
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16092));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089546D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x089546D8u) goto L_089546D8;
    return;
L_089546D8:
    ctx.gpr[22] = (2220u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16136));
      if (branch_taken) {
          goto L_08954708;
      }
      goto L_089546E4;
    }
L_089546E4:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16108));
    ctx.gpr[31] = (0x089546FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16120));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x089546FCu) goto L_089546FC;
    return;
L_089546FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(25860), ctx.gpr[4]);
    goto L_08954708;
L_08954708:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08954718u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x08954718u) goto L_08954718;
    return;
L_08954718:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08954740;
      }
      goto L_08954720;
    }
L_08954720:
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16148));
    ctx.gpr[31] = (0x08954734u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16156));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x08954734u) goto L_08954734;
    return;
L_08954734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25864)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25864), ctx.gpr[4]);
    goto L_08954740;
L_08954740:
    ctx.gpr[31] = (0x08954748u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08954748u) goto L_08954748;
    return;
L_08954748:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x08954754u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08954754u) goto L_08954754;
    return;
L_08954754:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895479C;
      }
      goto L_08954760;
    }
L_08954760:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895476Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0895476Cu) goto L_0895476C;
    return;
L_0895476C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x0895477Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x0895477Cu) goto L_0895477C;
    return;
L_0895477C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0895478Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x0895478Cu) goto L_0895478C;
    return;
L_0895478C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0895481C;
      }
      goto L_08954794;
    }
L_08954794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08954840;
      }
      goto L_0895479C;
    }
L_0895479C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[31] = (0x089547A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x089547A8u) goto L_089547A8;
    return;
L_089547A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089547DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[31] = (0x089547E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x089547E8u) goto L_089547E8;
    return;
L_089547E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895481C:
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16108));
    ctx.gpr[31] = (0x08954830u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16120));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x08954830u) goto L_08954830;
    return;
L_08954830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(25860), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08954840;
L_08954840:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0895484Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x0895484Cu) goto L_0895484C;
    return;
L_0895484C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08954874;
      }
      goto L_08954854;
    }
L_08954854:
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16148));
    ctx.gpr[31] = (0x08954868u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16156));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x08954868u) goto L_08954868;
    return;
L_08954868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25864)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25864), ctx.gpr[4]);
    goto L_08954874;
L_08954874:
    ctx.gpr[31] = (0x0895487Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0895487Cu) goto L_0895487C;
    return;
L_0895487C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08954888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08954888u) goto L_08954888;
    return;
L_08954888:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895492C;
      }
      goto L_08954894;
    }
L_08954894:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089548A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x089548A0u) goto L_089548A0;
    return;
L_089548A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x089548B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x089548B0u) goto L_089548B0;
    return;
L_089548B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089548C0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x089548C0u) goto L_089548C0;
    return;
L_089548C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089548F0;
      }
      goto L_089548C8;
    }
L_089548C8:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16108));
    ctx.gpr[31] = (0x089548E0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16120));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x089548E0u) goto L_089548E0;
    return;
L_089548E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(25860), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089548F0;
L_089548F0:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089548FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x089548FCu) goto L_089548FC;
    return;
L_089548FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08954924;
      }
      goto L_08954904;
    }
L_08954904:
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16148));
    ctx.gpr[31] = (0x08954918u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16156));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x08954918u) goto L_08954918;
    return;
L_08954918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25864)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25864), ctx.gpr[4]);
    goto L_08954924;
L_08954924:
    ctx.gpr[31] = (0x0895492Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0895492Cu) goto L_0895492C;
    return;
L_0895492C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25860)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(816));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.lo);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08954950u);
    ctx.gpr[5] = (0u | 149u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954950u) goto L_08954950;
    return;
L_08954950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25864)));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25828), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08954978u);
    ctx.gpr[5] = (0u | 149u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08954978u) goto L_08954978;
    return;
L_08954978:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25916), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08954990u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08954990u) goto L_08954990;
    return;
L_08954990:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08954A68;
      }
      goto L_0895499C;
    }
L_0895499C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089549A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x089549A8u) goto L_089549A8;
    return;
L_089549A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x089549B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x089549B8u) goto L_089549B8;
    return;
L_089549B8:
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25912)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089549D4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 546u, 0x089533ACu>(ctx, &aot_mem) && ctx.pc == 0x089549D4u) goto L_089549D4;
    return;
L_089549D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089549E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08954188;
L_089549E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089549ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x089549ECu) goto L_089549EC;
    return;
L_089549EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089549F8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x089549F8u) goto L_089549F8;
    return;
L_089549F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08954AA8;
      }
      goto L_08954A04;
    }
L_08954A04:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08954A10u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08954A10u) goto L_08954A10;
    return;
L_08954A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08954A20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08954A20u) goto L_08954A20;
    return;
L_08954A20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25912)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954A30u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 546u, 0x089533ACu>(ctx, &aot_mem) && ctx.pc == 0x08954A30u) goto L_08954A30;
    return;
L_08954A30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954A3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08954188;
L_08954A3C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08954A48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08954A48u) goto L_08954A48;
    return;
L_08954A48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08954A54u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08954A54u) goto L_08954A54;
    return;
L_08954A54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08954AE8;
      }
      goto L_08954A60;
    }
L_08954A60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08954B2C;
      }
      goto L_08954A68;
    }
L_08954A68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[31] = (0x08954A74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08954A74u) goto L_08954A74;
    return;
L_08954A74:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954AA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[31] = (0x08954AB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08954AB4u) goto L_08954AB4;
    return;
L_08954AB4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954AE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08954AF4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08954AF4u) goto L_08954AF4;
    return;
L_08954AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08954B04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08954B04u) goto L_08954B04;
    return;
L_08954B04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(25912)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954B14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 546u, 0x089533ACu>(ctx, &aot_mem) && ctx.pc == 0x08954B14u) goto L_08954B14;
    return;
L_08954B14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954B20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08954188;
L_08954B20:
    ctx.gpr[31] = (0x08954B28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08954B28u) goto L_08954B28;
    return;
L_08954B28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    goto L_08954B2C;
L_08954B2C:
    ctx.gpr[31] = (0x08954B34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08954B34u) goto L_08954B34;
    return;
L_08954B34:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954B68:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25820)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25824), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954BA8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08954BA8u) goto L_08954BA8;
    return;
L_08954BA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08954BB8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 196u, 0x0893D488u>(ctx, &aot_mem) && ctx.pc == 0x08954BB8u) goto L_08954BB8;
    return;
L_08954BB8:
    ctx.gpr[31] = (0x08954BC0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 147u, 0x08958820u>(ctx, &aot_mem) && ctx.pc == 0x08954BC0u) goto L_08954BC0;
    return;
L_08954BC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10072));
    ctx.gpr[31] = (0x08954BD0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 419u, 0x08959FB0u>(ctx, &aot_mem) && ctx.pc == 0x08954BD0u) goto L_08954BD0;
    return;
L_08954BD0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(10428));
    goto L_08954BD8;
L_08954BD8:
    ctx.gpr[31] = (0x08954BE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 208u, 0x08958E04u>(ctx, &aot_mem) && ctx.pc == 0x08954BE0u) goto L_08954BE0;
    return;
L_08954BE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08954BD8;
      }
      goto L_08954BF0;
    }
L_08954BF0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(5632));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(10332));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(13308));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(13532));
    goto L_08954C08;
L_08954C08:
    ctx.gpr[31] = (0x08954C10u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089574D0;
L_08954C10:
    ctx.gpr[31] = (0x08954C18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08957784;
L_08954C18:
    ctx.gpr[31] = (0x08954C20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 147u, 0x08958820u>(ctx, &aot_mem) && ctx.pc == 0x08954C20u) goto L_08954C20;
    return;
L_08954C20:
    ctx.gpr[31] = (0x08954C28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 272u, 0x0895956Cu>(ctx, &aot_mem) && ctx.pc == 0x08954C28u) goto L_08954C28;
    return;
L_08954C28:
    ctx.gpr[31] = (0x08954C30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 321u, 0x089599B8u>(ctx, &aot_mem) && ctx.pc == 0x08954C30u) goto L_08954C30;
    return;
L_08954C30:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2736));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2220));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(604));
      if (branch_taken) {
          goto L_08954C08;
      }
      goto L_08954C50;
    }
L_08954C50:
    ctx.gpr[31] = (0x08954C58u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14740));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 497u, 0x0895A58Cu>(ctx, &aot_mem) && ctx.pc == 0x08954C58u) goto L_08954C58;
    return;
L_08954C58:
    ctx.gpr[2] = (0u | 1u);
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
L_08954EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08954ED4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14740));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 500u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08954ED4u) goto L_08954ED4;
    return;
L_08954ED4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(10428));
    goto L_08954EDC;
L_08954EDC:
    ctx.gpr[31] = (0x08954EE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 211u, 0x08958E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08954EE4u) goto L_08954EE4;
    return;
L_08954EE4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08954EDC;
      }
      goto L_08954EF4;
    }
L_08954EF4:
    ctx.gpr[31] = (0x08954EFCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10072));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 450u, 0x0895A1A4u>(ctx, &aot_mem) && ctx.pc == 0x08954EFCu) goto L_08954EFC;
    return;
L_08954EFC:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(13532));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(13308));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(10332));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(5632));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    goto L_08954F14;
L_08954F14:
    ctx.gpr[31] = (0x08954F1Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 343u, 0x08959B70u>(ctx, &aot_mem) && ctx.pc == 0x08954F1Cu) goto L_08954F1C;
    return;
L_08954F1C:
    ctx.gpr[31] = (0x08954F24u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x0895964Cu>(ctx, &aot_mem) && ctx.pc == 0x08954F24u) goto L_08954F24;
    return;
L_08954F24:
    ctx.gpr[31] = (0x08954F2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 160u, 0x089589D0u>(ctx, &aot_mem) && ctx.pc == 0x08954F2Cu) goto L_08954F2C;
    return;
L_08954F2C:
    ctx.gpr[31] = (0x08954F34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08957818;
L_08954F34:
    ctx.gpr[31] = (0x08954F3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08957550;
L_08954F3C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(604));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2220));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2736));
      if (branch_taken) {
          goto L_08954F14;
      }
      goto L_08954F5C;
    }
L_08954F5C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08954F70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 610u, 0x0898FD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08954F70u) goto L_08954F70;
    return;
L_08954F70:
    ctx.gpr[31] = (0x08954F78u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 160u, 0x089589D0u>(ctx, &aot_mem) && ctx.pc == 0x08954F78u) goto L_08954F78;
    return;
L_08954F78:
    ctx.gpr[31] = (0x08954F80u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893D4FCu>(ctx, &aot_mem) && ctx.pc == 0x08954F80u) goto L_08954F80;
    return;
L_08954F80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x08954F8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08954F8Cu) goto L_08954F8C;
    return;
L_08954F8C:
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
L_08954FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(14740));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2176)));
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08955064;
      }
      goto L_08955018;
    }
L_08955018:
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x0895502Cu);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 572u, 0x0895B024u>(ctx, &aot_mem) && ctx.pc == 0x0895502Cu) goto L_0895502C;
    return;
L_0895502C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25968), ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955064:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08955180;
    }
    goto L_0895506C;
L_0895506C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(10428));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089550A0;
      }
      goto L_08955088;
    }
L_08955088:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08955098u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08955528;
L_08955098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08955180;
      }
      goto L_089550A0;
    }
L_089550A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089550B0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08955528;
L_089550B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089550C4u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(10072));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 452u, 0x0895A1C0u>(ctx, &aot_mem) && ctx.pc == 0x089550C4u) goto L_089550C4;
    return;
L_089550C4:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(5632));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(10332));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(13308));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13532));
    goto L_089550E4;
L_089550E4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089550F4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08957F30;
L_089550F4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08955104u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 77u, 0x08958470u>(ctx, &aot_mem) && ctx.pc == 0x08955104u) goto L_08955104;
    return;
L_08955104:
    ctx.gpr[31] = (0x0895510Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x0895510Cu) goto L_0895510C;
    return;
L_0895510C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x0895511Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 183u, 0x08958C08u>(ctx, &aot_mem) && ctx.pc == 0x0895511Cu) goto L_0895511C;
    return;
L_0895511C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0895512Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 164u, 0x08958A20u>(ctx, &aot_mem) && ctx.pc == 0x0895512Cu) goto L_0895512C;
    return;
L_0895512C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955140u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 283u, 0x0895967Cu>(ctx, &aot_mem) && ctx.pc == 0x08955140u) goto L_08955140;
    return;
L_08955140:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955158u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 352u, 0x08959C00u>(ctx, &aot_mem) && ctx.pc == 0x08955158u) goto L_08955158;
    return;
L_08955158:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(2736));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2220));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(604));
      if (branch_taken) {
          goto L_089550E4;
      }
      goto L_0895517C;
    }
L_0895517C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08955180;
L_08955180:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0895518Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 572u, 0x0895B024u>(ctx, &aot_mem) && ctx.pc == 0x0895518Cu) goto L_0895518C;
    return;
L_0895518C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25968), ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089551C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089551E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 610u, 0x0898FD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089551E8u) goto L_089551E8;
    return;
L_089551E8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955200u);
    ctx.gpr[4] = (0u | 9u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955200u) goto L_08955200;
    return;
L_08955200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955214u);
    ctx.gpr[4] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955214u) goto L_08955214;
    return;
L_08955214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955228u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955228u) goto L_08955228;
    return;
L_08955228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895523Cu);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895523Cu) goto L_0895523C;
    return;
L_0895523C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955250u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955250u) goto L_08955250;
    return;
L_08955250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 6u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955264u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955264u) goto L_08955264;
    return;
L_08955264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 8u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955278u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955278u) goto L_08955278;
    return;
L_08955278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 9u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895528Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895528Cu) goto L_0895528C;
    return;
L_0895528C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 12u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089552A0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089552A0u) goto L_089552A0;
    return;
L_089552A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 10u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089552B4u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089552B4u) goto L_089552B4;
    return;
L_089552B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 11u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089552C8u);
    ctx.gpr[5] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089552C8u) goto L_089552C8;
    return;
L_089552C8:
    ctx.gpr[31] = (0x089552D0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 203u, 0x0893D540u>(ctx, &aot_mem) && ctx.pc == 0x089552D0u) goto L_089552D0;
    return;
L_089552D0:
    ctx.gpr[31] = (0x089552D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958CA4u>(ctx, &aot_mem) && ctx.pc == 0x089552D8u) goto L_089552D8;
    return;
L_089552D8:
    ctx.gpr[31] = (0x089552E0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14740));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 763u, 0x0895BBD0u>(ctx, &aot_mem) && ctx.pc == 0x089552E0u) goto L_089552E0;
    return;
L_089552E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 6u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089552F4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089552F4u) goto L_089552F4;
    return;
L_089552F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 8u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955308u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955308u) goto L_08955308;
    return;
L_08955308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895531Cu);
    ctx.gpr[4] = (0u | 9u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895531Cu) goto L_0895531C;
    return;
L_0895531C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955330u);
    ctx.gpr[4] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955330u) goto L_08955330;
    return;
L_08955330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955344u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955344u) goto L_08955344;
    return;
L_08955344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955358u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955358u) goto L_08955358;
    return;
L_08955358:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895536C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08955390u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08955390u) goto L_08955390;
    return;
L_08955390:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25980)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25976)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089553A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x089553A8u) goto L_089553A8;
    return;
L_089553A8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089553B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089553B4u) goto L_089553B4;
    return;
L_089553B4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    goto L_089553C4;
L_089553C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089553D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08957660;
L_089553D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2736));
      if (branch_taken) {
          goto L_089553C4;
      }
      goto L_089553E0;
    }
L_089553E0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5632));
    goto L_089553E8;
L_089553E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089553F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08957954;
L_089553F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2220));
      if (branch_taken) {
          goto L_089553E8;
      }
      goto L_08955404;
    }
L_08955404:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08955424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08955444u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08955444u) goto L_08955444;
    return;
L_08955444:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08955498;
      }
      goto L_08955450;
    }
L_08955450:
    ctx.gpr[31] = (0x08955458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 295u, 0x088C1344u>(ctx, &aot_mem) && ctx.pc == 0x08955458u) goto L_08955458;
    return;
L_08955458:
    ctx.gpr[31] = (0x08955460u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08955460u) goto L_08955460;
    return;
L_08955460:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08955478;
      }
      goto L_08955468;
    }
L_08955468:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15124), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089554A4;
      }
      goto L_08955478;
    }
L_08955478:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08955488u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08955488u) goto L_08955488;
    return;
L_08955488:
    ctx.gpr[31] = (0x08955490u);
    ctx.gpr[4] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 30u, 0x088C8224u>(ctx, &aot_mem) && ctx.pc == 0x08955490u) goto L_08955490;
    return;
L_08955490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089554A8;
      }
      goto L_08955498;
    }
L_08955498:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089554A4;
L_089554A4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089554A8;
L_089554A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089554D4:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25968)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089554E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15136), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15140), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089554F4:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-13456));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955500:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13456)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955518;
      }
      goto L_08955510;
    }
L_08955510:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955518:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14744));
      if (branch_taken) {
          goto L_08955580;
      }
      goto L_08955560;
    }
L_08955560:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x0895556Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x0895556Cu) goto L_0895556C;
    return;
L_0895556C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08955578u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955578u) goto L_08955578;
    return;
L_08955578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_08955580;
    }
L_08955580:
    ctx.gpr[6] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 32768u);
      if (branch_taken) {
          goto L_0895568C;
      }
      goto L_0895558C;
    }
L_0895558C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (2u << 16u);
      if (branch_taken) {
          goto L_0895568C;
      }
      goto L_08955594;
    }
L_08955594:
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
      if (branch_taken) {
          goto L_089555B8;
      }
      goto L_089555A0;
    }
L_089555A0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2592));
    ctx.gpr[31] = (0x089555ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x089555ACu) goto L_089555AC;
    return;
L_089555AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_089555B4;
    }
L_089555B4:
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    goto L_089555B8;
L_089555B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 1024u);
      if (branch_taken) {
          goto L_089555D8;
      }
      goto L_089555C0;
    }
L_089555C0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x089555CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x089555CCu) goto L_089555CC;
    return;
L_089555CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_089555D4;
    }
L_089555D4:
    ctx.gpr[6] = (ctx.gpr[5] & 1024u);
    goto L_089555D8;
L_089555D8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2224u << 16u);
      if (branch_taken) {
          goto L_08955618;
      }
      goto L_089555E0;
    }
L_089555E0:
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08955690;
    }
    goto L_089555F0;
L_089555F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 184u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_08955600;
    }
L_08955600:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x0895560Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x0895560Cu) goto L_0895560C;
    return;
L_0895560C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_08955614;
    }
L_08955614:
    ctx.gpr[6] = (2224u << 16u);
    goto L_08955618;
L_08955618:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
        goto L_08955650;
    }
    goto L_0895562C;
L_0895562C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_08955638;
    }
L_08955638:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08955644u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955644u) goto L_08955644;
    return;
L_08955644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_0895564C;
    }
L_0895564C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
    goto L_08955650;
L_08955650:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_0895568C;
      }
      goto L_0895565C;
    }
L_0895565C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08955690;
    }
    goto L_08955664;
L_08955664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08955690;
    }
    goto L_08955670;
L_08955670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08955690;
      }
      goto L_08955680;
    }
L_08955680:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895568Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x0895568Cu) goto L_0895568C;
    return;
L_0895568C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08955690;
L_08955690:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08955698;
L_08955698:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089556A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 217u, 0x08958EE0u>(ctx, &aot_mem) && ctx.pc == 0x089556A8u) goto L_089556A8;
    return;
L_089556A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08955698;
      }
      goto L_089556B8;
    }
L_089556B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089556D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25940)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895572Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16676));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x0895572Cu) goto L_0895572C;
    return;
L_0895572C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08955738u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08955738u) goto L_08955738;
    return;
L_08955738:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895574Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0895574Cu) goto L_0895574C;
    return;
L_0895574C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955758u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08955758u) goto L_08955758;
    return;
L_08955758:
    ctx.gpr[31] = (0x08955760u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08955760u) goto L_08955760;
    return;
L_08955760:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(25948));
    goto L_08955778;
L_08955778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08955784u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 770u, 0x0882F040u>(ctx, &aot_mem) && ctx.pc == 0x08955784u) goto L_08955784;
    return;
L_08955784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08955778;
      }
      goto L_089557A0;
    }
L_089557A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089557B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881F898u>(ctx, &aot_mem) && ctx.pc == 0x089557B8u) goto L_089557B8;
    return;
L_089557B8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x089557CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 610u, 0x0898FD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089557CCu) goto L_089557CC;
    return;
L_089557CC:
    ctx.gpr[31] = (0x089557D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x089557D4u) goto L_089557D4;
    return;
L_089557D4:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(10072));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089557E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 421u, 0x08959FE8u>(ctx, &aot_mem) && ctx.pc == 0x089557E4u) goto L_089557E4;
    return;
L_089557E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089557F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_089557F0:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(5632));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(10332));
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(13308));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13532));
    goto L_0895580C;
L_0895580C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895581Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089579C0;
L_0895581C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895582Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089575CC;
L_0895582C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955838u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 41u, 0x089581FCu>(ctx, &aot_mem) && ctx.pc == 0x08955838u) goto L_08955838;
    return;
L_08955838:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955844u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089578A8;
L_08955844:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08955858u);
    ctx.gpr[7] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 148u, 0x0895886Cu>(ctx, &aot_mem) && ctx.pc == 0x08955858u) goto L_08955858;
    return;
L_08955858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x08955864u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 183u, 0x08958C08u>(ctx, &aot_mem) && ctx.pc == 0x08955864u) goto L_08955864;
    return;
L_08955864:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08955874u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 275u, 0x089595B0u>(ctx, &aot_mem) && ctx.pc == 0x08955874u) goto L_08955874;
    return;
L_08955874:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08955888u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 326u, 0x08959A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08955888u) goto L_08955888;
    return;
L_08955888:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08955894u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 348u, 0x08959BACu>(ctx, &aot_mem) && ctx.pc == 0x08955894u) goto L_08955894;
    return;
L_08955894:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2736));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2220));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(5));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(604));
      if (branch_taken) {
          goto L_0895580C;
      }
      goto L_089558BC;
    }
L_089558BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(10428));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_089558CC;
L_089558CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089558DCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 251u, 0x089591ACu>(ctx, &aot_mem) && ctx.pc == 0x089558DCu) goto L_089558DC;
    return;
L_089558DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089558E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 239u, 0x08959088u>(ctx, &aot_mem) && ctx.pc == 0x089558E8u) goto L_089558E8;
    return;
L_089558E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_089558CC;
      }
      goto L_089558F8;
    }
L_089558F8:
    ctx.gpr[31] = (0x08955900u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0895536C;
L_08955900:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(14740));
    ctx.gpr[31] = (0x0895590Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 537u, 0x0895AA68u>(ctx, &aot_mem) && ctx.pc == 0x0895590Cu) goto L_0895590C;
    return;
L_0895590C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08955968u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10072));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 463u, 0x0895A324u>(ctx, &aot_mem) && ctx.pc == 0x08955968u) goto L_08955968;
    return;
L_08955968:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(10428));
    goto L_08955970;
L_08955970:
    ctx.gpr[31] = (0x08955978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 249u, 0x08959150u>(ctx, &aot_mem) && ctx.pc == 0x08955978u) goto L_08955978;
    return;
L_08955978:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08955970;
      }
      goto L_08955988;
    }
L_08955988:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(13308));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(13532));
    goto L_08955998;
L_08955998:
    ctx.gpr[31] = (0x089559A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08957740;
L_089559A0:
    ctx.gpr[31] = (0x089559A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 320u, 0x089599A4u>(ctx, &aot_mem) && ctx.pc == 0x089559A8u) goto L_089559A8;
    return;
L_089559A8:
    ctx.gpr[31] = (0x089559B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 351u, 0x08959BE8u>(ctx, &aot_mem) && ctx.pc == 0x089559B0u) goto L_089559B0;
    return;
L_089559B0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2736));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(604));
      if (branch_taken) {
          goto L_08955998;
      }
      goto L_089559C8;
    }
L_089559C8:
    ctx.gpr[31] = (0x089559D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895536C;
L_089559D0:
    ctx.gpr[31] = (0x089559D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14740));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 506u, 0x0895A638u>(ctx, &aot_mem) && ctx.pc == 0x089559D8u) goto L_089559D8;
    return;
L_089559D8:
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
L_089559F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08955A28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 73u, 0x08824424u>(ctx, &aot_mem) && ctx.pc == 0x08955A28u) goto L_08955A28;
    return;
L_08955A28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_08955BF8;
      }
      goto L_08955A34;
    }
L_08955A34:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(10428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[19] & 32768u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08955A90;
      }
      goto L_08955A50;
    }
L_08955A50:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2016));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955A60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955A60u) goto L_08955A60;
    return;
L_08955A60:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(2304));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955A70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955A70u) goto L_08955A70;
    return;
L_08955A70:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955A7Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955A7Cu) goto L_08955A7C;
    return;
L_08955A7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955A88u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955A88u) goto L_08955A88;
    return;
L_08955A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08955BC8;
      }
      goto L_08955A90;
    }
L_08955A90:
    ctx.gpr[7] = (ctx.gpr[19] & 16384u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_08955B04;
      }
      goto L_08955A9C;
    }
L_08955A9C:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(1440));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1728));
      if (branch_taken) {
          goto L_08955AE0;
      }
      goto L_08955AA8;
    }
L_08955AA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955AB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955AB4u) goto L_08955AB4;
    return;
L_08955AB4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955AC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955AC0u) goto L_08955AC0;
    return;
L_08955AC0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955ACCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955ACCu) goto L_08955ACC;
    return;
L_08955ACC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955AD8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955AD8u) goto L_08955AD8;
    return;
L_08955AD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08955BC8;
      }
      goto L_08955AE0;
    }
L_08955AE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955AECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 248u, 0x0895913Cu>(ctx, &aot_mem) && ctx.pc == 0x08955AECu) goto L_08955AEC;
    return;
L_08955AEC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955AF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 248u, 0x0895913Cu>(ctx, &aot_mem) && ctx.pc == 0x08955AF8u) goto L_08955AF8;
    return;
L_08955AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08955BC8;
      }
      goto L_08955B00;
    }
L_08955B00:
    ctx.gpr[8] = (1u << 16u);
    goto L_08955B04;
L_08955B04:
    ctx.gpr[8] = (ctx.gpr[19] & ctx.gpr[8]);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08955B24;
      }
      goto L_08955B14;
    }
L_08955B14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B1C;
    }
L_08955B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B24;
    }
L_08955B24:
    ctx.gpr[5] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
      if (branch_taken) {
          goto L_08955B44;
      }
      goto L_08955B30;
    }
L_08955B30:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B3C;
    }
L_08955B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B44;
    }
L_08955B44:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 16u);
      if (branch_taken) {
          goto L_08955B60;
      }
      goto L_08955B4C;
    }
L_08955B4C:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B58;
    }
L_08955B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B60;
    }
L_08955B60:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 128u);
      if (branch_taken) {
          goto L_08955B7C;
      }
      goto L_08955B68;
    }
L_08955B68:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B74;
    }
L_08955B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B7C;
    }
L_08955B7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B84;
    }
L_08955B84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955B90;
      }
      goto L_08955B8C;
    }
L_08955B8C:
    ctx.gpr[7] = (0u | 1u);
    goto L_08955B90;
L_08955B90:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08955BBC;
      }
      goto L_08955B98;
    }
L_08955B98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955BA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955BA4u) goto L_08955BA4;
    return;
L_08955BA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08955BB0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 242u, 0x089590B4u>(ctx, &aot_mem) && ctx.pc == 0x08955BB0u) goto L_08955BB0;
    return;
L_08955BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08955BC8;
      }
      goto L_08955BB8;
    }
L_08955BB8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08955BBC;
L_08955BBC:
    ctx.gpr[31] = (0x08955BC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 248u, 0x0895913Cu>(ctx, &aot_mem) && ctx.pc == 0x08955BC4u) goto L_08955BC4;
    return;
L_08955BC4:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08955BC8;
L_08955BC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08955BD8;
L_08955BD8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08955BE8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 217u, 0x08958EE0u>(ctx, &aot_mem) && ctx.pc == 0x08955BE8u) goto L_08955BE8;
    return;
L_08955BE8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08955BD8;
      }
      goto L_08955BF8;
    }
L_08955BF8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14740));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08955C08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 572u, 0x0895B024u>(ctx, &aot_mem) && ctx.pc == 0x08955C08u) goto L_08955C08;
    return;
L_08955C08:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25968), ctx.gpr[2]);
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
L_08955C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25928)));
    ctx.gpr[7] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(25932), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 2736u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08955C70u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9944));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x08955C70u) goto L_08955C70;
    return;
L_08955C70:
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(5632));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 2220u);
    ctx.gpr[31] = (0x08955C88u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10024));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x08955C88u) goto L_08955C88;
    return;
L_08955C88:
    ctx.gpr[7] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10148), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10428));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 288u);
    ctx.gpr[31] = (0x08955CA4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10128));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x08955CA4u) goto L_08955CA4;
    return;
L_08955CA4:
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(13532));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 604u);
    ctx.gpr[31] = (0x08955CBCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10112));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x08955CBCu) goto L_08955CBC;
    return;
L_08955CBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955CCC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25984));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08955D64;
      }
      goto L_08955D2C;
    }
L_08955D2C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08955D4Cu);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955D4Cu) goto L_08955D4C;
    return;
L_08955D4C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08955D80;
      }
      goto L_08955D5C;
    }
L_08955D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_08955DC8;
      }
      goto L_08955D64;
    }
L_08955D64:
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
L_08955D80:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_08955D88;
L_08955D88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08955D88;
      }
      goto L_08955DC4;
    }
L_08955DC4:
    ctx.gpr[4] = (16880u << 16u);
    goto L_08955DC8;
L_08955DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
L_08955DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08955E24;
      }
      goto L_08955E10;
    }
L_08955E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08955E20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08955E20u) goto L_08955E20;
    return;
L_08955E20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08955E24;
L_08955E24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08955EC0;
      }
      goto L_08955E60;
    }
L_08955E60:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[22] = ctx.fpr[20] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x08955E80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08955E80u) goto L_08955E80;
    return;
L_08955E80:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08955E90u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08955E90u) goto L_08955E90;
    return;
L_08955E90:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08955EA4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x08955EA4u) goto L_08955EA4;
    return;
L_08955EA4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08955EB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08955EB0u) goto L_08955EB0;
    return;
L_08955EB0:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08955EC0;
L_08955EC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08955F64;
      }
      goto L_08955F0C;
    }
L_08955F0C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[22] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[31] = (0x08955F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08955F24u) goto L_08955F24;
    return;
L_08955F24:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08955F34u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08955F34u) goto L_08955F34;
    return;
L_08955F34:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08955F48u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x08955F48u) goto L_08955F48;
    return;
L_08955F48:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08955F54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08955F54u) goto L_08955F54;
    return;
L_08955F54:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08955F64;
L_08955F64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955F8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955FA0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955FAC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08955FD0:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08956018;
      }
      goto L_08955FF8;
    }
L_08955FF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956018:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956020:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089560B4;
      }
      goto L_08956054;
    }
L_08956054:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[22] = ctx.fpr[20] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x08956074u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08956074u) goto L_08956074;
    return;
L_08956074:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08956084u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08956084u) goto L_08956084;
    return;
L_08956084:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08956098u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x08956098u) goto L_08956098;
    return;
L_08956098:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089560A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089560A4u) goto L_089560A4;
    return;
L_089560A4:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089560B4;
L_089560B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089560D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08956158;
      }
      goto L_08956100;
    }
L_08956100:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[22] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[31] = (0x08956118u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08956118u) goto L_08956118;
    return;
L_08956118:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08956128u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08956128u) goto L_08956128;
    return;
L_08956128:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0895613Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x0895613Cu) goto L_0895613C;
    return;
L_0895613C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08956148u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08956148u) goto L_08956148;
    return;
L_08956148:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08956158;
L_08956158:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956178:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956180:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895618C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089561B8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089561B8u) goto L_089561B8;
    return;
L_089561B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 10u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089561CCu);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089561CCu) goto L_089561CC;
    return;
L_089561CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 11u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089561E0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089561E0u) goto L_089561E0;
    return;
L_089561E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089561F8u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089561F8u) goto L_089561F8;
    return;
L_089561F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895620C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08956230u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956230u) goto L_08956230;
    return;
L_08956230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 12u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08956244u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08956244u) goto L_08956244;
    return;
L_08956244:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895631C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956330u);
    ctx.gpr[6] = (0u | 124u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08956330u) goto L_08956330;
    return;
L_08956330:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956370u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956428;
L_08956370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[31] = (0x08956390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089564B0;
L_08956390:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089563B0:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_089563DC;
L_089563DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (ctx.gpr[5] & 2u);
    if (ctx.gpr[7] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_089563F0;
    }
    goto L_089563F0;
L_089563F0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[7] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08956404;
    }
    goto L_08956404;
L_08956404:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089563DC;
      }
      goto L_08956420;
    }
L_08956420:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956428:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[5] = (15360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (15488u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089564B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089564C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089564FC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895650C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956558u);
    ctx.gpr[6] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08956558u) goto L_08956558;
    return;
L_08956558:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08956568u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08956568u) goto L_08956568;
    return;
L_08956568:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089565A4;
L_089565A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089565A4;
      }
      goto L_089565B8;
    }
L_089565B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089565E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956604u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893D6E8u>(ctx, &aot_mem) && ctx.pc == 0x08956604u) goto L_08956604;
    return;
L_08956604:
    ctx.gpr[4] = (2197u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24972));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (2197u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25100));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26544));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_089566C4;
      }
      goto L_089566B4;
    }
L_089566B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089566C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089566C4u) goto L_089566C4;
    return;
L_089566C4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08956700;
      }
      goto L_089566D8;
    }
L_089566D8:
    ctx.gpr[20] = (2222u << 16u);
    goto L_089566DC;
L_089566DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089566ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089566ECu) goto L_089566EC;
    return;
L_089566EC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089566DC;
      }
      goto L_08956700;
    }
L_08956700:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), 0u);
      if (branch_taken) {
          goto L_08956770;
      }
      goto L_08956710;
    }
L_08956710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_08956740;
    }
    goto L_08956720;
L_08956720:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (2222u << 16u);
        goto L_08956758;
    }
    goto L_08956728;
L_08956728:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08956758;
      }
      goto L_08956730;
    }
L_08956730:
    ctx.gpr[31] = (0x08956738u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08955DF4;
L_08956738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_08956754;
      }
      goto L_08956740;
    }
L_08956740:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08956758;
      }
      goto L_08956748;
    }
L_08956748:
    ctx.gpr[31] = (0x08956750u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08956020;
L_08956750:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    goto L_08956754;
L_08956754:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08956758;
L_08956758:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895676Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895676Cu) goto L_0895676C;
    return;
L_0895676C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), 0u);
    goto L_08956770;
L_08956770:
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
L_08956790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_089567E4;
    }
    goto L_089567C8;
L_089567C8:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_089568D8;
    }
    goto L_089567D0;
L_089567D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089568D8;
      }
      goto L_089567D8;
    }
L_089567D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_089567F8;
      }
      goto L_089567E0;
    }
L_089567E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_089567E4;
L_089567E4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
        goto L_08956880;
    }
    goto L_089567EC;
L_089567EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089568D8;
      }
      goto L_089567F4;
    }
L_089567F4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    goto L_089567F8;
L_089567F8:
    ctx.gpr[31] = (0x08956800u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08955E34;
L_08956800:
    ctx.gpr[31] = (0x08956808u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08955F8C;
L_08956808:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[4] << 12u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[18] = (ctx.gpr[18] | ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089568D8;
      }
      goto L_08956854;
    }
L_08956854:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_08956858;
L_08956858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x08956864u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089564B0;
L_08956864:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08956858;
      }
      goto L_08956874;
    }
L_08956874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089568D8;
      }
      goto L_0895687C;
    }
L_0895687C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    goto L_08956880;
L_08956880:
    ctx.gpr[31] = (0x08956888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08956028;
L_08956888:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089568B8;
      }
      goto L_0895689C;
    }
L_0895689C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089568A8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0895650C;
L_089568A8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895689C;
      }
      goto L_089568B8;
    }
L_089568B8:
    ctx.gpr[31] = (0x089568C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08956178;
L_089568C0:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089568D4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089564FC;
L_089568D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089568D8;
L_089568D8:
    ctx.gpr[31] = (0x089568E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956904;
L_089568E0:
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
L_08956904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089569C8;
      }
      goto L_08956934;
    }
L_08956934:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08956950u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08956950u) goto L_08956950;
    return;
L_08956950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089569AC;
      }
      goto L_08956964;
    }
L_08956964:
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] + ctx.gpr[8]);
    goto L_08956970;
L_08956970:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(208)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(120)));
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089569A0;
    }
    goto L_08956984;
L_08956984:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089569A0;
L_089569A0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08956970;
      }
      goto L_089569AC;
    }
L_089569AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089569C8;
      }
      goto L_089569B4;
    }
L_089569B4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089569C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 220u, 0x0893D628u>(ctx, &aot_mem) && ctx.pc == 0x089569C8u) goto L_089569C8;
    return;
L_089569C8:
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
L_089569E8:
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
        goto L_08956A0C;
    }
    goto L_089569F0;
L_089569F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956A0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956A38u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089564FC;
L_08956A38:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956A70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956A7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956A8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956AA0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08956ABC;
      }
      goto L_08956AAC;
    }
L_08956AAC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26080));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956ABC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956AC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08956AE8;
      }
      goto L_08956AD0;
    }
L_08956AD0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26544));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956AE8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956FA0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08956520;
L_08956FA0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08956FF0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089565E0;
L_08956FF0:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27420)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 124u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957068u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957068u) goto L_08957068;
    return;
L_08957068:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957074u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0895631C;
L_08957074:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08957080u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08956340;
L_08957080:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0895708Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089563B0;
L_0895708C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957098u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08956A14;
L_08957098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27420)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 124u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957100u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957100u) goto L_08957100;
    return;
L_08957100:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895710Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0895631C;
L_0895710C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08957118u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08956340;
L_08957118:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08957124u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089563B0;
L_08957124:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957130u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08956A14;
L_08957130:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957168u);
    // nop
    goto L_08956688;
L_08957168:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[21] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27420)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (0u | 1u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08957290;
      }
      goto L_0895726C;
    }
L_0895726C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08957278u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089563B0;
L_08957278:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08957284u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089564FC;
L_08957284:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27420)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089572A4;
      }
      goto L_08957290;
    }
L_08957290:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0895729Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_0895650C;
L_0895729C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27420)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    goto L_089572A4;
L_089572A4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08957358;
      }
      goto L_089572D8;
    }
L_089572D8:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_089572FC;
      }
      goto L_089572E8;
    }
L_089572E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089572F4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0895650C;
L_089572F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089573A8;
      }
      goto L_089572FC;
    }
L_089572FC:
    ctx.gpr[31] = (0x08957304u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089563B0;
L_08957304:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08957310u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08956428;
L_08957310:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27420)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08957344;
      }
      goto L_0895733C;
    }
L_0895733C:
    ctx.gpr[31] = (0x08957344u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089564C4;
L_08957344:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08957350u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089564FC;
L_08957350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089573A8;
      }
      goto L_08957358;
    }
L_08957358:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08957364u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08956428;
L_08957364:
    if (ctx.gpr[18] != ctx.gpr[22]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08957378;
    }
    goto L_0895736C;
L_0895736C:
    ctx.gpr[31] = (0x08957374u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089564C4;
L_08957374:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08957378;
L_08957378:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27420)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[31] = (0x0895739Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089563B0;
L_0895739C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089573A8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089564FC;
L_089573A8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089573BC;
      }
      goto L_089573B0;
    }
L_089573B0:
    ctx.gpr[31] = (0x089573B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895740C;
L_089573B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089573BC;
L_089573BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089573C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956790;
L_089573C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895740C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27420)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08957488;
      }
      goto L_08957438;
    }
L_08957438:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    goto L_08957448;
L_08957448:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27420)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08957448;
      }
      goto L_08957480;
    }
L_08957480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089574C0;
      }
      goto L_08957488;
    }
L_08957488:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (0u | 0u);
    goto L_08957490;
L_08957490:
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089574A8;
      }
      goto L_0895749C;
    }
L_0895749C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089574AC;
      }
      goto L_089574A8;
    }
L_089574A8:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    goto L_089574AC;
L_089574AC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08957490;
      }
      goto L_089574C0;
    }
L_089574C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574C8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089574ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08956520;
L_089574EC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    goto L_089574F4;
L_089574F4:
    ctx.gpr[31] = (0x089574FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08956F8C;
L_089574FC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_089574F4;
      }
      goto L_0895750C;
    }
L_0895750C:
    ctx.gpr[31] = (0x08957514u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1756));
    goto L_08956520;
L_08957514:
    ctx.gpr[31] = (0x0895751Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    goto L_08956520;
L_0895751C:
    ctx.gpr[31] = (0x08957524u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2244));
    goto L_08956520;
L_08957524:
    ctx.gpr[31] = (0x0895752Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2488));
    goto L_08956520;
L_0895752C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2732), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
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
L_08957550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895756Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08956688;
L_0895756C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    goto L_08957574;
L_08957574:
    ctx.gpr[31] = (0x0895757Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08957158;
L_0895757C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_08957574;
      }
      goto L_0895758C;
    }
L_0895758C:
    ctx.gpr[31] = (0x08957594u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1756));
    goto L_08956688;
L_08957594:
    ctx.gpr[31] = (0x0895759Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    goto L_08956688;
L_0895759C:
    ctx.gpr[31] = (0x089575A4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2244));
    goto L_08956688;
L_089575A4:
    ctx.gpr[31] = (0x089575ACu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2488));
    goto L_08956688;
L_089575AC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2732), ctx.gpr[4]);
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
L_089575CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089575F0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089569E8;
L_089575F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(244));
    goto L_089575F8;
L_089575F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957604u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957604:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_089575F8;
      }
      goto L_08957614;
    }
L_08957614:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1756));
    ctx.gpr[31] = (0x08957620u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957620:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2000));
    ctx.gpr[31] = (0x0895762Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_0895762C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2244));
    ctx.gpr[31] = (0x08957638u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957638:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2488));
    ctx.gpr[31] = (0x08957644u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957644:
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
L_08957660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1996)));
    goto L_08955EE0;
L_08957680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[31] = (0x0895768Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089560D4;
L_0895768C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2728)));
    ctx.gpr[31] = (0x08957698u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089560D4;
L_08957698:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089576B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089576D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_089564C4;
L_089576D4:
    ctx.gpr[31] = (0x089576DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    goto L_089564C4;
L_089576DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    goto L_089576E4;
L_089576E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089576F0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    goto L_089564C4;
L_089576F0:
    ctx.gpr[31] = (0x089576F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089564C4;
L_089576F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_089576E4;
      }
      goto L_08957708;
    }
L_08957708:
    ctx.gpr[17] = (0u | 0u);
    goto L_0895770C;
L_0895770C:
    ctx.gpr[31] = (0x08957714u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2452)));
    goto L_089564C4;
L_08957714:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895770C;
      }
      goto L_08957724;
    }
L_08957724:
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
L_08957740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1756));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895775Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    goto L_08955FA0;
L_0895775C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2244));
    ctx.gpr[31] = (0x08957768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    goto L_08956180;
L_08957768:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2488));
    ctx.gpr[31] = (0x08957774u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    goto L_08956180;
L_08957774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089577A0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08956520;
L_089577A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    goto L_089577A8;
L_089577A8:
    ctx.gpr[31] = (0x089577B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08956F8C;
L_089577B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_089577A8;
      }
      goto L_089577C0;
    }
L_089577C0:
    ctx.gpr[31] = (0x089577C8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(748));
    goto L_08956520;
L_089577C8:
    ctx.gpr[31] = (0x089577D0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(992));
    goto L_08956520;
L_089577D0:
    ctx.gpr[31] = (0x089577D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1236));
    goto L_08956520;
L_089577D8:
    ctx.gpr[31] = (0x089577E0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1480));
    goto L_08956520;
L_089577E0:
    ctx.gpr[31] = (0x089577E8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1724));
    goto L_08956520;
L_089577E8:
    ctx.gpr[31] = (0x089577F0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1968));
    goto L_08956520;
L_089577F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2212), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2216), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
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
L_08957818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957834u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08956688;
L_08957834:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    goto L_0895783C;
L_0895783C:
    ctx.gpr[31] = (0x08957844u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08957158;
L_08957844:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_0895783C;
      }
      goto L_08957854;
    }
L_08957854:
    ctx.gpr[31] = (0x0895785Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(748));
    goto L_08956688;
L_0895785C:
    ctx.gpr[31] = (0x08957864u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(992));
    goto L_08956688;
L_08957864:
    ctx.gpr[31] = (0x0895786Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1236));
    goto L_08956688;
L_0895786C:
    ctx.gpr[31] = (0x08957874u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1480));
    goto L_08956688;
L_08957874:
    ctx.gpr[31] = (0x0895787Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1724));
    goto L_08956688;
L_0895787C:
    ctx.gpr[31] = (0x08957884u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1968));
    goto L_08956688;
L_08957884:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2212), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2216), ctx.gpr[4]);
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
L_089578A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089578CCu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089569E8;
L_089578CC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(244));
    goto L_089578D4;
L_089578D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089578E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_089578E0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_089578D4;
      }
      goto L_089578F0;
    }
L_089578F0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(748));
    ctx.gpr[31] = (0x089578FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_089578FC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08957908u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957908:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1480));
    ctx.gpr[31] = (0x08957914u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957914:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1236));
    ctx.gpr[31] = (0x08957920u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957920:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1724));
    ctx.gpr[31] = (0x0895792Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_0895792C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1968));
    ctx.gpr[31] = (0x08957938u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089569E8;
L_08957938:
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
L_08957954:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895795C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895797Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_089564C4;
L_0895797C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    goto L_08957984;
L_08957984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x08957990u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    goto L_089564C4;
L_08957990:
    ctx.gpr[31] = (0x08957998u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089564C4;
L_08957998:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_08957984;
      }
      goto L_089579A8;
    }
L_089579A8:
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
L_089579C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2732), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957A18u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_089565E0;
L_08957A18:
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957A28u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A7C;
L_08957A28:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (2222u << 16u);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08957AE8;
      }
      goto L_08957AD0;
    }
L_08957AD0:
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08957AF4;
      }
      goto L_08957AE8;
    }
L_08957AE8:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    goto L_08957AF4;
L_08957AF4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[4] = (0u | 124u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957B08u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957B08u) goto L_08957B08;
    return;
L_08957B08:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957B14u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0895631C;
L_08957B14:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08957B20u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08956340;
L_08957B20:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08957B2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089563B0;
L_08957B2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957B38u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08956A14;
L_08957B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 124u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957B50u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957B50u) goto L_08957B50;
    return;
L_08957B50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957B5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895631C;
L_08957B5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957B68u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956340;
L_08957B68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957B74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089563B0;
L_08957B74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957B80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956A14;
L_08957B80:
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(244));
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08957B98u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08956FC0;
L_08957B98:
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(496));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08957BACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08956FC0;
L_08957BAC:
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(748));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08957BC0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08956FC0;
L_08957BC0:
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08957BD4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08956FC0;
L_08957BD4:
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(1252));
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x08957BECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08956FC0;
L_08957BEC:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(1504));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x08957C00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08956FC0;
L_08957C00:
    ctx.gpr[4] = (ctx.gpr[22] << 6u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08957C2Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_089574C8;
L_08957C2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08957C38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089574C8;
L_08957C38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08957C44u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_089574C8;
L_08957C44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08957C50u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089574C8;
L_08957C50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08957C5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089574C8;
L_08957C5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08957C68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089574C8;
L_08957C68:
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(2000));
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957C7Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089565E0;
L_08957C7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957C88u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A8C;
L_08957C88:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (0u | 124u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957CA0u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957CA0u) goto L_08957CA0;
    return;
L_08957CA0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957CACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895631C;
L_08957CAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957CB8u);
    ctx.gpr[5] = (0u | 27u);
    goto L_08956340;
L_08957CB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957CC4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    goto L_089563B0;
L_08957CC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957CD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956A14;
L_08957CD0:
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(1756));
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08957CE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089565E0;
L_08957CE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957CF0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A8C;
L_08957CF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 124u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957D04u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957D04u) goto L_08957D04;
    return;
L_08957D04:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957D10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895631C;
L_08957D10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957D1Cu);
    ctx.gpr[5] = (0u | 28u);
    goto L_08956340;
L_08957D1C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08957D28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089563B0;
L_08957D28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957D34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956A14;
L_08957D34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957D48u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957D48u) goto L_08957D48;
    return;
L_08957D48:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957D54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08955CCC;
L_08957D54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957D60u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08955CF4;
L_08957D60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957D70u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08956A70;
L_08957D70:
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(2244));
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08957D84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089565E0;
L_08957D84:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957D90u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A8C;
L_08957D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08957DA4;
L_08957DA4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 124u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957DB4u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957DB4u) goto L_08957DB4;
    return;
L_08957DB4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957DC0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0895631C;
L_08957DC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08957DCCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08956340;
L_08957DCC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08957DD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089563B0;
L_08957DD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957DE4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08956A14;
L_08957DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08957DA4;
      }
      goto L_08957DF8;
    }
L_08957DF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957E08u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957E08u) goto L_08957E08;
    return;
L_08957E08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957E14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08955FAC;
L_08957E14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957E20u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08955FD0;
L_08957E20:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957E30u);
    ctx.gpr[6] = (0u | 2u);
    goto L_08956A70;
L_08957E30:
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(2488));
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(6));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957E44u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089565E0;
L_08957E44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957E50u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A8C;
L_08957E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    goto L_08957E60;
L_08957E60:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 124u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957E70u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957E70u) goto L_08957E70;
    return;
L_08957E70:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957E7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0895631C;
L_08957E7C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(43));
    ctx.gpr[31] = (0x08957E88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08956340;
L_08957E88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08957E94u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089563B0;
L_08957E94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08957EA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08956A14;
L_08957EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08957E60;
      }
      goto L_08957EB4;
    }
L_08957EB4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08957EC4u);
    ctx.gpr[5] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957EC4u) goto L_08957EC4;
    return;
L_08957EC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08957ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08955FAC;
L_08957ED0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957EDCu);
    ctx.gpr[5] = (0u | 2u);
    goto L_08955FD0;
L_08957EDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957EECu);
    ctx.gpr[6] = (0u | 2u);
    goto L_08956A70;
L_08957EEC:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08957EFC;
      }
      goto L_08957EF4;
    }
L_08957EF4:
    ctx.gpr[31] = (0x08957EFCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089576B0;
L_08957EFC:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
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
L_08957F30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2732)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] << 6u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957FA0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A7C;
L_08957FA0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1756));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(244));
    ctx.gpr[30] = (ctx.gpr[18] + static_cast<std::uint32_t>(2244));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(2488));
    goto L_08957FC0;
L_08957FC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957FCCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A8C;
L_08957FCC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_08957FC0;
      }
      goto L_08957FDC;
    }
L_08957FDC:
    ctx.gpr[4] = (ctx.gpr[22] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 6u, 0x08958038u>(ctx, &aot_mem); return;
    }
    goto L_08957FE8;
L_08957FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08957FF4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A7C;
L_08957FF4:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08958004u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08956A7C;
}

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08954000u, 16384u, &recomp_unit_0084, &recomp_unit_0084_entry);
    runtime.register_function(0x08954000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954014u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954040u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954044u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954054u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954070u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089540E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895410Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954114u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954120u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954144u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895414Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954154u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954188u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954200u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895420Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954218u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954300u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895430Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954314u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895431Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954324u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895432Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954338u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954340u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895434Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954358u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954364u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895436Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954374u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954384u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954390u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895439Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954408u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954410u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954428u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954440u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895444Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954460u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895446Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954478u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895448Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954494u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895451Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895452Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895453Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954544u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895454Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954564u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895456Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954578u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954584u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954670u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954684u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954690u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895469Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954708u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954718u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954720u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954734u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954740u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954748u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954754u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895476Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895477Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895478Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954794u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895479Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895481Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954830u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895484Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954868u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895487Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954888u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954894u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954904u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954918u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954924u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895492Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954950u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954978u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954990u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895499Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954AF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ED4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955018u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895502Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955064u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895506Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955088u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955098u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955104u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895510Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895511Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895512Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955140u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895517Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895518Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955200u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955214u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895523Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955264u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955278u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895528Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955308u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895531Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955330u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955358u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895536Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955390u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955404u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955424u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955444u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955450u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955458u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955460u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955468u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955478u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955488u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955490u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955498u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955500u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955510u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955518u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955528u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955560u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895556Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955578u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955580u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895558Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089555F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955600u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895560Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955614u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955618u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895562Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955644u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895564Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955650u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895565Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955664u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955670u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955680u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895568Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955690u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955698u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895572Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955738u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895574Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955758u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955760u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955778u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955784u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895580Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895581Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895582Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955844u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955858u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955864u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955888u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955894u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955900u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895590Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955940u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955978u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955988u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955ACCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955D88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955EE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956018u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956020u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956028u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956054u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956074u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956084u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956098u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956100u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956118u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956128u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895613Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956148u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956178u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895618Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089561F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895620Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956244u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895631Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956330u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956340u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956370u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956390u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956404u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956420u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956428u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895650Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956520u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956558u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956568u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089565E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956604u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956688u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956700u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956710u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956720u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956728u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956730u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956738u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956740u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956748u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956750u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956754u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956758u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895676Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956770u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956790u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956800u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956808u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956858u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956864u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895687Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956880u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956888u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895689Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956904u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956934u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956950u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956964u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956970u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956984u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956ABCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957068u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957074u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895708Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957098u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957100u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895710Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957118u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957130u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957158u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957168u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895726Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957278u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957284u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957290u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895729Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957304u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957310u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895733Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957350u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957358u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957364u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895736Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957374u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957378u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895739Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895740Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957438u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957448u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957480u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957488u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957490u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895749Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895750Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957514u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895751Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957524u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895752Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957550u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895756Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957574u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895757Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895758Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895759Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957604u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957614u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895762Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957644u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957660u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957680u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895768Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957698u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957708u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895770Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957714u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957724u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957740u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895775Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957768u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957774u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957784u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957818u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957834u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895783Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957844u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895785Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957864u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895786Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895787Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957884u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957908u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957914u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957920u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895792Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957938u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957954u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895795Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895797Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957984u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957990u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957ED0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957FF4u, &recomp_unit_0084, "recomp_unit_0084");
}
} // namespace psprecomp

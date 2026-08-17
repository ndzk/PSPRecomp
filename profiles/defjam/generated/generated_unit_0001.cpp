#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0001[4094] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0,
    0, 12, 13, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 21, 0, 0, 22, 0, 23, 0,
    0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0,
    35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0,
    51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0,
    67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0,
    83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0,
    0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114,
    0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130,
    0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146,
    0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162,
    0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178,
    0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194,
    0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0,
    206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0,
    249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257,
    0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0,
    275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282,
    0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302,
    0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0,
    311, 0, 312, 0, 313, 0, 314, 0, 315, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0,
    0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0,
    342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0,
    354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 362,
    0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397,
    0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 413, 414, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420,
    0, 421, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0,
    452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 463, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0,
    0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 475,
    0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0,
    485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 491,
    0, 492, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500,
    0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0,
    509, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0,
    0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530,
    0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 535, 0, 536, 0, 0, 537, 0, 538,
    0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    550, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0,
    0, 556, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 570,
    0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0,
    0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0,
    0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0,
    0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0,
    0, 0, 625, 0, 0, 626, 0, 627, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 0,
    0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0,
    0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 651, 0, 652, 653, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0,
    656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664, 665, 0, 666, 0, 0,
    0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 674, 0, 675, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 680, 681, 0,
    682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0,
    0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0,
    0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0,
    705, 0, 706, 0, 707, 0, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 0, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0, 717,
    0, 0, 0, 0, 718, 719, 0, 720, 0, 0, 721, 722, 0, 0, 0, 723, 724, 0, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 0,
    0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0,
    737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0,
    0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0,
    0, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0,
    768, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 782, 783, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 788,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 790, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 0,
    798, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0,
    0, 804, 0, 0, 805, 0, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 810, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0,
    0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822,
    0, 0, 823, 0, 824, 0, 825, 826, 827, 0, 828, 0, 829, 0, 0, 0, 830, 0, 831, 0, 0, 832, 833, 0, 834, 0, 835, 0, 0, 836, 0, 837,
    0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 841, 842, 0, 843, 0, 844, 0, 0,
    845, 0, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0,
    854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855,
    0, 0, 856, 0, 857, 858, 859, 0, 860, 0, 861, 0, 0, 862, 0, 0, 863, 0, 864, 0, 0, 865, 0, 0, 866, 0, 867, 868, 0, 869, 0, 870,
    0, 0, 871, 0, 0, 872, 0, 873, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 878, 0, 879, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885,
    0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 890, 0, 0, 0, 0,
    0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 0, 0, 0, 895, 896, 0, 897, 0, 898,
};
void recomp_unit_0001_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08808000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0001[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08808000;
    case 2u: goto L_0880800C;
    case 3u: goto L_08808014;
    case 4u: goto L_08808024;
    case 5u: goto L_08808028;
    case 6u: goto L_08808038;
    case 7u: goto L_08808040;
    case 8u: goto L_0880804C;
    case 9u: goto L_08808054;
    case 10u: goto L_0880806C;
    case 11u: goto L_08808074;
    case 12u: goto L_08808084;
    case 13u: goto L_08808088;
    case 14u: goto L_08808094;
    case 15u: goto L_0880809C;
    case 16u: goto L_088080A8;
    case 17u: goto L_088080B0;
    case 18u: goto L_088080C8;
    case 19u: goto L_088080D0;
    case 20u: goto L_088080E0;
    case 21u: goto L_088080E4;
    case 22u: goto L_088080F0;
    case 23u: goto L_088080F8;
    case 24u: goto L_08808104;
    case 25u: goto L_0880810C;
    case 26u: goto L_08808120;
    case 27u: goto L_08808128;
    case 28u: goto L_08808134;
    case 29u: goto L_0880813C;
    case 30u: goto L_08808144;
    case 31u: goto L_08808150;
    case 32u: goto L_08808158;
    case 33u: goto L_0880816C;
    case 34u: goto L_08808174;
    case 35u: goto L_08808180;
    case 36u: goto L_08808188;
    case 37u: goto L_08808190;
    case 38u: goto L_08808198;
    case 39u: goto L_088081A0;
    case 40u: goto L_088081A8;
    case 41u: goto L_088081B0;
    case 42u: goto L_088081B8;
    case 43u: goto L_088081C0;
    case 44u: goto L_088081C8;
    case 45u: goto L_088081D0;
    case 46u: goto L_088081D8;
    case 47u: goto L_088081E0;
    case 48u: goto L_088081E8;
    case 49u: goto L_088081F0;
    case 50u: goto L_088081F8;
    case 51u: goto L_08808200;
    case 52u: goto L_08808208;
    case 53u: goto L_08808210;
    case 54u: goto L_08808218;
    case 55u: goto L_08808220;
    case 56u: goto L_08808228;
    case 57u: goto L_08808230;
    case 58u: goto L_08808238;
    case 59u: goto L_08808240;
    case 60u: goto L_08808248;
    case 61u: goto L_08808250;
    case 62u: goto L_08808258;
    case 63u: goto L_08808260;
    case 64u: goto L_08808268;
    case 65u: goto L_08808270;
    case 66u: goto L_08808278;
    case 67u: goto L_08808280;
    case 68u: goto L_08808288;
    case 69u: goto L_08808290;
    case 70u: goto L_08808298;
    case 71u: goto L_088082A0;
    case 72u: goto L_088082A8;
    case 73u: goto L_088082B0;
    case 74u: goto L_088082B8;
    case 75u: goto L_088082C0;
    case 76u: goto L_088082C8;
    case 77u: goto L_088082D0;
    case 78u: goto L_088082D8;
    case 79u: goto L_088082E0;
    case 80u: goto L_088082E8;
    case 81u: goto L_088082F0;
    case 82u: goto L_088082F8;
    case 83u: goto L_08808300;
    case 84u: goto L_08808308;
    case 85u: goto L_08808310;
    case 86u: goto L_08808320;
    case 87u: goto L_08808328;
    case 88u: goto L_08808330;
    case 89u: goto L_08808344;
    case 90u: goto L_0880835C;
    case 91u: goto L_08808368;
    case 92u: goto L_08808370;
    case 93u: goto L_08808378;
    case 94u: goto L_08808388;
    case 95u: goto L_08808390;
    case 96u: goto L_088083C4;
    case 97u: goto L_088083DC;
    case 98u: goto L_088083E4;
    case 99u: goto L_08808404;
    case 100u: goto L_0880840C;
    case 101u: goto L_08808414;
    case 102u: goto L_0880841C;
    case 103u: goto L_08808424;
    case 104u: goto L_0880842C;
    case 105u: goto L_08808434;
    case 106u: goto L_0880843C;
    case 107u: goto L_08808444;
    case 108u: goto L_0880844C;
    case 109u: goto L_08808454;
    case 110u: goto L_0880845C;
    case 111u: goto L_08808464;
    case 112u: goto L_0880846C;
    case 113u: goto L_08808474;
    case 114u: goto L_0880847C;
    case 115u: goto L_08808484;
    case 116u: goto L_0880848C;
    case 117u: goto L_08808494;
    case 118u: goto L_0880849C;
    case 119u: goto L_088084A4;
    case 120u: goto L_088084AC;
    case 121u: goto L_088084B4;
    case 122u: goto L_088084BC;
    case 123u: goto L_088084C4;
    case 124u: goto L_088084CC;
    case 125u: goto L_088084D4;
    case 126u: goto L_088084DC;
    case 127u: goto L_088084E4;
    case 128u: goto L_088084EC;
    case 129u: goto L_088084F4;
    case 130u: goto L_088084FC;
    case 131u: goto L_08808504;
    case 132u: goto L_0880850C;
    case 133u: goto L_08808514;
    case 134u: goto L_0880851C;
    case 135u: goto L_08808524;
    case 136u: goto L_0880852C;
    case 137u: goto L_08808534;
    case 138u: goto L_0880853C;
    case 139u: goto L_08808544;
    case 140u: goto L_0880854C;
    case 141u: goto L_08808554;
    case 142u: goto L_0880855C;
    case 143u: goto L_08808564;
    case 144u: goto L_0880856C;
    case 145u: goto L_08808574;
    case 146u: goto L_0880857C;
    case 147u: goto L_08808584;
    case 148u: goto L_0880858C;
    case 149u: goto L_08808594;
    case 150u: goto L_0880859C;
    case 151u: goto L_088085A4;
    case 152u: goto L_088085AC;
    case 153u: goto L_088085B4;
    case 154u: goto L_088085BC;
    case 155u: goto L_088085C4;
    case 156u: goto L_088085CC;
    case 157u: goto L_088085D4;
    case 158u: goto L_088085DC;
    case 159u: goto L_088085E4;
    case 160u: goto L_088085EC;
    case 161u: goto L_088085F4;
    case 162u: goto L_088085FC;
    case 163u: goto L_08808604;
    case 164u: goto L_0880860C;
    case 165u: goto L_08808614;
    case 166u: goto L_0880861C;
    case 167u: goto L_08808624;
    case 168u: goto L_0880862C;
    case 169u: goto L_08808634;
    case 170u: goto L_0880863C;
    case 171u: goto L_08808644;
    case 172u: goto L_0880864C;
    case 173u: goto L_08808654;
    case 174u: goto L_0880865C;
    case 175u: goto L_08808664;
    case 176u: goto L_0880866C;
    case 177u: goto L_08808674;
    case 178u: goto L_0880867C;
    case 179u: goto L_08808684;
    case 180u: goto L_0880868C;
    case 181u: goto L_08808694;
    case 182u: goto L_0880869C;
    case 183u: goto L_088086A4;
    case 184u: goto L_088086AC;
    case 185u: goto L_088086B4;
    case 186u: goto L_088086BC;
    case 187u: goto L_088086C4;
    case 188u: goto L_088086CC;
    case 189u: goto L_088086D4;
    case 190u: goto L_088086DC;
    case 191u: goto L_088086E4;
    case 192u: goto L_088086EC;
    case 193u: goto L_088086F4;
    case 194u: goto L_088086FC;
    case 195u: goto L_08808704;
    case 196u: goto L_0880870C;
    case 197u: goto L_08808714;
    case 198u: goto L_0880871C;
    case 199u: goto L_08808724;
    case 200u: goto L_0880872C;
    case 201u: goto L_08808734;
    case 202u: goto L_08808744;
    case 203u: goto L_08808760;
    case 204u: goto L_08808770;
    case 205u: goto L_08808778;
    case 206u: goto L_08808780;
    case 207u: goto L_08808788;
    case 208u: goto L_08808790;
    case 209u: goto L_08808798;
    case 210u: goto L_088087A8;
    case 211u: goto L_088087B0;
    case 212u: goto L_088087B8;
    case 213u: goto L_088087C0;
    case 214u: goto L_088087CC;
    case 215u: goto L_08808800;
    case 216u: goto L_08808808;
    case 217u: goto L_08808814;
    case 218u: goto L_08808828;
    case 219u: goto L_08808834;
    case 220u: goto L_0880883C;
    case 221u: goto L_08808860;
    case 222u: goto L_08808868;
    case 223u: goto L_088088A0;
    case 224u: goto L_088088BC;
    case 225u: goto L_088088C8;
    case 226u: goto L_088088D0;
    case 227u: goto L_088088D8;
    case 228u: goto L_088088E0;
    case 229u: goto L_088088EC;
    case 230u: goto L_088088F4;
    case 231u: goto L_0880895C;
    case 232u: goto L_08808978;
    case 233u: goto L_08808980;
    case 234u: goto L_0880899C;
    case 235u: goto L_088089A4;
    case 236u: goto L_088089C0;
    case 237u: goto L_088089C8;
    case 238u: goto L_088089E4;
    case 239u: goto L_088089EC;
    case 240u: goto L_088089F4;
    case 241u: goto L_08808A1C;
    case 242u: goto L_08808A28;
    case 243u: goto L_08808A34;
    case 244u: goto L_08808A3C;
    case 245u: goto L_08808A44;
    case 246u: goto L_08808A4C;
    case 247u: goto L_08808ADC;
    case 248u: goto L_08808AF8;
    case 249u: goto L_08808B00;
    case 250u: goto L_08808B1C;
    case 251u: goto L_08808B24;
    case 252u: goto L_08808B40;
    case 253u: goto L_08808B48;
    case 254u: goto L_08808B64;
    case 255u: goto L_08808B6C;
    case 256u: goto L_08808B74;
    case 257u: goto L_08808B7C;
    case 258u: goto L_08808B88;
    case 259u: goto L_08808B90;
    case 260u: goto L_08808B9C;
    case 261u: goto L_08808BB4;
    case 262u: goto L_08808BBC;
    case 263u: goto L_08808C2C;
    case 264u: goto L_08808C34;
    case 265u: goto L_08808CC4;
    case 266u: goto L_08808CC8;
    case 267u: goto L_08808CDC;
    case 268u: goto L_08808CF0;
    case 269u: goto L_08808D30;
    case 270u: goto L_08808D44;
    case 271u: goto L_08808D50;
    case 272u: goto L_08808D5C;
    case 273u: goto L_08808D68;
    case 274u: goto L_08808D74;
    case 275u: goto L_08808D80;
    case 276u: goto L_08808D8C;
    case 277u: goto L_08808D94;
    case 278u: goto L_08808DA0;
    case 279u: goto L_08808DB4;
    case 280u: goto L_08808DC0;
    case 281u: goto L_08808DF4;
    case 282u: goto L_08808DFC;
    case 283u: goto L_08808E04;
    case 284u: goto L_08808E1C;
    case 285u: goto L_08808E28;
    case 286u: goto L_08808E50;
    case 287u: goto L_08808E5C;
    case 288u: goto L_08808E70;
    case 289u: goto L_08808E7C;
    case 290u: goto L_08808E88;
    case 291u: goto L_08808EA4;
    case 292u: goto L_08808EB0;
    case 293u: goto L_08808EB8;
    case 294u: goto L_08808EE4;
    case 295u: goto L_08808EEC;
    case 296u: goto L_08808EF4;
    case 297u: goto L_08808EFC;
    case 298u: goto L_08808F30;
    case 299u: goto L_08808F38;
    case 300u: goto L_08808F40;
    case 301u: goto L_08808F74;
    case 302u: goto L_08808F7C;
    case 303u: goto L_08808F84;
    case 304u: goto L_08808F94;
    case 305u: goto L_08808F9C;
    case 306u: goto L_08808FB4;
    case 307u: goto L_08808FC0;
    case 308u: goto L_08808FD4;
    case 309u: goto L_08808FE4;
    case 310u: goto L_08808FF0;
    case 311u: goto L_08809000;
    case 312u: goto L_08809008;
    case 313u: goto L_08809010;
    case 314u: goto L_08809018;
    case 315u: goto L_08809020;
    case 316u: goto L_08809024;
    case 317u: goto L_0880902C;
    case 318u: goto L_08809034;
    case 319u: goto L_08809044;
    case 320u: goto L_0880904C;
    case 321u: goto L_08809054;
    case 322u: goto L_08809064;
    case 323u: goto L_0880906C;
    case 324u: goto L_088090A0;
    case 325u: goto L_088090B0;
    case 326u: goto L_088090C4;
    case 327u: goto L_088090D4;
    case 328u: goto L_088090E0;
    case 329u: goto L_088090F4;
    case 330u: goto L_08809104;
    case 331u: goto L_0880910C;
    case 332u: goto L_0880911C;
    case 333u: goto L_08809158;
    case 334u: goto L_088091E8;
    case 335u: goto L_08809204;
    case 336u: goto L_0880921C;
    case 337u: goto L_08809224;
    case 338u: goto L_08809234;
    case 339u: goto L_08809248;
    case 340u: goto L_08809270;
    case 341u: goto L_08809278;
    case 342u: goto L_08809280;
    case 343u: goto L_08809288;
    case 344u: goto L_088092A0;
    case 345u: goto L_088092AC;
    case 346u: goto L_088092CC;
    case 347u: goto L_088092E4;
    case 348u: goto L_08809318;
    case 349u: goto L_08809334;
    case 350u: goto L_08809340;
    case 351u: goto L_08809364;
    case 352u: goto L_0880936C;
    case 353u: goto L_08809378;
    case 354u: goto L_08809380;
    case 355u: goto L_08809394;
    case 356u: goto L_088093BC;
    case 357u: goto L_088093D0;
    case 358u: goto L_088093E0;
    case 359u: goto L_088093E8;
    case 360u: goto L_088093F0;
    case 361u: goto L_088093F8;
    case 362u: goto L_088093FC;
    case 363u: goto L_08809404;
    case 364u: goto L_0880940C;
    case 365u: goto L_08809414;
    case 366u: goto L_0880941C;
    case 367u: goto L_08809424;
    case 368u: goto L_0880942C;
    case 369u: goto L_08809434;
    case 370u: goto L_0880943C;
    case 371u: goto L_08809458;
    case 372u: goto L_0880947C;
    case 373u: goto L_08809484;
    case 374u: goto L_0880948C;
    case 375u: goto L_08809494;
    case 376u: goto L_0880949C;
    case 377u: goto L_088094B0;
    case 378u: goto L_08809538;
    case 379u: goto L_08809594;
    case 380u: goto L_088095A4;
    case 381u: goto L_088095CC;
    case 382u: goto L_088095EC;
    case 383u: goto L_088095F4;
    case 384u: goto L_088095FC;
    case 385u: goto L_08809610;
    case 386u: goto L_08809644;
    case 387u: goto L_08809678;
    case 388u: goto L_088096A8;
    case 389u: goto L_088096C0;
    case 390u: goto L_088096D0;
    case 391u: goto L_088096F8;
    case 392u: goto L_08809704;
    case 393u: goto L_08809720;
    case 394u: goto L_08809730;
    case 395u: goto L_0880973C;
    case 396u: goto L_08809770;
    case 397u: goto L_0880977C;
    case 398u: goto L_08809788;
    case 399u: goto L_08809790;
    case 400u: goto L_0880979C;
    case 401u: goto L_088097A4;
    case 402u: goto L_08809850;
    case 403u: goto L_08809874;
    case 404u: goto L_08809884;
    case 405u: goto L_0880988C;
    case 406u: goto L_08809894;
    case 407u: goto L_088098A0;
    case 408u: goto L_088098A8;
    case 409u: goto L_088098B0;
    case 410u: goto L_088098C4;
    case 411u: goto L_088098D8;
    case 412u: goto L_088098F4;
    case 413u: goto L_08809904;
    case 414u: goto L_08809908;
    case 415u: goto L_08809910;
    case 416u: goto L_08809920;
    case 417u: goto L_0880994C;
    case 418u: goto L_0880996C;
    case 419u: goto L_08809974;
    case 420u: goto L_0880997C;
    case 421u: goto L_08809984;
    case 422u: goto L_08809988;
    case 423u: goto L_08809994;
    case 424u: goto L_0880999C;
    case 425u: goto L_088099A4;
    case 426u: goto L_088099B8;
    case 427u: goto L_088099CC;
    case 428u: goto L_088099EC;
    case 429u: goto L_08809A00;
    case 430u: goto L_08809A18;
    case 431u: goto L_08809A2C;
    case 432u: goto L_08809A44;
    case 433u: goto L_08809A50;
    case 434u: goto L_08809A60;
    case 435u: goto L_08809A6C;
    case 436u: goto L_08809AA8;
    case 437u: goto L_08809ABC;
    case 438u: goto L_08809ACC;
    case 439u: goto L_08809AD8;
    case 440u: goto L_08809AE0;
    case 441u: goto L_08809B00;
    case 442u: goto L_08809B14;
    case 443u: goto L_08809B24;
    case 444u: goto L_08809B44;
    case 445u: goto L_08809B7C;
    case 446u: goto L_08809B88;
    case 447u: goto L_08809B9C;
    case 448u: goto L_08809BA8;
    case 449u: goto L_08809BC0;
    case 450u: goto L_08809BDC;
    case 451u: goto L_08809BF0;
    case 452u: goto L_08809C00;
    case 453u: goto L_08809C0C;
    case 454u: goto L_08809C14;
    case 455u: goto L_08809C38;
    case 456u: goto L_08809C44;
    case 457u: goto L_08809C4C;
    case 458u: goto L_08809C70;
    case 459u: goto L_08809CA0;
    case 460u: goto L_08809CAC;
    case 461u: goto L_08809CB4;
    case 462u: goto L_08809CC0;
    case 463u: goto L_08809CD0;
    case 464u: goto L_08809CD4;
    case 465u: goto L_08809CF0;
    case 466u: goto L_08809D3C;
    case 467u: goto L_08809D50;
    case 468u: goto L_08809D74;
    case 469u: goto L_08809D90;
    case 470u: goto L_08809DC0;
    case 471u: goto L_08809DCC;
    case 472u: goto L_08809DDC;
    case 473u: goto L_08809DE4;
    case 474u: goto L_08809DEC;
    case 475u: goto L_08809DFC;
    case 476u: goto L_08809E04;
    case 477u: goto L_08809E0C;
    case 478u: goto L_08809E14;
    case 479u: goto L_08809E30;
    case 480u: goto L_08809E38;
    case 481u: goto L_08809E44;
    case 482u: goto L_08809E64;
    case 483u: goto L_08809E6C;
    case 484u: goto L_08809E74;
    case 485u: goto L_08809E80;
    case 486u: goto L_08809E88;
    case 487u: goto L_08809EA8;
    case 488u: goto L_08809ED8;
    case 489u: goto L_08809EE4;
    case 490u: goto L_08809EF4;
    case 491u: goto L_08809EFC;
    case 492u: goto L_08809F04;
    case 493u: goto L_08809F14;
    case 494u: goto L_08809F1C;
    case 495u: goto L_08809F24;
    case 496u: goto L_08809F2C;
    case 497u: goto L_08809F48;
    case 498u: goto L_08809F50;
    case 499u: goto L_08809F5C;
    case 500u: goto L_08809F7C;
    case 501u: goto L_08809F84;
    case 502u: goto L_08809F8C;
    case 503u: goto L_08809F98;
    case 504u: goto L_08809FA0;
    case 505u: goto L_08809FC0;
    case 506u: goto L_08809FE0;
    case 507u: goto L_08809FE8;
    case 508u: goto L_08809FF4;
    case 509u: goto L_0880A000;
    case 510u: goto L_0880A00C;
    case 511u: goto L_0880A014;
    case 512u: goto L_0880A01C;
    case 513u: goto L_0880A024;
    case 514u: goto L_0880A030;
    case 515u: goto L_0880A03C;
    case 516u: goto L_0880A054;
    case 517u: goto L_0880A068;
    case 518u: goto L_0880A078;
    case 519u: goto L_0880A088;
    case 520u: goto L_0880A0A8;
    case 521u: goto L_0880A0B0;
    case 522u: goto L_0880A0E8;
    case 523u: goto L_0880A12C;
    case 524u: goto L_0880A134;
    case 525u: goto L_0880A140;
    case 526u: goto L_0880A150;
    case 527u: goto L_0880A164;
    case 528u: goto L_0880A16C;
    case 529u: goto L_0880A2EC;
    case 530u: goto L_0880A2FC;
    case 531u: goto L_0880A304;
    case 532u: goto L_0880A30C;
    case 533u: goto L_0880A3F8;
    case 534u: goto L_0880A45C;
    case 535u: goto L_0880A460;
    case 536u: goto L_0880A468;
    case 537u: goto L_0880A474;
    case 538u: goto L_0880A47C;
    case 539u: goto L_0880A48C;
    case 540u: goto L_0880A4A0;
    case 541u: goto L_0880A4A8;
    case 542u: goto L_0880A4C0;
    case 543u: goto L_0880A4C8;
    case 544u: goto L_0880A4D8;
    case 545u: goto L_0880A4E8;
    case 546u: goto L_0880A4F8;
    case 547u: goto L_0880A500;
    case 548u: goto L_0880A52C;
    case 549u: goto L_0880A558;
    case 550u: goto L_0880A580;
    case 551u: goto L_0880A58C;
    case 552u: goto L_0880A598;
    case 553u: goto L_0880A5A8;
    case 554u: goto L_0880A5D4;
    case 555u: goto L_0880A5E8;
    case 556u: goto L_0880A604;
    case 557u: goto L_0880A618;
    case 558u: goto L_0880A620;
    case 559u: goto L_0880A62C;
    case 560u: goto L_0880A638;
    case 561u: goto L_0880A640;
    case 562u: goto L_0880A658;
    case 563u: goto L_0880A670;
    case 564u: goto L_0880A6AC;
    case 565u: goto L_0880A6B8;
    case 566u: goto L_0880A6C4;
    case 567u: goto L_0880A6CC;
    case 568u: goto L_0880A6F0;
    case 569u: goto L_0880A6F8;
    case 570u: goto L_0880A6FC;
    case 571u: goto L_0880A71C;
    case 572u: goto L_0880A724;
    case 573u: goto L_0880A730;
    case 574u: goto L_0880A73C;
    case 575u: goto L_0880A744;
    case 576u: goto L_0880A750;
    case 577u: goto L_0880A768;
    case 578u: goto L_0880A78C;
    case 579u: goto L_0880A798;
    case 580u: goto L_0880A7A8;
    case 581u: goto L_0880A7CC;
    case 582u: goto L_0880A7DC;
    case 583u: goto L_0880A800;
    case 584u: goto L_0880A830;
    case 585u: goto L_0880A880;
    case 586u: goto L_0880A890;
    case 587u: goto L_0880A8A0;
    case 588u: goto L_0880A8A8;
    case 589u: goto L_0880A8BC;
    case 590u: goto L_0880A8C8;
    case 591u: goto L_0880A8D0;
    case 592u: goto L_0880A8F0;
    case 593u: goto L_0880A8F8;
    case 594u: goto L_0880A920;
    case 595u: goto L_0880A928;
    case 596u: goto L_0880A930;
    case 597u: goto L_0880A940;
    case 598u: goto L_0880A950;
    case 599u: goto L_0880A9D8;
    case 600u: goto L_0880A9F8;
    case 601u: goto L_0880AA10;
    case 602u: goto L_0880AA34;
    case 603u: goto L_0880AA40;
    case 604u: goto L_0880AA48;
    case 605u: goto L_0880AA60;
    case 606u: goto L_0880AA8C;
    case 607u: goto L_0880AA98;
    case 608u: goto L_0880AAA8;
    case 609u: goto L_0880AAB0;
    case 610u: goto L_0880AABC;
    case 611u: goto L_0880AAC4;
    case 612u: goto L_0880AACC;
    case 613u: goto L_0880AAD4;
    case 614u: goto L_0880AAF4;
    case 615u: goto L_0880AB14;
    case 616u: goto L_0880AB38;
    case 617u: goto L_0880AB44;
    case 618u: goto L_0880AB68;
    case 619u: goto L_0880AB70;
    case 620u: goto L_0880AB88;
    case 621u: goto L_0880ABA0;
    case 622u: goto L_0880ABD4;
    case 623u: goto L_0880ABDC;
    case 624u: goto L_0880ABEC;
    case 625u: goto L_0880AC08;
    case 626u: goto L_0880AC14;
    case 627u: goto L_0880AC1C;
    case 628u: goto L_0880AC20;
    case 629u: goto L_0880AC30;
    case 630u: goto L_0880AC4C;
    case 631u: goto L_0880AC58;
    case 632u: goto L_0880AC60;
    case 633u: goto L_0880AC6C;
    case 634u: goto L_0880AC74;
    case 635u: goto L_0880AC8C;
    case 636u: goto L_0880AC94;
    case 637u: goto L_0880ACA0;
    case 638u: goto L_0880ACA8;
    case 639u: goto L_0880ACB0;
    case 640u: goto L_0880ACB8;
    case 641u: goto L_0880ACC0;
    case 642u: goto L_0880ACC8;
    case 643u: goto L_0880ACD0;
    case 644u: goto L_0880ACE4;
    case 645u: goto L_0880AD04;
    case 646u: goto L_0880AD10;
    case 647u: goto L_0880AD18;
    case 648u: goto L_0880AD24;
    case 649u: goto L_0880AD2C;
    case 650u: goto L_0880AD34;
    case 651u: goto L_0880AD44;
    case 652u: goto L_0880AD4C;
    case 653u: goto L_0880AD50;
    case 654u: goto L_0880AD58;
    case 655u: goto L_0880AD64;
    case 656u: goto L_0880AD80;
    case 657u: goto L_0880ADA0;
    case 658u: goto L_0880ADAC;
    case 659u: goto L_0880ADB4;
    case 660u: goto L_0880ADC0;
    case 661u: goto L_0880ADC8;
    case 662u: goto L_0880ADD0;
    case 663u: goto L_0880ADE0;
    case 664u: goto L_0880ADE8;
    case 665u: goto L_0880ADEC;
    case 666u: goto L_0880ADF4;
    case 667u: goto L_0880AE10;
    case 668u: goto L_0880AE20;
    case 669u: goto L_0880AFF0;
    case 670u: goto L_0880B018;
    case 671u: goto L_0880B020;
    case 672u: goto L_0880B02C;
    case 673u: goto L_0880B034;
    case 674u: goto L_0880B038;
    case 675u: goto L_0880B040;
    case 676u: goto L_0880B04C;
    case 677u: goto L_0880B054;
    case 678u: goto L_0880B05C;
    case 679u: goto L_0880B06C;
    case 680u: goto L_0880B074;
    case 681u: goto L_0880B078;
    case 682u: goto L_0880B080;
    case 683u: goto L_0880B0A4;
    case 684u: goto L_0880B0B4;
    case 685u: goto L_0880B0C0;
    case 686u: goto L_0880B0D0;
    case 687u: goto L_0880B0F8;
    case 688u: goto L_0880B10C;
    case 689u: goto L_0880B198;
    case 690u: goto L_0880B1B0;
    case 691u: goto L_0880B1B8;
    case 692u: goto L_0880B1C8;
    case 693u: goto L_0880B1F0;
    case 694u: goto L_0880B1F8;
    case 695u: goto L_0880B208;
    case 696u: goto L_0880B210;
    case 697u: goto L_0880B234;
    case 698u: goto L_0880B23C;
    case 699u: goto L_0880B244;
    case 700u: goto L_0880B24C;
    case 701u: goto L_0880B25C;
    case 702u: goto L_0880B264;
    case 703u: goto L_0880B270;
    case 704u: goto L_0880B278;
    case 705u: goto L_0880B280;
    case 706u: goto L_0880B288;
    case 707u: goto L_0880B290;
    case 708u: goto L_0880B2A8;
    case 709u: goto L_0880B2B0;
    case 710u: goto L_0880B2B8;
    case 711u: goto L_0880B2C8;
    case 712u: goto L_0880B2D0;
    case 713u: goto L_0880B2D8;
    case 714u: goto L_0880B2E0;
    case 715u: goto L_0880B2E8;
    case 716u: goto L_0880B2F4;
    case 717u: goto L_0880B2FC;
    case 718u: goto L_0880B310;
    case 719u: goto L_0880B314;
    case 720u: goto L_0880B31C;
    case 721u: goto L_0880B328;
    case 722u: goto L_0880B32C;
    case 723u: goto L_0880B33C;
    case 724u: goto L_0880B340;
    case 725u: goto L_0880B350;
    case 726u: goto L_0880B358;
    case 727u: goto L_0880B360;
    case 728u: goto L_0880B368;
    case 729u: goto L_0880B374;
    case 730u: goto L_0880B38C;
    case 731u: goto L_0880B3A0;
    case 732u: goto L_0880B3BC;
    case 733u: goto L_0880B3C0;
    case 734u: goto L_0880B3D4;
    case 735u: goto L_0880B3EC;
    case 736u: goto L_0880B3F4;
    case 737u: goto L_0880B400;
    case 738u: goto L_0880B408;
    case 739u: goto L_0880B410;
    case 740u: goto L_0880B418;
    case 741u: goto L_0880B420;
    case 742u: goto L_0880B428;
    case 743u: goto L_0880B430;
    case 744u: goto L_0880B438;
    case 745u: goto L_0880B44C;
    case 746u: goto L_0880B464;
    case 747u: goto L_0880B46C;
    case 748u: goto L_0880B488;
    case 749u: goto L_0880B494;
    case 750u: goto L_0880B49C;
    case 751u: goto L_0880B4A8;
    case 752u: goto L_0880B4B0;
    case 753u: goto L_0880B4C8;
    case 754u: goto L_0880B4D0;
    case 755u: goto L_0880B4E8;
    case 756u: goto L_0880B4F0;
    case 757u: goto L_0880B508;
    case 758u: goto L_0880B510;
    case 759u: goto L_0880B51C;
    case 760u: goto L_0880B524;
    case 761u: goto L_0880B52C;
    case 762u: goto L_0880B534;
    case 763u: goto L_0880B53C;
    case 764u: goto L_0880B544;
    case 765u: goto L_0880B54C;
    case 766u: goto L_0880B554;
    case 767u: goto L_0880B568;
    case 768u: goto L_0880B580;
    case 769u: goto L_0880B588;
    case 770u: goto L_0880B594;
    case 771u: goto L_0880B59C;
    case 772u: goto L_0880B5A4;
    case 773u: goto L_0880B5AC;
    case 774u: goto L_0880B5B4;
    case 775u: goto L_0880B5BC;
    case 776u: goto L_0880B5C4;
    case 777u: goto L_0880B5CC;
    case 778u: goto L_0880B5E0;
    case 779u: goto L_0880B614;
    case 780u: goto L_0880B620;
    case 781u: goto L_0880B628;
    case 782u: goto L_0880B630;
    case 783u: goto L_0880B634;
    case 784u: goto L_0880B63C;
    case 785u: goto L_0880B644;
    case 786u: goto L_0880B650;
    case 787u: goto L_0880B658;
    case 788u: goto L_0880B67C;
    case 789u: goto L_0880B6A8;
    case 790u: goto L_0880B6B8;
    case 791u: goto L_0880B6BC;
    case 792u: goto L_0880B6C4;
    case 793u: goto L_0880B6D0;
    case 794u: goto L_0880B6D8;
    case 795u: goto L_0880B6E4;
    case 796u: goto L_0880B6F0;
    case 797u: goto L_0880B6F8;
    case 798u: goto L_0880B700;
    case 799u: goto L_0880B70C;
    case 800u: goto L_0880B71C;
    case 801u: goto L_0880B73C;
    case 802u: goto L_0880B768;
    case 803u: goto L_0880B778;
    case 804u: goto L_0880B784;
    case 805u: goto L_0880B790;
    case 806u: goto L_0880B79C;
    case 807u: goto L_0880B7A4;
    case 808u: goto L_0880B7AC;
    case 809u: goto L_0880B7B4;
    case 810u: goto L_0880B7C0;
    case 811u: goto L_0880B7C8;
    case 812u: goto L_0880B7D8;
    case 813u: goto L_0880B7F8;
    case 814u: goto L_0880B808;
    case 815u: goto L_0880B814;
    case 816u: goto L_0880B838;
    case 817u: goto L_0880B844;
    case 818u: goto L_0880B84C;
    case 819u: goto L_0880B85C;
    case 820u: goto L_0880B864;
    case 821u: goto L_0880B8BC;
    case 822u: goto L_0880B8FC;
    case 823u: goto L_0880B908;
    case 824u: goto L_0880B910;
    case 825u: goto L_0880B918;
    case 826u: goto L_0880B91C;
    case 827u: goto L_0880B920;
    case 828u: goto L_0880B928;
    case 829u: goto L_0880B930;
    case 830u: goto L_0880B940;
    case 831u: goto L_0880B948;
    case 832u: goto L_0880B954;
    case 833u: goto L_0880B958;
    case 834u: goto L_0880B960;
    case 835u: goto L_0880B968;
    case 836u: goto L_0880B974;
    case 837u: goto L_0880B97C;
    case 838u: goto L_0880B984;
    case 839u: goto L_0880B9A8;
    case 840u: goto L_0880B9DC;
    case 841u: goto L_0880B9E0;
    case 842u: goto L_0880B9E4;
    case 843u: goto L_0880B9EC;
    case 844u: goto L_0880B9F4;
    case 845u: goto L_0880BA00;
    case 846u: goto L_0880BA0C;
    case 847u: goto L_0880BA14;
    case 848u: goto L_0880BA1C;
    case 849u: goto L_0880BA24;
    case 850u: goto L_0880BB68;
    case 851u: goto L_0880BBC8;
    case 852u: goto L_0880BBD4;
    case 853u: goto L_0880BBE4;
    case 854u: goto L_0880BC00;
    case 855u: goto L_0880BC7C;
    case 856u: goto L_0880BC88;
    case 857u: goto L_0880BC90;
    case 858u: goto L_0880BC94;
    case 859u: goto L_0880BC98;
    case 860u: goto L_0880BCA0;
    case 861u: goto L_0880BCA8;
    case 862u: goto L_0880BCB4;
    case 863u: goto L_0880BCC0;
    case 864u: goto L_0880BCC8;
    case 865u: goto L_0880BCD4;
    case 866u: goto L_0880BCE0;
    case 867u: goto L_0880BCE8;
    case 868u: goto L_0880BCEC;
    case 869u: goto L_0880BCF4;
    case 870u: goto L_0880BCFC;
    case 871u: goto L_0880BD08;
    case 872u: goto L_0880BD14;
    case 873u: goto L_0880BD1C;
    case 874u: goto L_0880BD20;
    case 875u: goto L_0880BD28;
    case 876u: goto L_0880BD30;
    case 877u: goto L_0880BD3C;
    case 878u: goto L_0880BD48;
    case 879u: goto L_0880BD50;
    case 880u: goto L_0880BD54;
    case 881u: goto L_0880BD5C;
    case 882u: goto L_0880BD64;
    case 883u: goto L_0880BD6C;
    case 884u: goto L_0880BD74;
    case 885u: goto L_0880BD7C;
    case 886u: goto L_0880BD90;
    case 887u: goto L_0880BE74;
    case 888u: goto L_0880BED4;
    case 889u: goto L_0880BEE0;
    case 890u: goto L_0880BEEC;
    case 891u: goto L_0880BF04;
    case 892u: goto L_0880BFB8;
    case 893u: goto L_0880BFC4;
    case 894u: goto L_0880BFCC;
    case 895u: goto L_0880BFE0;
    case 896u: goto L_0880BFE4;
    case 897u: goto L_0880BFEC;
    case 898u: goto L_0880BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08808000:
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08808024;
      }
      goto L_0880800C;
    }
L_0880800C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08808028;
      }
      goto L_08808014;
    }
L_08808014:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08808024;
L_08808024:
    ctx.gpr[4] = (0u | 0u);
    goto L_08808028;
L_08808028:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08808038u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 610u, 0x089759FCu>(ctx, &aot_mem) && ctx.pc == 0x08808038u) goto L_08808038;
    return;
L_08808038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808040;
    }
L_08808040:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0880806C;
    }
    goto L_0880804C;
L_0880804C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08808088;
      }
      goto L_08808054;
    }
L_08808054:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08808084;
      }
      goto L_0880806C;
    }
L_0880806C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08808088;
      }
      goto L_08808074;
    }
L_08808074:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08808084;
L_08808084:
    ctx.gpr[4] = (0u | 0u);
    goto L_08808088;
L_08808088:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08808094u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 614u, 0x08975A54u>(ctx, &aot_mem) && ctx.pc == 0x08808094u) goto L_08808094;
    return;
L_08808094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_0880809C;
    }
L_0880809C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_088080C8;
    }
    goto L_088080A8;
L_088080A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088080E4;
      }
      goto L_088080B0;
    }
L_088080B0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088080E0;
      }
      goto L_088080C8;
    }
L_088080C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088080E4;
      }
      goto L_088080D0;
    }
L_088080D0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088080E0;
L_088080E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088080E4;
L_088080E4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088080F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 612u, 0x08975A28u>(ctx, &aot_mem) && ctx.pc == 0x088080F0u) goto L_088080F0;
    return;
L_088080F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088080F8;
    }
L_088080F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08808120;
    }
    goto L_08808104;
L_08808104:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808134;
      }
      goto L_0880810C;
    }
L_0880810C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08808134;
      }
      goto L_08808120;
    }
L_08808120:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808134;
      }
      goto L_08808128;
    }
L_08808128:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08808134;
L_08808134:
    ctx.gpr[31] = (0x0880813Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 646u, 0x08975C30u>(ctx, &aot_mem) && ctx.pc == 0x0880813Cu) goto L_0880813C;
    return;
L_0880813C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808144;
    }
L_08808144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0880816C;
    }
    goto L_08808150;
L_08808150:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808180;
      }
      goto L_08808158;
    }
L_08808158:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08808180;
      }
      goto L_0880816C;
    }
L_0880816C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808180;
      }
      goto L_08808174;
    }
L_08808174:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08808180;
L_08808180:
    ctx.gpr[31] = (0x08808188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 773u, 0x0897626Cu>(ctx, &aot_mem) && ctx.pc == 0x08808188u) goto L_08808188;
    return;
L_08808188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808190;
    }
L_08808190:
    ctx.gpr[31] = (0x08808198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 737u, 0x08976074u>(ctx, &aot_mem) && ctx.pc == 0x08808198u) goto L_08808198;
    return;
L_08808198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088081A0;
    }
L_088081A0:
    ctx.gpr[31] = (0x088081A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 745u, 0x089760E4u>(ctx, &aot_mem) && ctx.pc == 0x088081A8u) goto L_088081A8;
    return;
L_088081A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088081B0;
    }
L_088081B0:
    ctx.gpr[31] = (0x088081B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 743u, 0x089760C8u>(ctx, &aot_mem) && ctx.pc == 0x088081B8u) goto L_088081B8;
    return;
L_088081B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088081C0;
    }
L_088081C0:
    ctx.gpr[31] = (0x088081C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 840u, 0x089766BCu>(ctx, &aot_mem) && ctx.pc == 0x088081C8u) goto L_088081C8;
    return;
L_088081C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088081D0;
    }
L_088081D0:
    ctx.gpr[31] = (0x088081D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 749u, 0x0897611Cu>(ctx, &aot_mem) && ctx.pc == 0x088081D8u) goto L_088081D8;
    return;
L_088081D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088081E0;
    }
L_088081E0:
    ctx.gpr[31] = (0x088081E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 751u, 0x08976138u>(ctx, &aot_mem) && ctx.pc == 0x088081E8u) goto L_088081E8;
    return;
L_088081E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088081F0;
    }
L_088081F0:
    ctx.gpr[31] = (0x088081F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 741u, 0x089760ACu>(ctx, &aot_mem) && ctx.pc == 0x088081F8u) goto L_088081F8;
    return;
L_088081F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808200;
    }
L_08808200:
    ctx.gpr[31] = (0x08808208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 753u, 0x08976154u>(ctx, &aot_mem) && ctx.pc == 0x08808208u) goto L_08808208;
    return;
L_08808208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808210;
    }
L_08808210:
    ctx.gpr[31] = (0x08808218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 755u, 0x08976170u>(ctx, &aot_mem) && ctx.pc == 0x08808218u) goto L_08808218;
    return;
L_08808218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808220;
    }
L_08808220:
    ctx.gpr[31] = (0x08808228u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 739u, 0x08976090u>(ctx, &aot_mem) && ctx.pc == 0x08808228u) goto L_08808228;
    return;
L_08808228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808230;
    }
L_08808230:
    ctx.gpr[31] = (0x08808238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 757u, 0x0897618Cu>(ctx, &aot_mem) && ctx.pc == 0x08808238u) goto L_08808238;
    return;
L_08808238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808240;
    }
L_08808240:
    ctx.gpr[31] = (0x08808248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 759u, 0x089761A8u>(ctx, &aot_mem) && ctx.pc == 0x08808248u) goto L_08808248;
    return;
L_08808248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808250;
    }
L_08808250:
    ctx.gpr[31] = (0x08808258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 761u, 0x089761C4u>(ctx, &aot_mem) && ctx.pc == 0x08808258u) goto L_08808258;
    return;
L_08808258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808260;
    }
L_08808260:
    ctx.gpr[31] = (0x08808268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 741u, 0x089760ACu>(ctx, &aot_mem) && ctx.pc == 0x08808268u) goto L_08808268;
    return;
L_08808268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808270;
    }
L_08808270:
    ctx.gpr[31] = (0x08808278u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 763u, 0x089761E0u>(ctx, &aot_mem) && ctx.pc == 0x08808278u) goto L_08808278;
    return;
L_08808278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808280;
    }
L_08808280:
    ctx.gpr[31] = (0x08808288u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 765u, 0x089761FCu>(ctx, &aot_mem) && ctx.pc == 0x08808288u) goto L_08808288;
    return;
L_08808288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808290;
    }
L_08808290:
    ctx.gpr[31] = (0x08808298u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 767u, 0x08976218u>(ctx, &aot_mem) && ctx.pc == 0x08808298u) goto L_08808298;
    return;
L_08808298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088082A0;
    }
L_088082A0:
    ctx.gpr[31] = (0x088082A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 769u, 0x08976234u>(ctx, &aot_mem) && ctx.pc == 0x088082A8u) goto L_088082A8;
    return;
L_088082A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088082B0;
    }
L_088082B0:
    ctx.gpr[31] = (0x088082B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 747u, 0x08976100u>(ctx, &aot_mem) && ctx.pc == 0x088082B8u) goto L_088082B8;
    return;
L_088082B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088082C0;
    }
L_088082C0:
    ctx.gpr[31] = (0x088082C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 771u, 0x08976250u>(ctx, &aot_mem) && ctx.pc == 0x088082C8u) goto L_088082C8;
    return;
L_088082C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088082D0;
    }
L_088082D0:
    ctx.gpr[31] = (0x088082D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 616u, 0x08975A80u>(ctx, &aot_mem) && ctx.pc == 0x088082D8u) goto L_088082D8;
    return;
L_088082D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088082E0;
    }
L_088082E0:
    ctx.gpr[31] = (0x088082E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 662u, 0x08975CFCu>(ctx, &aot_mem) && ctx.pc == 0x088082E8u) goto L_088082E8;
    return;
L_088082E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_088082F0;
    }
L_088082F0:
    ctx.gpr[31] = (0x088082F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 631u, 0x08975B58u>(ctx, &aot_mem) && ctx.pc == 0x088082F8u) goto L_088082F8;
    return;
L_088082F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808300;
    }
L_08808300:
    ctx.gpr[31] = (0x08808308u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 677u, 0x08975DD4u>(ctx, &aot_mem) && ctx.pc == 0x08808308u) goto L_08808308;
    return;
L_08808308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808310;
    }
L_08808310:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08808320u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 118u, 0x0897456Cu>(ctx, &aot_mem) && ctx.pc == 0x08808320u) goto L_08808320;
    return;
L_08808320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808330;
      }
      goto L_08808328;
    }
L_08808328:
    ctx.gpr[31] = (0x08808330u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 146u, 0x089746C4u>(ctx, &aot_mem) && ctx.pc == 0x08808330u) goto L_08808330;
    return;
L_08808330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 37u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08808370;
      }
      goto L_0880835C;
    }
L_0880835C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 101 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 100u);
        goto L_08808388;
    }
    goto L_08808368;
L_08808368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808388;
      }
      goto L_08808370;
    }
L_08808370:
    ctx.gpr[31] = (0x08808378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 698u, 0x0896FB34u>(ctx, &aot_mem) && ctx.pc == 0x08808378u) goto L_08808378;
    return;
L_08808378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808388:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.gpr[16] = (0u | 0u);
        goto L_08808390;
    }
    goto L_08808390;
L_08808390:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (18175u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65024u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088083C4;
    }
L_088083C4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088083DC:
    ctx.gpr[31] = (0x088083E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 575u, 0x0896F2D4u>(ctx, &aot_mem) && ctx.pc == 0x088083E4u) goto L_088083E4;
    return;
L_088083E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2480)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08808404u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 411u, 0x089716A4u>(ctx, &aot_mem) && ctx.pc == 0x08808404u) goto L_08808404;
    return;
L_08808404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880840C;
    }
L_0880840C:
    ctx.gpr[31] = (0x08808414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 585u, 0x0896F358u>(ctx, &aot_mem) && ctx.pc == 0x08808414u) goto L_08808414;
    return;
L_08808414:
    ctx.gpr[31] = (0x0880841Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 608u, 0x0896F48Cu>(ctx, &aot_mem) && ctx.pc == 0x0880841Cu) goto L_0880841C;
    return;
L_0880841C:
    ctx.gpr[31] = (0x08808424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 321u, 0x08971200u>(ctx, &aot_mem) && ctx.pc == 0x08808424u) goto L_08808424;
    return;
L_08808424:
    ctx.gpr[31] = (0x0880842Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 371u, 0x08971494u>(ctx, &aot_mem) && ctx.pc == 0x0880842Cu) goto L_0880842C;
    return;
L_0880842C:
    ctx.gpr[31] = (0x08808434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 351u, 0x0897138Cu>(ctx, &aot_mem) && ctx.pc == 0x08808434u) goto L_08808434;
    return;
L_08808434:
    ctx.gpr[31] = (0x0880843Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 361u, 0x08971410u>(ctx, &aot_mem) && ctx.pc == 0x0880843Cu) goto L_0880843C;
    return;
L_0880843C:
    ctx.gpr[31] = (0x08808444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 381u, 0x08971518u>(ctx, &aot_mem) && ctx.pc == 0x08808444u) goto L_08808444;
    return;
L_08808444:
    ctx.gpr[31] = (0x0880844Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 391u, 0x0897159Cu>(ctx, &aot_mem) && ctx.pc == 0x0880844Cu) goto L_0880844C;
    return;
L_0880844C:
    ctx.gpr[31] = (0x08808454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 401u, 0x08971620u>(ctx, &aot_mem) && ctx.pc == 0x08808454u) goto L_08808454;
    return;
L_08808454:
    ctx.gpr[31] = (0x0880845Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 618u, 0x0896F510u>(ctx, &aot_mem) && ctx.pc == 0x0880845Cu) goto L_0880845C;
    return;
L_0880845C:
    ctx.gpr[31] = (0x08808464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 331u, 0x08971284u>(ctx, &aot_mem) && ctx.pc == 0x08808464u) goto L_08808464;
    return;
L_08808464:
    ctx.gpr[31] = (0x0880846Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 341u, 0x08971308u>(ctx, &aot_mem) && ctx.pc == 0x0880846Cu) goto L_0880846C;
    return;
L_0880846C:
    ctx.gpr[31] = (0x08808474u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 421u, 0x08971728u>(ctx, &aot_mem) && ctx.pc == 0x08808474u) goto L_08808474;
    return;
L_08808474:
    ctx.gpr[31] = (0x0880847Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 431u, 0x089717ACu>(ctx, &aot_mem) && ctx.pc == 0x0880847Cu) goto L_0880847C;
    return;
L_0880847C:
    ctx.gpr[31] = (0x08808484u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 441u, 0x08971830u>(ctx, &aot_mem) && ctx.pc == 0x08808484u) goto L_08808484;
    return;
L_08808484:
    ctx.gpr[31] = (0x0880848Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 451u, 0x089718B4u>(ctx, &aot_mem) && ctx.pc == 0x0880848Cu) goto L_0880848C;
    return;
L_0880848C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808494;
    }
L_08808494:
    ctx.gpr[31] = (0x0880849Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 5u, 0x08970034u>(ctx, &aot_mem) && ctx.pc == 0x0880849Cu) goto L_0880849C;
    return;
L_0880849C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088084A4;
    }
L_088084A4:
    ctx.gpr[31] = (0x088084ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 758u, 0x0896FE4Cu>(ctx, &aot_mem) && ctx.pc == 0x088084ACu) goto L_088084AC;
    return;
L_088084AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088084B4;
    }
L_088084B4:
    ctx.gpr[31] = (0x088084BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 718u, 0x0896FC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088084BCu) goto L_088084BC;
    return;
L_088084BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088084C4;
    }
L_088084C4:
    ctx.gpr[31] = (0x088084CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 728u, 0x0896FCC0u>(ctx, &aot_mem) && ctx.pc == 0x088084CCu) goto L_088084CC;
    return;
L_088084CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088084D4;
    }
L_088084D4:
    ctx.gpr[31] = (0x088084DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 738u, 0x0896FD44u>(ctx, &aot_mem) && ctx.pc == 0x088084DCu) goto L_088084DC;
    return;
L_088084DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088084E4;
    }
L_088084E4:
    ctx.gpr[31] = (0x088084ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 748u, 0x0896FDC8u>(ctx, &aot_mem) && ctx.pc == 0x088084ECu) goto L_088084EC;
    return;
L_088084EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088084F4;
    }
L_088084F4:
    ctx.gpr[31] = (0x088084FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 31u, 0x08970180u>(ctx, &aot_mem) && ctx.pc == 0x088084FCu) goto L_088084FC;
    return;
L_088084FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808504;
    }
L_08808504:
    ctx.gpr[31] = (0x0880850Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 787u, 0x0896FFB0u>(ctx, &aot_mem) && ctx.pc == 0x0880850Cu) goto L_0880850C;
    return;
L_0880850C:
    ctx.gpr[31] = (0x08808514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 191u, 0x089709C0u>(ctx, &aot_mem) && ctx.pc == 0x08808514u) goto L_08808514;
    return;
L_08808514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880851C;
    }
L_0880851C:
    ctx.gpr[31] = (0x08808524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 778u, 0x0896FF54u>(ctx, &aot_mem) && ctx.pc == 0x08808524u) goto L_08808524;
    return;
L_08808524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880852C;
    }
L_0880852C:
    ctx.gpr[31] = (0x08808534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 768u, 0x0896FED0u>(ctx, &aot_mem) && ctx.pc == 0x08808534u) goto L_08808534;
    return;
L_08808534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880853C;
    }
L_0880853C:
    ctx.gpr[31] = (0x08808544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 201u, 0x08970A44u>(ctx, &aot_mem) && ctx.pc == 0x08808544u) goto L_08808544;
    return;
L_08808544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880854C;
    }
L_0880854C:
    ctx.gpr[31] = (0x08808554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 241u, 0x08970CD8u>(ctx, &aot_mem) && ctx.pc == 0x08808554u) goto L_08808554;
    return;
L_08808554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880855C;
    }
L_0880855C:
    ctx.gpr[31] = (0x08808564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 708u, 0x0896FBB8u>(ctx, &aot_mem) && ctx.pc == 0x08808564u) goto L_08808564;
    return;
L_08808564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880856C;
    }
L_0880856C:
    ctx.gpr[31] = (0x08808574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 668u, 0x0896F924u>(ctx, &aot_mem) && ctx.pc == 0x08808574u) goto L_08808574;
    return;
L_08808574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880857C;
    }
L_0880857C:
    ctx.gpr[31] = (0x08808584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 678u, 0x0896F9A8u>(ctx, &aot_mem) && ctx.pc == 0x08808584u) goto L_08808584;
    return;
L_08808584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880858C;
    }
L_0880858C:
    ctx.gpr[31] = (0x08808594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 231u, 0x08970C54u>(ctx, &aot_mem) && ctx.pc == 0x08808594u) goto L_08808594;
    return;
L_08808594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880859C;
    }
L_0880859C:
    ctx.gpr[31] = (0x088085A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 688u, 0x0896FAB0u>(ctx, &aot_mem) && ctx.pc == 0x088085A4u) goto L_088085A4;
    return;
L_088085A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088085AC;
    }
L_088085AC:
    ctx.gpr[31] = (0x088085B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 41u, 0x08970204u>(ctx, &aot_mem) && ctx.pc == 0x088085B4u) goto L_088085B4;
    return;
L_088085B4:
    ctx.gpr[31] = (0x088085BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 181u, 0x0897093Cu>(ctx, &aot_mem) && ctx.pc == 0x088085BCu) goto L_088085BC;
    return;
L_088085BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088085C4;
    }
L_088085C4:
    ctx.gpr[31] = (0x088085CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 201u, 0x08970A44u>(ctx, &aot_mem) && ctx.pc == 0x088085CCu) goto L_088085CC;
    return;
L_088085CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088085D4;
    }
L_088085D4:
    ctx.gpr[31] = (0x088085DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 301u, 0x08970FF0u>(ctx, &aot_mem) && ctx.pc == 0x088085DCu) goto L_088085DC;
    return;
L_088085DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088085E4;
    }
L_088085E4:
    ctx.gpr[31] = (0x088085ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 261u, 0x08970DE0u>(ctx, &aot_mem) && ctx.pc == 0x088085ECu) goto L_088085EC;
    return;
L_088085EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088085F4;
    }
L_088085F4:
    ctx.gpr[31] = (0x088085FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 21u, 0x089700FCu>(ctx, &aot_mem) && ctx.pc == 0x088085FCu) goto L_088085FC;
    return;
L_088085FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808604;
    }
L_08808604:
    ctx.gpr[31] = (0x0880860Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 251u, 0x08970D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0880860Cu) goto L_0880860C;
    return;
L_0880860C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808614;
    }
L_08808614:
    ctx.gpr[31] = (0x0880861Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 221u, 0x08970B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880861Cu) goto L_0880861C;
    return;
L_0880861C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808624;
    }
L_08808624:
    ctx.gpr[31] = (0x0880862Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 11u, 0x08970078u>(ctx, &aot_mem) && ctx.pc == 0x0880862Cu) goto L_0880862C;
    return;
L_0880862C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808634;
    }
L_08808634:
    ctx.gpr[31] = (0x0880863Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 281u, 0x08970EE8u>(ctx, &aot_mem) && ctx.pc == 0x0880863Cu) goto L_0880863C;
    return;
L_0880863C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808644;
    }
L_08808644:
    ctx.gpr[31] = (0x0880864Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 291u, 0x08970F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0880864Cu) goto L_0880864C;
    return;
L_0880864C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_08808654;
    }
L_08808654:
    ctx.gpr[31] = (0x0880865Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 281u, 0x08970EE8u>(ctx, &aot_mem) && ctx.pc == 0x0880865Cu) goto L_0880865C;
    return;
L_0880865C:
    ctx.gpr[31] = (0x08808664u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 311u, 0x08971074u>(ctx, &aot_mem) && ctx.pc == 0x08808664u) goto L_08808664;
    return;
L_08808664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880866C;
    }
L_0880866C:
    ctx.gpr[31] = (0x08808674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 211u, 0x08970AC8u>(ctx, &aot_mem) && ctx.pc == 0x08808674u) goto L_08808674;
    return;
L_08808674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880867C;
    }
L_0880867C:
    ctx.gpr[31] = (0x08808684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 628u, 0x0896F614u>(ctx, &aot_mem) && ctx.pc == 0x08808684u) goto L_08808684;
    return;
L_08808684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880868C;
    }
L_0880868C:
    ctx.gpr[31] = (0x08808694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 638u, 0x0896F698u>(ctx, &aot_mem) && ctx.pc == 0x08808694u) goto L_08808694;
    return;
L_08808694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880869C;
    }
L_0880869C:
    ctx.gpr[31] = (0x088086A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 648u, 0x0896F71Cu>(ctx, &aot_mem) && ctx.pc == 0x088086A4u) goto L_088086A4;
    return;
L_088086A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088086AC;
    }
L_088086AC:
    ctx.gpr[31] = (0x088086B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 658u, 0x0896F7A0u>(ctx, &aot_mem) && ctx.pc == 0x088086B4u) goto L_088086B4;
    return;
L_088086B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088086BC;
    }
L_088086BC:
    ctx.gpr[31] = (0x088086C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 271u, 0x08970E64u>(ctx, &aot_mem) && ctx.pc == 0x088086C4u) goto L_088086C4;
    return;
L_088086C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088086CC;
    }
L_088086CC:
    ctx.gpr[31] = (0x088086D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 511u, 0x08971BCCu>(ctx, &aot_mem) && ctx.pc == 0x088086D4u) goto L_088086D4;
    return;
L_088086D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088086DC;
    }
L_088086DC:
    ctx.gpr[31] = (0x088086E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 521u, 0x08971C50u>(ctx, &aot_mem) && ctx.pc == 0x088086E4u) goto L_088086E4;
    return;
L_088086E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088086EC;
    }
L_088086EC:
    ctx.gpr[31] = (0x088086F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 461u, 0x08971938u>(ctx, &aot_mem) && ctx.pc == 0x088086F4u) goto L_088086F4;
    return;
L_088086F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_088086FC;
    }
L_088086FC:
    ctx.gpr[31] = (0x08808704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 471u, 0x089719BCu>(ctx, &aot_mem) && ctx.pc == 0x08808704u) goto L_08808704;
    return;
L_08808704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880870C;
    }
L_0880870C:
    ctx.gpr[31] = (0x08808714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 481u, 0x08971A40u>(ctx, &aot_mem) && ctx.pc == 0x08808714u) goto L_08808714;
    return;
L_08808714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880871C;
    }
L_0880871C:
    ctx.gpr[31] = (0x08808724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 491u, 0x08971AC4u>(ctx, &aot_mem) && ctx.pc == 0x08808724u) goto L_08808724;
    return;
L_08808724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808734;
      }
      goto L_0880872C;
    }
L_0880872C:
    ctx.gpr[31] = (0x08808734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 501u, 0x08971B48u>(ctx, &aot_mem) && ctx.pc == 0x08808734u) goto L_08808734;
    return;
L_08808734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] & 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08808798;
      }
      goto L_08808760;
    }
L_08808760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808780;
      }
      goto L_08808770;
    }
L_08808770:
    ctx.gpr[31] = (0x08808778u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 463u, 0x08805F78u>(ctx, &aot_mem) && ctx.pc == 0x08808778u) goto L_08808778;
    return;
L_08808778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808788;
      }
      goto L_08808780;
    }
L_08808780:
    ctx.gpr[31] = (0x08808788u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 463u, 0x08805F78u>(ctx, &aot_mem) && ctx.pc == 0x08808788u) goto L_08808788;
    return;
L_08808788:
    ctx.gpr[31] = (0x08808790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 743u, 0x08806F90u>(ctx, &aot_mem) && ctx.pc == 0x08808790u) goto L_08808790;
    return;
L_08808790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808798;
    }
L_08808798:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4384)));
      if (branch_taken) {
          goto L_088087B8;
      }
      goto L_088087A8;
    }
L_088087A8:
    ctx.gpr[31] = (0x088087B0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 475u, 0x08806030u>(ctx, &aot_mem) && ctx.pc == 0x088087B0u) goto L_088087B0;
    return;
L_088087B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088087B8;
    }
L_088087B8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08808B6C;
      }
      goto L_088087C0;
    }
L_088087C0:
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08808808;
    }
    goto L_088087CC;
L_088087CC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21544));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08808800u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08808800u) goto L_08808800;
    return;
L_08808800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808808;
    }
L_08808808:
    ctx.gpr[6] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_08808834;
      }
      goto L_08808814;
    }
L_08808814:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2068)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2068), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808828;
    }
L_08808828:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2068), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808834;
    }
L_08808834:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08808860;
      }
      goto L_0880883C;
    }
L_0880883C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2068)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2068), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2068), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808860;
    }
L_08808860:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_088089EC;
      }
      goto L_08808868;
    }
L_08808868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (2221u << 16u);
    ctx.gpr[2] = (ctx.gpr[5] & 1024u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-2068)));
    ctx.gpr[11] = (2222u << 16u);
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(21544));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-2064)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4368));
    ctx.gpr[6] = (ctx.gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u | 100u);
        goto L_088088A0;
    }
    goto L_088088A0;
L_088088A0:
    ctx.gpr[2] = (ctx.gpr[7] << 5u);
    ctx.gpr[12] = (ctx.gpr[7] << 3u);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088088BC;
    }
L_088088BC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880895C;
      }
      goto L_088088C8;
    }
L_088088C8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08808980;
      }
      goto L_088088D0;
    }
L_088088D0:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088089A4;
      }
      goto L_088088D8;
    }
L_088088D8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088089C8;
      }
      goto L_088088E0;
    }
L_088088E0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-2064), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088088F4;
      }
      goto L_088088EC;
    }
L_088088EC:
    ctx.gpr[7] = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-2064), ctx.gpr[7]);
    goto L_088088F4;
L_088088F4:
    ctx.gpr[4] = (ctx.gpr[7] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(21544), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_0880895C;
    }
L_0880895C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808978;
    }
L_08808978:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808980;
    }
L_08808980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_0880899C;
    }
L_0880899C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088089A4;
    }
L_088089A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088089C0;
    }
L_088089C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088089C8;
    }
L_088089C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088089E4;
    }
L_088089E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088089EC;
    }
L_088089EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_088089F4;
    }
L_088089F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2068)));
    ctx.gpr[9] = (ctx.gpr[4] & 1024u);
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(21544));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (0u | 100u);
        goto L_08808A1C;
    }
    goto L_08808A1C;
L_08808A1C:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808A28;
    }
L_08808A28:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08808ADC;
      }
      goto L_08808A34;
    }
L_08808A34:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08808B00;
      }
      goto L_08808A3C;
    }
L_08808A3C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08808B24;
      }
      goto L_08808A44;
    }
L_08808A44:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08808B48;
      }
      goto L_08808A4C;
    }
L_08808A4C:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2064)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2064), ctx.gpr[7]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4368));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[9] = (ctx.gpr[7] << 5u);
    ctx.gpr[10] = (ctx.gpr[7] << 3u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2064), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(21544), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808ADC;
    }
L_08808ADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808AF8;
    }
L_08808AF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B00;
    }
L_08808B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B1C;
    }
L_08808B1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B24;
    }
L_08808B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B40;
    }
L_08808B40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B48;
    }
L_08808B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B64;
    }
L_08808B64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B6C;
    }
L_08808B6C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
      if (branch_taken) {
          goto L_08808CC4;
      }
      goto L_08808B74;
    }
L_08808B74:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08808B90;
    }
    goto L_08808B7C;
L_08808B7C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[31] = (0x08808B88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21544)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 487u, 0x088060C8u>(ctx, &aot_mem) && ctx.pc == 0x08808B88u) goto L_08808B88;
    return;
L_08808B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808B90;
    }
L_08808B90:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08808C2C;
      }
      goto L_08808B9C;
    }
L_08808B9C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08808BBC;
      }
      goto L_08808BB4;
    }
L_08808BB4:
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064), ctx.gpr[6]);
    goto L_08808BBC;
L_08808BBC:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(21544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21544), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808C2C;
    }
L_08808C2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808C34;
    }
L_08808C34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064)));
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064), ctx.gpr[6]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3168));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(21544));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[9] = (ctx.gpr[8] << 5u);
    ctx.gpr[10] = (ctx.gpr[8] << 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21544), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08808CC8;
      }
      goto L_08808CC4;
    }
L_08808CC4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08808CC8;
L_08808CC8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808CDC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4520)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4516), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21592), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21596), 0u);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (0u | 111u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808D30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29248));
    ctx.pc = 0x08AB45E4u;
    return;
L_08808D30:
    ctx.gpr[5] = (32770u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D44;
    }
L_08808D44:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(401));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D50;
    }
L_08808D50:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(404));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D5C;
    }
L_08808D5C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D68;
    }
L_08808D68:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(403));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D74;
    }
L_08808D74:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(402));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D80;
    }
L_08808D80:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(441));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08808D94;
      }
      goto L_08808D8C;
    }
L_08808D8C:
    ctx.gpr[31] = (0x08808D94u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_08808D94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808DB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21600));
    goto L_08809340;
L_08808DB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[31]);
    ctx.gpr[31] = (0x08808DF4u);
    // nop
    goto L_088091E8;
L_08808DF4:
    ctx.gpr[31] = (0x08808DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 168u, 0x089787D4u>(ctx, &aot_mem) && ctx.pc == 0x08808DFCu) goto L_08808DFC;
    return;
L_08808DFC:
    ctx.gpr[31] = (0x08808E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 575u, 0x0897A580u>(ctx, &aot_mem) && ctx.pc == 0x08808E04u) goto L_08808E04;
    return;
L_08808E04:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08808E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23688));
    ctx.pc = 0x08AB45F4u;
    return;
L_08808E1C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808F30;
      }
      goto L_08808E28;
    }
L_08808E28:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2177u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21584), ctx.gpr[19]);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 10240u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23708));
    ctx.gpr[31] = (0x08808E50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27756));
    ctx.pc = 0x08AB45E4u;
    return;
L_08808E50:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808EE4;
      }
      goto L_08808E5C;
    }
L_08808E5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21588), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08808E70u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_08808E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21584)));
    ctx.gpr[31] = (0x08808E7Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB4694u;
    return;
L_08808E7C:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[31] = (0x08808E88u);
    ctx.gpr[5] = (0u | 7700u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 486u, 0x08979D34u>(ctx, &aot_mem) && ctx.pc == 0x08808E88u) goto L_08808E88;
    return;
L_08808E88:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08808EA4u);
    ctx.gpr[5] = (0u | 194u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08808EA4u) goto L_08808EA4;
    return;
L_08808EA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08808EB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 488u, 0x08979D84u>(ctx, &aot_mem) && ctx.pc == 0x08808EB0u) goto L_08808EB0;
    return;
L_08808EB0:
    ctx.gpr[31] = (0x08808EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 489u, 0x08979D98u>(ctx, &aot_mem) && ctx.pc == 0x08808EB8u) goto L_08808EB8;
    return;
L_08808EB8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21600));
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[22] = (0u | 8u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(23724));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08808F74;
      }
      goto L_08808EE4;
    }
L_08808EE4:
    ctx.gpr[31] = (0x08808EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21584)));
    ctx.pc = 0x08AB4584u;
    return;
L_08808EEC:
    ctx.gpr[31] = (0x08808EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 580u, 0x0897A5E4u>(ctx, &aot_mem) && ctx.pc == 0x08808EF4u) goto L_08808EF4;
    return;
L_08808EF4:
    ctx.gpr[31] = (0x08808EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 202u, 0x08978A00u>(ctx, &aot_mem) && ctx.pc == 0x08808EFCu) goto L_08808EFC;
    return;
L_08808EFC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808F30:
    ctx.gpr[31] = (0x08808F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 580u, 0x0897A5E4u>(ctx, &aot_mem) && ctx.pc == 0x08808F38u) goto L_08808F38;
    return;
L_08808F38:
    ctx.gpr[31] = (0x08808F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 202u, 0x08978A00u>(ctx, &aot_mem) && ctx.pc == 0x08808F40u) goto L_08808F40;
    return;
L_08808F40:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808F74:
    ctx.gpr[31] = (0x08808F7Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    goto L_08809318;
L_08808F7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809024;
      }
      goto L_08808F84;
    }
L_08808F84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08808F9C;
      }
      goto L_08808F94;
    }
L_08808F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08809024;
      }
      goto L_08808F9C;
    }
L_08808F9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[31] = (0x08808FB4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 523u, 0x0897A0DCu>(ctx, &aot_mem) && ctx.pc == 0x08808FB4u) goto L_08808FB4;
    return;
L_08808FB4:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08808FF0;
      }
      goto L_08808FC0;
    }
L_08808FC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08808FD4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08808FD4u) goto L_08808FD4;
    return;
L_08808FD4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08808FE4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 230u, 0x08978B58u>(ctx, &aot_mem) && ctx.pc == 0x08808FE4u) goto L_08808FE4;
    return;
L_08808FE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21596)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08809008;
      }
      goto L_08808FF0;
    }
L_08808FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08809000u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 230u, 0x08978B58u>(ctx, &aot_mem) && ctx.pc == 0x08809000u) goto L_08809000;
    return;
L_08809000:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21596)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08809008;
L_08809008:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
        goto L_08809018;
    }
    goto L_08809010;
L_08809010:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08809018;
      }
      goto L_08809018;
    }
L_08809018:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21596), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08809024;
      }
      goto L_08809020;
    }
L_08809020:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21596), 0u);
    goto L_08809024;
L_08809024:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08808F74;
      }
      goto L_0880902C;
    }
L_0880902C:
    ctx.gpr[31] = (0x08809034u);
    // nop
    goto L_08809248;
L_08809034:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21584)));
    ctx.gpr[31] = (0x08809044u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08AB4694u;
    return;
L_08809044:
    ctx.gpr[31] = (0x0880904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 580u, 0x0897A5E4u>(ctx, &aot_mem) && ctx.pc == 0x0880904Cu) goto L_0880904C;
    return;
L_0880904C:
    ctx.gpr[31] = (0x08809054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 202u, 0x08978A00u>(ctx, &aot_mem) && ctx.pc == 0x08809054u) goto L_08809054;
    return;
L_08809054:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21588)));
    ctx.gpr[31] = (0x08809064u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB4564u;
    return;
L_08809064:
    ctx.gpr[31] = (0x0880906Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4634u;
    return;
L_0880906C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088090A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088090D4;
      }
      goto L_088090B0;
    }
L_088090B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088090C4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08809340;
L_088090C4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21596)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21596), ctx.gpr[5]);
    goto L_088090D4;
L_088090D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088090E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880911C;
      }
      goto L_088090F4;
    }
L_088090F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880911C;
      }
      goto L_08809104;
    }
L_08809104:
    ctx.gpr[31] = (0x0880910Cu);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_0880910C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809104;
      }
      goto L_0880911C;
    }
L_0880911C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809158:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21596)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088091E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08809234;
      }
      goto L_08809204;
    }
L_08809204:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21596), 0u);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0880921Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23756));
    ctx.pc = 0x08AB464Cu;
    return;
L_0880921C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21592), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08809234;
      }
      goto L_08809224;
    }
L_08809224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809234:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088092AC;
      }
      goto L_08809270;
    }
L_08809270:
    ctx.gpr[17] = (0u | 8u);
    ctx.gpr[16] = (2222u << 16u);
    goto L_08809278;
L_08809278:
    ctx.gpr[31] = (0x08809280u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088092CC;
L_08809280:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21592)));
        goto L_088092A0;
    }
    goto L_08809288;
L_08809288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21596)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21596), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08809278;
      }
      goto L_088092A0;
    }
L_088092A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088092ACu);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(21592), ctx.gpr[5]);
    ctx.pc = 0x08AB465Cu;
    return;
L_088092AC:
    ctx.gpr[2] = (0u | 0u);
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
L_088092CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088092E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21592)));
    ctx.pc = 0x08AB45D4u;
    return;
L_088092E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809334u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB458Cu;
    return;
L_08809334:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08809378;
      }
      goto L_08809364;
    }
L_08809364:
    ctx.gpr[31] = (0x0880936Cu);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_0880936C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21592)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08809364;
      }
      goto L_08809378;
    }
L_08809378:
    ctx.gpr[31] = (0x08809380u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4574u;
    return;
L_08809380:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[16] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21584)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(23772));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_088093BC;
L_088093BC:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 33u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088093D0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB45DCu;
    return;
L_088093D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08809414;
      }
      goto L_088093E0;
    }
L_088093E0:
    ctx.gpr[31] = (0x088093E8u);
    // nop
    ctx.pc = 0x08AB4414u;
    return;
L_088093E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088093FC;
      }
      goto L_088093F0;
    }
L_088093F0:
    ctx.gpr[31] = (0x088093F8u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08AB442Cu;
    return;
L_088093F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_088093FC;
L_088093FC:
    ctx.gpr[31] = (0x08809404u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4444u;
    return;
L_08809404:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21584)));
        goto L_0880942C;
    }
    goto L_0880940C;
L_0880940C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21584)));
      if (branch_taken) {
          goto L_088093BC;
      }
      goto L_08809414;
    }
L_08809414:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0880940C;
      }
      goto L_0880941C;
    }
L_0880941C:
    ctx.gpr[31] = (0x08809424u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB444Cu;
    return;
L_08809424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21584)));
      if (branch_taken) {
          goto L_0880942C;
      }
      goto L_0880942C;
    }
L_0880942C:
    ctx.gpr[31] = (0x08809434u);
    // nop
    ctx.pc = 0x08AB4584u;
    return;
L_08809434:
    ctx.gpr[31] = (0x0880943Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_0880943C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 10000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880947C;
L_0880947C:
    ctx.gpr[31] = (0x08809484u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4654u;
    return;
L_08809484:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880949C;
      }
      goto L_0880948C;
    }
L_0880948C:
    ctx.gpr[31] = (0x08809494u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08809494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880947C;
      }
      goto L_0880949C;
    }
L_0880949C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088094B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1952));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809610;
      }
      goto L_08809538;
    }
L_08809538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08809594;
L_08809594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_088095CC;
    }
    goto L_088095A4;
L_088095A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088095EC;
      }
      goto L_088095CC;
    }
L_088095CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088095EC;
L_088095EC:
    ctx.gpr[31] = (0x088095F4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 570u, 0x0897A3D4u>(ctx, &aot_mem) && ctx.pc == 0x088095F4u) goto L_088095F4;
    return;
L_088095F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08809644;
      }
      goto L_088095FC;
    }
L_088095FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08809594;
      }
      goto L_08809610;
    }
L_08809610:
    ctx.gpr[2] = (0u | 0u);
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
L_08809644:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08809678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1952));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08809730;
      }
      goto L_088096A8;
    }
L_088096A8:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2024));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    goto L_088096C0;
L_088096C0:
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08809720;
    }
    goto L_088096D0;
L_088096D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088096F8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB472Cu;
    return;
L_088096F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08809704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08AB46F4u;
    return;
L_08809704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08809720;
L_08809720:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_088096C0;
      }
      goto L_08809730;
    }
L_08809730:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880973C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 10240u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23780));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809770u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27472));
    ctx.pc = 0x08AB45E4u;
    return;
L_08809770:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088097A4;
      }
      goto L_0880977C;
    }
L_0880977C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08809788u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08AB4594u;
    return;
L_08809788:
    ctx.gpr[31] = (0x08809790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809458;
L_08809790:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880979Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB4564u;
    return;
L_0880979C:
    ctx.gpr[31] = (0x088097A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB45C4u;
    return;
L_088097A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809874u);
    ctx.gpr[5] = (0u | 128u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809874u) goto L_08809874;
    return;
L_08809874:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1928), ctx.gpr[2]);
    ctx.gpr[31] = (0x08809884u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 221u, 0x0899E810u>(ctx, &aot_mem) && ctx.pc == 0x08809884u) goto L_08809884;
    return;
L_08809884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088098C4;
      }
      goto L_0880988C;
    }
L_0880988C:
    ctx.gpr[31] = (0x08809894u);
    // nop
    goto L_08809920;
L_08809894:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088098A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 241u, 0x0899E9ACu>(ctx, &aot_mem) && ctx.pc == 0x088098A0u) goto L_088098A0;
    return;
L_088098A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088098C4;
      }
      goto L_088098A8;
    }
L_088098A8:
    ctx.gpr[31] = (0x088098B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 315u, 0x0899F08Cu>(ctx, &aot_mem) && ctx.pc == 0x088098B0u) goto L_088098B0;
    return;
L_088098B0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088098C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088098D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1928)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08809908;
      }
      goto L_088098F4;
    }
L_088098F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08809904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809904u) goto L_08809904;
    return;
L_08809904:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-1928), 0u);
    goto L_08809908;
L_08809908:
    ctx.gpr[31] = (0x08809910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 222u, 0x0899E844u>(ctx, &aot_mem) && ctx.pc == 0x08809910u) goto L_08809910;
    return;
L_08809910:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880994Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23812));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880994Cu) goto L_0880994C;
    return;
L_0880994C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1928)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1936)));
    ctx.gpr[6] = (0u | 32768u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0880996Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 461u, 0x0899FBC8u>(ctx, &aot_mem) && ctx.pc == 0x0880996Cu) goto L_0880996C;
    return;
L_0880996C:
    ctx.gpr[31] = (0x08809974u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08AB4414u;
    return;
L_08809974:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08809988;
      }
      goto L_0880997C;
    }
L_0880997C:
    ctx.gpr[31] = (0x08809984u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08AB442Cu;
    return;
L_08809984:
    ctx.gpr[5] = (2219u << 16u);
    goto L_08809988;
L_08809988:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08809994u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23816));
    ctx.pc = 0x08AB4444u;
    return;
L_08809994:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088099B8;
      }
      goto L_0880999C;
    }
L_0880999C:
    ctx.gpr[31] = (0x088099A4u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_088099A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088099B8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088099CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088099ECu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08809B44;
L_088099EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809A18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08809C70;
L_08809A18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809A44u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08809B44;
L_08809A44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809A60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08809C70;
L_08809A60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809AA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23824));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809AA8u) goto L_08809AA8;
    return;
L_08809AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809ABCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809ABCu) goto L_08809ABC;
    return;
L_08809ABC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08809ACCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB47DCu;
    return;
L_08809ACC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08809B00;
      }
      goto L_08809AD8;
    }
L_08809AD8:
    ctx.gpr[31] = (0x08809AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880A054;
L_08809AE0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809B00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1916)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1920)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08809B14u);
    ctx.gpr[8] = (0u | 2u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08809B14:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08809B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08809B24:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    ctx.gpr[31] = (0x08809B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809A6C;
L_08809B7C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08809C14;
      }
      goto L_08809B88;
    }
L_08809B88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809B9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809B9Cu) goto L_08809B9C;
    return;
L_08809B9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809C14;
      }
      goto L_08809BA8;
    }
L_08809BA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08809BC0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08809BC0u) goto L_08809BC0;
    return;
L_08809BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809BDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23824));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809BDCu) goto L_08809BDC;
    return;
L_08809BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809BF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809BF0u) goto L_08809BF0;
    return;
L_08809BF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08809C00u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB47DCu;
    return;
L_08809C00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08809C38;
      }
      goto L_08809C0C;
    }
L_08809C0C:
    ctx.gpr[31] = (0x08809C14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880A054;
L_08809C14:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809C38:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08809C44u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08AB476Cu;
    return;
L_08809C44:
    ctx.gpr[31] = (0x08809C4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08809C4C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809C70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08809CB4;
      }
      goto L_08809CA0;
    }
L_08809CA0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809CACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809CACu) goto L_08809CAC;
    return;
L_08809CAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08809CD4;
      }
      goto L_08809CB4;
    }
L_08809CB4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809CC0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809CC0u) goto L_08809CC0;
    return;
L_08809CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08809CD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809CD0u) goto L_08809CD0;
    return;
L_08809CD0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08809CD4;
L_08809CD4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
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
L_08809CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809D3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23824));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809D3Cu) goto L_08809D3C;
    return;
L_08809D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08809D50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08809D50u) goto L_08809D50;
    return;
L_08809D50:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08809D74u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088090A0;
L_08809D74:
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
L_08809D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] & 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809E88;
      }
      goto L_08809DC0;
    }
L_08809DC0:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08809E88;
      }
      goto L_08809DCC;
    }
L_08809DCC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1932)));
    ctx.gpr[31] = (0x08809DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08809DDCu) goto L_08809DDC;
    return;
L_08809DDC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_08809E74;
    }
    goto L_08809DE4;
L_08809DE4:
    ctx.gpr[31] = (0x08809DECu);
    // nop
    ctx.pc = 0x08AB414Cu;
    return;
L_08809DEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08809E6C;
      }
      goto L_08809DFC;
    }
L_08809DFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08809E6C;
      }
      goto L_08809E04;
    }
L_08809E04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08809E6C;
      }
      goto L_08809E0C;
    }
L_08809E0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08809E6C;
      }
      goto L_08809E14;
    }
L_08809E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08809E30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    goto L_0880A670;
L_08809E30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08809E80;
      }
      goto L_08809E38;
    }
L_08809E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1924)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08809E64;
      }
      goto L_08809E44;
    }
L_08809E44:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08809E64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088090A0;
L_08809E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809E80;
      }
      goto L_08809E6C;
    }
L_08809E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809E80;
      }
      goto L_08809E74;
    }
L_08809E74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08809E80;
L_08809E80:
    ctx.gpr[31] = (0x08809E88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 823u, 0x088076A8u>(ctx, &aot_mem) && ctx.pc == 0x08809E88u) goto L_08809E88;
    return;
L_08809E88:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08809EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] & 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809FA0;
      }
      goto L_08809ED8;
    }
L_08809ED8:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08809FA0;
      }
      goto L_08809EE4;
    }
L_08809EE4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1932)));
    ctx.gpr[31] = (0x08809EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08809EF4u) goto L_08809EF4;
    return;
L_08809EF4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_08809F8C;
    }
    goto L_08809EFC;
L_08809EFC:
    ctx.gpr[31] = (0x08809F04u);
    // nop
    ctx.pc = 0x08AB414Cu;
    return;
L_08809F04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08809F84;
      }
      goto L_08809F14;
    }
L_08809F14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08809F84;
      }
      goto L_08809F1C;
    }
L_08809F1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08809F84;
      }
      goto L_08809F24;
    }
L_08809F24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08809F84;
      }
      goto L_08809F2C;
    }
L_08809F2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08809F48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    goto L_0880A830;
L_08809F48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08809F98;
      }
      goto L_08809F50;
    }
L_08809F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1924)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08809F7C;
      }
      goto L_08809F5C;
    }
L_08809F5C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08809F7Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088090A0;
L_08809F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809F98;
      }
      goto L_08809F84;
    }
L_08809F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809F98;
      }
      goto L_08809F8C;
    }
L_08809F8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08809F98;
L_08809F98:
    ctx.gpr[31] = (0x08809FA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 823u, 0x088076A8u>(ctx, &aot_mem) && ctx.pc == 0x08809FA0u) goto L_08809FA0;
    return;
L_08809FA0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08809FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A000;
      }
      goto L_08809FE0;
    }
L_08809FE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_0880A03C;
      }
      goto L_08809FE8;
    }
L_08809FE8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08809FF4u);
    ctx.gpr[6] = (0u | 130u);
    goto L_08809CF0;
L_08809FF4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880A03C;
      }
      goto L_0880A000;
    }
L_0880A000:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880A01C;
      }
      goto L_0880A00C;
    }
L_0880A00C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0880A03C;
    }
    goto L_0880A014;
L_0880A014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A03C;
      }
      goto L_0880A01C;
    }
L_0880A01C:
    ctx.gpr[31] = (0x0880A024u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    goto L_08809D90;
L_0880A024:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0880A03C;
      }
      goto L_0880A030;
    }
L_0880A030:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0880A03C;
      }
      goto L_0880A03C;
    }
L_0880A03C:
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
L_0880A054:
    ctx.gpr[5] = (32770u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(799));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32801u << 16u);
      if (branch_taken) {
          goto L_0880A0A8;
      }
      goto L_0880A068;
    }
L_0880A068:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_0880A0A8;
      }
      goto L_0880A078;
    }
L_0880A078:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(813));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32766u << 16u);
      if (branch_taken) {
          goto L_0880A0A8;
      }
      goto L_0880A088;
    }
L_0880A088:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A0A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A0B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A0E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0880A30C;
      }
      goto L_0880A12C;
    }
L_0880A12C:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_0880A134;
L_0880A134:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880A2FC;
      }
      goto L_0880A140;
    }
L_0880A140:
    ctx.gpr[18] = (0u | 64u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-64));
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[18]);
    goto L_0880A150;
L_0880A150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880A164u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A164u) goto L_0880A164;
    return;
L_0880A164:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0880A2EC;
    }
    goto L_0880A16C;
L_0880A16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0880A2EC;
L_0880A2EC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0880A150;
      }
      goto L_0880A2FC;
    }
L_0880A2FC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880A30C;
      }
      goto L_0880A304;
    }
L_0880A304:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880A134;
      }
      goto L_0880A30C;
    }
L_0880A30C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A3F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (ctx.gpr[20] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[21] = (ctx.gpr[17] + ctx.gpr[21]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880A45Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A45Cu) goto L_0880A45C;
    return;
L_0880A45C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0880A460;
L_0880A460:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A52C;
      }
      goto L_0880A468;
    }
L_0880A468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_0880A4C8;
      }
      goto L_0880A474;
    }
L_0880A474:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0880A48C;
      }
      goto L_0880A47C;
    }
L_0880A47C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
      if (branch_taken) {
          goto L_0880A4A8;
      }
      goto L_0880A48C;
    }
L_0880A48C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
        goto L_0880A4A0;
    }
    goto L_0880A4A0;
L_0880A4A0:
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    goto L_0880A4A8;
L_0880A4A8:
    ctx.gpr[21] = (ctx.gpr[20] << 6u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[17] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880A4C0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A4C0u) goto L_0880A4C0;
    return;
L_0880A4C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880A460;
      }
      goto L_0880A4C8;
    }
L_0880A4C8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880A4D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A4D8u) goto L_0880A4D8;
    return;
L_0880A4D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0880A4E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A4E8u) goto L_0880A4E8;
    return;
L_0880A4E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0880A4F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x0880A4F8u) goto L_0880A4F8;
    return;
L_0880A4F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A52C;
      }
      goto L_0880A500;
    }
L_0880A500:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_0880A52C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_0880A558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A580u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB44F4u;
    return;
L_0880A580:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (32811u << 16u);
      if (branch_taken) {
          goto L_0880A5D4;
      }
      goto L_0880A58C;
    }
L_0880A58C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880A5D4;
      }
      goto L_0880A598;
    }
L_0880A598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0880A5A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0880A5A8u) goto L_0880A5A8;
    return;
L_0880A5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4580), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A5D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_0880A620;
      }
      goto L_0880A604;
    }
L_0880A604:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0880A618u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A618u) goto L_0880A618;
    return;
L_0880A618:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0880A620;
L_0880A620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A640;
      }
      goto L_0880A62C;
    }
L_0880A62C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4580), 0u);
    ctx.gpr[31] = (0x0880A638u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB44FCu;
    return;
L_0880A638:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880A658;
      }
      goto L_0880A640;
    }
L_0880A640:
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
L_0880A658:
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
L_0880A670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A6ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880A830;
L_0880A6AC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880A6CC;
      }
      goto L_0880A6B8;
    }
L_0880A6B8:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_0880A6F0;
      }
      goto L_0880A6C4;
    }
L_0880A6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0880A6FC;
      }
      goto L_0880A6CC;
    }
L_0880A6CC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_0880A6F0:
    ctx.gpr[31] = (0x0880A6F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809A50;
L_0880A6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0880A6FC;
L_0880A6FC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880A71Cu);
    ctx.gpr[5] = (0u | 194u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A71Cu) goto L_0880A71C;
    return;
L_0880A71C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880A7CC;
      }
      goto L_0880A724;
    }
L_0880A724:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0880A730u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0880AA60;
L_0880A730:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0880A78C;
      }
      goto L_0880A73C;
    }
L_0880A73C:
    ctx.gpr[31] = (0x0880A744u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0880A5E8;
L_0880A744:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0880A800;
      }
      goto L_0880A750;
    }
L_0880A750:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1924), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0880A768u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A768u) goto L_0880A768;
    return;
L_0880A768:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0880A78C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1924), ctx.gpr[18]);
    ctx.gpr[31] = (0x0880A798u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0880A5E8;
L_0880A798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880A7A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A7A8u) goto L_0880A7A8;
    return;
L_0880A7A8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0880A7CC:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1924), ctx.gpr[18]);
    ctx.gpr[31] = (0x0880A7DCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0880A5E8;
L_0880A7DC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_0880A800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0880A830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A880u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 255u, 0x08AAD02Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A880u) goto L_0880A880;
    return;
L_0880A880:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[18] = (2221u << 16u);
      if (branch_taken) {
          goto L_0880A8F0;
      }
      goto L_0880A890;
    }
L_0880A890:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[31] = (0x0880A8A0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0880A558;
L_0880A8A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A8D0;
      }
      goto L_0880A8A8;
    }
L_0880A8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x0880A8BCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 244u, 0x08AACF50u>(ctx, &aot_mem) && ctx.pc == 0x0880A8BCu) goto L_0880A8BC;
    return;
L_0880A8BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880A920;
      }
      goto L_0880A8C8;
    }
L_0880A8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0880A940;
      }
      goto L_0880A8D0;
    }
L_0880A8D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-1924), 0u);
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
L_0880A8F0:
    ctx.gpr[31] = (0x0880A8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809A50;
L_0880A8F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-1924), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
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
L_0880A920:
    ctx.gpr[31] = (0x0880A928u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0880A5E8;
L_0880A928:
    ctx.gpr[31] = (0x0880A930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809A50;
L_0880A930:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-1924), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A950;
      }
      goto L_0880A940;
    }
L_0880A940:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-1924), 0u);
    ctx.gpr[2] = (0u | 1u);
    goto L_0880A950;
L_0880A950:
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
L_0880A9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880A9F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880A0B0;
L_0880A9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880AA10u);
    ctx.gpr[5] = (0u | 194u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880AA10u) goto L_0880AA10;
    return;
L_0880AA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(63));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880AA34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0880AA60;
L_0880AA34:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880AA48;
      }
      goto L_0880AA40;
    }
L_0880AA40:
    ctx.gpr[31] = (0x0880AA48u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0880A5E8;
L_0880AA48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AA60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AA8Cu);
    ctx.gpr[16] = (0u | 0u);
    ctx.pc = 0x08AB4514u;
    return;
L_0880AA8C:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(287) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0880AAB0;
      }
      goto L_0880AA98;
    }
L_0880AA98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880AAA8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4404u;
    return;
L_0880AAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880AABC;
      }
      goto L_0880AAB0;
    }
L_0880AAB0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880AABCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0880AABCu) goto L_0880AABC;
    return;
L_0880AABC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0880AAF4;
      }
      goto L_0880AAC4;
    }
L_0880AAC4:
    ctx.gpr[31] = (0x0880AACCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4534u;
    return;
L_0880AACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880AAF4;
      }
      goto L_0880AAD4;
    }
L_0880AAD4:
    ctx.gpr[2] = (0u | 1u);
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
L_0880AAF4:
    ctx.gpr[2] = (0u | 0u);
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
L_0880AB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AB38u);
    ctx.gpr[7] = (0u | 131u);
    goto L_08809B44;
L_0880AB38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880AB88;
      }
      goto L_0880AB44;
    }
L_0880AB44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[31] = (0x0880AB68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B0D0;
L_0880AB68:
    ctx.gpr[31] = (0x0880AB70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B0F8;
L_0880AB70:
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
L_0880AB88:
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
L_0880ABA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880ABD4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_0880B0D0;
L_0880ABD4:
    ctx.gpr[31] = (0x0880ABDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B0F8;
L_0880ABDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880ABEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880AC20;
      }
      goto L_0880AC08;
    }
L_0880AC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880AC20;
      }
      goto L_0880AC14;
    }
L_0880AC14:
    ctx.gpr[31] = (0x0880AC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08809C70;
L_0880AC1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_0880AC20;
L_0880AC20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AC30:
    ctx.gpr[6] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1912));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0880AC4C;
L_0880AC4C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880AC60;
      }
      goto L_0880AC58;
    }
L_0880AC58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AC60:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880AC4C;
      }
      goto L_0880AC6C;
    }
L_0880AC6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AC74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AC8Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880B368;
L_0880AC8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_0880AC94;
L_0880AC94:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880ACA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880AC30;
L_0880ACA0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880ACD0;
      }
      goto L_0880ACA8;
    }
L_0880ACA8:
    ctx.gpr[31] = (0x0880ACB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B198;
L_0880ACB0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880ACD0;
      }
      goto L_0880ACB8;
    }
L_0880ACB8:
    ctx.gpr[31] = (0x0880ACC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880ACC0:
    ctx.gpr[31] = (0x0880ACC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B368;
L_0880ACC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880AC94;
      }
      goto L_0880ACD0;
    }
L_0880ACD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880ACE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AD04u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880AC74;
L_0880AD04:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_0880AD10;
L_0880AD10:
    ctx.gpr[31] = (0x0880AD18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B368;
L_0880AD18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880AD24u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880AC30;
L_0880AD24:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
        goto L_0880AD50;
    }
    goto L_0880AD2C;
L_0880AD2C:
    ctx.gpr[31] = (0x0880AD34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B374;
L_0880AD34:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0880AD44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B198;
L_0880AD44:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[29] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0880AD10;
      }
      goto L_0880AD4C;
    }
L_0880AD4C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_0880AD50;
L_0880AD50:
    ctx.gpr[31] = (0x0880AD58u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0880AD58u) goto L_0880AD58;
    return;
L_0880AD58:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0880AD64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x0880AD64u) goto L_0880AD64;
    return;
L_0880AD64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AD80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880ADA0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880AC74;
L_0880ADA0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_0880ADAC;
L_0880ADAC:
    ctx.gpr[31] = (0x0880ADB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B368;
L_0880ADB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880ADC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880AC30;
L_0880ADC0:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
        goto L_0880ADEC;
    }
    goto L_0880ADC8;
L_0880ADC8:
    ctx.gpr[31] = (0x0880ADD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B374;
L_0880ADD0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0880ADE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B198;
L_0880ADE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[29] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0880ADAC;
      }
      goto L_0880ADE8;
    }
L_0880ADE8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_0880ADEC;
L_0880ADEC:
    ctx.gpr[31] = (0x0880ADF4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x0880ADF4u) goto L_0880ADF4;
    return;
L_0880ADF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AE10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880AE20u);
    // nop
    goto L_0880B374;
L_0880AE20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AFF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B018u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0880AC74;
L_0880B018:
    ctx.gpr[31] = (0x0880B020u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B4F0;
L_0880B020:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x0880B02Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B198;
L_0880B02C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880B074;
      }
      goto L_0880B034;
    }
L_0880B034:
    ctx.gpr[18] = (0u | 1u);
    goto L_0880B038;
L_0880B038:
    ctx.gpr[31] = (0x0880B040u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B368;
L_0880B040:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880B04Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0880B4D0;
L_0880B04C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_0880B078;
    }
    goto L_0880B054;
L_0880B054:
    ctx.gpr[31] = (0x0880B05Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B374;
L_0880B05C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0880B06Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B198;
L_0880B06C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0880B038;
      }
      goto L_0880B074;
    }
L_0880B074:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0880B078;
L_0880B078:
    ctx.gpr[31] = (0x0880B080u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B568;
L_0880B080:
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
L_0880B0A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B0B4u);
    // nop
    goto L_0880B368;
L_0880B0B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B0C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B0D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B0F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B10C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0880B1B0;
    }
    goto L_0880B1B0;
L_0880B1B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B1B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B1F0;
      }
      goto L_0880B1C8;
    }
L_0880B1C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B1F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B1F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880B234;
      }
      goto L_0880B208;
    }
L_0880B208:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0880B23C;
      }
      goto L_0880B210;
    }
L_0880B210:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B234:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B23C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B210;
      }
      goto L_0880B244;
    }
L_0880B244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B208;
      }
      goto L_0880B24C;
    }
L_0880B24C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880B270;
      }
      goto L_0880B25C;
    }
L_0880B25C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0880B278;
      }
      goto L_0880B264;
    }
L_0880B264:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B270:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B278:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B264;
      }
      goto L_0880B280;
    }
L_0880B280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B25C;
      }
      goto L_0880B288;
    }
L_0880B288:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B290:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0880B2D8;
      }
      goto L_0880B2A8;
    }
L_0880B2A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B2C8;
      }
      goto L_0880B2B0;
    }
L_0880B2B0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880B360;
      }
      goto L_0880B2B8;
    }
L_0880B2B8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0880B2B0;
      }
      goto L_0880B2C8;
    }
L_0880B2C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B360;
      }
      goto L_0880B2D0;
    }
L_0880B2D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B2D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B350;
      }
      goto L_0880B2E0;
    }
L_0880B2E0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0880B33C;
      }
      goto L_0880B2E8;
    }
L_0880B2E8:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880B2FC;
      }
      goto L_0880B2F4;
    }
L_0880B2F4:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
        goto L_0880B314;
    }
    goto L_0880B2FC;
L_0880B2FC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880B360;
      }
      goto L_0880B310;
    }
L_0880B310:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
    goto L_0880B314;
L_0880B314:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0880B32C;
      }
      goto L_0880B31C;
    }
L_0880B31C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 91 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_0880B340;
    }
    goto L_0880B328;
L_0880B328:
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    goto L_0880B32C;
L_0880B32C:
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880B360;
      }
      goto L_0880B33C;
    }
L_0880B33C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0880B340;
L_0880B340:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0880B2E0;
      }
      goto L_0880B350;
    }
L_0880B350:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B360;
      }
      goto L_0880B358;
    }
L_0880B358:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B360:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B38Cu);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_0880B3A0;
L_0880B38C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B3A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B3C0;
      }
      goto L_0880B3BC;
    }
L_0880B3BC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_0880B3C0;
L_0880B3C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B3D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B3ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880B368;
L_0880B3EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_0880B3F4;
L_0880B3F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880B400u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B44C;
L_0880B400:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B430;
      }
      goto L_0880B408;
    }
L_0880B408:
    ctx.gpr[31] = (0x0880B410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B198;
L_0880B410:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880B430;
      }
      goto L_0880B418;
    }
L_0880B418:
    ctx.gpr[31] = (0x0880B420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880B420:
    ctx.gpr[31] = (0x0880B428u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B368;
L_0880B428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880B3F4;
      }
      goto L_0880B430;
    }
L_0880B430:
    ctx.gpr[31] = (0x0880B438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880B438:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B44C:
    ctx.gpr[4] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 34u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0880B464;
    }
    goto L_0880B464;
L_0880B464:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B46C:
    ctx.gpr[6] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1907));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0880B488;
L_0880B488:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880B49C;
      }
      goto L_0880B494;
    }
L_0880B494:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B49C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880B488;
      }
      goto L_0880B4A8;
    }
L_0880B4A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B4B0:
    ctx.gpr[4] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 60u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0880B4C8;
    }
    goto L_0880B4C8;
L_0880B4C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B4D0:
    ctx.gpr[4] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 62u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0880B4E8;
    }
    goto L_0880B4E8;
L_0880B4E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B4F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B508u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880B368;
L_0880B508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_0880B510;
L_0880B510:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880B51Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B4B0;
L_0880B51C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B54C;
      }
      goto L_0880B524;
    }
L_0880B524:
    ctx.gpr[31] = (0x0880B52Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B198;
L_0880B52C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880B54C;
      }
      goto L_0880B534;
    }
L_0880B534:
    ctx.gpr[31] = (0x0880B53Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880B53C:
    ctx.gpr[31] = (0x0880B544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B368;
L_0880B544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880B510;
      }
      goto L_0880B54C;
    }
L_0880B54C:
    ctx.gpr[31] = (0x0880B554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880B554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B580u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0880B368;
L_0880B580:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_0880B588;
L_0880B588:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0880B594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B4D0;
L_0880B594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B5C4;
      }
      goto L_0880B59C;
    }
L_0880B59C:
    ctx.gpr[31] = (0x0880B5A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B198;
L_0880B5A4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880B5C4;
      }
      goto L_0880B5AC;
    }
L_0880B5AC:
    ctx.gpr[31] = (0x0880B5B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880B5B4:
    ctx.gpr[31] = (0x0880B5BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B368;
L_0880B5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880B588;
      }
      goto L_0880B5C4;
    }
L_0880B5C4:
    ctx.gpr[31] = (0x0880B5CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880B3A0;
L_0880B5CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0880B658;
      }
      goto L_0880B614;
    }
L_0880B614:
    ctx.gpr[19] = (0u | 32u);
    ctx.gpr[18] = (0u | 9u);
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0880B620;
L_0880B620:
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[16]);
        goto L_0880B634;
    }
    goto L_0880B628;
L_0880B628:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0880B644;
    }
    goto L_0880B630;
L_0880B630:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[16]);
    goto L_0880B634;
L_0880B634:
    ctx.gpr[31] = (0x0880B63Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0880B63Cu) goto L_0880B63C;
    return;
L_0880B63C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0880B650;
      }
      goto L_0880B644;
    }
L_0880B644:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_0880B650;
L_0880B650:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B620;
      }
      goto L_0880B658;
    }
L_0880B658:
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
L_0880B67C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B6A8u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0880B5E0;
L_0880B6A8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B71C;
      }
      goto L_0880B6B8;
    }
L_0880B6B8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0880B6BC;
L_0880B6BC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B6D0;
      }
      goto L_0880B6C4;
    }
L_0880B6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880B70C;
      }
      goto L_0880B6D0;
    }
L_0880B6D0:
    ctx.gpr[31] = (0x0880B6D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0880B6D8u) goto L_0880B6D8;
    return;
L_0880B6D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880B6E4u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x0880B6E4u) goto L_0880B6E4;
    return;
L_0880B6E4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B700;
      }
      goto L_0880B6F0;
    }
L_0880B6F0:
    ctx.gpr[31] = (0x0880B6F8u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x0880B6F8u) goto L_0880B6F8;
    return;
L_0880B6F8:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0880B700;
L_0880B700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0880B70Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0880B70Cu) goto L_0880B70C;
    return;
L_0880B70C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B6BC;
      }
      goto L_0880B71C;
    }
L_0880B71C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B73C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B768u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0880B5E0;
L_0880B768:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880B7D8;
      }
      goto L_0880B778;
    }
L_0880B778:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880B784u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0880B784u) goto L_0880B784;
    return;
L_0880B784:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0880B790u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x0880B790u) goto L_0880B790;
    return;
L_0880B790:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0880B7AC;
      }
      goto L_0880B79C;
    }
L_0880B79C:
    ctx.gpr[31] = (0x0880B7A4u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x0880B7A4u) goto L_0880B7A4;
    return;
L_0880B7A4:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0880B7AC;
L_0880B7AC:
    ctx.gpr[31] = (0x0880B7B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0880B7B4u) goto L_0880B7B4;
    return;
L_0880B7B4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0880B7C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x0880B7C0u) goto L_0880B7C0;
    return;
L_0880B7C0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0880B7D8;
      }
      goto L_0880B7C8;
    }
L_0880B7C8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B778;
      }
      goto L_0880B7D8;
    }
L_0880B7D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B7F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B808u);
    // nop
    goto L_0880AFF0;
L_0880B808:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B838u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0880B0A4;
L_0880B838:
    ctx.gpr[18] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0880B864;
      }
      goto L_0880B844;
    }
L_0880B844:
    ctx.gpr[31] = (0x0880B84Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880AE10;
L_0880B84C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0880B85Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B0A4;
L_0880B85C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880B844;
      }
      goto L_0880B864;
    }
L_0880B864:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_0880B8BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B8FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23904));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0880B8FCu) goto L_0880B8FC;
    return;
L_0880B8FC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0880B908u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B1B8;
L_0880B908:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0880B91C;
      }
      goto L_0880B910;
    }
L_0880B910:
    ctx.gpr[31] = (0x0880B918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B0C0;
L_0880B918:
    ctx.gpr[19] = (0u | 1u);
    goto L_0880B91C;
L_0880B91C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880B920;
L_0880B920:
    ctx.gpr[31] = (0x0880B928u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0880B7F8;
L_0880B928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B954;
      }
      goto L_0880B930;
    }
L_0880B930:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880B940u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0880B290;
L_0880B940:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B958;
      }
      goto L_0880B948;
    }
L_0880B948:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0880B958;
      }
      goto L_0880B954;
    }
L_0880B954:
    ctx.gpr[19] = (0u | 0u);
    goto L_0880B958;
L_0880B958:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B920;
      }
      goto L_0880B960;
    }
L_0880B960:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880B97C;
      }
      goto L_0880B968;
    }
L_0880B968:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880B974u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0880B24C;
L_0880B974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B984;
      }
      goto L_0880B97C;
    }
L_0880B97C:
    ctx.gpr[31] = (0x0880B984u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0880B1F8;
L_0880B984:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B9A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880B9DCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_0880B1B8;
L_0880B9DC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0880B9E0;
L_0880B9E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0880B9E4;
L_0880B9E4:
    ctx.gpr[31] = (0x0880B9ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880B9ECu) goto L_0880B9EC;
    return;
L_0880B9EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0880BA1C;
      }
      goto L_0880B9F4;
    }
L_0880B9F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0880BA00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0880B7F8;
L_0880BA00:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0880BA0Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BA0Cu) goto L_0880BA0C;
    return;
L_0880BA0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0880B9E4;
      }
      goto L_0880BA14;
    }
L_0880BA14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880B9E0;
      }
      goto L_0880BA1C;
    }
L_0880BA1C:
    ctx.gpr[31] = (0x0880BA24u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0880B1F8;
L_0880BA24:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BBC8u);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    goto L_0880ABA0;
L_0880BBC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BBD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0880BC00;
L_0880BBD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[31] = (0x0880BBE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880ABEC;
L_0880BBE4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23932));
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[23] = (2219u << 16u);
    ctx.gpr[22] = (2219u << 16u);
    ctx.gpr[21] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(23960));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(23968));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(23976));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(23984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    goto L_0880BC7C;
L_0880BC7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x0880BC88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BC88u) goto L_0880BC88;
    return;
L_0880BC88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880BD90;
      }
      goto L_0880BC90;
    }
L_0880BC90:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_0880BC94;
L_0880BC94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_0880BC98;
L_0880BC98:
    ctx.gpr[31] = (0x0880BCA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BCA0u) goto L_0880BCA0;
    return;
L_0880BCA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0880BD74;
      }
      goto L_0880BCA8;
    }
L_0880BCA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BCB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880B7F8;
L_0880BCB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BCC0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BCC0u) goto L_0880BCC0;
    return;
L_0880BCC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880BCEC;
      }
      goto L_0880BCC8;
    }
L_0880BCC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BCD4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0880B814;
L_0880BCD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BCE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880B7F8;
L_0880BCE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0880BC98;
      }
      goto L_0880BCE8;
    }
L_0880BCE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880BCEC;
L_0880BCEC:
    ctx.gpr[31] = (0x0880BCF4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BCF4u) goto L_0880BCF4;
    return;
L_0880BCF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880BD20;
      }
      goto L_0880BCFC;
    }
L_0880BCFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BD08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0880B814;
L_0880BD08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BD14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880B7F8;
L_0880BD14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0880BC98;
      }
      goto L_0880BD1C;
    }
L_0880BD1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880BD20;
L_0880BD20:
    ctx.gpr[31] = (0x0880BD28u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BD28u) goto L_0880BD28;
    return;
L_0880BD28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880BD54;
      }
      goto L_0880BD30;
    }
L_0880BD30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BD3Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0880B814;
L_0880BD3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880BD48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880B7F8;
L_0880BD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0880BC98;
      }
      goto L_0880BD50;
    }
L_0880BD50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880BD54;
L_0880BD54:
    ctx.gpr[31] = (0x0880BD5Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BD5Cu) goto L_0880BD5C;
    return;
L_0880BD5C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
        goto L_0880BC98;
    }
    goto L_0880BD64;
L_0880BD64:
    ctx.gpr[31] = (0x0880BD6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880AD80;
L_0880BD6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880BC94;
      }
      goto L_0880BD74;
    }
L_0880BD74:
    ctx.gpr[31] = (0x0880BD7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880B7F8;
L_0880BD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880BC7C;
      }
      goto L_0880BD90;
    }
L_0880BD90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880BED4u);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    goto L_0880ABA0;
L_0880BED4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880BEE0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0880BF04;
L_0880BEE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[31] = (0x0880BEECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0880ABEC;
L_0880BEEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24004));
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[6]);
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24012));
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23984));
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24036));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24044));
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24052));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24060));
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    goto L_0880BFB8;
L_0880BFB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (0x0880BFC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BFC4u) goto L_0880BFC4;
    return;
L_0880BFC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[30] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 45u, 0x0880C198u>(ctx, &aot_mem); return;
      }
      goto L_0880BFCC;
    }
L_0880BFCC:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(156));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(172));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(188));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(196));
    goto L_0880BFE0;
L_0880BFE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_0880BFE4;
L_0880BFE4:
    ctx.gpr[31] = (0x0880BFECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0880BFECu) goto L_0880BFEC;
    return;
L_0880BFEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 43u, 0x0880C188u>(ctx, &aot_mem); return;
      }
      goto L_0880BFF4;
    }
L_0880BFF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0880C000u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0880B7F8;
}

void recomp_unit_0001(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0001_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_1(Runtime &runtime) {
    runtime.register_generated_unit(1u, 0x08808000u, 16384u, &recomp_unit_0001, &recomp_unit_0001_entry);
    runtime.register_function(0x08808000u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880800Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808014u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808024u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808028u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808038u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808040u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880804Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808054u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880806Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808074u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808084u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808088u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808094u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880809Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808104u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880810Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808120u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808128u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808134u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880813Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808144u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808150u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808158u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880816Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808174u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808180u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808188u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808190u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808198u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808200u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808208u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808210u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808218u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808220u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808228u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808230u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808238u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808240u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808248u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808250u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808258u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808260u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808268u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808270u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808278u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808280u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808288u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808290u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808298u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808300u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808308u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808310u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808320u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808328u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808330u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808344u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880835Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808368u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808370u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808378u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808388u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808390u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808404u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880840Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808414u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880841Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808424u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880842Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808434u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880843Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808444u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880844Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808454u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880845Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808464u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880846Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808474u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880847Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808484u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880848Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880849Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808504u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880850Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808514u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880851Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808524u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880852Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808534u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880853Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808544u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880854Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808554u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880855Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808564u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880856Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808574u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880857Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808584u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880858Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808594u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880859Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808604u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880860Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808614u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880861Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808624u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880862Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808634u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880863Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808644u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880864Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808654u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880865Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808664u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880866Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808674u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880867Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808684u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880868Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808694u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880869Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808704u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880870Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808714u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880871Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808724u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880872Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808734u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808744u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808760u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808770u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808778u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808780u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808788u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808790u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808798u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808800u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808808u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808814u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808828u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808834u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880883Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808860u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808868u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880895Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808978u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808980u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880899Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808ADCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809000u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809008u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809010u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809018u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809020u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809024u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880902Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809034u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809044u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880904Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809054u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809064u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880906Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809104u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880910Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880911Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809158u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809204u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880921Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809224u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809234u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809248u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809270u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809278u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809280u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809288u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809318u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809334u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809340u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809364u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880936Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809378u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809380u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809394u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809404u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880940Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809414u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880941Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809424u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880942Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809434u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880943Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809458u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880947Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809484u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880948Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880949Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809538u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809594u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809610u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809644u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809678u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809704u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809720u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809730u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880973Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809770u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880977Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809788u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809790u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880979Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088097A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809850u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809874u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809884u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880988Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809894u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088098F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809904u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809908u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809910u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809920u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880994Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880996Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809974u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880997Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809984u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809988u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809994u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880999Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088099ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809ABCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809ACCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809ED8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A000u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A00Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A014u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A01Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A024u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A030u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A03Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A054u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A068u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A078u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A088u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A12Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A134u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A140u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A150u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A164u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A16Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A304u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A30Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A45Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A460u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A468u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A474u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A47Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A48Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A500u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A52Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A558u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A580u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A58Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A598u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A604u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A618u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A620u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A62Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A638u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A640u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A658u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A670u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A71Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A724u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A730u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A73Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A744u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A750u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A768u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A78Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A798u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A800u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A830u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A880u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A890u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A920u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A928u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A930u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A940u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A950u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AABCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AACCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B018u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B020u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B02Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B034u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B038u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B040u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B04Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B054u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B05Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B06Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B074u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B078u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B080u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B10Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B198u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B208u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B210u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B234u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B23Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B244u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B24Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B25Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B264u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B270u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B278u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B280u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B288u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B290u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B310u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B314u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B31Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B328u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B32Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B33Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B340u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B350u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B358u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B360u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B368u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B374u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B38Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B400u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B408u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B410u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B418u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B420u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B428u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B430u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B438u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B44Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B464u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B46Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B488u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B49Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B508u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B510u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B51Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B524u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B52Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B534u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B53Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B544u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B54Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B554u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B568u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B580u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B588u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B594u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B59Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B614u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B620u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B628u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B630u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B634u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B63Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B644u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B650u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B658u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B67Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B700u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B70Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B71Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B73Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B768u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B778u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B784u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B790u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B79Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B808u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B814u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B838u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B844u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B84Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B85Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B864u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B908u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B910u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B918u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B91Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B920u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B928u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B930u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B940u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B948u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B954u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B958u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B960u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B968u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B974u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B97Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B984u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BCFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BED4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFF4u, &recomp_unit_0001, "recomp_unit_0001");
}
} // namespace psprecomp

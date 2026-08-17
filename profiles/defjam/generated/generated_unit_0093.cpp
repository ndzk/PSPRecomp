#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0093[4050] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22,
    0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0,
    33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0,
    0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0,
    65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0,
    0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86,
    0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0,
    97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0,
    0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118,
    0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0,
    129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0,
    0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150,
    0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0,
    161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0,
    176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212,
    0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0,
    221, 0, 222, 0, 223, 0, 224, 0, 225, 226, 0, 0, 0, 0, 227, 0, 0, 228, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246,
    0, 247, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0,
    273, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288,
    0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0,
    0, 302, 303, 0, 304, 0, 0, 305, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 317, 0,
    318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0,
    0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0,
    347, 0, 348, 0, 0, 349, 350, 0, 351, 0, 0, 352, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 366, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376,
    0, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0,
    387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 394, 395, 0, 396, 0, 0, 397, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 0,
    406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 416, 417, 0, 418, 0, 0, 419, 420, 0, 421,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0,
    426, 0, 427, 0, 0, 428, 0, 429, 0, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 438, 439, 0, 440, 0,
    0, 441, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 457, 458, 0, 459, 0, 0, 0, 0,
    0, 460, 0, 461, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 469, 0, 0, 470, 0, 0,
    0, 0, 0, 471, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 478, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0,
    484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487,
    0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497,
    0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 532,
    0, 533, 0, 0, 534, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0,
    539, 0, 540, 0, 0, 0, 541, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0,
    565, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0,
    0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    581, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0,
    0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0,
    0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0,
    0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0,
    614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0,
    0, 0, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 634, 0,
    0, 635, 0, 0, 0, 636, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 641, 0, 0, 642, 0, 643, 644, 0, 0,
    0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0,
    650, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 656, 657, 0, 0, 0, 658, 0,
    0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0,
    665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0,
    0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0,
    675, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0,
    0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 691, 0, 692, 0, 693, 694, 695, 0, 0, 696,
    697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0,
    0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0,
    0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 718, 0, 0, 0, 0, 719,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0,
    729, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740,
    0, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0,
    0, 749, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 757, 758, 0, 0, 759,
    0, 0, 0, 0, 760, 0, 761, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 0, 771,
    772, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0,
    777, 0, 778, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0,
    0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 800, 0, 0, 801,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 816, 817, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 822, 0, 823, 0, 0, 824, 0,
    825, 0, 826, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0,
    0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835,
};
void recomp_unit_0093_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08978000u;
        entry_id = (entry_delta < 16200u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0093[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08978000;
    case 2u: goto L_0897800C;
    case 3u: goto L_08978018;
    case 4u: goto L_08978024;
    case 5u: goto L_08978030;
    case 6u: goto L_0897803C;
    case 7u: goto L_08978048;
    case 8u: goto L_08978054;
    case 9u: goto L_08978060;
    case 10u: goto L_0897806C;
    case 11u: goto L_08978078;
    case 12u: goto L_08978084;
    case 13u: goto L_08978090;
    case 14u: goto L_0897809C;
    case 15u: goto L_089780A8;
    case 16u: goto L_089780B4;
    case 17u: goto L_089780C0;
    case 18u: goto L_089780CC;
    case 19u: goto L_089780D8;
    case 20u: goto L_089780E4;
    case 21u: goto L_089780F0;
    case 22u: goto L_089780FC;
    case 23u: goto L_08978108;
    case 24u: goto L_08978114;
    case 25u: goto L_08978120;
    case 26u: goto L_0897812C;
    case 27u: goto L_08978138;
    case 28u: goto L_08978144;
    case 29u: goto L_08978150;
    case 30u: goto L_0897815C;
    case 31u: goto L_08978168;
    case 32u: goto L_08978174;
    case 33u: goto L_08978180;
    case 34u: goto L_0897818C;
    case 35u: goto L_08978198;
    case 36u: goto L_089781A4;
    case 37u: goto L_089781B0;
    case 38u: goto L_089781BC;
    case 39u: goto L_089781C8;
    case 40u: goto L_089781D4;
    case 41u: goto L_089781E0;
    case 42u: goto L_089781EC;
    case 43u: goto L_089781F8;
    case 44u: goto L_08978204;
    case 45u: goto L_08978210;
    case 46u: goto L_0897821C;
    case 47u: goto L_08978228;
    case 48u: goto L_08978234;
    case 49u: goto L_08978240;
    case 50u: goto L_0897824C;
    case 51u: goto L_08978258;
    case 52u: goto L_08978264;
    case 53u: goto L_08978270;
    case 54u: goto L_0897827C;
    case 55u: goto L_08978288;
    case 56u: goto L_08978294;
    case 57u: goto L_089782A0;
    case 58u: goto L_089782AC;
    case 59u: goto L_089782B8;
    case 60u: goto L_089782C4;
    case 61u: goto L_089782D0;
    case 62u: goto L_089782DC;
    case 63u: goto L_089782E8;
    case 64u: goto L_089782F4;
    case 65u: goto L_08978300;
    case 66u: goto L_0897830C;
    case 67u: goto L_08978318;
    case 68u: goto L_08978324;
    case 69u: goto L_08978330;
    case 70u: goto L_0897833C;
    case 71u: goto L_08978348;
    case 72u: goto L_08978354;
    case 73u: goto L_08978360;
    case 74u: goto L_0897836C;
    case 75u: goto L_08978378;
    case 76u: goto L_08978384;
    case 77u: goto L_08978390;
    case 78u: goto L_0897839C;
    case 79u: goto L_089783A8;
    case 80u: goto L_089783B4;
    case 81u: goto L_089783C0;
    case 82u: goto L_089783CC;
    case 83u: goto L_089783D8;
    case 84u: goto L_089783E4;
    case 85u: goto L_089783F0;
    case 86u: goto L_089783FC;
    case 87u: goto L_08978408;
    case 88u: goto L_08978414;
    case 89u: goto L_08978420;
    case 90u: goto L_0897842C;
    case 91u: goto L_08978438;
    case 92u: goto L_08978444;
    case 93u: goto L_08978450;
    case 94u: goto L_0897845C;
    case 95u: goto L_08978468;
    case 96u: goto L_08978474;
    case 97u: goto L_08978480;
    case 98u: goto L_0897848C;
    case 99u: goto L_08978498;
    case 100u: goto L_089784A4;
    case 101u: goto L_089784B0;
    case 102u: goto L_089784BC;
    case 103u: goto L_089784C8;
    case 104u: goto L_089784D4;
    case 105u: goto L_089784E0;
    case 106u: goto L_089784EC;
    case 107u: goto L_089784F8;
    case 108u: goto L_08978504;
    case 109u: goto L_08978510;
    case 110u: goto L_0897851C;
    case 111u: goto L_08978528;
    case 112u: goto L_08978534;
    case 113u: goto L_08978540;
    case 114u: goto L_0897854C;
    case 115u: goto L_08978558;
    case 116u: goto L_08978564;
    case 117u: goto L_08978570;
    case 118u: goto L_0897857C;
    case 119u: goto L_08978588;
    case 120u: goto L_08978594;
    case 121u: goto L_089785A0;
    case 122u: goto L_089785AC;
    case 123u: goto L_089785B8;
    case 124u: goto L_089785C4;
    case 125u: goto L_089785D0;
    case 126u: goto L_089785DC;
    case 127u: goto L_089785E8;
    case 128u: goto L_089785F4;
    case 129u: goto L_08978600;
    case 130u: goto L_0897860C;
    case 131u: goto L_08978618;
    case 132u: goto L_08978624;
    case 133u: goto L_08978630;
    case 134u: goto L_0897863C;
    case 135u: goto L_08978648;
    case 136u: goto L_08978654;
    case 137u: goto L_08978660;
    case 138u: goto L_0897866C;
    case 139u: goto L_08978678;
    case 140u: goto L_08978684;
    case 141u: goto L_08978690;
    case 142u: goto L_0897869C;
    case 143u: goto L_089786A8;
    case 144u: goto L_089786B4;
    case 145u: goto L_089786C0;
    case 146u: goto L_089786CC;
    case 147u: goto L_089786D8;
    case 148u: goto L_089786E4;
    case 149u: goto L_089786F0;
    case 150u: goto L_089786FC;
    case 151u: goto L_08978708;
    case 152u: goto L_08978714;
    case 153u: goto L_08978720;
    case 154u: goto L_0897872C;
    case 155u: goto L_08978738;
    case 156u: goto L_08978744;
    case 157u: goto L_08978750;
    case 158u: goto L_0897875C;
    case 159u: goto L_08978768;
    case 160u: goto L_08978774;
    case 161u: goto L_08978780;
    case 162u: goto L_0897878C;
    case 163u: goto L_08978798;
    case 164u: goto L_089787A4;
    case 165u: goto L_089787B0;
    case 166u: goto L_089787BC;
    case 167u: goto L_089787C8;
    case 168u: goto L_089787D4;
    case 169u: goto L_08978804;
    case 170u: goto L_08978810;
    case 171u: goto L_0897882C;
    case 172u: goto L_08978838;
    case 173u: goto L_08978854;
    case 174u: goto L_08978860;
    case 175u: goto L_08978874;
    case 176u: goto L_08978880;
    case 177u: goto L_08978888;
    case 178u: goto L_08978894;
    case 179u: goto L_0897889C;
    case 180u: goto L_089788A8;
    case 181u: goto L_089788B0;
    case 182u: goto L_089788B8;
    case 183u: goto L_089788C0;
    case 184u: goto L_089788C8;
    case 185u: goto L_089788D0;
    case 186u: goto L_089788F0;
    case 187u: goto L_089788F8;
    case 188u: goto L_08978900;
    case 189u: goto L_08978908;
    case 190u: goto L_08978910;
    case 191u: goto L_08978930;
    case 192u: goto L_08978938;
    case 193u: goto L_08978940;
    case 194u: goto L_08978948;
    case 195u: goto L_08978968;
    case 196u: goto L_08978970;
    case 197u: goto L_08978978;
    case 198u: goto L_08978998;
    case 199u: goto L_089789A0;
    case 200u: goto L_089789C0;
    case 201u: goto L_089789E0;
    case 202u: goto L_08978A00;
    case 203u: goto L_08978A18;
    case 204u: goto L_08978A20;
    case 205u: goto L_08978A28;
    case 206u: goto L_08978A34;
    case 207u: goto L_08978A40;
    case 208u: goto L_08978A50;
    case 209u: goto L_08978A64;
    case 210u: goto L_08978A6C;
    case 211u: goto L_08978A74;
    case 212u: goto L_08978A7C;
    case 213u: goto L_08978A84;
    case 214u: goto L_08978A8C;
    case 215u: goto L_08978A9C;
    case 216u: goto L_08978AB0;
    case 217u: goto L_08978AC0;
    case 218u: goto L_08978AD8;
    case 219u: goto L_08978AE8;
    case 220u: goto L_08978AF0;
    case 221u: goto L_08978B00;
    case 222u: goto L_08978B08;
    case 223u: goto L_08978B10;
    case 224u: goto L_08978B18;
    case 225u: goto L_08978B20;
    case 226u: goto L_08978B24;
    case 227u: goto L_08978B38;
    case 228u: goto L_08978B44;
    case 229u: goto L_08978B48;
    case 230u: goto L_08978B58;
    case 231u: goto L_08978B88;
    case 232u: goto L_08978B98;
    case 233u: goto L_08978BA4;
    case 234u: goto L_08978BAC;
    case 235u: goto L_08978BB4;
    case 236u: goto L_08978BDC;
    case 237u: goto L_08978C08;
    case 238u: goto L_08978C10;
    case 239u: goto L_08978C18;
    case 240u: goto L_08978C34;
    case 241u: goto L_08978C50;
    case 242u: goto L_08978C5C;
    case 243u: goto L_08978C64;
    case 244u: goto L_08978C6C;
    case 245u: goto L_08978C74;
    case 246u: goto L_08978C7C;
    case 247u: goto L_08978C84;
    case 248u: goto L_08978C88;
    case 249u: goto L_08978C90;
    case 250u: goto L_08978CA8;
    case 251u: goto L_08978CB4;
    case 252u: goto L_08978CBC;
    case 253u: goto L_08978CC4;
    case 254u: goto L_08978CCC;
    case 255u: goto L_08978CD4;
    case 256u: goto L_08978CFC;
    case 257u: goto L_08978D00;
    case 258u: goto L_08978D0C;
    case 259u: goto L_08978D18;
    case 260u: goto L_08978D20;
    case 261u: goto L_08978D28;
    case 262u: goto L_08978ED8;
    case 263u: goto L_08978F20;
    case 264u: goto L_08978F28;
    case 265u: goto L_08978F34;
    case 266u: goto L_08978F3C;
    case 267u: goto L_08978F48;
    case 268u: goto L_08978F50;
    case 269u: goto L_08978F5C;
    case 270u: goto L_08978F68;
    case 271u: goto L_08978F70;
    case 272u: goto L_08978F78;
    case 273u: goto L_08978F80;
    case 274u: goto L_08978F88;
    case 275u: goto L_08978F90;
    case 276u: goto L_08978F98;
    case 277u: goto L_08978FA4;
    case 278u: goto L_08978FAC;
    case 279u: goto L_08978FB8;
    case 280u: goto L_08978FC0;
    case 281u: goto L_08978FCC;
    case 282u: goto L_08978FF8;
    case 283u: goto L_0897904C;
    case 284u: goto L_08979054;
    case 285u: goto L_08979060;
    case 286u: goto L_08979068;
    case 287u: goto L_08979074;
    case 288u: goto L_0897907C;
    case 289u: goto L_08979088;
    case 290u: goto L_08979094;
    case 291u: goto L_089790A0;
    case 292u: goto L_089790A8;
    case 293u: goto L_089790B0;
    case 294u: goto L_089790BC;
    case 295u: goto L_089790C8;
    case 296u: goto L_089790D0;
    case 297u: goto L_089790D8;
    case 298u: goto L_089790E0;
    case 299u: goto L_089790E8;
    case 300u: goto L_089790F0;
    case 301u: goto L_089790F8;
    case 302u: goto L_08979104;
    case 303u: goto L_08979108;
    case 304u: goto L_08979110;
    case 305u: goto L_0897911C;
    case 306u: goto L_08979120;
    case 307u: goto L_08979128;
    case 308u: goto L_08979134;
    case 309u: goto L_08979168;
    case 310u: goto L_089791B0;
    case 311u: goto L_089791B8;
    case 312u: goto L_089791C4;
    case 313u: goto L_089791CC;
    case 314u: goto L_089791D8;
    case 315u: goto L_089791E0;
    case 316u: goto L_089791EC;
    case 317u: goto L_089791F8;
    case 318u: goto L_08979200;
    case 319u: goto L_08979208;
    case 320u: goto L_08979210;
    case 321u: goto L_08979218;
    case 322u: goto L_08979220;
    case 323u: goto L_08979228;
    case 324u: goto L_08979234;
    case 325u: goto L_0897923C;
    case 326u: goto L_08979248;
    case 327u: goto L_08979250;
    case 328u: goto L_0897925C;
    case 329u: goto L_08979288;
    case 330u: goto L_089792DC;
    case 331u: goto L_089792E4;
    case 332u: goto L_089792F0;
    case 333u: goto L_089792F8;
    case 334u: goto L_08979304;
    case 335u: goto L_0897930C;
    case 336u: goto L_08979318;
    case 337u: goto L_08979324;
    case 338u: goto L_08979330;
    case 339u: goto L_08979338;
    case 340u: goto L_08979340;
    case 341u: goto L_0897934C;
    case 342u: goto L_08979358;
    case 343u: goto L_08979360;
    case 344u: goto L_08979368;
    case 345u: goto L_08979370;
    case 346u: goto L_08979378;
    case 347u: goto L_08979380;
    case 348u: goto L_08979388;
    case 349u: goto L_08979394;
    case 350u: goto L_08979398;
    case 351u: goto L_089793A0;
    case 352u: goto L_089793AC;
    case 353u: goto L_089793B0;
    case 354u: goto L_089793B8;
    case 355u: goto L_089793C4;
    case 356u: goto L_0897951C;
    case 357u: goto L_08979550;
    case 358u: goto L_0897955C;
    case 359u: goto L_08979570;
    case 360u: goto L_08979584;
    case 361u: goto L_089795A8;
    case 362u: goto L_089795D0;
    case 363u: goto L_089795DC;
    case 364u: goto L_089795E8;
    case 365u: goto L_089795F4;
    case 366u: goto L_089795F8;
    case 367u: goto L_08979618;
    case 368u: goto L_08979620;
    case 369u: goto L_08979628;
    case 370u: goto L_08979634;
    case 371u: goto L_08979660;
    case 372u: goto L_08979668;
    case 373u: goto L_0897966C;
    case 374u: goto L_08979694;
    case 375u: goto L_089796F4;
    case 376u: goto L_089796FC;
    case 377u: goto L_08979708;
    case 378u: goto L_08979710;
    case 379u: goto L_0897971C;
    case 380u: goto L_08979724;
    case 381u: goto L_08979730;
    case 382u: goto L_0897974C;
    case 383u: goto L_08979758;
    case 384u: goto L_08979760;
    case 385u: goto L_08979768;
    case 386u: goto L_08979774;
    case 387u: goto L_08979780;
    case 388u: goto L_08979788;
    case 389u: goto L_08979790;
    case 390u: goto L_08979798;
    case 391u: goto L_089797A0;
    case 392u: goto L_089797A8;
    case 393u: goto L_089797B0;
    case 394u: goto L_089797BC;
    case 395u: goto L_089797C0;
    case 396u: goto L_089797C8;
    case 397u: goto L_089797D4;
    case 398u: goto L_089797D8;
    case 399u: goto L_089797E0;
    case 400u: goto L_089797EC;
    case 401u: goto L_08979820;
    case 402u: goto L_08979858;
    case 403u: goto L_08979860;
    case 404u: goto L_0897986C;
    case 405u: goto L_08979874;
    case 406u: goto L_08979880;
    case 407u: goto L_08979888;
    case 408u: goto L_08979894;
    case 409u: goto L_0897989C;
    case 410u: goto L_089798A4;
    case 411u: goto L_089798AC;
    case 412u: goto L_089798B4;
    case 413u: goto L_089798BC;
    case 414u: goto L_089798C4;
    case 415u: goto L_089798CC;
    case 416u: goto L_089798D8;
    case 417u: goto L_089798DC;
    case 418u: goto L_089798E4;
    case 419u: goto L_089798F0;
    case 420u: goto L_089798F4;
    case 421u: goto L_089798FC;
    case 422u: goto L_08979908;
    case 423u: goto L_0897992C;
    case 424u: goto L_0897996C;
    case 425u: goto L_08979974;
    case 426u: goto L_08979980;
    case 427u: goto L_08979988;
    case 428u: goto L_08979994;
    case 429u: goto L_0897999C;
    case 430u: goto L_089799A8;
    case 431u: goto L_089799B0;
    case 432u: goto L_089799B8;
    case 433u: goto L_089799C0;
    case 434u: goto L_089799C8;
    case 435u: goto L_089799D0;
    case 436u: goto L_089799D8;
    case 437u: goto L_089799E0;
    case 438u: goto L_089799EC;
    case 439u: goto L_089799F0;
    case 440u: goto L_089799F8;
    case 441u: goto L_08979A04;
    case 442u: goto L_08979A08;
    case 443u: goto L_08979A10;
    case 444u: goto L_08979A1C;
    case 445u: goto L_08979A44;
    case 446u: goto L_08979A50;
    case 447u: goto L_08979A5C;
    case 448u: goto L_08979A64;
    case 449u: goto L_08979A7C;
    case 450u: goto L_08979A8C;
    case 451u: goto L_08979A94;
    case 452u: goto L_08979A9C;
    case 453u: goto L_08979AA8;
    case 454u: goto L_08979AB8;
    case 455u: goto L_08979AC0;
    case 456u: goto L_08979AD8;
    case 457u: goto L_08979AE0;
    case 458u: goto L_08979AE4;
    case 459u: goto L_08979AEC;
    case 460u: goto L_08979B04;
    case 461u: goto L_08979B0C;
    case 462u: goto L_08979B10;
    case 463u: goto L_08979B18;
    case 464u: goto L_08979B28;
    case 465u: goto L_08979B68;
    case 466u: goto L_08979B94;
    case 467u: goto L_08979BC0;
    case 468u: goto L_08979BE4;
    case 469u: goto L_08979BE8;
    case 470u: goto L_08979BF4;
    case 471u: goto L_08979C0C;
    case 472u: goto L_08979C10;
    case 473u: goto L_08979C2C;
    case 474u: goto L_08979C5C;
    case 475u: goto L_08979C64;
    case 476u: goto L_08979C78;
    case 477u: goto L_08979CA0;
    case 478u: goto L_08979CA4;
    case 479u: goto L_08979CAC;
    case 480u: goto L_08979CB8;
    case 481u: goto L_08979CC8;
    case 482u: goto L_08979CEC;
    case 483u: goto L_08979CF8;
    case 484u: goto L_08979D00;
    case 485u: goto L_08979D08;
    case 486u: goto L_08979D34;
    case 487u: goto L_08979D7C;
    case 488u: goto L_08979D84;
    case 489u: goto L_08979D98;
    case 490u: goto L_08979DD8;
    case 491u: goto L_08979DE0;
    case 492u: goto L_08979DEC;
    case 493u: goto L_08979E10;
    case 494u: goto L_08979E1C;
    case 495u: goto L_08979E4C;
    case 496u: goto L_08979E58;
    case 497u: goto L_08979E7C;
    case 498u: goto L_08979E88;
    case 499u: goto L_08979E94;
    case 500u: goto L_08979EAC;
    case 501u: goto L_08979ED8;
    case 502u: goto L_08979EE0;
    case 503u: goto L_08979EE8;
    case 504u: goto L_08979EF0;
    case 505u: goto L_08979F24;
    case 506u: goto L_08979F2C;
    case 507u: goto L_08979F34;
    case 508u: goto L_08979F68;
    case 509u: goto L_08979F98;
    case 510u: goto L_08979FA4;
    case 511u: goto L_08979FB8;
    case 512u: goto L_08979FC0;
    case 513u: goto L_08979FEC;
    case 514u: goto L_0897A008;
    case 515u: goto L_0897A010;
    case 516u: goto L_0897A024;
    case 517u: goto L_0897A030;
    case 518u: goto L_0897A040;
    case 519u: goto L_0897A068;
    case 520u: goto L_0897A08C;
    case 521u: goto L_0897A094;
    case 522u: goto L_0897A0A0;
    case 523u: goto L_0897A0DC;
    case 524u: goto L_0897A12C;
    case 525u: goto L_0897A134;
    case 526u: goto L_0897A13C;
    case 527u: goto L_0897A144;
    case 528u: goto L_0897A14C;
    case 529u: goto L_0897A15C;
    case 530u: goto L_0897A168;
    case 531u: goto L_0897A174;
    case 532u: goto L_0897A17C;
    case 533u: goto L_0897A184;
    case 534u: goto L_0897A190;
    case 535u: goto L_0897A1A4;
    case 536u: goto L_0897A1AC;
    case 537u: goto L_0897A1E0;
    case 538u: goto L_0897A1F4;
    case 539u: goto L_0897A200;
    case 540u: goto L_0897A208;
    case 541u: goto L_0897A218;
    case 542u: goto L_0897A21C;
    case 543u: goto L_0897A224;
    case 544u: goto L_0897A258;
    case 545u: goto L_0897A260;
    case 546u: goto L_0897A268;
    case 547u: goto L_0897A270;
    case 548u: goto L_0897A278;
    case 549u: goto L_0897A280;
    case 550u: goto L_0897A2B4;
    case 551u: goto L_0897A2FC;
    case 552u: goto L_0897A304;
    case 553u: goto L_0897A310;
    case 554u: goto L_0897A318;
    case 555u: goto L_0897A324;
    case 556u: goto L_0897A32C;
    case 557u: goto L_0897A338;
    case 558u: goto L_0897A344;
    case 559u: goto L_0897A34C;
    case 560u: goto L_0897A354;
    case 561u: goto L_0897A35C;
    case 562u: goto L_0897A364;
    case 563u: goto L_0897A36C;
    case 564u: goto L_0897A374;
    case 565u: goto L_0897A380;
    case 566u: goto L_0897A388;
    case 567u: goto L_0897A394;
    case 568u: goto L_0897A39C;
    case 569u: goto L_0897A3A8;
    case 570u: goto L_0897A3D4;
    case 571u: goto L_0897A3F0;
    case 572u: goto L_0897A3F8;
    case 573u: goto L_0897A410;
    case 574u: goto L_0897A420;
    case 575u: goto L_0897A580;
    case 576u: goto L_0897A59C;
    case 577u: goto L_0897A5B4;
    case 578u: goto L_0897A5BC;
    case 579u: goto L_0897A5D0;
    case 580u: goto L_0897A5E4;
    case 581u: goto L_0897A600;
    case 582u: goto L_0897A608;
    case 583u: goto L_0897A618;
    case 584u: goto L_0897A650;
    case 585u: goto L_0897A66C;
    case 586u: goto L_0897A678;
    case 587u: goto L_0897A694;
    case 588u: goto L_0897A6A0;
    case 589u: goto L_0897A6B8;
    case 590u: goto L_0897A6C4;
    case 591u: goto L_0897A6D4;
    case 592u: goto L_0897A6EC;
    case 593u: goto L_0897A714;
    case 594u: goto L_0897A71C;
    case 595u: goto L_0897A72C;
    case 596u: goto L_0897A738;
    case 597u: goto L_0897A74C;
    case 598u: goto L_0897A768;
    case 599u: goto L_0897A778;
    case 600u: goto L_0897A788;
    case 601u: goto L_0897A794;
    case 602u: goto L_0897A7A4;
    case 603u: goto L_0897A7B0;
    case 604u: goto L_0897A7C0;
    case 605u: goto L_0897A8A0;
    case 606u: goto L_0897A8D8;
    case 607u: goto L_0897A8E8;
    case 608u: goto L_0897A904;
    case 609u: goto L_0897A90C;
    case 610u: goto L_0897A92C;
    case 611u: goto L_0897A948;
    case 612u: goto L_0897A958;
    case 613u: goto L_0897A96C;
    case 614u: goto L_0897A980;
    case 615u: goto L_0897A99C;
    case 616u: goto L_0897A9A4;
    case 617u: goto L_0897A9A8;
    case 618u: goto L_0897A9B0;
    case 619u: goto L_0897A9C0;
    case 620u: goto L_0897AA18;
    case 621u: goto L_0897AA34;
    case 622u: goto L_0897AA4C;
    case 623u: goto L_0897AA54;
    case 624u: goto L_0897AA70;
    case 625u: goto L_0897AA8C;
    case 626u: goto L_0897AA94;
    case 627u: goto L_0897AA9C;
    case 628u: goto L_0897AAA4;
    case 629u: goto L_0897AAAC;
    case 630u: goto L_0897AAB4;
    case 631u: goto L_0897AABC;
    case 632u: goto L_0897AAE4;
    case 633u: goto L_0897AAF4;
    case 634u: goto L_0897AAF8;
    case 635u: goto L_0897AB04;
    case 636u: goto L_0897AB14;
    case 637u: goto L_0897AB18;
    case 638u: goto L_0897AB30;
    case 639u: goto L_0897AB50;
    case 640u: goto L_0897AB58;
    case 641u: goto L_0897AB5C;
    case 642u: goto L_0897AB68;
    case 643u: goto L_0897AB70;
    case 644u: goto L_0897AB74;
    case 645u: goto L_0897AB88;
    case 646u: goto L_0897ABA8;
    case 647u: goto L_0897ABB4;
    case 648u: goto L_0897ABC8;
    case 649u: goto L_0897ABF8;
    case 650u: goto L_0897AC00;
    case 651u: goto L_0897AC04;
    case 652u: goto L_0897AC14;
    case 653u: goto L_0897AC24;
    case 654u: goto L_0897AC40;
    case 655u: goto L_0897AC5C;
    case 656u: goto L_0897AC64;
    case 657u: goto L_0897AC68;
    case 658u: goto L_0897AC78;
    case 659u: goto L_0897AC90;
    case 660u: goto L_0897AC9C;
    case 661u: goto L_0897ACA8;
    case 662u: goto L_0897ACB8;
    case 663u: goto L_0897ACE0;
    case 664u: goto L_0897ACEC;
    case 665u: goto L_0897AD00;
    case 666u: goto L_0897AD1C;
    case 667u: goto L_0897AD5C;
    case 668u: goto L_0897AD78;
    case 669u: goto L_0897ADB8;
    case 670u: goto L_0897ADE8;
    case 671u: goto L_0897AE08;
    case 672u: goto L_0897AE44;
    case 673u: goto L_0897AE50;
    case 674u: goto L_0897AE64;
    case 675u: goto L_0897AE80;
    case 676u: goto L_0897AE8C;
    case 677u: goto L_0897AE98;
    case 678u: goto L_0897AEA0;
    case 679u: goto L_0897AEB8;
    case 680u: goto L_0897AEC8;
    case 681u: goto L_0897AED4;
    case 682u: goto L_0897AEE8;
    case 683u: goto L_0897AEF8;
    case 684u: goto L_0897AF04;
    case 685u: goto L_0897AF18;
    case 686u: goto L_0897AF20;
    case 687u: goto L_0897AF28;
    case 688u: goto L_0897AF38;
    case 689u: goto L_0897AF44;
    case 690u: goto L_0897AF50;
    case 691u: goto L_0897AF58;
    case 692u: goto L_0897AF60;
    case 693u: goto L_0897AF68;
    case 694u: goto L_0897AF6C;
    case 695u: goto L_0897AF70;
    case 696u: goto L_0897AF7C;
    case 697u: goto L_0897AF80;
    case 698u: goto L_0897AF8C;
    case 699u: goto L_0897AFC0;
    case 700u: goto L_0897AFDC;
    case 701u: goto L_0897AFE8;
    case 702u: goto L_0897B014;
    case 703u: goto L_0897B01C;
    case 704u: goto L_0897B028;
    case 705u: goto L_0897B030;
    case 706u: goto L_0897B050;
    case 707u: goto L_0897B058;
    case 708u: goto L_0897B074;
    case 709u: goto L_0897B090;
    case 710u: goto L_0897B0B0;
    case 711u: goto L_0897B0BC;
    case 712u: goto L_0897B0F0;
    case 713u: goto L_0897B108;
    case 714u: goto L_0897B120;
    case 715u: goto L_0897B144;
    case 716u: goto L_0897B14C;
    case 717u: goto L_0897B164;
    case 718u: goto L_0897B168;
    case 719u: goto L_0897B17C;
    case 720u: goto L_0897B1B4;
    case 721u: goto L_0897B1C0;
    case 722u: goto L_0897B1C8;
    case 723u: goto L_0897B1D8;
    case 724u: goto L_0897B1F4;
    case 725u: goto L_0897B234;
    case 726u: goto L_0897B244;
    case 727u: goto L_0897B258;
    case 728u: goto L_0897B268;
    case 729u: goto L_0897B280;
    case 730u: goto L_0897B284;
    case 731u: goto L_0897B28C;
    case 732u: goto L_0897B2AC;
    case 733u: goto L_0897B2B4;
    case 734u: goto L_0897B2BC;
    case 735u: goto L_0897B2D4;
    case 736u: goto L_0897B2E0;
    case 737u: goto L_0897B2E8;
    case 738u: goto L_0897B2F4;
    case 739u: goto L_0897B320;
    case 740u: goto L_0897B37C;
    case 741u: goto L_0897B388;
    case 742u: goto L_0897B39C;
    case 743u: goto L_0897B3A4;
    case 744u: goto L_0897B3B4;
    case 745u: goto L_0897B3D0;
    case 746u: goto L_0897B3D4;
    case 747u: goto L_0897B3F0;
    case 748u: goto L_0897B478;
    case 749u: goto L_0897B484;
    case 750u: goto L_0897B490;
    case 751u: goto L_0897B4A4;
    case 752u: goto L_0897B4B0;
    case 753u: goto L_0897B4BC;
    case 754u: goto L_0897B4C8;
    case 755u: goto L_0897B4D0;
    case 756u: goto L_0897B4E4;
    case 757u: goto L_0897B4EC;
    case 758u: goto L_0897B4F0;
    case 759u: goto L_0897B4FC;
    case 760u: goto L_0897B510;
    case 761u: goto L_0897B518;
    case 762u: goto L_0897B51C;
    case 763u: goto L_0897B548;
    case 764u: goto L_0897B58C;
    case 765u: goto L_0897B5AC;
    case 766u: goto L_0897B5B8;
    case 767u: goto L_0897B5D4;
    case 768u: goto L_0897B5E0;
    case 769u: goto L_0897B5E8;
    case 770u: goto L_0897B5F0;
    case 771u: goto L_0897B5FC;
    case 772u: goto L_0897B600;
    case 773u: goto L_0897B604;
    case 774u: goto L_0897B610;
    case 775u: goto L_0897B644;
    case 776u: goto L_0897B678;
    case 777u: goto L_0897B680;
    case 778u: goto L_0897B688;
    case 779u: goto L_0897B694;
    case 780u: goto L_0897B69C;
    case 781u: goto L_0897B6B0;
    case 782u: goto L_0897B6D0;
    case 783u: goto L_0897B6F0;
    case 784u: goto L_0897B720;
    case 785u: goto L_0897B738;
    case 786u: goto L_0897B760;
    case 787u: goto L_0897B768;
    case 788u: goto L_0897B770;
    case 789u: goto L_0897B778;
    case 790u: goto L_0897B788;
    case 791u: goto L_0897B790;
    case 792u: goto L_0897B7E0;
    case 793u: goto L_0897B7EC;
    case 794u: goto L_0897B7F8;
    case 795u: goto L_0897B840;
    case 796u: goto L_0897B84C;
    case 797u: goto L_0897B858;
    case 798u: goto L_0897B860;
    case 799u: goto L_0897B868;
    case 800u: goto L_0897B870;
    case 801u: goto L_0897B87C;
    case 802u: goto L_0897B8F4;
    case 803u: goto L_0897B924;
    case 804u: goto L_0897B94C;
    case 805u: goto L_0897B978;
    case 806u: goto L_0897B9A0;
    case 807u: goto L_0897B9CC;
    case 808u: goto L_0897B9F4;
    case 809u: goto L_0897BA20;
    case 810u: goto L_0897BA48;
    case 811u: goto L_0897BA74;
    case 812u: goto L_0897BA9C;
    case 813u: goto L_0897BAC8;
    case 814u: goto L_0897BAF0;
    case 815u: goto L_0897BB1C;
    case 816u: goto L_0897BB84;
    case 817u: goto L_0897BB88;
    case 818u: goto L_0897BB90;
    case 819u: goto L_0897BBA4;
    case 820u: goto L_0897BE28;
    case 821u: goto L_0897BE60;
    case 822u: goto L_0897BE64;
    case 823u: goto L_0897BE6C;
    case 824u: goto L_0897BE78;
    case 825u: goto L_0897BE80;
    case 826u: goto L_0897BE88;
    case 827u: goto L_0897BE8C;
    case 828u: goto L_0897BE98;
    case 829u: goto L_0897BEBC;
    case 830u: goto L_0897BEE0;
    case 831u: goto L_0897BEF8;
    case 832u: goto L_0897BF14;
    case 833u: goto L_0897BF24;
    case 834u: goto L_0897BF34;
    case 835u: goto L_0897BF44;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08978000:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897800Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24256));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897800Cu) goto L_0897800C;
    return;
L_0897800C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24224));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978018u) goto L_08978018;
    return;
L_08978018:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978024u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23960));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978024u) goto L_08978024;
    return;
L_08978024:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24528));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978030u) goto L_08978030;
    return;
L_08978030:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897803Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23952));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897803Cu) goto L_0897803C;
    return;
L_0897803C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24144));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978048u) goto L_08978048;
    return;
L_08978048:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23944));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978054u) goto L_08978054;
    return;
L_08978054:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978060u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23936));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978060u) goto L_08978060;
    return;
L_08978060:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897806Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23928));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897806Cu) goto L_0897806C;
    return;
L_0897806C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23920));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978078u) goto L_08978078;
    return;
L_08978078:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23912));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978084u) goto L_08978084;
    return;
L_08978084:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23904));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978090u) goto L_08978090;
    return;
L_08978090:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897809Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23896));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897809Cu) goto L_0897809C;
    return;
L_0897809C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23888));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780A8u) goto L_089780A8;
    return;
L_089780A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23880));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780B4u) goto L_089780B4;
    return;
L_089780B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23872));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780C0u) goto L_089780C0;
    return;
L_089780C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23864));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780CCu) goto L_089780CC;
    return;
L_089780CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23856));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780D8u) goto L_089780D8;
    return;
L_089780D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23848));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780E4u) goto L_089780E4;
    return;
L_089780E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23840));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780F0u) goto L_089780F0;
    return;
L_089780F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089780FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23832));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089780FCu) goto L_089780FC;
    return;
L_089780FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23824));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978108u) goto L_08978108;
    return;
L_08978108:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978114u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23816));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978114u) goto L_08978114;
    return;
L_08978114:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978120u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23808));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978120u) goto L_08978120;
    return;
L_08978120:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897812Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23800));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897812Cu) goto L_0897812C;
    return;
L_0897812C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978138u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23792));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978138u) goto L_08978138;
    return;
L_08978138:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978144u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23784));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978144u) goto L_08978144;
    return;
L_08978144:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23776));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978150u) goto L_08978150;
    return;
L_08978150:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897815Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23768));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897815Cu) goto L_0897815C;
    return;
L_0897815C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23760));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978168u) goto L_08978168;
    return;
L_08978168:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23752));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978174u) goto L_08978174;
    return;
L_08978174:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23744));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978180u) goto L_08978180;
    return;
L_08978180:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897818Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23736));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897818Cu) goto L_0897818C;
    return;
L_0897818C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978198u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23728));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978198u) goto L_08978198;
    return;
L_08978198:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23720));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781A4u) goto L_089781A4;
    return;
L_089781A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23712));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781B0u) goto L_089781B0;
    return;
L_089781B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23704));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781BCu) goto L_089781BC;
    return;
L_089781BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24504));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781C8u) goto L_089781C8;
    return;
L_089781C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24288));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781D4u) goto L_089781D4;
    return;
L_089781D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24296));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781E0u) goto L_089781E0;
    return;
L_089781E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24304));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781ECu) goto L_089781EC;
    return;
L_089781EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089781F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24280));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x089781F8u) goto L_089781F8;
    return;
L_089781F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24480));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978204u) goto L_08978204;
    return;
L_08978204:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978210u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23696));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978210u) goto L_08978210;
    return;
L_08978210:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897821Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23688));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897821Cu) goto L_0897821C;
    return;
L_0897821C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978228u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978228u) goto L_08978228;
    return;
L_08978228:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978234u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23672));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978234u) goto L_08978234;
    return;
L_08978234:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23664));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978240u) goto L_08978240;
    return;
L_08978240:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897824Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23656));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897824Cu) goto L_0897824C;
    return;
L_0897824C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23648));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978258u) goto L_08978258;
    return;
L_08978258:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978264u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23640));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978264u) goto L_08978264;
    return;
L_08978264:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978270u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24176));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978270u) goto L_08978270;
    return;
L_08978270:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897827Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23632));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x0897827Cu) goto L_0897827C;
    return;
L_0897827C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978288u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23624));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 658u, 0x08A83D58u>(ctx, &aot_mem) && ctx.pc == 0x08978288u) goto L_08978288;
    return;
L_08978288:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23616));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978294u) goto L_08978294;
    return;
L_08978294:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23608));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782A0u) goto L_089782A0;
    return;
L_089782A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23600));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782ACu) goto L_089782AC;
    return;
L_089782AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25216));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782B8u) goto L_089782B8;
    return;
L_089782B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25224));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782C4u) goto L_089782C4;
    return;
L_089782C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23592));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782D0u) goto L_089782D0;
    return;
L_089782D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24776));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782DCu) goto L_089782DC;
    return;
L_089782DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23584));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782E8u) goto L_089782E8;
    return;
L_089782E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089782F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25032));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089782F4u) goto L_089782F4;
    return;
L_089782F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978300u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23576));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978300u) goto L_08978300;
    return;
L_08978300:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897830Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25088));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897830Cu) goto L_0897830C;
    return;
L_0897830C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978318u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978318u) goto L_08978318;
    return;
L_08978318:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978324u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25096));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978324u) goto L_08978324;
    return;
L_08978324:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978330u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25168));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978330u) goto L_08978330;
    return;
L_08978330:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897833Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23568));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897833Cu) goto L_0897833C;
    return;
L_0897833C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978348u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978348u) goto L_08978348;
    return;
L_08978348:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25000));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978354u) goto L_08978354;
    return;
L_08978354:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24992));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978360u) goto L_08978360;
    return;
L_08978360:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897836Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25176));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897836Cu) goto L_0897836C;
    return;
L_0897836C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978378u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25120));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978378u) goto L_08978378;
    return;
L_08978378:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24960));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978384u) goto L_08978384;
    return;
L_08978384:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978390u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23560));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978390u) goto L_08978390;
    return;
L_08978390:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897839Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24768));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897839Cu) goto L_0897839C;
    return;
L_0897839C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25152));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783A8u) goto L_089783A8;
    return;
L_089783A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25144));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783B4u) goto L_089783B4;
    return;
L_089783B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23552));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783C0u) goto L_089783C0;
    return;
L_089783C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783CCu) goto L_089783CC;
    return;
L_089783CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23544));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783D8u) goto L_089783D8;
    return;
L_089783D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24968));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783E4u) goto L_089783E4;
    return;
L_089783E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24832));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783F0u) goto L_089783F0;
    return;
L_089783F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089783FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25112));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089783FCu) goto L_089783FC;
    return;
L_089783FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25104));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978408u) goto L_08978408;
    return;
L_08978408:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978414u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24936));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978414u) goto L_08978414;
    return;
L_08978414:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24928));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978420u) goto L_08978420;
    return;
L_08978420:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897842Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23536));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897842Cu) goto L_0897842C;
    return;
L_0897842C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978438u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24920));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978438u) goto L_08978438;
    return;
L_08978438:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978444u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24912));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978444u) goto L_08978444;
    return;
L_08978444:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978450u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24904));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978450u) goto L_08978450;
    return;
L_08978450:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897845Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24888));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897845Cu) goto L_0897845C;
    return;
L_0897845C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978468u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24840));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978468u) goto L_08978468;
    return;
L_08978468:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978474u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23528));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978474u) goto L_08978474;
    return;
L_08978474:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23520));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978480u) goto L_08978480;
    return;
L_08978480:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897848Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23512));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897848Cu) goto L_0897848C;
    return;
L_0897848C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23504));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978498u) goto L_08978498;
    return;
L_08978498:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25064));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784A4u) goto L_089784A4;
    return;
L_089784A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25040));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784B0u) goto L_089784B0;
    return;
L_089784B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25048));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784BCu) goto L_089784BC;
    return;
L_089784BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25072));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784C8u) goto L_089784C8;
    return;
L_089784C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25080));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784D4u) goto L_089784D4;
    return;
L_089784D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25128));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784E0u) goto L_089784E0;
    return;
L_089784E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24760));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784ECu) goto L_089784EC;
    return;
L_089784EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089784F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25232));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089784F8u) goto L_089784F8;
    return;
L_089784F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24976));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978504u) goto L_08978504;
    return;
L_08978504:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24984));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978510u) goto L_08978510;
    return;
L_08978510:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897851Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23496));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897851Cu) goto L_0897851C;
    return;
L_0897851C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24808));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978528u) goto L_08978528;
    return;
L_08978528:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978534u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23488));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978534u) goto L_08978534;
    return;
L_08978534:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978540u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24816));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978540u) goto L_08978540;
    return;
L_08978540:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897854Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23480));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897854Cu) goto L_0897854C;
    return;
L_0897854C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25136));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978558u) goto L_08978558;
    return;
L_08978558:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23472));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978564u) goto L_08978564;
    return;
L_08978564:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978570u) goto L_08978570;
    return;
L_08978570:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897857Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24872));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897857Cu) goto L_0897857C;
    return;
L_0897857C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24864));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978588u) goto L_08978588;
    return;
L_08978588:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978594u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24856));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978594u) goto L_08978594;
    return;
L_08978594:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24848));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785A0u) goto L_089785A0;
    return;
L_089785A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24608));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785ACu) goto L_089785AC;
    return;
L_089785AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23464));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785B8u) goto L_089785B8;
    return;
L_089785B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25008));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785C4u) goto L_089785C4;
    return;
L_089785C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25208));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785D0u) goto L_089785D0;
    return;
L_089785D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23456));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785DCu) goto L_089785DC;
    return;
L_089785DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25024));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785E8u) goto L_089785E8;
    return;
L_089785E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089785F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25016));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089785F4u) goto L_089785F4;
    return;
L_089785F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978600u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23448));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978600u) goto L_08978600;
    return;
L_08978600:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897860Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24952));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897860Cu) goto L_0897860C;
    return;
L_0897860C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978618u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25192));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978618u) goto L_08978618;
    return;
L_08978618:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978624u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23440));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978624u) goto L_08978624;
    return;
L_08978624:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978630u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23432));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978630u) goto L_08978630;
    return;
L_08978630:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897863Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24752));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897863Cu) goto L_0897863C;
    return;
L_0897863C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24736));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978648u) goto L_08978648;
    return;
L_08978648:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978654u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24712));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978654u) goto L_08978654;
    return;
L_08978654:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24784));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978660u) goto L_08978660;
    return;
L_08978660:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897866Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24696));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897866Cu) goto L_0897866C;
    return;
L_0897866C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24720));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978678u) goto L_08978678;
    return;
L_08978678:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978684u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978684u) goto L_08978684;
    return;
L_08978684:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24744));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978690u) goto L_08978690;
    return;
L_08978690:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897869Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24728));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897869Cu) goto L_0897869C;
    return;
L_0897869C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24704));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786A8u) goto L_089786A8;
    return;
L_089786A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24672));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786B4u) goto L_089786B4;
    return;
L_089786B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24656));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786C0u) goto L_089786C0;
    return;
L_089786C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24664));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786CCu) goto L_089786CC;
    return;
L_089786CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786D8u) goto L_089786D8;
    return;
L_089786D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786E4u) goto L_089786E4;
    return;
L_089786E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24648));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786F0u) goto L_089786F0;
    return;
L_089786F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089786FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24640));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089786FCu) goto L_089786FC;
    return;
L_089786FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978708u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24616));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978708u) goto L_08978708;
    return;
L_08978708:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24624));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978714u) goto L_08978714;
    return;
L_08978714:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24632));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978720u) goto L_08978720;
    return;
L_08978720:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897872Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24600));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897872Cu) goto L_0897872C;
    return;
L_0897872C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978738u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23424));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978738u) goto L_08978738;
    return;
L_08978738:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978744u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23416));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978744u) goto L_08978744;
    return;
L_08978744:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978750u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23408));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978750u) goto L_08978750;
    return;
L_08978750:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897875Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24944));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897875Cu) goto L_0897875C;
    return;
L_0897875C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23400));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978768u) goto L_08978768;
    return;
L_08978768:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978774u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23392));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978774u) goto L_08978774;
    return;
L_08978774:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978780u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23384));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978780u) goto L_08978780;
    return;
L_08978780:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0897878Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24792));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x0897878Cu) goto L_0897878C;
    return;
L_0897878C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08978798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24680));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x08978798u) goto L_08978798;
    return;
L_08978798:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089787A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089787A4u) goto L_089787A4;
    return;
L_089787A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089787B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24688));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089787B0u) goto L_089787B0;
    return;
L_089787B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089787BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25240));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089787BCu) goto L_089787BC;
    return;
L_089787BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089787C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24592));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 688u, 0x08A83F80u>(ctx, &aot_mem) && ctx.pc == 0x089787C8u) goto L_089787C8;
    return;
L_089787C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089787D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08978804u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30016));
    ctx.pc = 0x08AB456Cu;
    return;
L_08978804:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_089789C0;
      }
      goto L_08978810;
    }
L_08978810:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (2200u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26736), ctx.gpr[19]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28900));
    ctx.gpr[31] = (0x0897882Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30128));
    ctx.pc = 0x08AB456Cu;
    return;
L_0897882C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08978998;
      }
      goto L_08978838;
    }
L_08978838:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (2200u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(26732), ctx.gpr[19]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28920));
    ctx.gpr[31] = (0x08978854u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30052));
    ctx.pc = 0x08AB456Cu;
    return;
L_08978854:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08978968;
      }
      goto L_08978860;
    }
L_08978860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26736)));
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(26740), ctx.gpr[19]);
    ctx.gpr[31] = (0x08978874u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB405Cu;
    return;
L_08978874:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26732)));
      if (branch_taken) {
          goto L_08978930;
      }
      goto L_08978880;
    }
L_08978880:
    ctx.gpr[31] = (0x08978888u);
    // nop
    ctx.pc = 0x08AB4434u;
    return;
L_08978888:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_089788F0;
      }
      goto L_08978894;
    }
L_08978894:
    ctx.gpr[31] = (0x0897889Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26740)));
    ctx.pc = 0x08AB473Cu;
    return;
L_0897889C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089789E0;
      }
      goto L_089788A8;
    }
L_089788A8:
    ctx.gpr[31] = (0x089788B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26732)));
    ctx.pc = 0x08AB443Cu;
    return;
L_089788B0:
    ctx.gpr[31] = (0x089788B8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4064u;
    return;
L_089788B8:
    ctx.gpr[31] = (0x089788C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26732)));
    ctx.pc = 0x08AB457Cu;
    return;
L_089788C0:
    ctx.gpr[31] = (0x089788C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26736)));
    ctx.pc = 0x08AB457Cu;
    return;
L_089788C8:
    ctx.gpr[31] = (0x089788D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26740)));
    ctx.pc = 0x08AB457Cu;
    return;
L_089788D0:
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
L_089788F0:
    ctx.gpr[31] = (0x089788F8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4064u;
    return;
L_089788F8:
    ctx.gpr[31] = (0x08978900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26732)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978900:
    ctx.gpr[31] = (0x08978908u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26736)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978908:
    ctx.gpr[31] = (0x08978910u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26740)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978910:
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
L_08978930:
    ctx.gpr[31] = (0x08978938u);
    // nop
    ctx.pc = 0x08AB457Cu;
    return;
L_08978938:
    ctx.gpr[31] = (0x08978940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26736)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978940:
    ctx.gpr[31] = (0x08978948u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26740)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978948:
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
L_08978968:
    ctx.gpr[31] = (0x08978970u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26732)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978970:
    ctx.gpr[31] = (0x08978978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26736)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978978:
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
L_08978998:
    ctx.gpr[31] = (0x089789A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26736)));
    ctx.pc = 0x08AB457Cu;
    return;
L_089789A0:
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
L_089789C0:
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
L_089789E0:
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
L_08978A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08978A18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26732)));
    ctx.pc = 0x08AB443Cu;
    return;
L_08978A18:
    ctx.gpr[31] = (0x08978A20u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4064u;
    return;
L_08978A20:
    ctx.gpr[31] = (0x08978A28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26732)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978A28:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[31] = (0x08978A34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26736)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978A34:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[31] = (0x08978A40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26740)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08978A40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
      if (branch_taken) {
          goto L_08978A8C;
      }
      goto L_08978A64;
    }
L_08978A64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_08978A8C;
      }
      goto L_08978A6C;
    }
L_08978A6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A8C;
      }
      goto L_08978A74;
    }
L_08978A74:
    ctx.gpr[31] = (0x08978A7Cu);
    // nop
    ctx.pc = 0x08AB4414u;
    return;
L_08978A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A8C;
      }
      goto L_08978A84;
    }
L_08978A84:
    ctx.gpr[31] = (0x08978A8Cu);
    // nop
    ctx.pc = 0x08AB440Cu;
    return;
L_08978A8C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08978AB0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4588), 0u);
    ctx.pc = 0x08AB4734u;
    return;
L_08978AB0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (4u << 16u);
      if (branch_taken) {
          goto L_08978B38;
      }
      goto L_08978AD8;
    }
L_08978AD8:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B48;
      }
      goto L_08978AE8;
    }
L_08978AE8:
    ctx.gpr[31] = (0x08978AF0u);
    // nop
    ctx.pc = 0x08AB414Cu;
    return;
L_08978AF0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08978B20;
      }
      goto L_08978B00;
    }
L_08978B00:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08978B20;
      }
      goto L_08978B08;
    }
L_08978B08:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08978B20;
      }
      goto L_08978B10;
    }
L_08978B10:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08978B24;
      }
      goto L_08978B18;
    }
L_08978B18:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4576), ctx.gpr[4]);
    goto L_08978B20;
L_08978B20:
    ctx.gpr[5] = (2221u << 16u);
    goto L_08978B24;
L_08978B24:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4584), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B38:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08978B48;
      }
      goto L_08978B44;
    }
L_08978B44:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4584), 0u);
    goto L_08978B48;
L_08978B48:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978B58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08978BDC;
      }
      goto L_08978B88;
    }
L_08978B88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08978B98u);
    ctx.gpr[6] = (0u | 420u);
    goto L_08978FF8;
L_08978B98:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08978BB4;
      }
      goto L_08978BA4;
    }
L_08978BA4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08978C08;
      }
      goto L_08978BAC;
    }
L_08978BAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08978C10;
      }
      goto L_08978BB4;
    }
L_08978BB4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978BDC:
    ctx.gpr[2] = (32769u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978C08:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08978C10;
L_08978C10:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08978C84;
      }
      goto L_08978C18;
    }
L_08978C18:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26788)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26792)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08978C34u);
    ctx.gpr[8] = (0u | 2u);
    goto L_0897951C;
L_08978C34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08978C50u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0897951C;
L_08978C50:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[19]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08978C88;
    }
    goto L_08978C5C;
L_08978C5C:
    ctx.gpr[31] = (0x08978C64u);
    // nop
    goto L_0897A6A0;
L_08978C64:
    ctx.gpr[31] = (0x08978C6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47D4u;
    return;
L_08978C6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08978D28;
      }
      goto L_08978C74;
    }
L_08978C74:
    ctx.gpr[31] = (0x08978C7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_08978C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978D28;
      }
      goto L_08978C84;
    }
L_08978C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08978C88;
L_08978C88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08978D00;
      }
      goto L_08978C90;
    }
L_08978C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08978CA8u);
    ctx.gpr[5] = (0u | 151u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978CA8u) goto L_08978CA8;
    return;
L_08978CA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08978CFC;
      }
      goto L_08978CB4;
    }
L_08978CB4:
    ctx.gpr[31] = (0x08978CBCu);
    // nop
    goto L_0897A6A0;
L_08978CBC:
    ctx.gpr[31] = (0x08978CC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47D4u;
    return;
L_08978CC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08978CD4;
      }
      goto L_08978CCC;
    }
L_08978CCC:
    ctx.gpr[31] = (0x08978CD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_08978CD4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978CFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08978D00;
L_08978D00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08978D0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08979288;
L_08978D0C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08978D18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47D4u;
    return;
L_08978D18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08978D28;
      }
      goto L_08978D20;
    }
L_08978D20:
    ctx.gpr[31] = (0x08978D28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_08978D28:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (15u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16960));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_08978F20;
L_08978F20:
    ctx.gpr[31] = (0x08978F28u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08978F28:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978F48;
      }
      goto L_08978F34;
    }
L_08978F34:
    ctx.gpr[31] = (0x08978F3Cu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_08978F3C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08978FCC;
      }
      goto L_08978F48;
    }
L_08978F48:
    ctx.gpr[31] = (0x08978F50u);
    // nop
    goto L_0897A650;
L_08978F50:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08978FCC;
      }
      goto L_08978F5C;
    }
L_08978F5C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08978F68u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB47DCu;
    return;
L_08978F68:
    ctx.gpr[31] = (0x08978F70u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_0897A6A0;
L_08978F70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08978FCC;
      }
      goto L_08978F78;
    }
L_08978F78:
    ctx.gpr[31] = (0x08978F80u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08978F80:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08978FA4;
      }
      goto L_08978F88;
    }
L_08978F88:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08978FA4;
      }
      goto L_08978F90;
    }
L_08978F90:
    ctx.gpr[31] = (0x08978F98u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08978F98:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978FB8;
      }
      goto L_08978FA4;
    }
L_08978FA4:
    ctx.gpr[31] = (0x08978FACu);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08AB442Cu;
    return;
L_08978FAC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08978FCC;
      }
      goto L_08978FB8;
    }
L_08978FB8:
    ctx.gpr[31] = (0x08978FC0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_08978FC0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08978F20;
      }
      goto L_08978FCC;
    }
L_08978FCC:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_08978FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[22] = (15u << 16u);
    ctx.gpr[23] = (32801u << 16u);
    ctx.gpr[30] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16960));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(3));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_0897904C;
L_0897904C:
    ctx.gpr[31] = (0x08979054u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08979054:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08979074;
      }
      goto L_08979060;
    }
L_08979060:
    ctx.gpr[31] = (0x08979068u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979068:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979134;
      }
      goto L_08979074;
    }
L_08979074:
    ctx.gpr[31] = (0x0897907Cu);
    // nop
    goto L_0897A678;
L_0897907C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08979134;
      }
      goto L_08979088;
    }
L_08979088:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08979094u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB478Cu;
    return;
L_08979094:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089790A8;
      }
      goto L_089790A0;
    }
L_089790A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089790C8;
      }
      goto L_089790A8;
    }
L_089790A8:
    ctx.gpr[31] = (0x089790B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_089790B0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089790C8;
      }
      goto L_089790BC;
    }
L_089790BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_089790C8;
L_089790C8:
    ctx.gpr[31] = (0x089790D0u);
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0897A6A0;
L_089790D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08979134;
      }
      goto L_089790D8;
    }
L_089790D8:
    ctx.gpr[31] = (0x089790E0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08AB4614u;
    return;
L_089790E0:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[23];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08979108;
      }
      goto L_089790E8;
    }
L_089790E8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08979108;
      }
      goto L_089790F0;
    }
L_089790F0:
    ctx.gpr[31] = (0x089790F8u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089790F8:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08979120;
      }
      goto L_08979104;
    }
L_08979104:
    ctx.gpr[4] = (0u | 2u);
    goto L_08979108;
L_08979108:
    ctx.gpr[31] = (0x08979110u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979110:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979134;
      }
      goto L_0897911C;
    }
L_0897911C:
    ctx.gpr[4] = (0u | 32u);
    goto L_08979120;
L_08979120:
    ctx.gpr[31] = (0x08979128u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979128:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897904C;
      }
      goto L_08979134;
    }
L_08979134:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (15u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16960));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_089791B0;
L_089791B0:
    ctx.gpr[31] = (0x089791B8u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089791B8:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089791D8;
      }
      goto L_089791C4;
    }
L_089791C4:
    ctx.gpr[31] = (0x089791CCu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_089791CC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897925C;
      }
      goto L_089791D8;
    }
L_089791D8:
    ctx.gpr[31] = (0x089791E0u);
    // nop
    goto L_0897A650;
L_089791E0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897925C;
      }
      goto L_089791EC;
    }
L_089791EC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089791F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB476Cu;
    return;
L_089791F8:
    ctx.gpr[31] = (0x08979200u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_0897A6A0;
L_08979200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897925C;
      }
      goto L_08979208;
    }
L_08979208:
    ctx.gpr[31] = (0x08979210u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08979210:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08979234;
      }
      goto L_08979218;
    }
L_08979218:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08979234;
      }
      goto L_08979220;
    }
L_08979220:
    ctx.gpr[31] = (0x08979228u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08979228:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979248;
      }
      goto L_08979234;
    }
L_08979234:
    ctx.gpr[31] = (0x0897923Cu);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08AB442Cu;
    return;
L_0897923C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897925C;
      }
      goto L_08979248;
    }
L_08979248:
    ctx.gpr[31] = (0x08979250u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_08979250:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089791B0;
      }
      goto L_0897925C;
    }
L_0897925C:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_08979288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[22] = (15u << 16u);
    ctx.gpr[23] = (32801u << 16u);
    ctx.gpr[30] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16960));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(3));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_089792DC;
L_089792DC:
    ctx.gpr[31] = (0x089792E4u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089792E4:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08979304;
      }
      goto L_089792F0;
    }
L_089792F0:
    ctx.gpr[31] = (0x089792F8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089792F8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_089793C4;
      }
      goto L_08979304;
    }
L_08979304:
    ctx.gpr[31] = (0x0897930Cu);
    // nop
    goto L_0897A678;
L_0897930C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089793C4;
      }
      goto L_08979318;
    }
L_08979318:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08979324u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4794u;
    return;
L_08979324:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08979338;
      }
      goto L_08979330;
    }
L_08979330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979358;
      }
      goto L_08979338;
    }
L_08979338:
    ctx.gpr[31] = (0x08979340u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_08979340:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979358;
      }
      goto L_0897934C;
    }
L_0897934C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_08979358;
L_08979358:
    ctx.gpr[31] = (0x08979360u);
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0897A6A0;
L_08979360:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089793C4;
      }
      goto L_08979368;
    }
L_08979368:
    ctx.gpr[31] = (0x08979370u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08AB4614u;
    return;
L_08979370:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[23];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08979398;
      }
      goto L_08979378;
    }
L_08979378:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08979398;
      }
      goto L_08979380;
    }
L_08979380:
    ctx.gpr[31] = (0x08979388u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08979388:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_089793B0;
      }
      goto L_08979394;
    }
L_08979394:
    ctx.gpr[4] = (0u | 2u);
    goto L_08979398;
L_08979398:
    ctx.gpr[31] = (0x089793A0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089793A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_089793C4;
      }
      goto L_089793AC;
    }
L_089793AC:
    ctx.gpr[4] = (0u | 32u);
    goto L_089793B0;
L_089793B0:
    ctx.gpr[31] = (0x089793B8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089793B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089792DC;
      }
      goto L_089793C4;
    }
L_089793C4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897951C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08979550u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0897A678;
L_08979550:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
      if (branch_taken) {
          goto L_089795A8;
      }
      goto L_0897955C;
    }
L_0897955C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08979570u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4774u;
    return;
L_08979570:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26788)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26792)));
      if (branch_taken) {
          goto L_089795D0;
      }
      goto L_08979584;
    }
L_08979584:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08979618;
      }
      goto L_089795A8;
    }
L_089795A8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089795D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089795DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_089795DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
      if (branch_taken) {
          goto L_089795F4;
      }
      goto L_089795E8;
    }
L_089795E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089795F8;
      }
      goto L_089795F4;
    }
L_089795F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089795F8;
L_089795F8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    goto L_08979618;
L_08979618:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979660;
      }
      goto L_08979620;
    }
L_08979620:
    ctx.gpr[31] = (0x08979628u);
    // nop
    goto L_0897A6A0;
L_08979628:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897966C;
      }
      goto L_08979634;
    }
L_08979634:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979660:
    ctx.gpr[31] = (0x08979668u);
    // nop
    goto L_0897A6A0;
L_08979668:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    goto L_0897966C;
L_0897966C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[21] = (15u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16960));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    goto L_089796F4;
L_089796F4:
    ctx.gpr[31] = (0x089796FCu);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089796FC:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_0897971C;
      }
      goto L_08979708;
    }
L_08979708:
    ctx.gpr[31] = (0x08979710u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979710:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089797EC;
      }
      goto L_0897971C;
    }
L_0897971C:
    ctx.gpr[31] = (0x08979724u);
    // nop
    goto L_0897A678;
L_08979724:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089797EC;
      }
      goto L_08979730;
    }
L_08979730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0897974Cu);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08AB47C4u;
    return;
L_0897974C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08979760;
      }
      goto L_08979758;
    }
L_08979758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979780;
      }
      goto L_08979760;
    }
L_08979760:
    ctx.gpr[31] = (0x08979768u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_08979768:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979780;
      }
      goto L_08979774;
    }
L_08979774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08979780;
L_08979780:
    ctx.gpr[31] = (0x08979788u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897A6A0;
L_08979788:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089797EC;
      }
      goto L_08979790;
    }
L_08979790:
    ctx.gpr[31] = (0x08979798u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB4614u;
    return;
L_08979798:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089797C0;
      }
      goto L_089797A0;
    }
L_089797A0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089797C0;
      }
      goto L_089797A8;
    }
L_089797A8:
    ctx.gpr[31] = (0x089797B0u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089797B0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_089797D8;
      }
      goto L_089797BC;
    }
L_089797BC:
    ctx.gpr[4] = (0u | 2u);
    goto L_089797C0;
L_089797C0:
    ctx.gpr[31] = (0x089797C8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089797C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089797EC;
      }
      goto L_089797D4;
    }
L_089797D4:
    ctx.gpr[4] = (0u | 32u);
    goto L_089797D8;
L_089797D8:
    ctx.gpr[31] = (0x089797E0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089797E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089796F4;
      }
      goto L_089797EC;
    }
L_089797EC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08979820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (15u << 16u);
    ctx.gpr[18] = (32801u << 16u);
    ctx.gpr[17] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16960));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08979858;
L_08979858:
    ctx.gpr[31] = (0x08979860u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08979860:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08979880;
      }
      goto L_0897986C;
    }
L_0897986C:
    ctx.gpr[31] = (0x08979874u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979874:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979908;
      }
      goto L_08979880;
    }
L_08979880:
    ctx.gpr[31] = (0x08979888u);
    // nop
    goto L_0897A678;
L_08979888:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979908;
      }
      goto L_08979894;
    }
L_08979894:
    ctx.gpr[31] = (0x0897989Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB47ACu;
    return;
L_0897989C:
    ctx.gpr[31] = (0x089798A4u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0897A6A0;
L_089798A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08979908;
      }
      goto L_089798AC;
    }
L_089798AC:
    ctx.gpr[31] = (0x089798B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08AB4614u;
    return;
L_089798B4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089798DC;
      }
      goto L_089798BC;
    }
L_089798BC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089798DC;
      }
      goto L_089798C4;
    }
L_089798C4:
    ctx.gpr[31] = (0x089798CCu);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089798CC:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_089798F4;
      }
      goto L_089798D8;
    }
L_089798D8:
    ctx.gpr[4] = (0u | 2u);
    goto L_089798DC;
L_089798DC:
    ctx.gpr[31] = (0x089798E4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089798E4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979908;
      }
      goto L_089798F0;
    }
L_089798F0:
    ctx.gpr[4] = (0u | 32u);
    goto L_089798F4;
L_089798F4:
    ctx.gpr[31] = (0x089798FCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089798FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08979858;
      }
      goto L_08979908;
    }
L_08979908:
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
L_0897992C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (15u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    ctx.gpr[18] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16960));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_0897996C;
L_0897996C:
    ctx.gpr[31] = (0x08979974u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08979974:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08979994;
      }
      goto L_08979980;
    }
L_08979980:
    ctx.gpr[31] = (0x08979988u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979988:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979A1C;
      }
      goto L_08979994;
    }
L_08979994:
    ctx.gpr[31] = (0x0897999Cu);
    // nop
    goto L_0897A678;
L_0897999C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08979A1C;
      }
      goto L_089799A8;
    }
L_089799A8:
    ctx.gpr[31] = (0x089799B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB47BCu;
    return;
L_089799B0:
    ctx.gpr[31] = (0x089799B8u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0897A6A0;
L_089799B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08979A1C;
      }
      goto L_089799C0;
    }
L_089799C0:
    ctx.gpr[31] = (0x089799C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08AB4614u;
    return;
L_089799C8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089799F0;
      }
      goto L_089799D0;
    }
L_089799D0:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089799F0;
      }
      goto L_089799D8;
    }
L_089799D8:
    ctx.gpr[31] = (0x089799E0u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_089799E0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08979A08;
      }
      goto L_089799EC;
    }
L_089799EC:
    ctx.gpr[4] = (0u | 2u);
    goto L_089799F0;
L_089799F0:
    ctx.gpr[31] = (0x089799F8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_089799F8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979A1C;
      }
      goto L_08979A04;
    }
L_08979A04:
    ctx.gpr[4] = (0u | 32u);
    goto L_08979A08;
L_08979A08:
    ctx.gpr[31] = (0x08979A10u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB441Cu;
    return;
L_08979A10:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897996C;
      }
      goto L_08979A1C;
    }
L_08979A1C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_08979A44:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 47u);
      if (branch_taken) {
          goto L_08979A7C;
      }
      goto L_08979A50;
    }
L_08979A50:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08979A64;
      }
      goto L_08979A5C;
    }
L_08979A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08979A7C;
      }
      goto L_08979A64;
    }
L_08979A64:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08979A50;
      }
      goto L_08979A7C;
    }
L_08979A7C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979A94;
      }
      goto L_08979A8C;
    }
L_08979A8C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979A94:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979A9C:
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26768), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979AA8:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26768)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08979B18;
      }
      goto L_08979AB8;
    }
L_08979AB8:
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08979AE4;
    }
    goto L_08979AC0;
L_08979AC0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08979AC0;
      }
      goto L_08979AD8;
    }
L_08979AD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26768), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08979B0C;
      }
      goto L_08979AE0;
    }
L_08979AE0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08979AE4;
L_08979AE4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08979B10;
    }
    goto L_08979AEC;
L_08979AEC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08979AEC;
      }
      goto L_08979B04;
    }
L_08979B04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26768), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08979B0C;
      }
      goto L_08979B0C;
    }
L_08979B0C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08979B10;
L_08979B10:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26768), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08979B18;
L_08979B18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08979B68u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08979AA8;
L_08979B68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26760)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08979BE8;
      }
      goto L_08979BC0;
    }
L_08979BC0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[31] = (0x08979BE4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08979B94;
L_08979BE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08979BE8;
L_08979BE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08979C10;
      }
      goto L_08979BF4;
    }
L_08979BF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08979BF4;
      }
      goto L_08979C0C;
    }
L_08979C0C:
    ctx.gpr[5] = (0u | 47u);
    goto L_08979C10;
L_08979C10:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[31]);
    ctx.gpr[31] = (0x08979C5Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08979820;
L_08979C5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08979C78;
      }
      goto L_08979C64;
    }
L_08979C64:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 4096u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08979CA0;
      }
      goto L_08979C78;
    }
L_08979C78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979CA0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08979CA4;
L_08979CA4:
    ctx.gpr[31] = (0x08979CACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0897992C;
L_08979CAC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08979D00;
      }
      goto L_08979CB8;
    }
L_08979CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08979CF8;
      }
      goto L_08979CC8;
    }
L_08979CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08979CECu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08979AA8;
L_08979CEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08979CF8;
L_08979CF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08979CA4;
      }
      goto L_08979D00;
    }
L_08979D00:
    ctx.gpr[31] = (0x08979D08u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB47CCu;
    return;
L_08979D08:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979D34:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(26756), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4096 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u | 4096u);
        goto L_08979D7C;
    }
    goto L_08979D7C;
L_08979D7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979D84:
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26784), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26744), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 420u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[31]);
    ctx.gpr[31] = (0x08979DD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28952));
    goto L_08978FF8;
L_08979DD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08979F68;
      }
      goto L_08979DE0;
    }
L_08979DE0:
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[31] = (0x08979DECu);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9CCD4u>(ctx, &aot_mem) && ctx.pc == 0x08979DECu) goto L_08979DEC;
    return;
L_08979DEC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (258u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2048u);
    ctx.gpr[31] = (0x08979E10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08979694;
L_08979E10:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979F24;
      }
      goto L_08979E1C;
    }
L_08979E1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(135)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(133)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 8u);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[31] = (0x08979E4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x08979E4Cu) goto L_08979E4C;
    return;
L_08979E4C:
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[31] = (0x08979E58u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 237u, 0x08A9CCD4u>(ctx, &aot_mem) && ctx.pc == 0x08979E58u) goto L_08979E58;
    return;
L_08979E58:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (258u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08979E7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08979694;
L_08979E7C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979EE0;
      }
      goto L_08979E88;
    }
L_08979E88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[20]);
    ctx.gpr[31] = (0x08979E94u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08979E94:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26784)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26756)));
    ctx.gpr[31] = (0x08979EACu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08979A9C;
L_08979EAC:
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(26760), ctx.gpr[19]);
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(26748), 0u);
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (2222u << 16u);
      if (branch_taken) {
          goto L_08979F98;
      }
      goto L_08979ED8;
    }
L_08979ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08979FC0;
      }
      goto L_08979EE0;
    }
L_08979EE0:
    ctx.gpr[31] = (0x08979EE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x08979EE8u) goto L_08979EE8;
    return;
L_08979EE8:
    ctx.gpr[31] = (0x08979EF0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08979EF0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F24:
    ctx.gpr[31] = (0x08979F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x08979F2Cu) goto L_08979F2C;
    return;
L_08979F2C:
    ctx.gpr[31] = (0x08979F34u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08979F34:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F98:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08979FA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08979B28;
L_08979FA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08979F98;
      }
      goto L_08979FB8;
    }
L_08979FB8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(26748), ctx.gpr[17]);
    ctx.gpr[4] = (2222u << 16u);
    goto L_08979FC0;
L_08979FC0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26764), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26764)));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(26752), 0u);
      if (branch_taken) {
          goto L_0897A08C;
      }
      goto L_08979FEC;
    }
L_08979FEC:
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28972));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28980));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A008;
L_0897A008:
    ctx.gpr[31] = (0x0897A010u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08979B94;
L_0897A010:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0897A024u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0897A024u) goto L_0897A024;
    return;
L_0897A024:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897A030u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08979C2C;
L_0897A030:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(26748)));
        goto L_0897A068;
    }
    goto L_0897A040;
L_0897A040:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26752)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(26752), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(26748)));
    goto L_0897A068;
L_0897A068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(26760)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897A008;
      }
      goto L_0897A08C;
    }
L_0897A08C:
    ctx.gpr[31] = (0x0897A094u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 241u, 0x08A9CD20u>(ctx, &aot_mem) && ctx.pc == 0x0897A094u) goto L_0897A094;
    return;
L_0897A094:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0897A0A0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08979AA8;
L_0897A0A0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26784)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A0DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[22]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26760)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A12Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08979A44;
L_0897A12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897A260;
      }
      goto L_0897A134;
    }
L_0897A134:
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A13C;
L_0897A13C:
    ctx.gpr[31] = (0x0897A144u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08979A44;
L_0897A144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897A1E0;
      }
      goto L_0897A14C;
    }
L_0897A14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(26748)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A1A4;
      }
      goto L_0897A15C;
    }
L_0897A15C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0897A184;
    }
    goto L_0897A168;
L_0897A168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0897A174u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0897A174u) goto L_0897A174;
    return;
L_0897A174:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0897A184;
    }
    goto L_0897A17C;
L_0897A17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0897A1A4;
      }
      goto L_0897A184;
    }
L_0897A184:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A1A4;
      }
      goto L_0897A190;
    }
L_0897A190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(26748)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0897A15C;
      }
      goto L_0897A1A4;
    }
L_0897A1A4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0897A258;
      }
      goto L_0897A1AC;
    }
L_0897A1AC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A1E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897A21C;
      }
      goto L_0897A1F4;
    }
L_0897A1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0897A200u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0897A200u) goto L_0897A200;
    return;
L_0897A200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_0897A218;
      }
      goto L_0897A208;
    }
L_0897A208:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0897A1F4;
      }
      goto L_0897A218;
    }
L_0897A218:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_0897A21C;
L_0897A21C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A258;
      }
      goto L_0897A224;
    }
L_0897A224:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A258:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897A13C;
      }
      goto L_0897A260;
    }
L_0897A260:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A270;
      }
      goto L_0897A268;
    }
L_0897A268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0897A270;
L_0897A270:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A280;
      }
      goto L_0897A278;
    }
L_0897A278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0897A280;
L_0897A280:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (15u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16960));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_0897A2FC;
L_0897A2FC:
    ctx.gpr[31] = (0x0897A304u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_0897A304:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A324;
      }
      goto L_0897A310;
    }
L_0897A310:
    ctx.gpr[31] = (0x0897A318u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_0897A318:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897A3A8;
      }
      goto L_0897A324;
    }
L_0897A324:
    ctx.gpr[31] = (0x0897A32Cu);
    // nop
    goto L_0897A650;
L_0897A32C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897A3A8;
      }
      goto L_0897A338;
    }
L_0897A338:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897A344u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB471Cu;
    return;
L_0897A344:
    ctx.gpr[31] = (0x0897A34Cu);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_0897A6A0;
L_0897A34C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897A3A8;
      }
      goto L_0897A354;
    }
L_0897A354:
    ctx.gpr[31] = (0x0897A35Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08AB469Cu;
    return;
L_0897A35C:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0897A380;
      }
      goto L_0897A364;
    }
L_0897A364:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897A380;
      }
      goto L_0897A36C;
    }
L_0897A36C:
    ctx.gpr[31] = (0x0897A374u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_0897A374:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A394;
      }
      goto L_0897A380;
    }
L_0897A380:
    ctx.gpr[31] = (0x0897A388u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08AB442Cu;
    return;
L_0897A388:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897A3A8;
      }
      goto L_0897A394;
    }
L_0897A394:
    ctx.gpr[31] = (0x0897A39Cu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08AB442Cu;
    return;
L_0897A39C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897A2FC;
      }
      goto L_0897A3A8;
    }
L_0897A3A8:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_0897A3D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A3F0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0897A2B4;
L_0897A3F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0897A420;
      }
      goto L_0897A3F8;
    }
L_0897A3F8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897A410u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB4714u;
    return;
L_0897A410:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_0897A5D0;
      }
      goto L_0897A59C;
    }
L_0897A59C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0897A5B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28992));
    ctx.pc = 0x08AB4554u;
    return;
L_0897A5B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26776), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0897A5D0;
      }
      goto L_0897A5BC;
    }
L_0897A5BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26776)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A5D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A5E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897A618;
      }
      goto L_0897A600;
    }
L_0897A600:
    ctx.gpr[31] = (0x0897A608u);
    // nop
    goto L_0897A678;
L_0897A608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26776)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0897A618u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26776), ctx.gpr[5]);
    ctx.pc = 0x08AB45A4u;
    return;
L_0897A618:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26776)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A66Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_0897A66C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26776)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A694u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB461Cu;
    return;
L_0897A694:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A6A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26776)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A6B8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_0897A6B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A6D4u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_0897A6D4:
    ctx.gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897A714u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A714u) goto L_0897A714;
    return;
L_0897A714:
    ctx.gpr[31] = (0x0897A71Cu);
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 153u, 0x089D13C8u>(ctx, &aot_mem) && ctx.pc == 0x0897A71Cu) goto L_0897A71C;
    return;
L_0897A71C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897A72Cu);
    ctx.gpr[5] = (0u | 239u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A72Cu) goto L_0897A72C;
    return;
L_0897A72C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A74C;
      }
      goto L_0897A738;
    }
L_0897A738:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897A74Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A74Cu) goto L_0897A74C;
    return;
L_0897A74C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0897A768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0897A788;
      }
      goto L_0897A778;
    }
L_0897A778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897A788u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A788u) goto L_0897A788;
    return;
L_0897A788:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A7A4u);
    // nop
    goto L_0897A6EC;
L_0897A7A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A7B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A7C0u);
    // nop
    goto L_0897A768;
L_0897A7C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A8A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26768)));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A8D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0897A8D8u) goto L_0897A8D8;
    return;
L_0897A8D8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_0897A90C;
      }
      goto L_0897A8E8;
    }
L_0897A8E8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29120));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0897A904u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A904u) goto L_0897A904;
    return;
L_0897A904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A92C;
      }
      goto L_0897A90C;
    }
L_0897A90C:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29128));
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x0897A92Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A92Cu) goto L_0897A92C;
    return;
L_0897A92C:
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
L_0897A948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 166u, 0x089812A4u>(ctx, &aot_mem) && ctx.pc == 0x0897A958u) goto L_0897A958;
    return;
L_0897A958:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26760));
    ctx.gpr[31] = (0x0897A96Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26756));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 149u, 0x08981178u>(ctx, &aot_mem) && ctx.pc == 0x0897A96Cu) goto L_0897A96C;
    return;
L_0897A96C:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26764), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26764)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A9A8;
      }
      goto L_0897A99C;
    }
L_0897A99C:
    ctx.gpr[31] = (0x0897A9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x0897A9A4u) goto L_0897A9A4;
    return;
L_0897A9A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26764), 0u);
    goto L_0897A9A8;
L_0897A9A8:
    ctx.gpr[31] = (0x0897A9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 163u, 0x08981240u>(ctx, &aot_mem) && ctx.pc == 0x0897A9B0u) goto L_0897A9B0;
    return;
L_0897A9B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A9C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), ctx.gpr[8]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897AA18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 192u, 0x08A9C938u>(ctx, &aot_mem) && ctx.pc == 0x0897AA18u) goto L_0897AA18;
    return;
L_0897AA18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26764)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897AA54;
      }
      goto L_0897AA34;
    }
L_0897AA34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897AA4Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 99u, 0x08AB0B10u>(ctx, &aot_mem) && ctx.pc == 0x0897AA4Cu) goto L_0897AA4C;
    return;
L_0897AA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA70;
      }
      goto L_0897AA54;
    }
L_0897AA54:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897AA70u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x08980524u>(ctx, &aot_mem) && ctx.pc == 0x0897AA70u) goto L_0897AA70;
    return;
L_0897AA70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AA8C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0897AAAC;
    }
    goto L_0897AA94;
L_0897AA94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0897AAA4;
      }
      goto L_0897AA9C;
    }
L_0897AA9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26752)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AAA4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AAAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0897AAA4;
      }
      goto L_0897AAB4;
    }
L_0897AAB4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26748)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_0897AAF8;
      }
      goto L_0897AAE4;
    }
L_0897AAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0897AAF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 480u, 0x0899BC30u>(ctx, &aot_mem) && ctx.pc == 0x0897AAF4u) goto L_0897AAF4;
    return;
L_0897AAF4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26752), ctx.gpr[2]);
    goto L_0897AAF8;
L_0897AAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26748)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AB18;
      }
      goto L_0897AB04;
    }
L_0897AB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0897AB14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 480u, 0x0899BC30u>(ctx, &aot_mem) && ctx.pc == 0x0897AB14u) goto L_0897AB14;
    return;
L_0897AB14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26748), ctx.gpr[2]);
    goto L_0897AB18;
L_0897AB18:
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
L_0897AB30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0897AB5C;
      }
      goto L_0897AB50;
    }
L_0897AB50:
    ctx.gpr[31] = (0x0897AB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 482u, 0x0899BCDCu>(ctx, &aot_mem) && ctx.pc == 0x0897AB58u) goto L_0897AB58;
    return;
L_0897AB58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26752), 0u);
    goto L_0897AB5C;
L_0897AB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AB74;
      }
      goto L_0897AB68;
    }
L_0897AB68:
    ctx.gpr[31] = (0x0897AB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 482u, 0x0899BCDCu>(ctx, &aot_mem) && ctx.pc == 0x0897AB70u) goto L_0897AB70;
    return;
L_0897AB70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26748), 0u);
    goto L_0897AB74;
L_0897AB74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897ABA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 484u, 0x0899BD04u>(ctx, &aot_mem) && ctx.pc == 0x0897ABA8u) goto L_0897ABA8;
    return;
L_0897ABA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0897ABB4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 21u, 0x0899C120u>(ctx, &aot_mem) && ctx.pc == 0x0897ABB4u) goto L_0897ABB4;
    return;
L_0897ABB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ABC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897AC04;
      }
      goto L_0897ABF8;
    }
L_0897ABF8:
    ctx.gpr[31] = (0x0897AC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 166u, 0x0897DD78u>(ctx, &aot_mem) && ctx.pc == 0x0897AC00u) goto L_0897AC00;
    return;
L_0897AC00:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    goto L_0897AC04;
L_0897AC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897AC14u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 151u, 0x0897DC84u>(ctx, &aot_mem) && ctx.pc == 0x0897AC14u) goto L_0897AC14;
    return;
L_0897AC14:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0897AC24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 174u, 0x0897DE20u>(ctx, &aot_mem) && ctx.pc == 0x0897AC24u) goto L_0897AC24;
    return;
L_0897AC24:
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
L_0897AC40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC68;
      }
      goto L_0897AC5C;
    }
L_0897AC5C:
    ctx.gpr[31] = (0x0897AC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 166u, 0x0897DD78u>(ctx, &aot_mem) && ctx.pc == 0x0897AC64u) goto L_0897AC64;
    return;
L_0897AC64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_0897AC68;
L_0897AC68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AC78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897AC90u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0897AA8C;
L_0897AC90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACA8;
      }
      goto L_0897AC9C;
    }
L_0897AC9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0897ACA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 495u, 0x0899BEFCu>(ctx, &aot_mem) && ctx.pc == 0x0897ACA8u) goto L_0897ACA8;
    return;
L_0897ACA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26752)));
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897ACE0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26748)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 26u, 0x0899C2E8u>(ctx, &aot_mem) && ctx.pc == 0x0897ACE0u) goto L_0897ACE0;
    return;
L_0897ACE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACEC:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AD00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AD1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AD5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AD78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ADB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897ADE8u);
    ctx.gpr[5] = (0u | 224u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ADE8u) goto L_0897ADE8;
    return;
L_0897ADE8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AE08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897AF8C;
      }
      goto L_0897AE44;
    }
L_0897AE44:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AF8C;
      }
      goto L_0897AE50;
    }
L_0897AE50:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0897AE64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 477u, 0x0899BBFCu>(ctx, &aot_mem) && ctx.pc == 0x0897AE64u) goto L_0897AE64;
    return;
L_0897AE64:
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897AE80u);
    ctx.gpr[5] = (0u | 224u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AE80u) goto L_0897AE80;
    return;
L_0897AE80:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0897AF8C;
      }
      goto L_0897AE8C;
    }
L_0897AE8C:
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897AEB8;
      }
      goto L_0897AE98;
    }
L_0897AE98:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0897AEA0;
L_0897AEA0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897AEA0;
      }
      goto L_0897AEB8;
    }
L_0897AEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0897AEC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0897ADB8;
L_0897AEC8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
        goto L_0897AF80;
    }
    goto L_0897AED4;
L_0897AED4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x0897AEE8u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_0897B090;
L_0897AEE8:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897AF7C;
      }
      goto L_0897AEF8;
    }
L_0897AEF8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0897AF04;
L_0897AF04:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    goto L_0897AF18;
L_0897AF18:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AF50;
      }
      goto L_0897AF20;
    }
L_0897AF20:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0897AF70;
    }
    goto L_0897AF28;
L_0897AF28:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_0897AF44;
    }
    goto L_0897AF38;
L_0897AF38:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0897AF18;
      }
      goto L_0897AF44;
    }
L_0897AF44:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897AF18;
      }
      goto L_0897AF50;
    }
L_0897AF50:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0897AF70;
    }
    goto L_0897AF58;
L_0897AF58:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897AF6C;
      }
      goto L_0897AF60;
    }
L_0897AF60:
    ctx.gpr[31] = (0x0897AF68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0897B090;
L_0897AF68:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0897AF6C;
L_0897AF6C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0897AF70;
L_0897AF70:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0897AF04;
      }
      goto L_0897AF7C;
    }
L_0897AF7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-23940)));
    goto L_0897AF80;
L_0897AF80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897AF8Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AF8Cu) goto L_0897AF8C;
    return;
L_0897AF8C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0897AFC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897AFDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AFDCu) goto L_0897AFDC;
    return;
L_0897AFDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897B074;
      }
      goto L_0897B014;
    }
L_0897B014:
    ctx.gpr[31] = (0x0897B01Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 425u, 0x0899B764u>(ctx, &aot_mem) && ctx.pc == 0x0897B01Cu) goto L_0897B01C;
    return;
L_0897B01C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B058;
      }
      goto L_0897B028;
    }
L_0897B028:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B058;
      }
      goto L_0897B030;
    }
L_0897B030:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[31] = (0x0897B050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0897B050u) goto L_0897B050;
    return;
L_0897B050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0897B058;
L_0897B058:
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
L_0897B074:
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
L_0897B090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897B0B0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 425u, 0x0899B764u>(ctx, &aot_mem) && ctx.pc == 0x0897B0B0u) goto L_0897B0B0;
    return;
L_0897B0B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B108;
      }
      goto L_0897B0BC;
    }
L_0897B0BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.lo);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897B0F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B0F0u) goto L_0897B0F0;
    return;
L_0897B0F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0897B108u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0897AFE8;
L_0897B108:
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
L_0897B120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897B164;
      }
      goto L_0897B144;
    }
L_0897B144:
    ctx.gpr[31] = (0x0897B14Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 425u, 0x0899B764u>(ctx, &aot_mem) && ctx.pc == 0x0897B14Cu) goto L_0897B14C;
    return;
L_0897B14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897B168;
      }
      goto L_0897B164;
    }
L_0897B164:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897B168;
L_0897B168:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B17C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897B1B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0897ADB8;
L_0897B1B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0897B1C8;
      }
      goto L_0897B1C0;
    }
L_0897B1C0:
    ctx.gpr[16] = (2200u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18704));
    goto L_0897B1C8;
L_0897B1C8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897B1D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0897B644;
L_0897B1D8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B1F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897B234u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0897ADB8;
L_0897B234:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897B244u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0897B120;
L_0897B244:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x0897B258u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0897B090;
L_0897B258:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897B268u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0897B120;
L_0897B268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897B2E8;
      }
      goto L_0897B280;
    }
L_0897B280:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897B284;
L_0897B284:
    ctx.gpr[31] = (0x0897B28Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0897B120;
L_0897B28C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897B2ACu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_0897B548;
L_0897B2AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0897B2D4;
      }
      goto L_0897B2B4;
    }
L_0897B2B4:
    ctx.gpr[31] = (0x0897B2BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0897B090;
L_0897B2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897B2E0;
      }
      goto L_0897B2D4;
    }
L_0897B2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    goto L_0897B2E0;
L_0897B2E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897B284;
      }
      goto L_0897B2E8;
    }
L_0897B2E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0897B2F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0897B090;
L_0897B2F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[31] = (0x0897B37Cu);
    ctx.fpr[24] = ctx.fpr[13] + ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 663u, 0x089D3C00u>(ctx, &aot_mem) && ctx.pc == 0x0897B37Cu) goto L_0897B37C;
    return;
L_0897B37C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0897B388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 663u, 0x089D3C00u>(ctx, &aot_mem) && ctx.pc == 0x0897B388u) goto L_0897B388;
    return;
L_0897B388:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
        goto L_0897B3A4;
    }
    goto L_0897B39C;
L_0897B39C:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0897B3A4;
      }
      goto L_0897B3A4;
    }
L_0897B3A4:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B3D0;
      }
      goto L_0897B3B4;
    }
L_0897B3B4:
    ctx.gpr[4] = (14119u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 50604u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B3D4;
      }
      goto L_0897B3D0;
    }
L_0897B3D0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897B3D4;
L_0897B3D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B3F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897B4F0;
      }
      goto L_0897B478;
    }
L_0897B478:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0897B484u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x0897B484u) goto L_0897B484;
    return;
L_0897B484:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0897B490u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 355u, 0x08A95EC0u>(ctx, &aot_mem) && ctx.pc == 0x0897B490u) goto L_0897B490;
    return;
L_0897B490:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897B4BC;
      }
      goto L_0897B4A4;
    }
L_0897B4A4:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[31] = (0x0897B4B0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x0897B4B0u) goto L_0897B4B0;
    return;
L_0897B4B0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897B4D0;
      }
      goto L_0897B4BC;
    }
L_0897B4BC:
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[22];
    ctx.gpr[31] = (0x0897B4C8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x0897B4C8u) goto L_0897B4C8;
    return;
L_0897B4C8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0897B4D0;
L_0897B4D0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0897B4E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B4E4u) goto L_0897B4E4;
    return;
L_0897B4E4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0897B4EC;
    }
    goto L_0897B4EC;
L_0897B4EC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0897B4F0;
L_0897B4F0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897B51C;
      }
      goto L_0897B4FC;
    }
L_0897B4FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0897B510u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    goto L_0897B320;
L_0897B510:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0897B518;
    }
    goto L_0897B518;
L_0897B518:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0897B51C;
L_0897B51C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897B58Cu);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 425u, 0x0899B764u>(ctx, &aot_mem) && ctx.pc == 0x0897B58Cu) goto L_0897B58C;
    return;
L_0897B58C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (0u | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897B5ACu);
    ctx.gpr[5] = (0u | 224u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B5ACu) goto L_0897B5AC;
    return;
L_0897B5AC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B610;
      }
      goto L_0897B5B8;
    }
L_0897B5B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0897B5D4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B5D4u) goto L_0897B5D4;
    return;
L_0897B5D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
        goto L_0897B604;
    }
    goto L_0897B5E0;
L_0897B5E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897B600;
      }
      goto L_0897B5E8;
    }
L_0897B5E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0897B600;
      }
      goto L_0897B5F0;
    }
L_0897B5F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0897B5FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0897B3F0;
L_0897B5FC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_0897B600;
L_0897B600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    goto L_0897B604;
L_0897B604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897B610u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B610u) goto L_0897B610;
    return;
L_0897B610:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[19] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897B6B0;
      }
      goto L_0897B678;
    }
L_0897B678:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897B69C;
      }
      goto L_0897B680;
    }
L_0897B680:
    ctx.gpr[31] = (0x0897B688u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0897B120;
L_0897B688:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x0897B694u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B694u) goto L_0897B694;
    return;
L_0897B694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B6D0;
      }
      goto L_0897B69C;
    }
L_0897B69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B678;
      }
      goto L_0897B6B0;
    }
L_0897B6B0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0897B6D0:
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
L_0897B6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897B720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 425u, 0x0899B764u>(ctx, &aot_mem) && ctx.pc == 0x0897B720u) goto L_0897B720;
    return;
L_0897B720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897B738u);
    ctx.gpr[5] = (0u | 224u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B738u) goto L_0897B738;
    return;
L_0897B738:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0897BB84;
      }
      goto L_0897B760;
    }
L_0897B760:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_0897BB84;
      }
      goto L_0897B768;
    }
L_0897B768:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0897B870;
      }
      goto L_0897B770;
    }
L_0897B770:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0897BB88;
    }
    goto L_0897B778;
L_0897B778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897B7E0;
      }
      goto L_0897B788;
    }
L_0897B788:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0897BB88;
    }
    goto L_0897B790;
L_0897B790:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897BB84;
      }
      goto L_0897B7E0;
    }
L_0897B7E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897B860;
      }
      goto L_0897B7EC;
    }
L_0897B7EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0897BB88;
    }
    goto L_0897B7F8;
L_0897B7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[22] = ctx.fpr[14] / ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[18];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x0897B840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 70u, 0x0899CB74u>(ctx, &aot_mem) && ctx.pc == 0x0897B840u) goto L_0897B840;
    return;
L_0897B840:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0897B84Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 70u, 0x0899CB74u>(ctx, &aot_mem) && ctx.pc == 0x0897B84Cu) goto L_0897B84C;
    return;
L_0897B84C:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0897B858u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 70u, 0x0899CB74u>(ctx, &aot_mem) && ctx.pc == 0x0897B858u) goto L_0897B858;
    return;
L_0897B858:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0897BB84;
      }
      goto L_0897B860;
    }
L_0897B860:
    ctx.gpr[31] = (0x0897B868u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 10u, 0x0897C5D4u>(ctx, &aot_mem) && ctx.pc == 0x0897B868u) goto L_0897B868;
    return;
L_0897B868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0897BB88;
      }
      goto L_0897B870;
    }
L_0897B870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0897BB88;
    }
    goto L_0897B87C;
L_0897B87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0897B924;
      }
      goto L_0897B8F4;
    }
L_0897B8F4:
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    goto L_0897B924;
L_0897B924:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
      if (branch_taken) {
          goto L_0897B978;
      }
      goto L_0897B94C;
    }
L_0897B94C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_0897B978;
L_0897B978:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
      if (branch_taken) {
          goto L_0897B9CC;
      }
      goto L_0897B9A0;
    }
L_0897B9A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    goto L_0897B9CC;
L_0897B9CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
      if (branch_taken) {
          goto L_0897BA20;
      }
      goto L_0897B9F4;
    }
L_0897B9F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    goto L_0897BA20;
L_0897BA20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
      if (branch_taken) {
          goto L_0897BA74;
      }
      goto L_0897BA48;
    }
L_0897BA48:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    goto L_0897BA74;
L_0897BA74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
      if (branch_taken) {
          goto L_0897BAC8;
      }
      goto L_0897BA9C;
    }
L_0897BA9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_0897BAC8;
L_0897BAC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[6] & 32767u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 30720u);
      if (branch_taken) {
          goto L_0897BB1C;
      }
      goto L_0897BAF0;
    }
L_0897BAF0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] << 12u);
    ctx.gpr[8] = (14336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] << 12u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_0897BB1C;
L_0897BB1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897BB84;
L_0897BB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0897BB88;
L_0897BB88:
    ctx.gpr[31] = (0x0897BB90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0897B090;
L_0897BB90:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897BBA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BBA4u) goto L_0897BBA4;
    return;
L_0897BBA4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897BE98;
      }
      goto L_0897BE60;
    }
L_0897BE60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0897BE64;
L_0897BE64:
    ctx.gpr[31] = (0x0897BE6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0897BF24;
L_0897BE6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0897BE8C;
    }
    goto L_0897BE78;
L_0897BE78:
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x0897BE80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BE80u) goto L_0897BE80;
    return;
L_0897BE80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BEBC;
      }
      goto L_0897BE88;
    }
L_0897BE88:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897BE8C;
L_0897BE8C:
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897BE64;
      }
      goto L_0897BE98;
    }
L_0897BE98:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0897BEBC:
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
L_0897BEE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BEF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2200u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897BF14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16672));
    goto L_0897BE28;
L_0897BF14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BF24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0897BF44;
      }
      goto L_0897BF34;
    }
L_0897BF34:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BF44:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0093(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0093_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_93(Runtime &runtime) {
    runtime.register_generated_unit(93u, 0x08978000u, 16384u, &recomp_unit_0093, &recomp_unit_0093_entry);
    runtime.register_function(0x08978000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897800Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978018u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978024u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978030u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897803Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978048u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978054u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978060u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897806Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978078u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978084u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978090u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897809Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978114u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978120u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897812Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978138u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978144u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978150u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897815Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978168u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978174u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978180u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897818Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978198u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978204u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978210u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897821Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978228u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978234u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978240u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897824Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978264u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978270u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897827Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978288u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978294u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978300u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897830Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978318u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978324u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978330u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897833Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978348u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978354u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978360u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897836Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978378u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978384u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978390u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897839Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978408u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978414u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978420u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897842Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978438u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978444u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978450u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897845Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978468u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978474u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978480u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897848Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978498u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978504u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978510u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897851Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978528u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978534u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978540u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897854Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978558u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978564u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897857Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978588u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978594u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978600u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897860Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978624u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978630u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897863Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978648u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978654u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978660u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897866Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978678u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978684u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978690u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897869Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978708u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978714u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978720u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897872Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978738u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978744u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978750u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897875Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978780u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897878Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978798u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978804u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978810u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897882Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978838u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978854u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978860u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978874u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978880u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978888u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978894u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897889Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978900u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978908u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978910u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978930u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978938u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978940u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978948u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978968u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978970u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978978u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978998u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978ED8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897904Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979054u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979060u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979068u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979074u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897907Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979088u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979104u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979110u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897911Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979120u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979128u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979134u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979168u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979200u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979210u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979218u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979220u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979228u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979234u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897923Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979248u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979250u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897925Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979288u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979304u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897930Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979318u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979324u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979330u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979338u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979340u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897934Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979358u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979360u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979368u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979370u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979378u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979380u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979388u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979394u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979398u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897951Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979550u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897955Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979584u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979620u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979628u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979634u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979660u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979668u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897966Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979694u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979708u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979710u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897971Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979724u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979730u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897974Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979758u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979760u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979780u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979788u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979798u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979820u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979858u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979860u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897986Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979874u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979880u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979888u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979894u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897989Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979908u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897992Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897996Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979974u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979980u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979988u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979994u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897999Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979ED8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A008u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A010u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A024u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A030u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A040u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A068u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A08Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A12Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A134u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A13Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A144u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A14Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A15Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A168u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A174u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A17Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A184u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A190u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A200u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A218u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A21Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A224u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A260u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A268u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A270u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A278u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A280u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A304u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A310u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A318u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A324u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A32Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A338u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A344u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A34Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A354u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A35Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A364u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A36Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A374u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A380u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A388u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A394u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A39Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A410u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A420u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A580u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A59Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A600u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A608u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A650u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A66Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A678u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A694u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A714u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A71Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A72Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A738u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A74Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A778u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A788u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A794u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A904u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A90Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A92Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A948u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A958u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A96Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A980u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A99Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AABCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AED4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B014u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B01Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B028u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B030u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B050u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B058u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B074u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B090u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B120u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B144u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B14Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B164u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B168u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B17Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B234u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B244u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B268u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B280u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B284u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B28Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B320u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B37Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B388u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B39Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B478u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B484u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B490u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B510u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B518u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B51Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B548u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B58Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B600u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B604u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B610u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B644u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B678u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B680u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B688u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B694u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B69Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B720u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B738u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B760u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B770u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B778u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B788u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B840u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B84Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B858u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B860u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B868u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B870u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B87Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B924u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B94Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B978u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF44u, &recomp_unit_0093, "recomp_unit_0093");
}
} // namespace psprecomp
